/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2019-08-22
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
#include "parse_tree.check_raw_comp_unit.mih"
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


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_fim_0;

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_foreign_enum_reconstructor_0_0[2];

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_foreign_enum_reconstructor_0_0;

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_foreign_enum_reconstructor_0_0[1];

static const MR_DuPtagLayout parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_foreign_enum_reconstructor_0[1];

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_foreign_enum_reconstructor_0[1];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_foreign_enum_reconstructor_0[1];

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_need_foreign_imports_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_need_foreign_imports_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_need_foreign_imports_0[2];

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_need_imports_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_need_imports_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_need_imports_0[2];

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
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1208__1_2_p_0(
  MR_Word Langs_56,
  MR_Word HeadVar__2_88);

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
parse_tree__comp_unit_interface____Compare____maybe_need_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_need_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_foreign_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_need_foreign_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____foreign_enum_reconstructor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____foreign_enum_reconstructor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumReconstuctor_8,
  MR_Word STATE_VARIABLE_ImpItems_0_20,
  MR_Word * STATE_VARIABLE_ImpItems_21,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_22,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_23);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__some_type_defn_is_non_abstract_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__is_pure_abstract_type_defn_1_p_0(
  MR_Word ImpItemTypeDefnInfo_2);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0(
  MR_Word BothTypesMap_10,
  MR_Word IntTypesMap_11,
  MR_Word NeededTypeCtors_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_18,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_19,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_20,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_21);

static void MR_CALL 
parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_3,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_4,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_5);

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
parse_tree__comp_unit_interface__add_fim_to_map_3_p_0(
  MR_Word FIM_4,
  MR_Word STATE_VARIABLE_FIMsMap_0_12,
  MR_Word * STATE_VARIABLE_FIMsMap_13);

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_item_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMs_0_9,
  MR_Word * STATE_VARIABLE_FIMs_10);

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Langs_6,
  MR_Word STATE_VARIABLE_FIMs_0_8,
  MR_Word * STATE_VARIABLE_FIMs_9);

static void MR_CALL 
parse_tree__comp_unit_interface__subtract_int_fims_map_4_p_0(
  MR_Word IntFIMsMap_5,
  MR_Word ModuleName_6,
  MR_Word ImpLangs0_7,
  MR_Word * ImpLangs_8);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_use_1_f_0(
  MR_Word ModuleName_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Langs_0_2,
  MR_Word * STATE_VARIABLE_Langs_3,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpItemsCord_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntItemsCord_0_6,
  MR_Word * STATE_VARIABLE_IntItemsCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_mode_5_p_0(
  MR_Word Mode_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_13,
  MR_Word * STATE_VARIABLE_MaybeUnqual_14,
  MR_Word STATE_VARIABLE_ModuleNames_0_15,
  MR_Word * STATE_VARIABLE_ModuleNames_16);

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
parse_tree__comp_unit_interface__accumulate_module_5_p_0(
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_12,
  MR_Word * STATE_VARIABLE_MaybeUnqual_13,
  MR_Word STATE_VARIABLE_ModuleNames_0_14,
  MR_Word * STATE_VARIABLE_ModuleNames_15);

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedImports_0_2,
  MR_Word * STATE_VARIABLE_NeedImports_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0(
  MR_Word Globals_11,
  MR_Word AugCompUnit_12,
  MR_Word * IntIncls_13,
  MR_Word * IntAvails_14,
  MR_Word * IntFIMs_15,
  MR_Word * ImpFIMs_16,
  MR_Word * IntItems_17,
  MR_Word * ImpItems_18,
  MR_Word * ParseTreeInt1_19,
  MR_Word * STATE_VARIABLE_Specs_71);

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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntImportsUses_0_6,
  MR_Word * STATE_VARIABLE_IntImportsUses_7,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_8,
  MR_Word * STATE_VARIABLE_ImpImportsUses_9,
  MR_Word STATE_VARIABLE_IntItemsCord_0_10,
  MR_Word * STATE_VARIABLE_IntItemsCord_11,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpItemsCord_13,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_14,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_15,
  MR_Word STATE_VARIABLE_IntFIMsMap_0_16,
  MR_Word * STATE_VARIABLE_IntFIMsMap_17,
  MR_Word STATE_VARIABLE_ImpFIMsMap_0_18,
  MR_Word * STATE_VARIABLE_ImpFIMsMap_19,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_20,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_21,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_22,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_23,
  MR_Word STATE_VARIABLE_IntTypesMap_0_24,
  MR_Word * STATE_VARIABLE_IntTypesMap_25,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_26,
  MR_Word * STATE_VARIABLE_ImpTypesMap_27,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_28,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_29,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ImpItemsCord_3,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_5,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_6,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_7,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_8,
  MR_Word * STATE_VARIABLE_ImpTypesMap_9,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_4,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_5,
  MR_Word STATE_VARIABLE_IntTypesMap_0_6,
  MR_Word * STATE_VARIABLE_IntTypesMap_7,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_8,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportsUses_0_2,
  MR_Word * STATE_VARIABLE_ImportsUses_3);

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fims_4_p_0(
  MR_Word ModuleName_5,
  MR_Word SelfFIMs_6,
  MR_Word STATE_VARIABLE_FIMsMap_0_10,
  MR_Word * STATE_VARIABLE_FIMsMap_11);

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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntInclsCord_0_3,
  MR_Word * STATE_VARIABLE_IntInclsCord_4,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_5,
  MR_Word * STATE_VARIABLE_ImpInclsCord_6,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_7,
  MR_Word * STATE_VARIABLE_IntAvailsCord_8,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_9,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_10,
  MR_Word STATE_VARIABLE_IntFIMsCord_0_11,
  MR_Word * STATE_VARIABLE_IntFIMsCord_12,
  MR_Word STATE_VARIABLE_ImpFIMsCord_0_13,
  MR_Word * STATE_VARIABLE_ImpFIMsCord_14,
  MR_Word STATE_VARIABLE_IntItemsCord_0_15,
  MR_Word * STATE_VARIABLE_IntItemsCord_16,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_17,
  MR_Word * STATE_VARIABLE_ImpItemsCord_18);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SectionItemsCord_0_3,
  MR_Word * STATE_VARIABLE_SectionItemsCord_4);

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

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(
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
  MR_Word * STATE_VARIABLE_NeedImports_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__comp_unit_interface__gather_imp_type_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_19_p_0(
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
  MR_Word * STATE_VARIABLE_NeedImports_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0(
  MR_String ClauseOrPragma_4,
  MR_Word Context_5);

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(
  MR_Word Pragma_4,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_16);

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(
  MR_Word ItemTypeDefn_3,
  MR_Word * AbstractOrForeignItemTypeDefnInfo_4);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____foreign_enum_reconstructor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____foreign_enum_reconstructor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_need_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_need_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[23][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[17][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[7][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[4][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[1][12];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[3][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][4];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[23][3] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[5]))
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
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_via_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[17][2] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0))
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][13] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][11] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[1][12] = {
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
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_fim_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_foreign_enum_reconstructor_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_enum_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_maybe_attrs_0)
};

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_foreign_enum_reconstructor_0_0 = {
  (MR_String) "foreign_enum_reconstructor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_foreign_enum_reconstructor_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_foreign_enum_reconstructor_0_0[1] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_foreign_enum_reconstructor_0_0
};

static const MR_DuPtagLayout parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_foreign_enum_reconstructor_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_foreign_enum_reconstructor_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_foreign_enum_reconstructor_0[1] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_foreign_enum_reconstructor_0_0
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_foreign_enum_reconstructor_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____foreign_enum_reconstructor_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____foreign_enum_reconstructor_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "foreign_enum_reconstructor",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_foreign_enum_reconstructor_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_foreign_enum_reconstructor_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_foreign_enum_reconstructor_0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_0 = {
  (MR_String) "dont_need_foreign_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_1 = {
  (MR_String) "need_foreign_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_foreign_imports_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_need_foreign_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_need_foreign_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_need_foreign_imports_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_need_foreign_imports_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_need_foreign_imports",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_need_foreign_imports_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_need_foreign_imports_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_need_foreign_imports_0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_0 = {
  (MR_String) "dont_need_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_1 = {
  (MR_String) "need_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_need_imports_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_need_imports_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_need_imports_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_need_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_need_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_need_imports_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_need_imports_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_need_imports",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_need_imports_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_need_imports_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_need_imports_0
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
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1208__1_2_p_0(
  MR_Word Langs_56,
  MR_Word HeadVar__2_88)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), ((MR_Box) (Langs_56)), ((MR_Box) (HeadVar__2_88)));
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

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_imports_0_0(
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
parse_tree__comp_unit_interface____Unify____maybe_need_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_foreign_imports_0_0(
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
parse_tree__comp_unit_interface____Unify____maybe_need_foreign_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____foreign_enum_reconstructor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_item____Compare____pragma_info_foreign_enum_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__prog_item____Compare____item_maybe_attrs_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____foreign_enum_reconstructor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_item____Unify____pragma_info_foreign_enum_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumReconstuctor_8,
  MR_Word STATE_VARIABLE_ImpItems_0_20,
  MR_Word * STATE_VARIABLE_ImpItems_21,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_22,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_23)
{
  {
    MR_bool succeeded;
    MR_Word FEInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumReconstuctor_8, (MR_Integer) 0))));
    MR_Word MaybeAttrs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumReconstuctor_8, (MR_Integer) 1))));
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_11, (MR_Integer) 1))));
    MR_Word Defns_16;
    MR_Box conv0_Defns_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), IntTypesMap_7, ((MR_Box) (TypeCtor_14)), &conv0_Defns_16);
    if (succeeded)
    {
      Defns_16 = ((MR_Word) (conv0_Defns_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = parse_tree__comp_unit_interface__some_type_defn_is_non_abstract_1_p_0(Defns_16);
    if (succeeded)
    {
      MR_Word Pragma_17;
      MR_Word ItemPragmaInfo_18;
      MR_Word Item_19;
      MR_Word Var_24;
      MR_Word Var_27;

      {
        Pragma_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Pragma_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Pragma_17, 1) = ((MR_Box) (FEInfo_11));
      }
      Var_24 = mercury__term__context_init_0_f_0();
      {
        ItemPragmaInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_18, 0) = ((MR_Box) (Pragma_17));
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_18, 1) = ((MR_Box) (MaybeAttrs_12));
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_18, 2) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_18, 3) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        Item_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Item_19, 1) = ((MR_Box) (ItemPragmaInfo_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ImpItems_21 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Item_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ImpItems_0_20));
      }
      Var_27 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_17);
      mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_27, STATE_VARIABLE_NeedForeignImportLangs_0_22, STATE_VARIABLE_NeedForeignImportLangs_23);
    }
    else
    {
      *STATE_VARIABLE_NeedForeignImportLangs_23 = STATE_VARIABLE_NeedForeignImportLangs_0_22;
      *STATE_VARIABLE_ImpItems_21 = STATE_VARIABLE_ImpItems_0_20;
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
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0_1(
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
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0(
  MR_Word BothTypesMap_10,
  MR_Word IntTypesMap_11,
  MR_Word NeededTypeCtors_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_18,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_19,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_20,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_21)
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
        Var_22 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[22]);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_26_26, Var_22, AbstractImpItemTypeDefnInfos_17);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
      parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(AbstractImpItemTypeDefnInfos_17, STATE_VARIABLE_ImpTypeDefnItems_0_18, STATE_VARIABLE_ImpTypeDefnItems_19, STATE_VARIABLE_ImpSelfFIMs_0_20, STATE_VARIABLE_ImpSelfFIMs_21);
    else
    {
      *STATE_VARIABLE_ImpSelfFIMs_21 = STATE_VARIABLE_ImpSelfFIMs_0_20;
      *STATE_VARIABLE_ImpTypeDefnItems_19 = STATE_VARIABLE_ImpTypeDefnItems_0_18;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_3,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_4,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpSelfFIMs_5 = STATE_VARIABLE_ImpSelfFIMs_0_4;
      *STATE_VARIABLE_ImpTypeDefnItems_3 = STATE_VARIABLE_ImpTypeDefnItems_0_2;
    }
    else
    {
      MR_Word ImpItemTypeDefnInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImpItemTypeDefnInfos_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ImpTypeDefnItem_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ImpItemTypeDefnInfo_12)));
      MR_Word TypeDefn_19;
      MR_Word STATE_VARIABLE_ImpTypeDefnItems_31_31;
      MR_Word STATE_VARIABLE_ImpSelfFIMs_33_33;
      MR_Word ForeignType_24;
      MR_Word DetailsForeign_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefnItems_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_4;

      {
        STATE_VARIABLE_ImpTypeDefnItems_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpTypeDefnItems_31_31, 0) = ((MR_Box) (ImpTypeDefnItem_16));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpTypeDefnItems_31_31, 1) = ((MR_Box) (STATE_VARIABLE_ImpTypeDefnItems_0_2));
      }
      TypeDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_12, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) TypeDefn_19)) == (MR_Integer) 2);
      if (succeeded)
      {
        DetailsForeign_23 = (MR_Word) (MR_body((MR_Word) (TypeDefn_19), (MR_Integer) 2));
        ForeignType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_23, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_32;

        Var_32 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_24);
        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_32)), STATE_VARIABLE_ImpSelfFIMs_0_4, &STATE_VARIABLE_ImpSelfFIMs_33_33);
      }
      else
        STATE_VARIABLE_ImpSelfFIMs_33_33 = STATE_VARIABLE_ImpSelfFIMs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImpItemTypeDefnInfos_13;
      next_value_of_STATE_VARIABLE_ImpTypeDefnItems_0_2 = STATE_VARIABLE_ImpTypeDefnItems_31_31;
      next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_4 = STATE_VARIABLE_ImpSelfFIMs_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpTypeDefnItems_0_2 = next_value_of_STATE_VARIABLE_ImpTypeDefnItems_0_2;
      STATE_VARIABLE_ImpSelfFIMs_0_4 = next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_4;
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
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[20]), RhsTypeCtors_51, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[21]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46);
              STATE_VARIABLE_ModulesNeededByTypeDefns_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46));
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ImpTypesMap_9));
              }
              Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), Var_47, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Box) (Var_49)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_46_46)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[19]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
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
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypesMap_9));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1]));
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

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_32);
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

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv2_Var_27);
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

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_25);
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
parse_tree__comp_unit_interface__add_fim_to_map_3_p_0(
  MR_Word FIM_4,
  MR_Word STATE_VARIABLE_FIMsMap_0_12,
  MR_Word * STATE_VARIABLE_FIMsMap_13)
{
  {
    MR_bool succeeded;
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 1))));
    MR_Word Langs0_10;
    MR_Box conv0_Langs0_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), STATE_VARIABLE_FIMsMap_0_12, ((MR_Box) (ModuleName_7)), &conv0_Langs0_10);
    if (succeeded)
    {
      Langs0_10 = ((MR_Word) (conv0_Langs0_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Langs_11;

      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), Langs0_10, &Langs_11);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_7)), ((MR_Box) (Langs_11)), STATE_VARIABLE_FIMsMap_0_12, STATE_VARIABLE_FIMsMap_13);
    }
    else
    {
      MR_Word Langs_16;

      Langs_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_7)), ((MR_Box) (Langs_16)), STATE_VARIABLE_FIMsMap_0_12, STATE_VARIABLE_FIMsMap_13);
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_item_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMs_0_9,
  MR_Word * STATE_VARIABLE_FIMs_10)
{
  {
    MR_Word FIM_8;
    MR_Word Var_11;

    Var_11 = mercury__term__context_init_0_f_0();
    {
      FIM_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIM_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIM_8, 1) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), FIM_8, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), FIM_8, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_FIMs_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FIM_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FIMs_0_9));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FIMs_10;

    parse_tree__comp_unit_interface__acccumulate_foreign_import_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIMs_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIMs_10));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Langs_6,
  MR_Word STATE_VARIABLE_FIMs_0_8,
  MR_Word * STATE_VARIABLE_FIMs_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_FIMs_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleName_5));
    }
    mercury__set__fold_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), Var_10, Langs_6, ((MR_Box) (STATE_VARIABLE_FIMs_0_8)), &conv1_STATE_VARIABLE_FIMs_9);
    *STATE_VARIABLE_FIMs_9 = ((MR_Word) (conv1_STATE_VARIABLE_FIMs_9));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__subtract_int_fims_map_4_p_0(
  MR_Word IntFIMsMap_5,
  MR_Word ModuleName_6,
  MR_Word ImpLangs0_7,
  MR_Word * ImpLangs_8)
{
  {
    MR_bool succeeded;
    MR_Word IntLangs_9;
    MR_Box conv0_IntLangs_9;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), IntFIMsMap_5, ((MR_Box) (ModuleName_6)), &conv0_IntLangs_9);
    if (succeeded)
    {
      IntLangs_9 = ((MR_Word) (conv0_IntLangs_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      mercury__set__difference_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImpLangs0_7, IntLangs_9, ImpLangs_8);
    }
    else
      *ImpLangs_8 = ImpLangs0_7;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_use_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Avail_4;
    MR_Word UseInfo_5;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    {
      UseInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UseInfo_5, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), UseInfo_5, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), UseInfo_5, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    Avail_4 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (UseInfo_5)));
    return Avail_4;
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

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Avail_4;

    conv1_Avail_4 = parse_tree__comp_unit_interface__make_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__item_avail_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word * ParseTreeInt2_9,
  MR_Word * Specs_10)
{
  {
    MR_bool succeeded;
    MR_Word IntIncls_11;
    MR_Word IntAvails_12;
    MR_Word IntFIMs_13;
    MR_Word ImpFIMs_14;
    MR_Word IntItems_15;
    MR_Word ImpItems_16;
    MR_Word ModuleName_25;
    MR_Word ModuleNameContext_26;
    MR_Word UnqualSymNames_33;
    MR_Word UsedModuleNamesSet_34;
    MR_Word ShortIntItemsCord_35;
    MR_Word ShortImpLangs_36;
    MR_Word ShortImpItemsCord_37;
    MR_Word ShortIntItems_38;
    MR_Word ShortImpItems_39;
    MR_Word IntAvailModuleNames_40;
    MR_Word IntAvailModuleNamesSet_41;
    MR_Word ShortIntAvails_43;
    MR_Word ShortIntNeedForeignImportLangs_45;
    MR_Word ShortIntFIMs_46;
    MR_Word ShortImpFIMs_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Word _ShortIntNeedImports_44;

    parse_tree__comp_unit_interface__generate_interface_int1_10_p_0(Globals_6, AugCompUnit_7, &IntIncls_11, &IntAvails_12, &IntFIMs_13, &ImpFIMs_14, &IntItems_15, &ImpItems_16, ParseTreeInt1_8, Specs_10);
    ModuleName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    ModuleNameContext_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    Var_50 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_51 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_7_p_0(IntItems_15, (MR_Integer) 0, &UnqualSymNames_33, Var_50, &UsedModuleNamesSet_34, Var_51, &ShortIntItemsCord_35);
    Var_52 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_53 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_5_p_0(ImpItems_16, Var_52, &ShortImpLangs_36, Var_53, &ShortImpItemsCord_37);
    ShortIntItems_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortIntItemsCord_35);
    ShortImpItems_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortImpItemsCord_37);
    IntAvailModuleNames_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[17]), IntAvails_12);
    IntAvailModuleNamesSet_41 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntAvailModuleNames_40);
    switch (UnqualSymNames_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ShortIntAvailModuleNamesSet_42;
          MR_Word Var_56;

          mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UsedModuleNamesSet_34, IntAvailModuleNamesSet_41, &ShortIntAvailModuleNamesSet_42);
          Var_56 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortIntAvailModuleNamesSet_42);
          ShortIntAvails_43 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[18]), Var_56);
        }
        break;
      case (MR_Integer) 1:
        ShortIntAvails_43 = IntAvails_12;
        break;
    }
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(ShortIntItems_38, (MR_Integer) 0, &_ShortIntNeedImports_44, Var_57, &ShortIntNeedForeignImportLangs_45);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortIntNeedForeignImportLangs_45);
    if (succeeded)
      ShortIntFIMs_46 = IntFIMs_13;
    else
      ShortIntFIMs_46 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortImpLangs_36);
    if (succeeded)
      ShortImpFIMs_47 = ImpFIMs_14;
    else
      ShortImpFIMs_47 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_25));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortIntAvails_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortIntFIMs_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortImpFIMs_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ShortIntItems_38));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ShortImpItems_39));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Langs_0_2,
  MR_Word * STATE_VARIABLE_Langs_3,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpItemsCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpItemsCord_5 = STATE_VARIABLE_ImpItemsCord_0_4;
      *STATE_VARIABLE_Langs_3 = STATE_VARIABLE_Langs_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Langs_42_42;
      MR_Word STATE_VARIABLE_ImpItemsCord_43_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Langs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
            STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_16 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));
            MR_Word TypeDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_16, (MR_Integer) 2))));
            MR_Word DetailsForeign_18;

            succeeded = ((MR_tag((MR_Word) TypeDefn_17)) == (MR_Integer) 2);
            if (succeeded)
            {
              DetailsForeign_18 = (MR_Word) (MR_body((MR_Word) (TypeDefn_17), (MR_Integer) 2));
              {
                MR_Word ForeignType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_18, (MR_Integer) 0))));
                MR_Word Var_41;

                Var_41 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_19);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_41)), STATE_VARIABLE_Langs_0_2, &STATE_VARIABLE_Langs_42_42);
              }
            }
            else
              STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_12)), STATE_VARIABLE_ImpItemsCord_0_4, &STATE_VARIABLE_ImpItemsCord_43_43);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
            STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_Langs_42_42 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_43_43 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_int2_items_from_int1_imp\'/5", (MR_String) "item_type_repn");
                  return;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_Langs_0_2 = STATE_VARIABLE_Langs_42_42;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_4 = STATE_VARIABLE_ImpItemsCord_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Langs_0_2 = next_value_of_STATE_VARIABLE_Langs_0_2;
      STATE_VARIABLE_ImpItemsCord_0_4 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntItemsCord_0_6,
  MR_Word * STATE_VARIABLE_IntItemsCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntItemsCord_7 = STATE_VARIABLE_IntItemsCord_0_6;
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Item_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_109_109;
      MR_Word STATE_VARIABLE_ModuleNames_110_110;
      MR_Word STATE_VARIABLE_IntItemsCord_111_111;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_6;

      switch (MR_tag((MR_Word) Item_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
            STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_22 = (MR_Word) (MR_body((MR_Word) (Item_17), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_23;
            MR_Word TypeDefn_26;
            MR_Word MaybeAbstractItem_36;

            parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(ItemTypeDefnInfo_22, &MaybeAbstractItemTypeDefnInfo_23);
            TypeDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractItemTypeDefnInfo_23, (MR_Integer) 2))));
            switch (MR_tag((MR_Word) TypeDefn_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                  STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                  STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                }
                break;
              case (MR_Integer) 2:
                {
                  STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                  STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_26, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word DetailsEqv_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_26, (MR_Integer) 1))));
                      MR_Word EqvType_35 = (MR_Word) (DetailsEqv_34);

                      parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(EqvType_35, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_109_109, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_110_110);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                      STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                    }
                    break;
                }
                break;
            }
            MaybeAbstractItem_36 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_23)));
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (MaybeAbstractItem_36)), STATE_VARIABLE_IntItemsCord_0_6, &STATE_VARIABLE_IntItemsCord_111_111);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstDefnInfo_57 = (MR_Word) (MR_body((MR_Word) (Item_17), (MR_Integer) 2));
            MR_Word MaybeForTypeCtor_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_57, (MR_Integer) 2))));
            MR_Word MaybeAbstractInstDefn_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_57, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_MaybeUnqual_92_92;
            MR_Word STATE_VARIABLE_ModuleNames_93_93;

            if ((MaybeForTypeCtor_60 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_MaybeUnqual_92_92 = STATE_VARIABLE_MaybeUnqual_0_2;
              STATE_VARIABLE_ModuleNames_93_93 = STATE_VARIABLE_ModuleNames_0_4;
            }
            else
            {
              MR_Word TypeCtor_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor_60, (MR_Integer) 0))));
              MR_Word TypeCtorSymName_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_63, (MR_Integer) 0))));

              parse_tree__comp_unit_interface__accumulate_module_5_p_0(TypeCtorSymName_64, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_92_92, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_93_93);
            }
            if ((MaybeAbstractInstDefn_61 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_92_92;
              STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_93_93;
            }
            else
            {
              MR_Word InstDefn_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_61, (MR_Integer) 0))));
              MR_Word Inst_67 = (MR_Word) (InstDefn_66);

              parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_67, STATE_VARIABLE_MaybeUnqual_92_92, &STATE_VARIABLE_MaybeUnqual_109_109, STATE_VARIABLE_ModuleNames_93_93, &STATE_VARIABLE_ModuleNames_110_110);
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_17)), STATE_VARIABLE_IntItemsCord_0_6, &STATE_VARIABLE_IntItemsCord_111_111);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeDefnInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
                MR_Word MaybeAbstractModeDefn_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_68, (MR_Integer) 2))));

                if ((MaybeAbstractModeDefn_69 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                  STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                }
                else
                {
                  MR_Word ModeDefn_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_69, (MR_Integer) 0))));
                  MR_Word Mode_71 = (MR_Word) (ModeDefn_70);

                  parse_tree__comp_unit_interface__accumulate_modules_in_mode_5_p_0(Mode_71, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_109_109, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_110_110);
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_17)), STATE_VARIABLE_IntItemsCord_0_6, &STATE_VARIABLE_IntItemsCord_111_111);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
                MR_Word ClassSymName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 0))));
                MR_Word TypeParams_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 1))));
                MR_Word SuperclassConstraints_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 2))));
                MR_Word FunDeps_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 3))));
                MR_Word TVarSet_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 5))));
                MR_Word Context_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 6))));
                MR_Integer SeqNum_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_37, (MR_Integer) 7))));
                MR_Word AbstractItemTypeClassInfo_47;
                MR_Word AbstractItem_48;

                parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(SuperclassConstraints_40, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_109_109, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_110_110);
                {
                  AbstractItemTypeClassInfo_47 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 0) = ((MR_Box) (ClassSymName_38));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 1) = ((MR_Box) (TypeParams_39));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 2) = ((MR_Box) (SuperclassConstraints_40));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 3) = ((MR_Box) (FunDeps_41));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 5) = ((MR_Box) (TVarSet_43));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 6) = ((MR_Box) (Context_44));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_47, 7) = ((MR_Box) (SeqNum_45));
                }
                {
                  AbstractItem_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_48, 1) = ((MR_Box) (AbstractItemTypeClassInfo_47));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_48)), STATE_VARIABLE_IntItemsCord_0_6, &STATE_VARIABLE_IntItemsCord_111_111);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
                MR_Word ArgTypes_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 1))));
                MR_Word OrigArgTypes_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 2))));
                MR_Word ClassConstraints_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 3))));
                MR_Word ContainingModuleName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 6))));
                MR_Word AbstractItemInstanceInfo_56;
                MR_Word STATE_VARIABLE_MaybeUnqual_97_97;
                MR_Word STATE_VARIABLE_ModuleNames_98_98;
                MR_Word STATE_VARIABLE_MaybeUnqual_99_99;
                MR_Word STATE_VARIABLE_ModuleNames_100_100;
                MR_Word STATE_VARIABLE_MaybeUnqual_101_101;
                MR_Word STATE_VARIABLE_ModuleNames_102_102;
                MR_Word ClassSymName_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 0))));
                MR_Word TVarSet_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 5))));
                MR_Word Context_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 7))));
                MR_Integer SeqNum_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_49, (MR_Integer) 8))));
                MR_Word AbstractItem_119;

                parse_tree__comp_unit_interface__accumulate_module_5_p_0(ClassSymName_115, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_97_97, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_98_98);
                parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_50, STATE_VARIABLE_MaybeUnqual_97_97, &STATE_VARIABLE_MaybeUnqual_99_99, STATE_VARIABLE_ModuleNames_98_98, &STATE_VARIABLE_ModuleNames_100_100);
                parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(OrigArgTypes_51, STATE_VARIABLE_MaybeUnqual_99_99, &STATE_VARIABLE_MaybeUnqual_101_101, STATE_VARIABLE_ModuleNames_100_100, &STATE_VARIABLE_ModuleNames_102_102);
                parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(ClassConstraints_52, STATE_VARIABLE_MaybeUnqual_101_101, &STATE_VARIABLE_MaybeUnqual_109_109, STATE_VARIABLE_ModuleNames_102_102, &STATE_VARIABLE_ModuleNames_110_110);
                {
                  AbstractItemInstanceInfo_56 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 0) = ((MR_Box) (ClassSymName_115));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 1) = ((MR_Box) (ArgTypes_50));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 2) = ((MR_Box) (OrigArgTypes_51));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 3) = ((MR_Box) (ClassConstraints_52));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 5) = ((MR_Box) (TVarSet_116));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 6) = ((MR_Box) (ContainingModuleName_54));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 7) = ((MR_Box) (Context_117));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_56, 8) = ((MR_Box) (SeqNum_118));
                }
                {
                  AbstractItem_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_119, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_119, 1) = ((MR_Box) (AbstractItemInstanceInfo_56));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_119)), STATE_VARIABLE_IntItemsCord_0_6, &STATE_VARIABLE_IntItemsCord_111_111);
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_MaybeUnqual_109_109 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_110_110 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntItemsCord_111_111 = STATE_VARIABLE_IntItemsCord_0_6;
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_int2_items_from_int1_int\'/7", (MR_String) "item_type_repn");
                  return;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_18;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_109_109;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_110_110;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_6 = STATE_VARIABLE_IntItemsCord_111_111;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      STATE_VARIABLE_IntItemsCord_0_6 = next_value_of_STATE_VARIABLE_IntItemsCord_0_6;
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
parse_tree__comp_unit_interface__accumulate_modules_in_mode_5_p_0(
  MR_Word Mode_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_13,
  MR_Word * STATE_VARIABLE_MaybeUnqual_14,
  MR_Word STATE_VARIABLE_ModuleNames_0_15,
  MR_Word * STATE_VARIABLE_ModuleNames_16)
{
  if (((MR_tag((MR_Word) Mode_6)) == (MR_Integer) 0))
  {
    MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_6, (MR_Integer) 0))));
    MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_6, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_MaybeUnqual_21_21;
    MR_Word STATE_VARIABLE_ModuleNames_22_22;

    parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstA_9, STATE_VARIABLE_MaybeUnqual_0_13, &STATE_VARIABLE_MaybeUnqual_21_21, STATE_VARIABLE_ModuleNames_0_15, &STATE_VARIABLE_ModuleNames_22_22);
    parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstB_10, STATE_VARIABLE_MaybeUnqual_21_21, STATE_VARIABLE_MaybeUnqual_14, STATE_VARIABLE_ModuleNames_22_22, STATE_VARIABLE_ModuleNames_16);
  }
  else
  {
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_6, (MR_Integer) 0))));
    MR_Word ArgInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_6, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_MaybeUnqual_17_17;
    MR_Word STATE_VARIABLE_ModuleNames_18_18;

    if (((MR_tag((MR_Word) SymName_11)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_11, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_33)), STATE_VARIABLE_ModuleNames_0_15, &STATE_VARIABLE_ModuleNames_18_18);
      STATE_VARIABLE_MaybeUnqual_17_17 = STATE_VARIABLE_MaybeUnqual_0_13;
    }
    else
    {
      STATE_VARIABLE_MaybeUnqual_17_17 = (MR_Integer) 1;
      STATE_VARIABLE_ModuleNames_18_18 = STATE_VARIABLE_ModuleNames_0_15;
    }
    parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_12, STATE_VARIABLE_MaybeUnqual_17_17, STATE_VARIABLE_MaybeUnqual_14, STATE_VARIABLE_ModuleNames_18_18, STATE_VARIABLE_ModuleNames_16);
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
parse_tree__comp_unit_interface__accumulate_module_5_p_0(
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_12,
  MR_Word * STATE_VARIABLE_MaybeUnqual_13,
  MR_Word STATE_VARIABLE_ModuleNames_0_14,
  MR_Word * STATE_VARIABLE_ModuleNames_15)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_10)), STATE_VARIABLE_ModuleNames_0_14, STATE_VARIABLE_ModuleNames_15);
    *STATE_VARIABLE_MaybeUnqual_13 = STATE_VARIABLE_MaybeUnqual_0_12;
  }
  else
  {
    *STATE_VARIABLE_MaybeUnqual_13 = (MR_Integer) 1;
    *STATE_VARIABLE_ModuleNames_15 = STATE_VARIABLE_ModuleNames_0_14;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedImports_0_2,
  MR_Word * STATE_VARIABLE_NeedImports_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = HeadVar__4_4;
      *STATE_VARIABLE_NeedImports_3 = STATE_VARIABLE_NeedImports_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemNeedsImports_16;
      MR_Word ItemNeedsForeignImportLangs_17;
      MR_Word STATE_VARIABLE_NeedImports_22_22;
      MR_Word STATE_VARIABLE_NeedForeignImportLangs_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_2;
      MR_Word next_value_of_HeadVar__4_4;

      ItemNeedsImports_16 = parse_tree__item_util__item_needs_imports_1_f_0(Item_12);
      ItemNeedsForeignImportLangs_17 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(Item_12);
      switch (ItemNeedsImports_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedImports_22_22 = STATE_VARIABLE_NeedImports_0_2;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedImports_22_22 = (MR_Integer) 1;
          break;
      }
      mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ItemNeedsForeignImportLangs_17, HeadVar__4_4, &STATE_VARIABLE_NeedForeignImportLangs_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_NeedImports_0_2 = STATE_VARIABLE_NeedImports_22_22;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_NeedForeignImportLangs_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NeedImports_0_2 = next_value_of_STATE_VARIABLE_NeedImports_0_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_FIMs_9;

    parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv13_STATE_VARIABLE_FIMs_9);
    *wrapper_arg_4 = ((MR_Box) (conv13_STATE_VARIABLE_FIMs_9));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_FIMs_9;

    parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_FIMs_9);
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_FIMs_9));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_ImpLangs_8;

    parse_tree__comp_unit_interface__subtract_int_fims_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_ImpLangs_8);
    *wrapper_arg_3 = ((MR_Box) (conv10_ImpLangs_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ImpItems_21;
    MR_Word conv6_STATE_VARIABLE_NeedForeignImportLangs_23;

    parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ImpItems_21, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_NeedForeignImportLangs_23);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ImpItems_21));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_NeedForeignImportLangs_23));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_3(
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
    MR_Word conv3_STATE_VARIABLE_ImpTypeDefnItems_19;
    MR_Word conv2_STATE_VARIABLE_ImpSelfFIMs_21;

    parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ImpTypeDefnItems_19, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_ImpSelfFIMs_21);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ImpTypeDefnItems_19));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_ImpSelfFIMs_21));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Avail_4;

    conv1_Avail_4 = parse_tree__comp_unit_interface__make_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Avail_4;

    conv0_Avail_4 = parse_tree__comp_unit_interface__make_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Avail_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_10_p_0(
  MR_Word Globals_11,
  MR_Word AugCompUnit_12,
  MR_Word * IntIncls_13,
  MR_Word * IntAvails_14,
  MR_Word * IntFIMs_15,
  MR_Word * ImpFIMs_16,
  MR_Word * IntItems_17,
  MR_Word * ImpItems_18,
  MR_Word * ParseTreeInt1_19,
  MR_Word * STATE_VARIABLE_Specs_71)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 0))));
    MR_Word ModuleNameContext_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 3))));
    MR_Word IntImportsUses0_29;
    MR_Word ImpImportsUses0_30;
    MR_Word IntFIMsMap0_31;
    MR_Word ImpFIMsMap0_32;
    MR_Word IntSelfFIMs0_33;
    MR_Word ImpSelfFIMs0_34;
    MR_Word IntTypesMap0_35;
    MR_Word ImpTypesMap0_36;
    MR_Word IntInclsCord_37;
    MR_Word ImpInclsCord_38;
    MR_Word IntImportsUses_39;
    MR_Word ImpImportsUses1_40;
    MR_Word IntItemsCord0_41;
    MR_Word ImpItemsCord0_42;
    MR_Word ImpForeignEnumsCord_43;
    MR_Word IntFIMsMap1_44;
    MR_Word ImpFIMsMap1_45;
    MR_Word IntSelfFIMs_46;
    MR_Word ImpSelfFIMs1_47;
    MR_Word IntTypesMap_48;
    MR_Word ImpTypesMap_49;
    MR_Word ImpModulesNeededByTypeClassDefns_51;
    MR_Word ImpIncls_52;
    MR_Word ImpItems0_53;
    MR_Word ImpForeignEnums_54;
    MR_Word BothTypesMap_55;
    MR_Word NeededImpTypeCtors_56;
    MR_Word ImpModulesNeededByTypeDefns_57;
    MR_Word ImpNeededModules_58;
    MR_Word ImpAvails_59;
    MR_Word ImpTypeDefnItems_62;
    MR_Word ImpSelfFIMs2_63;
    MR_Word ImpForeignEnumItems_64;
    MR_Word ImpSelfFIMs_65;
    MR_Word IntFIMsMap_66;
    MR_Word ImpFIMsMap2_67;
    MR_Word ImpFIMsMap_68;
    MR_Word ToCheckIntItemBlock_69;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_96;
    MR_Word _IntModulesNeeded_50;
    MR_Box conv5_ImpTypeDefnItems_62;
    MR_Box conv4_ImpSelfFIMs2_63;
    MR_Box conv9_ImpForeignEnumItems_64;
    MR_Box conv8_ImpSelfFIMs_65;
    MR_Box conv12_IntFIMs_15;
    MR_Box conv14_ImpFIMs_16;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntImportsUses0_29);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImportsUses0_30);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), &IntFIMsMap0_31);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), &ImpFIMsMap0_32);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &IntSelfFIMs0_33);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &ImpSelfFIMs0_34);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &IntTypesMap0_35);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &ImpTypesMap0_36);
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_74 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_77 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0));
    Var_78 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_79 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0(SrcItemBlocks_24, Var_73, &IntInclsCord_37, Var_74, &ImpInclsCord_38, IntImportsUses0_29, &IntImportsUses_39, ImpImportsUses0_30, &ImpImportsUses1_40, Var_75, &IntItemsCord0_41, Var_76, &ImpItemsCord0_42, Var_77, &ImpForeignEnumsCord_43, IntFIMsMap0_31, &IntFIMsMap1_44, ImpFIMsMap0_32, &ImpFIMsMap1_45, IntSelfFIMs0_33, &IntSelfFIMs_46, ImpSelfFIMs0_34, &ImpSelfFIMs1_47, IntTypesMap0_35, &IntTypesMap_48, ImpTypesMap0_36, &ImpTypesMap_49, Var_78, &_IntModulesNeeded_50, Var_79, &ImpModulesNeededByTypeClassDefns_51, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_80_80);
    *IntIncls_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_37);
    ImpIncls_52 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_38);
    *IntItems_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord0_41);
    ImpItems0_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord0_42);
    ImpForeignEnums_54 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), ImpForeignEnumsCord_43);
    BothTypesMap_55 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypesMap_48, ImpTypesMap_49);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_48, ImpTypesMap_49, BothTypesMap_55, &NeededImpTypeCtors_56, &ImpModulesNeededByTypeDefns_57);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_51, ImpModulesNeededByTypeDefns_57, &ImpNeededModules_58);
    Var_82 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImportsUses_39);
    *IntAvails_14 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[13]), Var_82);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_58);
    if (succeeded)
      ImpAvails_59 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ImpImportsUses2_60;
      MR_Word ImpImportsUses_61;
      MR_Word Var_84;

      ImpImportsUses2_60 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses1_40, ImpNeededModules_58);
      ImpImportsUses_61 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses2_60, IntImportsUses_39);
      Var_84 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses_61);
      ImpAvails_59 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), Var_84);
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (BothTypesMap_55));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (IntTypesMap_48));
      MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (NeededImpTypeCtors_56));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_85, ImpTypesMap_49, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ImpTypeDefnItems_62, ((MR_Box) (ImpSelfFIMs1_47)), &conv4_ImpSelfFIMs2_63);
    ImpTypeDefnItems_62 = ((MR_Word) (conv5_ImpTypeDefnItems_62));
    ImpSelfFIMs2_63 = ((MR_Word) (conv4_ImpSelfFIMs2_63));
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_4));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (IntTypesMap_48));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_87, ImpForeignEnums_54, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_ImpForeignEnumItems_64, ((MR_Box) (ImpSelfFIMs2_63)), &conv8_ImpSelfFIMs_65);
    ImpForeignEnumItems_64 = ((MR_Word) (conv9_ImpForeignEnumItems_64));
    ImpSelfFIMs_65 = ((MR_Word) (conv8_ImpSelfFIMs_65));
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpForeignEnumItems_64, ImpItems0_53);
    *ImpItems_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpTypeDefnItems_62, Var_89);
    parse_tree__comp_unit_interface__add_self_fims_4_p_0(ModuleName_21, IntSelfFIMs_46, IntFIMsMap1_44, &IntFIMsMap_66);
    parse_tree__comp_unit_interface__add_self_fims_4_p_0(ModuleName_21, ImpSelfFIMs_65, ImpFIMsMap1_45, &ImpFIMsMap2_67);
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_10_p_0_5));
      MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (IntFIMsMap_66));
    }
    mercury__map__map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_90, ImpFIMsMap2_67, &ImpFIMsMap_68);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), IntFIMsMap_66, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_IntFIMs_15);
    *IntFIMs_15 = ((MR_Word) (conv12_IntFIMs_15));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[16]), ImpFIMsMap_68, ((MR_Box) ((MR_Unsigned) 0U)), &conv14_ImpFIMs_16);
    *ImpFIMs_16 = ((MR_Word) (conv14_ImpFIMs_16));
    {
      ToCheckIntItemBlock_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_69, 0) = ((MR_Box) (ModuleName_21));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_69, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_69, 2) = ((MR_Box) (*IntIncls_13));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_69, 3) = ((MR_Box) (*IntAvails_14));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_69, 4) = ((MR_Box) (*IntFIMs_15));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_69, 5) = ((MR_Box) (*IntItems_17));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (ToCheckIntItemBlock_69));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_11, ModuleName_21, ModuleNameContext_22, Var_96, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_71);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_21));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (*IntIncls_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_52));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (*IntAvails_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_59));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (*IntFIMs_15));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (*ImpFIMs_16));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (*IntItems_17));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (*ImpItems_18));
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
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (IntTypesMap_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (BothTypesMap_8));
    }
    Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
    AbsExpEqvLhsTypeCtors_11 = ((MR_Word) (conv5_AbsExpEqvLhsTypeCtors_11));
    AbsExpEnumTypeCtors_12 = ((MR_Word) (conv4_AbsExpEnumTypeCtors_12));
    DirectDummyTypeCtors_13 = ((MR_Word) (conv3_DirectDummyTypeCtors_13));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ImpTypesMap_7));
    }
    Var_21 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_23 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FIMsMap_13;

    parse_tree__comp_unit_interface__add_fim_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FIMsMap_13);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FIMsMap_13));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FIMsMap_13;

    parse_tree__comp_unit_interface__add_fim_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIMsMap_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIMsMap_13));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_33_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntImportsUses_0_6,
  MR_Word * STATE_VARIABLE_IntImportsUses_7,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_8,
  MR_Word * STATE_VARIABLE_ImpImportsUses_9,
  MR_Word STATE_VARIABLE_IntItemsCord_0_10,
  MR_Word * STATE_VARIABLE_IntItemsCord_11,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpItemsCord_13,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_14,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_15,
  MR_Word STATE_VARIABLE_IntFIMsMap_0_16,
  MR_Word * STATE_VARIABLE_IntFIMsMap_17,
  MR_Word STATE_VARIABLE_ImpFIMsMap_0_18,
  MR_Word * STATE_VARIABLE_ImpFIMsMap_19,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_20,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_21,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_22,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_23,
  MR_Word STATE_VARIABLE_IntTypesMap_0_24,
  MR_Word * STATE_VARIABLE_IntTypesMap_25,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_26,
  MR_Word * STATE_VARIABLE_ImpTypesMap_27,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_28,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_29,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_31 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30;
      *STATE_VARIABLE_IntModulesNeeded_29 = STATE_VARIABLE_IntModulesNeeded_0_28;
      *STATE_VARIABLE_ImpTypesMap_27 = STATE_VARIABLE_ImpTypesMap_0_26;
      *STATE_VARIABLE_IntTypesMap_25 = STATE_VARIABLE_IntTypesMap_0_24;
      *STATE_VARIABLE_ImpSelfFIMs_23 = STATE_VARIABLE_ImpSelfFIMs_0_22;
      *STATE_VARIABLE_IntSelfFIMs_21 = STATE_VARIABLE_IntSelfFIMs_0_20;
      *STATE_VARIABLE_ImpFIMsMap_19 = STATE_VARIABLE_ImpFIMsMap_0_18;
      *STATE_VARIABLE_IntFIMsMap_17 = STATE_VARIABLE_IntFIMsMap_0_16;
      *STATE_VARIABLE_ImpForeignEnumsCord_15 = STATE_VARIABLE_ImpForeignEnumsCord_0_14;
      *STATE_VARIABLE_ImpItemsCord_13 = STATE_VARIABLE_ImpItemsCord_0_12;
      *STATE_VARIABLE_IntItemsCord_11 = STATE_VARIABLE_IntItemsCord_0_10;
      *STATE_VARIABLE_ImpImportsUses_9 = STATE_VARIABLE_ImpImportsUses_0_8;
      *STATE_VARIABLE_IntImportsUses_7 = STATE_VARIABLE_IntImportsUses_0_6;
      *STATE_VARIABLE_ImpInclsCord_5 = STATE_VARIABLE_ImpInclsCord_0_4;
      *STATE_VARIABLE_IntInclsCord_3 = STATE_VARIABLE_IntInclsCord_0_2;
    }
    else
    {
      MR_Word SrcItemBlock_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcSection_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_82, (MR_Integer) 1))));
      MR_Word Incls_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_82, (MR_Integer) 2))));
      MR_Word Avails_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_82, (MR_Integer) 3))));
      MR_Word FIMs_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_82, (MR_Integer) 4))));
      MR_Word Items_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_82, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpInclsCord_140_140;
      MR_Word STATE_VARIABLE_ImpImportsUses_142_142;
      MR_Word STATE_VARIABLE_ImpFIMsMap_144_144;
      MR_Word STATE_VARIABLE_ImpItemsCord_145_145;
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_146_146;
      MR_Word STATE_VARIABLE_ImpSelfFIMs_147_147;
      MR_Word STATE_VARIABLE_ImpTypesMap_148_148;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_149_149;
      MR_Word STATE_VARIABLE_IntInclsCord_151_151;
      MR_Word STATE_VARIABLE_IntImportsUses_153_153;
      MR_Word STATE_VARIABLE_IntFIMsMap_155_155;
      MR_Word STATE_VARIABLE_IntItemsCord_156_156;
      MR_Word STATE_VARIABLE_IntSelfFIMs_157_157;
      MR_Word STATE_VARIABLE_IntTypesMap_158_158;
      MR_Word STATE_VARIABLE_IntModulesNeeded_159_159;
      MR_Word STATE_VARIABLE_Specs_160_160;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntImportsUses_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpImportsUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_14;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMsMap_0_16;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMsMap_0_18;
      MR_Word next_value_of_STATE_VARIABLE_IntSelfFIMs_0_20;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_22;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_24;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_26;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeeded_0_28;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_32;

      switch (SrcSection_101) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_item_blocks_loop\'/33", (MR_String) "sms_impl_but_exported_to_submodules");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_141;
            MR_Box conv1_STATE_VARIABLE_ImpFIMsMap_144_144;

            Var_141 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_102);
            STATE_VARIABLE_ImpInclsCord_140_140 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_4, Var_141);
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(Avails_103, STATE_VARIABLE_ImpImportsUses_0_8, &STATE_VARIABLE_ImpImportsUses_142_142);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), FIMs_104, ((MR_Box) (STATE_VARIABLE_ImpFIMsMap_0_18)), &conv1_STATE_VARIABLE_ImpFIMsMap_144_144);
            STATE_VARIABLE_ImpFIMsMap_144_144 = ((MR_Word) (conv1_STATE_VARIABLE_ImpFIMsMap_144_144));
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(Items_105, STATE_VARIABLE_ImpItemsCord_0_12, &STATE_VARIABLE_ImpItemsCord_145_145, STATE_VARIABLE_ImpForeignEnumsCord_0_14, &STATE_VARIABLE_ImpForeignEnumsCord_146_146, STATE_VARIABLE_ImpSelfFIMs_0_22, &STATE_VARIABLE_ImpSelfFIMs_147_147, STATE_VARIABLE_ImpTypesMap_0_26, &STATE_VARIABLE_ImpTypesMap_148_148, STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30, &STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_149_149, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_160_160);
            STATE_VARIABLE_IntInclsCord_151_151 = STATE_VARIABLE_IntInclsCord_0_2;
            STATE_VARIABLE_IntImportsUses_153_153 = STATE_VARIABLE_IntImportsUses_0_6;
            STATE_VARIABLE_IntItemsCord_156_156 = STATE_VARIABLE_IntItemsCord_0_10;
            STATE_VARIABLE_IntFIMsMap_155_155 = STATE_VARIABLE_IntFIMsMap_0_16;
            STATE_VARIABLE_IntSelfFIMs_157_157 = STATE_VARIABLE_IntSelfFIMs_0_20;
            STATE_VARIABLE_IntTypesMap_158_158 = STATE_VARIABLE_IntTypesMap_0_24;
            STATE_VARIABLE_IntModulesNeeded_159_159 = STATE_VARIABLE_IntModulesNeeded_0_28;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_152;
            MR_Box conv3_STATE_VARIABLE_IntFIMsMap_155_155;

            Var_152 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_102);
            STATE_VARIABLE_IntInclsCord_151_151 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_2, Var_152);
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(Avails_103, STATE_VARIABLE_IntImportsUses_0_6, &STATE_VARIABLE_IntImportsUses_153_153);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), FIMs_104, ((MR_Box) (STATE_VARIABLE_IntFIMsMap_0_16)), &conv3_STATE_VARIABLE_IntFIMsMap_155_155);
            STATE_VARIABLE_IntFIMsMap_155_155 = ((MR_Word) (conv3_STATE_VARIABLE_IntFIMsMap_155_155));
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0(Items_105, STATE_VARIABLE_IntItemsCord_0_10, &STATE_VARIABLE_IntItemsCord_156_156, STATE_VARIABLE_IntSelfFIMs_0_20, &STATE_VARIABLE_IntSelfFIMs_157_157, STATE_VARIABLE_IntTypesMap_0_24, &STATE_VARIABLE_IntTypesMap_158_158, STATE_VARIABLE_IntModulesNeeded_0_28, &STATE_VARIABLE_IntModulesNeeded_159_159, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_160_160);
            STATE_VARIABLE_ImpInclsCord_140_140 = STATE_VARIABLE_ImpInclsCord_0_4;
            STATE_VARIABLE_ImpImportsUses_142_142 = STATE_VARIABLE_ImpImportsUses_0_8;
            STATE_VARIABLE_ImpItemsCord_145_145 = STATE_VARIABLE_ImpItemsCord_0_12;
            STATE_VARIABLE_ImpForeignEnumsCord_146_146 = STATE_VARIABLE_ImpForeignEnumsCord_0_14;
            STATE_VARIABLE_ImpFIMsMap_144_144 = STATE_VARIABLE_ImpFIMsMap_0_18;
            STATE_VARIABLE_ImpSelfFIMs_147_147 = STATE_VARIABLE_ImpSelfFIMs_0_22;
            STATE_VARIABLE_ImpTypesMap_148_148 = STATE_VARIABLE_ImpTypesMap_0_26;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_149_149 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks_83;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_2 = STATE_VARIABLE_IntInclsCord_151_151;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_4 = STATE_VARIABLE_ImpInclsCord_140_140;
      next_value_of_STATE_VARIABLE_IntImportsUses_0_6 = STATE_VARIABLE_IntImportsUses_153_153;
      next_value_of_STATE_VARIABLE_ImpImportsUses_0_8 = STATE_VARIABLE_ImpImportsUses_142_142;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_10 = STATE_VARIABLE_IntItemsCord_156_156;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_12 = STATE_VARIABLE_ImpItemsCord_145_145;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_14 = STATE_VARIABLE_ImpForeignEnumsCord_146_146;
      next_value_of_STATE_VARIABLE_IntFIMsMap_0_16 = STATE_VARIABLE_IntFIMsMap_155_155;
      next_value_of_STATE_VARIABLE_ImpFIMsMap_0_18 = STATE_VARIABLE_ImpFIMsMap_144_144;
      next_value_of_STATE_VARIABLE_IntSelfFIMs_0_20 = STATE_VARIABLE_IntSelfFIMs_157_157;
      next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_22 = STATE_VARIABLE_ImpSelfFIMs_147_147;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_24 = STATE_VARIABLE_IntTypesMap_158_158;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_26 = STATE_VARIABLE_ImpTypesMap_148_148;
      next_value_of_STATE_VARIABLE_IntModulesNeeded_0_28 = STATE_VARIABLE_IntModulesNeeded_159_159;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_149_149;
      next_value_of_STATE_VARIABLE_Specs_0_32 = STATE_VARIABLE_Specs_160_160;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInclsCord_0_2 = next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      STATE_VARIABLE_ImpInclsCord_0_4 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      STATE_VARIABLE_IntImportsUses_0_6 = next_value_of_STATE_VARIABLE_IntImportsUses_0_6;
      STATE_VARIABLE_ImpImportsUses_0_8 = next_value_of_STATE_VARIABLE_ImpImportsUses_0_8;
      STATE_VARIABLE_IntItemsCord_0_10 = next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      STATE_VARIABLE_ImpItemsCord_0_12 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;
      STATE_VARIABLE_ImpForeignEnumsCord_0_14 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_14;
      STATE_VARIABLE_IntFIMsMap_0_16 = next_value_of_STATE_VARIABLE_IntFIMsMap_0_16;
      STATE_VARIABLE_ImpFIMsMap_0_18 = next_value_of_STATE_VARIABLE_ImpFIMsMap_0_18;
      STATE_VARIABLE_IntSelfFIMs_0_20 = next_value_of_STATE_VARIABLE_IntSelfFIMs_0_20;
      STATE_VARIABLE_ImpSelfFIMs_0_22 = next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_22;
      STATE_VARIABLE_IntTypesMap_0_24 = next_value_of_STATE_VARIABLE_IntTypesMap_0_24;
      STATE_VARIABLE_ImpTypesMap_0_26 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_26;
      STATE_VARIABLE_IntModulesNeeded_0_28 = next_value_of_STATE_VARIABLE_IntModulesNeeded_0_28;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_30;
      STATE_VARIABLE_Specs_0_32 = next_value_of_STATE_VARIABLE_Specs_0_32;
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
  MR_Word STATE_VARIABLE_ImpItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ImpItemsCord_3,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_5,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_6,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_7,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_8,
  MR_Word * STATE_VARIABLE_ImpTypesMap_9,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_11 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
      *STATE_VARIABLE_ImpTypesMap_9 = STATE_VARIABLE_ImpTypesMap_0_8;
      *STATE_VARIABLE_ImpSelfFIMs_7 = STATE_VARIABLE_ImpSelfFIMs_0_6;
      *STATE_VARIABLE_ImpForeignEnumsCord_5 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
      *STATE_VARIABLE_ImpItemsCord_3 = STATE_VARIABLE_ImpItemsCord_0_2;
    }
    else
    {
      MR_Word Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_85_85;
      MR_Word STATE_VARIABLE_ImpSelfFIMs_86_86;
      MR_Word STATE_VARIABLE_ImpItemsCord_89_89;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91;
      MR_Word STATE_VARIABLE_ImpTypesMap_93_93;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;

      switch (MR_tag((MR_Word) Item_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_40 = (MR_Word) (MR_body((MR_Word) (Item_32), (MR_Integer) 1));
            MR_Word Name_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 0))));
            MR_Word TypeParams_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 1))));
            MR_Word TypeCtor_47;
            MR_Integer Var_92;

            Var_92 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), TypeParams_42);
            {
              TypeCtor_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_47, 0) = ((MR_Box) (Name_41));
              MR_hl_field(MR_mktag(0), TypeCtor_47, 1) = ((MR_Box) (Var_92));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_47)), ((MR_Box) (ItemTypeDefn_40)), STATE_VARIABLE_ImpTypesMap_0_8, &STATE_VARIABLE_ImpTypesMap_93_93);
            STATE_VARIABLE_ImpItemsCord_89_89 = STATE_VARIABLE_ImpItemsCord_0_2;
            STATE_VARIABLE_ImpForeignEnumsCord_85_85 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
            STATE_VARIABLE_ImpSelfFIMs_86_86 = STATE_VARIABLE_ImpSelfFIMs_0_6;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 0))))) {
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Pragma_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_50, (MR_Integer) 0))));
                MR_Word MaybeAttrs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_50, (MR_Integer) 1))));
                MR_Word FEInfo_55;

                succeeded = ((((MR_tag((MR_Word) Pragma_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_51, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  FEInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_51, (MR_Integer) 1))));
                  {
                    MR_Word Reconstructor_56;
                    MR_Word FELang_57;

                    {
                      Reconstructor_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Reconstructor_56, 0) = ((MR_Box) (FEInfo_55));
                      MR_hl_field(MR_mktag(0), Reconstructor_56, 1) = ((MR_Box) (MaybeAttrs_52));
                    }
                    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), ((MR_Box) (Reconstructor_56)), STATE_VARIABLE_ImpForeignEnumsCord_0_4, &STATE_VARIABLE_ImpForeignEnumsCord_85_85);
                    FELang_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_55, (MR_Integer) 0))) & (MR_Integer) 3);
                    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (FELang_57)), STATE_VARIABLE_ImpSelfFIMs_0_6, &STATE_VARIABLE_ImpSelfFIMs_86_86);
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "non-foreign-enum pragma");
                    return;
                  }
                }
                STATE_VARIABLE_ImpItemsCord_89_89 = STATE_VARIABLE_ImpItemsCord_0_2;
                STATE_VARIABLE_ImpTypesMap_93_93 = STATE_VARIABLE_ImpTypesMap_0_8;
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Constraints_49;
                MR_Box conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_89_89);
                Constraints_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_48, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), Constraints_49, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91);
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91 = ((MR_Word) (conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91));
                STATE_VARIABLE_ImpForeignEnumsCord_85_85 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
                STATE_VARIABLE_ImpSelfFIMs_86_86 = STATE_VARIABLE_ImpSelfFIMs_0_6;
                STATE_VARIABLE_ImpTypesMap_93_93 = STATE_VARIABLE_ImpTypesMap_0_8;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_33;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_2 = STATE_VARIABLE_ImpItemsCord_89_89;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_4 = STATE_VARIABLE_ImpForeignEnumsCord_85_85;
      next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_6 = STATE_VARIABLE_ImpSelfFIMs_86_86;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_8 = STATE_VARIABLE_ImpTypesMap_93_93;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_91_91;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpItemsCord_0_2 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;
      STATE_VARIABLE_ImpForeignEnumsCord_0_4 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_4;
      STATE_VARIABLE_ImpSelfFIMs_0_6 = next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_6;
      STATE_VARIABLE_ImpTypesMap_0_8 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_8;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_2(
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
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1208__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_4,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_5,
  MR_Word STATE_VARIABLE_IntTypesMap_0_6,
  MR_Word * STATE_VARIABLE_IntTypesMap_7,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_8,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_9,
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
      *STATE_VARIABLE_IntModulesNeeded_9 = STATE_VARIABLE_IntModulesNeeded_0_8;
      *STATE_VARIABLE_IntTypesMap_7 = STATE_VARIABLE_IntTypesMap_0_6;
      *STATE_VARIABLE_IntSelfFIMs_5 = STATE_VARIABLE_IntSelfFIMs_0_4;
      *STATE_VARIABLE_IntItemsCord_3 = STATE_VARIABLE_IntItemsCord_0_2;
    }
    else
    {
      MR_Word Item_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_92_92;
      MR_Word STATE_VARIABLE_IntModulesNeeded_95_95;
      MR_Word STATE_VARIABLE_IntTypesMap_97_97;
      MR_Word STATE_VARIABLE_IntItemsCord_98_98;
      MR_Word STATE_VARIABLE_IntSelfFIMs_100_100;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntSelfFIMs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeeded_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      switch (MR_tag((MR_Word) Item_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_48 = (MR_Word) ((MR_Word) (Item_27));
            MR_Word Context_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_48, (MR_Integer) 6))));
            MR_Word Spec_50;

            Spec_50 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_49);
            {
              STATE_VARIABLE_Specs_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_92_92, 0) = ((MR_Box) (Spec_50));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_92_92, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
            }
            STATE_VARIABLE_IntItemsCord_98_98 = STATE_VARIABLE_IntItemsCord_0_2;
            STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
            STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
            STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_34 = (MR_Word) (MR_body((MR_Word) (Item_27), (MR_Integer) 1));
            MR_Word Name_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 0))));
            MR_Word TypeParams_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 1))));
            MR_Word TypeDefn_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 2))));
            MR_Word TypeCtor_41;
            MR_Integer Var_96;
            MR_Word ForeignType_43;
            MR_Word DetailsForeign_42;

            Var_96 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), TypeParams_36);
            {
              TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_41, 0) = ((MR_Box) (Name_35));
              MR_hl_field(MR_mktag(0), TypeCtor_41, 1) = ((MR_Box) (Var_96));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_41)), ((MR_Box) (ItemTypeDefn_34)), STATE_VARIABLE_IntTypesMap_0_6, &STATE_VARIABLE_IntTypesMap_97_97);
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_27)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_98_98);
            succeeded = ((MR_tag((MR_Word) TypeDefn_37)) == (MR_Integer) 2);
            if (succeeded)
            {
              DetailsForeign_42 = (MR_Word) (MR_body((MR_Word) (TypeDefn_37), (MR_Integer) 2));
              ForeignType_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_42, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_99;

              Var_99 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_43);
              mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_99)), STATE_VARIABLE_IntSelfFIMs_0_4, &STATE_VARIABLE_IntSelfFIMs_100_100);
            }
            else
              STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
            STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
            STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_27)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_98_98);
            STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
            STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
            STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
            STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_27)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_98_98);
                STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
                STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word Pragma_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_51, (MR_Integer) 0))));
                MR_Word AllowedInInterface_55;
                MR_Word Context_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_51, (MR_Integer) 2))));

                AllowedInInterface_55 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_52);
                switch (AllowedInInterface_55) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_106;

                      Spec_106 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_108);
                      {
                        STATE_VARIABLE_Specs_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_92_92, 0) = ((MR_Box) (Spec_106));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_92_92, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
                      }
                      STATE_VARIABLE_IntItemsCord_98_98 = STATE_VARIABLE_IntItemsCord_0_2;
                      STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Langs_56;

                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_27)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_98_98);
                      Langs_56 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_52);
                      succeeded = ((((MR_tag((MR_Word) Pragma_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_52, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (succeeded)
                      {
                        mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_56, STATE_VARIABLE_IntSelfFIMs_0_4, &STATE_VARIABLE_IntSelfFIMs_100_100);
                      }
                      else
                      {
                        MR_Word Var_85;

                        {
                          Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[4]));
                          MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_1));
                          MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Langs_56));
                          MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/11", (MR_String) "interface pragma other than foreign_enum needs Langs");
                        STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                      }
                      STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
                    }
                    break;
                }
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word PromiseType_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_58, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (PromiseType_59) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_27)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_98_98);
                    }
                    break;
                  case (MR_Integer) 3:
                    STATE_VARIABLE_IntItemsCord_98_98 = STATE_VARIABLE_IntItemsCord_0_2;
                    break;
                }
                STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
                STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word Constraints_47;
                MR_Box conv1_STATE_VARIABLE_IntModulesNeeded_95_95;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_27)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_98_98);
                Constraints_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_46, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Constraints_47, ((MR_Box) (STATE_VARIABLE_IntModulesNeeded_0_8)), &conv1_STATE_VARIABLE_IntModulesNeeded_95_95);
                STATE_VARIABLE_IntModulesNeeded_95_95 = ((MR_Word) (conv1_STATE_VARIABLE_IntModulesNeeded_95_95));
                STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntItemsCord_98_98 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
                STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntItemsCord_98_98 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
                STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntItemsCord_98_98 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntSelfFIMs_100_100 = STATE_VARIABLE_IntSelfFIMs_0_4;
                STATE_VARIABLE_IntTypesMap_97_97 = STATE_VARIABLE_IntTypesMap_0_6;
                STATE_VARIABLE_IntModulesNeeded_95_95 = STATE_VARIABLE_IntModulesNeeded_0_8;
                STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/11", (MR_String) "item_type_repn");
                  return;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_28;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_2 = STATE_VARIABLE_IntItemsCord_98_98;
      next_value_of_STATE_VARIABLE_IntSelfFIMs_0_4 = STATE_VARIABLE_IntSelfFIMs_100_100;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_6 = STATE_VARIABLE_IntTypesMap_97_97;
      next_value_of_STATE_VARIABLE_IntModulesNeeded_0_8 = STATE_VARIABLE_IntModulesNeeded_95_95;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_92_92;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntItemsCord_0_2 = next_value_of_STATE_VARIABLE_IntItemsCord_0_2;
      STATE_VARIABLE_IntSelfFIMs_0_4 = next_value_of_STATE_VARIABLE_IntSelfFIMs_0_4;
      STATE_VARIABLE_IntTypesMap_0_6 = next_value_of_STATE_VARIABLE_IntTypesMap_0_6;
      STATE_VARIABLE_IntModulesNeeded_0_8 = next_value_of_STATE_VARIABLE_IntModulesNeeded_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
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

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fims_4_p_0(
  MR_Word ModuleName_5,
  MR_Word SelfFIMs_6,
  MR_Word STATE_VARIABLE_FIMsMap_0_10,
  MR_Word * STATE_VARIABLE_FIMsMap_11)
{
  {
    MR_bool succeeded;
    MR_Word Langs0_8;
    MR_Box conv0_Langs0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), STATE_VARIABLE_FIMsMap_0_10, ((MR_Box) (ModuleName_5)), &conv0_Langs0_8);
    if (succeeded)
    {
      Langs0_8 = ((MR_Word) (conv0_Langs0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Langs_9;

      mercury__set__union_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), SelfFIMs_6, Langs0_8, &Langs_9);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_5)), ((MR_Box) (Langs_9)), STATE_VARIABLE_FIMsMap_0_10, STATE_VARIABLE_FIMsMap_11);
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_5)), ((MR_Box) (SelfFIMs_6)), STATE_VARIABLE_FIMsMap_0_10, STATE_VARIABLE_FIMsMap_11);
    }
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
  MR_Word * ParseTreeInt_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 1))));
    MR_Word ModuleVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 2))));
    MR_Word SrcItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 3))));
    MR_Word IntInclsCord_13;
    MR_Word ImpInclsCord_14;
    MR_Word IntAvailsCord_15;
    MR_Word ImpAvailsCord_16;
    MR_Word IntFIMsCord_17;
    MR_Word ImpFIMsCord_18;
    MR_Word IntItemsCord_19;
    MR_Word ImpItemsCord_20;
    MR_Word MaybeVersionNumbers_22;
    MR_Word IntIncls_23;
    MR_Word ImpIncls_24;
    MR_Word IntAvails_25;
    MR_Word ImpAvails_26;
    MR_Word IntFIMs_27;
    MR_Word ImpFIMs_28;
    MR_Word IntItems_29;
    MR_Word ImpItems_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word VersionNumbers_21;
    MR_Box conv0_VersionNumbers_21;

    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_33 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_34 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_35 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_37 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_18_p_0(ModuleName_5, SrcItemBlocks_8, Var_31, &IntInclsCord_13, Var_32, &ImpInclsCord_14, Var_33, &IntAvailsCord_15, Var_34, &ImpAvailsCord_16, Var_35, &IntFIMsCord_17, Var_36, &ImpFIMsCord_18, Var_37, &IntItemsCord_19, Var_38, &ImpItemsCord_20);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_7, ((MR_Box) (ModuleName_5)), &conv0_VersionNumbers_21);
    if (succeeded)
    {
      VersionNumbers_21 = ((MR_Word) (conv0_VersionNumbers_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybeVersionNumbers_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_22, 0) = ((MR_Box) (VersionNumbers_21));
      }
    else
      MaybeVersionNumbers_22 = (MR_Word) ((MR_Unsigned) 0U);
    IntIncls_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_13);
    ImpIncls_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_14);
    IntAvails_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_15);
    ImpAvails_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_16);
    IntFIMs_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMsCord_17);
    ImpFIMs_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMsCord_18);
    IntItems_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_19);
    ImpItems_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_26));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntFIMs_27));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpFIMs_28));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntItems_29));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpItems_30));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntInclsCord_0_3,
  MR_Word * STATE_VARIABLE_IntInclsCord_4,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_5,
  MR_Word * STATE_VARIABLE_ImpInclsCord_6,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_7,
  MR_Word * STATE_VARIABLE_IntAvailsCord_8,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_9,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_10,
  MR_Word STATE_VARIABLE_IntFIMsCord_0_11,
  MR_Word * STATE_VARIABLE_IntFIMsCord_12,
  MR_Word STATE_VARIABLE_ImpFIMsCord_0_13,
  MR_Word * STATE_VARIABLE_ImpFIMsCord_14,
  MR_Word STATE_VARIABLE_IntItemsCord_0_15,
  MR_Word * STATE_VARIABLE_IntItemsCord_16,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_17,
  MR_Word * STATE_VARIABLE_ImpItemsCord_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpItemsCord_18 = STATE_VARIABLE_ImpItemsCord_0_17;
      *STATE_VARIABLE_IntItemsCord_16 = STATE_VARIABLE_IntItemsCord_0_15;
      *STATE_VARIABLE_ImpFIMsCord_14 = STATE_VARIABLE_ImpFIMsCord_0_13;
      *STATE_VARIABLE_IntFIMsCord_12 = STATE_VARIABLE_IntFIMsCord_0_11;
      *STATE_VARIABLE_ImpAvailsCord_10 = STATE_VARIABLE_ImpAvailsCord_0_9;
      *STATE_VARIABLE_IntAvailsCord_8 = STATE_VARIABLE_IntAvailsCord_0_7;
      *STATE_VARIABLE_ImpInclsCord_6 = STATE_VARIABLE_ImpInclsCord_0_5;
      *STATE_VARIABLE_IntInclsCord_4 = STATE_VARIABLE_IntInclsCord_0_3;
    }
    else
    {
      MR_Word ItemBlock_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SrcSection_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_45, (MR_Integer) 1))));
      MR_Word Incls_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_45, (MR_Integer) 2))));
      MR_Word Avails_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_45, (MR_Integer) 3))));
      MR_Word FIMs_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_45, (MR_Integer) 4))));
      MR_Word Items_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_45, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpInclsCord_77_77;
      MR_Word STATE_VARIABLE_ImpAvailsCord_79_79;
      MR_Word STATE_VARIABLE_ImpFIMsCord_81_81;
      MR_Word STATE_VARIABLE_ImpItemsCord_83_83;
      MR_Word STATE_VARIABLE_IntInclsCord_84_84;
      MR_Word STATE_VARIABLE_IntAvailsCord_86_86;
      MR_Word STATE_VARIABLE_IntFIMsCord_88_88;
      MR_Word STATE_VARIABLE_IntItemsCord_90_90;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_IntAvailsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMsCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMsCord_0_13;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_15;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_17;

      switch (SrcSection_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_78;
            MR_Word Var_80;
            MR_Word Var_82;

            Var_78 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_57);
            STATE_VARIABLE_ImpInclsCord_77_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_5, Var_78);
            Var_80 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_58);
            STATE_VARIABLE_ImpAvailsCord_79_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_9, Var_80);
            Var_82 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_59);
            STATE_VARIABLE_ImpFIMsCord_81_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ImpFIMsCord_0_13, Var_82);
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(HeadVar__1_1, Items_60, STATE_VARIABLE_ImpItemsCord_0_17, &STATE_VARIABLE_ImpItemsCord_83_83);
            STATE_VARIABLE_IntInclsCord_84_84 = STATE_VARIABLE_IntInclsCord_0_3;
            STATE_VARIABLE_IntAvailsCord_86_86 = STATE_VARIABLE_IntAvailsCord_0_7;
            STATE_VARIABLE_IntFIMsCord_88_88 = STATE_VARIABLE_IntFIMsCord_0_11;
            STATE_VARIABLE_IntItemsCord_90_90 = STATE_VARIABLE_IntItemsCord_0_15;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_89;

            Var_85 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_57);
            STATE_VARIABLE_IntInclsCord_84_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_3, Var_85);
            Var_87 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_58);
            STATE_VARIABLE_IntAvailsCord_86_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_7, Var_87);
            Var_89 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_59);
            STATE_VARIABLE_IntFIMsCord_88_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_IntFIMsCord_0_11, Var_89);
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(HeadVar__1_1, Items_60, STATE_VARIABLE_IntItemsCord_0_15, &STATE_VARIABLE_IntItemsCord_90_90);
            STATE_VARIABLE_ImpInclsCord_77_77 = STATE_VARIABLE_ImpInclsCord_0_5;
            STATE_VARIABLE_ImpAvailsCord_79_79 = STATE_VARIABLE_ImpAvailsCord_0_9;
            STATE_VARIABLE_ImpFIMsCord_81_81 = STATE_VARIABLE_ImpFIMsCord_0_13;
            STATE_VARIABLE_ImpItemsCord_83_83 = STATE_VARIABLE_ImpItemsCord_0_17;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_46;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_3 = STATE_VARIABLE_IntInclsCord_84_84;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_5 = STATE_VARIABLE_ImpInclsCord_77_77;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_7 = STATE_VARIABLE_IntAvailsCord_86_86;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9 = STATE_VARIABLE_ImpAvailsCord_79_79;
      next_value_of_STATE_VARIABLE_IntFIMsCord_0_11 = STATE_VARIABLE_IntFIMsCord_88_88;
      next_value_of_STATE_VARIABLE_ImpFIMsCord_0_13 = STATE_VARIABLE_ImpFIMsCord_81_81;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_15 = STATE_VARIABLE_IntItemsCord_90_90;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_17 = STATE_VARIABLE_ImpItemsCord_83_83;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IntInclsCord_0_3 = next_value_of_STATE_VARIABLE_IntInclsCord_0_3;
      STATE_VARIABLE_ImpInclsCord_0_5 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_5;
      STATE_VARIABLE_IntAvailsCord_0_7 = next_value_of_STATE_VARIABLE_IntAvailsCord_0_7;
      STATE_VARIABLE_ImpAvailsCord_0_9 = next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9;
      STATE_VARIABLE_IntFIMsCord_0_11 = next_value_of_STATE_VARIABLE_IntFIMsCord_0_11;
      STATE_VARIABLE_ImpFIMsCord_0_13 = next_value_of_STATE_VARIABLE_ImpFIMsCord_0_13;
      STATE_VARIABLE_IntItemsCord_0_15 = next_value_of_STATE_VARIABLE_IntItemsCord_0_15;
      STATE_VARIABLE_ImpItemsCord_0_17 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SectionItemsCord_0_3,
  MR_Word * STATE_VARIABLE_SectionItemsCord_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SectionItemsCord_4 = STATE_VARIABLE_SectionItemsCord_0_3;
    else
    {
      MR_Word Item_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_SectionItemsCord_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_SectionItemsCord_0_3;

      switch (MR_tag((MR_Word) Item_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_0_3;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_10)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_15_15);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_10)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_15_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_Word Pragma_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_26, (MR_Integer) 0))));
                MR_Word AllowedInInterface_31;

                AllowedInInterface_31 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_27);
                switch (AllowedInInterface_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_0_3;
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_10)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_15_15);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word InstanceInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_Word AbstractInstanceInfo_40;
                MR_Word AbstractItem_41;
                MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 0))));
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 1))));
                MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 2))));
                MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 3))));
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 5))));
                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 6))));
                MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 7))));
                MR_Integer Var_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceInfo_39, (MR_Integer) 8))));

                {
                  AbstractInstanceInfo_40 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 0) = ((MR_Box) (Var_77));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 1) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 2) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 3) = ((MR_Box) (Var_80));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 5) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 6) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 7) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_40, 8) = ((MR_Box) (Var_85));
                }
                {
                  AbstractItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_41, 1) = ((MR_Box) (AbstractInstanceInfo_40));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_41)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_15_15);
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_0_3;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_0_3;
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutable_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_String MutableName_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_42, (MR_Integer) 0))));
                MR_Word Type_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_42, (MR_Integer) 2))));
                MR_Word Inst_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_42, (MR_Integer) 4))));
                MR_Word Attrs_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_42, (MR_Integer) 7))));
                MR_Word Context_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_42, (MR_Integer) 8))));
                MR_Word ConstantInterface_53;

                ConstantInterface_53 = parse_tree__prog_item__mutable_var_constant_1_f_0(Attrs_50);
                switch (ConstantInterface_53) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ConstantGetPredDecl_54;
                      MR_Word ConstantSetPredDecl_55;
                      MR_Word ConstantGetPredDeclItem_56;
                      MR_Word ConstantSetPredDeclItem_57;
                      MR_Word STATE_VARIABLE_SectionItemsCord_59_71;

                      ConstantGetPredDecl_54 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_43, Type_45, Inst_47, Context_51);
                      ConstantSetPredDecl_55 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_43, Type_45, Inst_47, Context_51);
                      {
                        ConstantGetPredDeclItem_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConstantGetPredDeclItem_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), ConstantGetPredDeclItem_56, 1) = ((MR_Box) (ConstantGetPredDecl_54));
                      }
                      {
                        ConstantSetPredDeclItem_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConstantSetPredDeclItem_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), ConstantSetPredDeclItem_57, 1) = ((MR_Box) (ConstantSetPredDecl_55));
                      }
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (ConstantGetPredDeclItem_56)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_59_71);
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (ConstantSetPredDeclItem_57)), STATE_VARIABLE_SectionItemsCord_59_71, &STATE_VARIABLE_SectionItemsCord_15_15);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word StdGetPredDecl_58;
                      MR_Word StdSetPredDecl_59;
                      MR_Word StdGetPredDeclItem_60;
                      MR_Word StdSetPredDeclItem_61;
                      MR_Word IOStateInterface_62;
                      MR_Word STATE_VARIABLE_SectionItemsCord_55_67;
                      MR_Word STATE_VARIABLE_SectionItemsCord_56_68;

                      StdGetPredDecl_58 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_43, Type_45, Inst_47, Context_51);
                      StdSetPredDecl_59 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_43, Type_45, Inst_47, Context_51);
                      {
                        StdGetPredDeclItem_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdGetPredDeclItem_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdGetPredDeclItem_60, 1) = ((MR_Box) (StdGetPredDecl_58));
                      }
                      {
                        StdSetPredDeclItem_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdSetPredDeclItem_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdSetPredDeclItem_61, 1) = ((MR_Box) (StdSetPredDecl_59));
                      }
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (StdGetPredDeclItem_60)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_55_67);
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (StdSetPredDeclItem_61)), STATE_VARIABLE_SectionItemsCord_55_67, &STATE_VARIABLE_SectionItemsCord_56_68);
                      IOStateInterface_62 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(Attrs_50);
                      switch (IOStateInterface_62) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word IOGetPredDecl_63;
                            MR_Word IOSetPredDecl_64;
                            MR_Word IOGetPredDeclItem_65;
                            MR_Word IOSetPredDeclItem_66;
                            MR_Word STATE_VARIABLE_SectionItemsCord_57_69;

                            IOGetPredDecl_63 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_43, Type_45, Inst_47, Context_51);
                            IOSetPredDecl_64 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_43, Type_45, Inst_47, Context_51);
                            {
                              IOGetPredDeclItem_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), IOGetPredDeclItem_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), IOGetPredDeclItem_65, 1) = ((MR_Box) (IOGetPredDecl_63));
                            }
                            {
                              IOSetPredDeclItem_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), IOSetPredDeclItem_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), IOSetPredDeclItem_66, 1) = ((MR_Box) (IOSetPredDecl_64));
                            }
                            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (IOGetPredDeclItem_65)), STATE_VARIABLE_SectionItemsCord_56_68, &STATE_VARIABLE_SectionItemsCord_57_69);
                            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (IOSetPredDeclItem_66)), STATE_VARIABLE_SectionItemsCord_57_69, &STATE_VARIABLE_SectionItemsCord_15_15);
                          }
                          break;
                        case (MR_Integer) 0:
                          STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_56_68;
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_0_3;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_11;
      next_value_of_STATE_VARIABLE_SectionItemsCord_0_3 = STATE_VARIABLE_SectionItemsCord_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_SectionItemsCord_0_3 = next_value_of_STATE_VARIABLE_SectionItemsCord_0_3;
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
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    MR_Word RawItemBlocks_18;
    MR_Word IntInclModuleNames_19;
    MR_Word IntImportModuleNames0_20;
    MR_Word IntTypeDefnsCord_21;
    MR_Word IntInstDefnsCord_22;
    MR_Word IntModeDefnsCord_23;
    MR_Word IntTypeClassesCord_24;
    MR_Word IntInstancesCord_25;
    MR_Word OrigIntTypeDefnsCord_26;
    MR_Word OrigImpTypeDefnsCord_27;
    MR_Word ForeignEnumTypeCtors_28;
    MR_Word NeedImports_29;
    MR_Word IntImportModuleNames_30;
    MR_Word IntTypeDefns_31;
    MR_Word IntInstDefns_32;
    MR_Word IntModeDefns_33;
    MR_Word IntTypeClasses_34;
    MR_Word IntInstances_35;
    MR_Word Experiment1_36;
    MR_Word TypeRepnInfos_37;
    MR_Word ParseTreeInt3_42;
    MR_Word ParseTreeInt23Prime_43;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), SrcItemBlocks_13, &RawItemBlocks_18);
    Var_47 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_48 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_51 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_52 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_53 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_56 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(RawItemBlocks_18, Var_47, &IntInclModuleNames_19, Var_48, &IntImportModuleNames0_20, Var_49, &IntTypeDefnsCord_21, Var_50, &IntInstDefnsCord_22, Var_51, &IntModeDefnsCord_23, Var_52, &IntTypeClassesCord_24, Var_53, &IntInstancesCord_25, Var_54, &OrigIntTypeDefnsCord_26, Var_55, &OrigImpTypeDefnsCord_27, Var_56, &ForeignEnumTypeCtors_28, (MR_Integer) 0, &NeedImports_29, STATE_VARIABLE_Specs_0_44, STATE_VARIABLE_Specs_45);
    switch (NeedImports_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportModuleNames_30 = IntImportModuleNames0_20;
        break;
      case (MR_Integer) 0:
        IntImportModuleNames_30 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        break;
    }
    IntTypeDefns_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypeDefnsCord_21);
    IntInstDefns_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_22);
    IntModeDefns_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_23);
    IntTypeClasses_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_24);
    IntInstances_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 693, &Experiment1_36);
    switch (Experiment1_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeRepnInfos_37 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigIntTypeDefns_38;
          MR_Word OrigImpTypeDefns_39;
          MR_Word _NonIntTypeRepnInfos_41;

          OrigIntTypeDefns_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigIntTypeDefnsCord_26);
          OrigImpTypeDefns_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigImpTypeDefnsCord_27);
          parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0(ModuleName_10, OrigIntTypeDefns_38, OrigImpTypeDefns_39, ForeignEnumTypeCtors_28, &TypeRepnInfos_37, &_NonIntTypeRepnInfos_41);
        }
        break;
    }
    {
      ParseTreeInt3_42 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 2) = ((MR_Box) (IntInclModuleNames_19));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 3) = ((MR_Box) (IntImportModuleNames_30));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 4) = ((MR_Box) (IntTypeDefns_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 5) = ((MR_Box) (IntInstDefns_32));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 6) = ((MR_Box) (IntModeDefns_33));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 7) = ((MR_Box) (IntTypeClasses_34));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 8) = ((MR_Box) (IntInstances_35));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_42, 9) = ((MR_Box) (TypeRepnInfos_37));
    }
    ParseTreeInt23Prime_43 = parse_tree__prog_item__convert_parse_tree_int3_to_parse_tree_int_1_f_0(ParseTreeInt3_42);
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 2))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 4))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 5))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 6))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 7))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 8))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 9))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 10))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_43, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt23_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_72));
    }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word * ParseTreeInt_9,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_7, (MR_Integer) 1))));
    MR_Word RawItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_7, (MR_Integer) 2))));
    MR_Word IntInclModuleNames_14;
    MR_Word IntImportModuleNames0_15;
    MR_Word IntTypeDefnsCord_16;
    MR_Word IntInstDefnsCord_17;
    MR_Word IntModeDefnsCord_18;
    MR_Word IntTypeClassesCord_19;
    MR_Word IntInstancesCord_20;
    MR_Word OrigIntTypeDefnsCord_21;
    MR_Word OrigImpTypeDefnsCord_22;
    MR_Word ForeignEnumTypeCtors_23;
    MR_Word NeedImports_24;
    MR_Word IntImportModuleNames_25;
    MR_Word IntTypeDefns_26;
    MR_Word IntInstDefns_27;
    MR_Word IntModeDefns_28;
    MR_Word IntTypeClasses_29;
    MR_Word IntInstances_30;
    MR_Word Experiment1_31;
    MR_Word TypeRepnInfos_32;
    MR_Word ParseTreeInt0_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_Specs_51_51;

    Var_40 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_41 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_42 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_43 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_49 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(RawItemBlocks_13, Var_40, &IntInclModuleNames_14, Var_41, &IntImportModuleNames0_15, Var_42, &IntTypeDefnsCord_16, Var_43, &IntInstDefnsCord_17, Var_44, &IntModeDefnsCord_18, Var_45, &IntTypeClassesCord_19, Var_46, &IntInstancesCord_20, Var_47, &OrigIntTypeDefnsCord_21, Var_48, &OrigImpTypeDefnsCord_22, Var_49, &ForeignEnumTypeCtors_23, (MR_Integer) 0, &NeedImports_24, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_51_51);
    switch (NeedImports_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportModuleNames_25 = IntImportModuleNames0_15;
        break;
      case (MR_Integer) 0:
        IntImportModuleNames_25 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        break;
    }
    IntTypeDefns_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypeDefnsCord_16);
    IntInstDefns_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_17);
    IntModeDefns_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_18);
    IntTypeClasses_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_19);
    IntInstances_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 693, &Experiment1_31);
    switch (Experiment1_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeRepnInfos_32 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigIntTypeDefns_33;
          MR_Word OrigImpTypeDefns_34;
          MR_Word _NonIntTypeRepnInfos_36;

          OrigIntTypeDefns_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigIntTypeDefnsCord_21);
          OrigImpTypeDefns_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigImpTypeDefnsCord_22);
          parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0(ModuleName_11, OrigIntTypeDefns_33, OrigImpTypeDefns_34, ForeignEnumTypeCtors_23, &TypeRepnInfos_32, &_NonIntTypeRepnInfos_36);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt3_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclModuleNames_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntImportModuleNames_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntTypeDefns_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntInstDefns_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntModeDefns_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntTypeClasses_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntInstances_30));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TypeRepnInfos_32));
    }
    ParseTreeInt0_37 = parse_tree__prog_item__convert_parse_tree_int3_to_parse_tree_int_1_f_0(*ParseTreeInt3_8);
    parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_6, ParseTreeInt0_37, ParseTreeInt_9, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_38);
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
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__prog_item__avail_import_info_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
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
    MR_Word conv1_HeadVar__2_2;

    succeeded = parse_tree__prog_item__avail_is_import_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__item_include_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(
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
  MR_Word * STATE_VARIABLE_NeedImports_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
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
      MR_Word RawItemBlock_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 1))));
      MR_Word Incls_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 2))));
      MR_Word Avails_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 3))));
      MR_Word Items_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_OrigImpTypeDefns_109_109;
      MR_Word STATE_VARIABLE_IntIncls_112_112;
      MR_Word STATE_VARIABLE_IntImports_115_115;
      MR_Word STATE_VARIABLE_IntTypeDefns_116_116;
      MR_Word STATE_VARIABLE_IntInstDefns_117_117;
      MR_Word STATE_VARIABLE_IntModeDefns_118_118;
      MR_Word STATE_VARIABLE_IntTypeClasses_119_119;
      MR_Word STATE_VARIABLE_IntInstances_120_120;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_121_121;
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_122_122;
      MR_Word STATE_VARIABLE_NeedImports_123_123;
      MR_Word STATE_VARIABLE_Specs_124_124;
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
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

      switch (Section_77) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__comp_unit_interface__gather_imp_type_defns_5_p_0(Items_81, STATE_VARIABLE_OrigImpTypeDefns_0_18, &STATE_VARIABLE_OrigImpTypeDefns_109_109, STATE_VARIABLE_ForeignEnumTypeCtors_0_20, &STATE_VARIABLE_ForeignEnumTypeCtors_122_122);
            STATE_VARIABLE_IntIncls_112_112 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImports_115_115 = STATE_VARIABLE_IntImports_0_4;
            STATE_VARIABLE_IntTypeDefns_116_116 = STATE_VARIABLE_IntTypeDefns_0_6;
            STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_8;
            STATE_VARIABLE_IntModeDefns_118_118 = STATE_VARIABLE_IntModeDefns_0_10;
            STATE_VARIABLE_IntTypeClasses_119_119 = STATE_VARIABLE_IntTypeClasses_0_12;
            STATE_VARIABLE_IntInstances_120_120 = STATE_VARIABLE_IntInstances_0_14;
            STATE_VARIABLE_OrigIntTypeDefns_121_121 = STATE_VARIABLE_OrigIntTypeDefns_0_16;
            STATE_VARIABLE_NeedImports_123_123 = STATE_VARIABLE_NeedImports_0_22;
            STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word IncludeModuleNames_82;
            MR_Word Imports_83;
            MR_Word ImportModuleNames_84;

            IncludeModuleNames_82 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Incls_78);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IncludeModuleNames_82, STATE_VARIABLE_IntIncls_0_2, &STATE_VARIABLE_IntIncls_112_112);
            mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), Avails_79, &Imports_83);
            ImportModuleNames_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Imports_83);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportModuleNames_84, STATE_VARIABLE_IntImports_0_4, &STATE_VARIABLE_IntImports_115_115);
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_19_p_0(Items_81, STATE_VARIABLE_IntTypeDefns_0_6, &STATE_VARIABLE_IntTypeDefns_116_116, STATE_VARIABLE_IntInstDefns_0_8, &STATE_VARIABLE_IntInstDefns_117_117, STATE_VARIABLE_IntModeDefns_0_10, &STATE_VARIABLE_IntModeDefns_118_118, STATE_VARIABLE_IntTypeClasses_0_12, &STATE_VARIABLE_IntTypeClasses_119_119, STATE_VARIABLE_IntInstances_0_14, &STATE_VARIABLE_IntInstances_120_120, STATE_VARIABLE_OrigIntTypeDefns_0_16, &STATE_VARIABLE_OrigIntTypeDefns_121_121, STATE_VARIABLE_ForeignEnumTypeCtors_0_20, &STATE_VARIABLE_ForeignEnumTypeCtors_122_122, STATE_VARIABLE_NeedImports_0_22, &STATE_VARIABLE_NeedImports_123_123, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_124_124);
            STATE_VARIABLE_OrigImpTypeDefns_109_109 = STATE_VARIABLE_OrigImpTypeDefns_0_18;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_63;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_112_112;
      next_value_of_STATE_VARIABLE_IntImports_0_4 = STATE_VARIABLE_IntImports_115_115;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_6 = STATE_VARIABLE_IntTypeDefns_116_116;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_8 = STATE_VARIABLE_IntInstDefns_117_117;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_10 = STATE_VARIABLE_IntModeDefns_118_118;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_12 = STATE_VARIABLE_IntTypeClasses_119_119;
      next_value_of_STATE_VARIABLE_IntInstances_0_14 = STATE_VARIABLE_IntInstances_120_120;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_16 = STATE_VARIABLE_OrigIntTypeDefns_121_121;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_18 = STATE_VARIABLE_OrigImpTypeDefns_109_109;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_20 = STATE_VARIABLE_ForeignEnumTypeCtors_122_122;
      next_value_of_STATE_VARIABLE_NeedImports_0_22 = STATE_VARIABLE_NeedImports_123_123;
      next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_124_124;
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
      STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__gather_imp_type_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

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
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_38_38;
      MR_Word STATE_VARIABLE_ImpTypeDefns_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_16 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefnInfo_16)), STATE_VARIABLE_ImpTypeDefns_0_2, &STATE_VARIABLE_ImpTypeDefns_39_39);
            STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Pragma_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_17, (MR_Integer) 0))));
                MR_Word PragmaInfoForeignEnum_47;

                succeeded = ((((MR_tag((MR_Word) Pragma_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  PragmaInfoForeignEnum_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_18, (MR_Integer) 1))));
                  {
                    MR_Word Lang_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_47, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word TypeCtor_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_47, (MR_Integer) 1))));
                    MR_Word OoMValues_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_47, (MR_Integer) 2))));
                    MR_Word TypeSymName_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_49, (MR_Integer) 0))));
                    MR_Integer TypeArity_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_49, (MR_Integer) 1))));
                    MR_String TypeName_53;
                    MR_Word UnqualTypeCtor_54;
                    MR_Word LVs0_55;
                    MR_Box conv0_LVs0_55;

                    TypeName_53 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_51);
                    {
                      UnqualTypeCtor_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), UnqualTypeCtor_54, 0) = ((MR_Box) (TypeName_53));
                      MR_hl_field(MR_mktag(0), UnqualTypeCtor_54, 1) = ((MR_Box) (TypeArity_52));
                    }
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), STATE_VARIABLE_ForeignEnumTypeCtors_0_4, ((MR_Box) (UnqualTypeCtor_54)), &conv0_LVs0_55);
                    if (succeeded)
                    {
                      LVs0_55 = ((MR_Word) (conv0_LVs0_55));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Word Var_56;
                      MR_Word Var_58;

                      {
                        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Lang_48));
                        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (OoMValues_50));
                      }
                      {
                        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_58));
                        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (LVs0_55));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_54)), ((MR_Box) (Var_56)), STATE_VARIABLE_ForeignEnumTypeCtors_0_4, &STATE_VARIABLE_ForeignEnumTypeCtors_38_38);
                    }
                    else
                    {
                      MR_Word Var_59;
                      MR_Word Var_61;

                      {
                        Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Lang_48));
                        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (OoMValues_50));
                      }
                      {
                        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_61));
                        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_54)), ((MR_Box) (Var_59)), STATE_VARIABLE_ForeignEnumTypeCtors_0_4, &STATE_VARIABLE_ForeignEnumTypeCtors_38_38);
                    }
                  }
                }
                else
                  STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_38_38 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2 = STATE_VARIABLE_ImpTypeDefns_39_39;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4 = STATE_VARIABLE_ForeignEnumTypeCtors_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpTypeDefns_0_2 = next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      STATE_VARIABLE_ForeignEnumTypeCtors_0_4 = next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_19_p_0(
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
  MR_Word * STATE_VARIABLE_NeedImports_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
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
      MR_Word Item_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_110_110;
      MR_Word STATE_VARIABLE_Specs_112_112;
      MR_Word STATE_VARIABLE_IntModeDefns_114_114;
      MR_Word STATE_VARIABLE_IntInstDefns_116_116;
      MR_Word STATE_VARIABLE_IntInstances_118_118;
      MR_Word STATE_VARIABLE_NeedImports_119_119;
      MR_Word STATE_VARIABLE_IntTypeClasses_123_123;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_124_124;
      MR_Word STATE_VARIABLE_IntTypeDefns_125_125;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntInstances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_16;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_18;

      switch (MR_tag((MR_Word) Item_47)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_76 = (MR_Word) ((MR_Word) (Item_47));
            MR_Word Spec_77;
            MR_Word Context_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_76, (MR_Integer) 6))));

            Spec_77 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_135);
            {
              STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (Spec_77));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
            }
            STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
            STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
            STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
            STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_58 = (MR_Word) (MR_body((MR_Word) (Item_47), (MR_Integer) 1));
            MR_Word AbstractOrForeignItemTypeDefnInfo_59;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefnInfo_58)), STATE_VARIABLE_OrigIntTypeDefns_0_12, &STATE_VARIABLE_OrigIntTypeDefns_124_124);
            parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(ItemTypeDefnInfo_58, &AbstractOrForeignItemTypeDefnInfo_59);
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (AbstractOrForeignItemTypeDefnInfo_59)), STATE_VARIABLE_IntTypeDefns_0_2, &STATE_VARIABLE_IntTypeDefns_125_125);
            STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
            STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
            STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstInfo_72 = (MR_Word) (MR_body((MR_Word) (Item_47), (MR_Integer) 2));
            MR_Word AbstractItemInstInfo_73;
            MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 0))));
            MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 1))));
            MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 2))));
            MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 4))));
            MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 5))));
            MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 6))));

            {
              AbstractItemInstInfo_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 0) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 1) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 2) = ((MR_Box) (Var_151));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 4) = ((MR_Box) (Var_153));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 5) = ((MR_Box) (Var_154));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 6) = ((MR_Box) (Var_155));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (AbstractItemInstInfo_73)), STATE_VARIABLE_IntInstDefns_0_4, &STATE_VARIABLE_IntInstDefns_116_116);
            STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
            STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
            STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
            STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeInfo_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word AbstractItemModeInfo_75;
                MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 0))));
                MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 1))));
                MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 3))));
                MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 4))));
                MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 5))));

                {
                  AbstractItemModeInfo_75 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 0) = ((MR_Box) (Var_156));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 1) = ((MR_Box) (Var_157));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 3) = ((MR_Box) (Var_159));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 4) = ((MR_Box) (Var_160));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 5) = ((MR_Box) (Var_161));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (AbstractItemModeInfo_75)), STATE_VARIABLE_IntModeDefns_0_6, &STATE_VARIABLE_IntModeDefns_114_114);
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word Pragma_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_78, (MR_Integer) 0))));
                MR_Word AllowedInInterface_82;
                MR_Word Context_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_78, (MR_Integer) 2))));

                AllowedInInterface_82 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_79);
                switch (AllowedInInterface_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_136;

                      Spec_136 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_138);
                      {
                        STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (Spec_136));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
                    break;
                }
                parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(Pragma_79, STATE_VARIABLE_ForeignEnumTypeCtors_0_14, &STATE_VARIABLE_ForeignEnumTypeCtors_110_110);
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word ClassName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_60, (MR_Integer) 0))));
                MR_Word ParamsTVars_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_60, (MR_Integer) 1))));
                MR_Word TVarSet_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_60, (MR_Integer) 5))));
                MR_Word Context_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_60, (MR_Integer) 6))));
                MR_Integer SeqNum_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_60, (MR_Integer) 7))));
                MR_Word AbstractItemTypeClassInfo_69;

                {
                  AbstractItemTypeClassInfo_69 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 0) = ((MR_Box) (ClassName_61));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 1) = ((MR_Box) (ParamsTVars_62));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 5) = ((MR_Box) (TVarSet_66));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 6) = ((MR_Box) (Context_67));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_69, 7) = ((MR_Box) (SeqNum_68));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractItemTypeClassInfo_69)), STATE_VARIABLE_IntTypeClasses_0_8, &STATE_VARIABLE_IntTypeClasses_123_123);
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_71;
                MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 0))));
                MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 1))));
                MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 2))));
                MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 3))));
                MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 5))));
                MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 6))));
                MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 7))));
                MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_71 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 0) = ((MR_Box) (Var_140));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 1) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 2) = ((MR_Box) (Var_142));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 3) = ((MR_Box) (Var_143));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 5) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 6) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 7) = ((MR_Box) (Var_147));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 8) = ((MR_Box) (Var_148));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractItemInstanceInfo_71)), STATE_VARIABLE_IntInstances_0_10, &STATE_VARIABLE_IntInstances_118_118);
                STATE_VARIABLE_NeedImports_119_119 = (MR_Integer) 1;
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_IntTypeDefns_125_125 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_114_114 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_123_123 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_118_118 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_124_124 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_110_110 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_119_119 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_18;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_48;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_2 = STATE_VARIABLE_IntTypeDefns_125_125;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_4 = STATE_VARIABLE_IntInstDefns_116_116;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_6 = STATE_VARIABLE_IntModeDefns_114_114;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_8 = STATE_VARIABLE_IntTypeClasses_123_123;
      next_value_of_STATE_VARIABLE_IntInstances_0_10 = STATE_VARIABLE_IntInstances_118_118;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12 = STATE_VARIABLE_OrigIntTypeDefns_124_124;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14 = STATE_VARIABLE_ForeignEnumTypeCtors_110_110;
      next_value_of_STATE_VARIABLE_NeedImports_0_16 = STATE_VARIABLE_NeedImports_119_119;
      next_value_of_STATE_VARIABLE_Specs_0_18 = STATE_VARIABLE_Specs_112_112;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntTypeDefns_0_2 = next_value_of_STATE_VARIABLE_IntTypeDefns_0_2;
      STATE_VARIABLE_IntInstDefns_0_4 = next_value_of_STATE_VARIABLE_IntInstDefns_0_4;
      STATE_VARIABLE_IntModeDefns_0_6 = next_value_of_STATE_VARIABLE_IntModeDefns_0_6;
      STATE_VARIABLE_IntTypeClasses_0_8 = next_value_of_STATE_VARIABLE_IntTypeClasses_0_8;
      STATE_VARIABLE_IntInstances_0_10 = next_value_of_STATE_VARIABLE_IntInstances_0_10;
      STATE_VARIABLE_OrigIntTypeDefns_0_12 = next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12;
      STATE_VARIABLE_ForeignEnumTypeCtors_0_14 = next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
      STATE_VARIABLE_NeedImports_0_16 = next_value_of_STATE_VARIABLE_NeedImports_0_16;
      STATE_VARIABLE_Specs_0_18 = next_value_of_STATE_VARIABLE_Specs_0_18;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0(
  MR_String ClauseOrPragma_4,
  MR_Word Context_5)
{
  {
    MR_Word Spec_6;
    MR_Word Pieces_7;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (ClauseOrPragma_4));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_2[16])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[14])));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Pieces_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_18));
    }
    return Spec_6;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(
  MR_Word Pragma_4,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_16)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Pragma_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word PragmaInfoForeignEnum_6;

    if (succeeded)
    {
      PragmaInfoForeignEnum_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_4, (MR_Integer) 1))));
      {
        MR_Word Lang_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_6, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word TypeCtor_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_6, (MR_Integer) 1))));
        MR_Word OoMValues_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_6, (MR_Integer) 2))));
        MR_Word TypeSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 0))));
        MR_Integer TypeArity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));
        MR_String TypeName_12;
        MR_Word UnqualTypeCtor_13;
        MR_Word LVs0_14;
        MR_Box conv0_LVs0_14;

        TypeName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_10);
        {
          UnqualTypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UnqualTypeCtor_13, 0) = ((MR_Box) (TypeName_12));
          MR_hl_field(MR_mktag(0), UnqualTypeCtor_13, 1) = ((MR_Box) (TypeArity_11));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), STATE_VARIABLE_ForeignEnumTypeCtors_0_15, ((MR_Box) (UnqualTypeCtor_13)), &conv0_LVs0_14);
        if (succeeded)
        {
          LVs0_14 = ((MR_Word) (conv0_LVs0_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_17;
          MR_Word Var_19;

          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Lang_7));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (OoMValues_9));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (LVs0_14));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_13)), ((MR_Box) (Var_17)), STATE_VARIABLE_ForeignEnumTypeCtors_0_15, STATE_VARIABLE_ForeignEnumTypeCtors_16);
        }
        else
        {
          MR_Word Var_20;
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Lang_7));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (OoMValues_9));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_13)), ((MR_Box) (Var_20)), STATE_VARIABLE_ForeignEnumTypeCtors_0_15, STATE_VARIABLE_ForeignEnumTypeCtors_16);
        }
      }
    }
    else
      *STATE_VARIABLE_ForeignEnumTypeCtors_16 = STATE_VARIABLE_ForeignEnumTypeCtors_0_15;
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
parse_tree__comp_unit_interface____Unify____foreign_enum_reconstructor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____foreign_enum_reconstructor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____foreign_enum_reconstructor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____foreign_enum_reconstructor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_need_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____maybe_need_foreign_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____maybe_need_foreign_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_need_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____maybe_need_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_need_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____maybe_need_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_need_foreign_imports_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_need_imports_0);
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
