/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2019-05-21
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.check_raw_comp_unit.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5;
  MR_bool parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34;
  jmp_buf parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_37;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_38;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Ctors_39;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_40;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_41;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_59;
  MR_Box parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_36;
};

struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8;
  MR_bool parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30;
  jmp_buf parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_33;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_34;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Ctors_35;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_36;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_37;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Var_55;
  MR_Box parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_32;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_foreign_enum_reconstructor_0_0[4];

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

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_avails_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_avails_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_avails_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__find_need_imports__1805__1_2_p_0(
  MR_Word NeedForeignImportLangs1_10,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_13);

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
parse_tree__comp_unit_interface____Compare____need_avails_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_avails_0_0(
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
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_LangSet_0_7,
  MR_Word * STATE_VARIABLE_LangSet_8);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word TypeInfo_for_MS_15,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_LangSet_0_11,
  MR_Word * STATE_VARIABLE_LangSet_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Items_0_8,
  MR_Word * STATE_VARIABLE_Items_9);

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_import_item_3_p_0(
  MR_Word FIMInfo_4,
  MR_Word STATE_VARIABLE_Items_0_7,
  MR_Word * STATE_VARIABLE_Items_8);

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumReconstuctor_8,
  MR_Word STATE_VARIABLE_Items_0_30,
  MR_Word * STATE_VARIABLE_Items_31,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_32,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_33);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__is_needed_avail_2_p_0(
  MR_Word NeededModules_3,
  MR_Word Avail_4);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__is_pure_abstract_type_defn_1_p_0(
  MR_Word ImpItemTypeDefnInfo_2);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_7_p_0(
  MR_Word BothTypesMap_8,
  MR_Word IntTypesMap_9,
  MR_Word NeededTypeCtors_10,
  MR_Word TypeCtor_11,
  MR_Word ImpItemTypeDefnInfos_12,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_15,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_16);

static void MR_CALL 
parse_tree__comp_unit_interface__add_type_defn_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0(
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
  MR_Word STATE_VARIABLE_DummyTypeCtors_0_26,
  MR_Word * STATE_VARIABLE_DummyTypeCtors_27);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_2_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_38,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_39,
  MR_Word STATE_VARIABLE_DummyTypeCtors_0_40,
  MR_Word * STATE_VARIABLE_DummyTypeCtors_41);

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
  MR_Word Ctors_6,
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
  MR_Word HeadVar__2_2,
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
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_interface_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_in_raw_item_blocks_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IFileItemBlocksCord_0_2,
  MR_Word * STATE_VARIABLE_IFileItemBlocksCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_in_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IFileItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IFileItemsCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(
  MR_Word Int1Items_3,
  MR_Word * Int2Items_4);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__strip_unneeded_imp_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__strip_unneeded_imp_avails_3_p_0(
  MR_Word NeededModules_4,
  MR_Word STATE_VARIABLE_Avails_0_6,
  MR_Word * STATE_VARIABLE_Avails_7);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_5_p_0(
  MR_Word MaybeForeignItems_6,
  MR_Word NotForeignItems_7,
  MR_Word * STATE_VARIABLE_NeedImports_11,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_12,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_13);

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedImports_0_2,
  MR_Word * STATE_VARIABLE_NeedImports_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_6,
  MR_Word * STATE_VARIABLE_IntAvailsCord_7,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_9,
  MR_Word STATE_VARIABLE_IntItemsCord_0_10,
  MR_Word * STATE_VARIABLE_IntItemsCord_11,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpItemsCord_13,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_14,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_15,
  MR_Word STATE_VARIABLE_IntFIMsCord_0_16,
  MR_Word * STATE_VARIABLE_IntFIMsCord_17,
  MR_Word STATE_VARIABLE_ImpFIMsCord_0_18,
  MR_Word * STATE_VARIABLE_ImpFIMsCord_19,
  MR_Word STATE_VARIABLE_IntTypesMap_0_20,
  MR_Word * STATE_VARIABLE_IntTypesMap_21,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_22,
  MR_Word * STATE_VARIABLE_ImpTypesMap_23,
  MR_Word STATE_VARIABLE_NeededModules_0_24,
  MR_Word * STATE_VARIABLE_NeededModules_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_5,
  MR_Word STATE_VARIABLE_FIMsCord_0_6,
  MR_Word * STATE_VARIABLE_FIMsCord_7,
  MR_Word STATE_VARIABLE_TypesMap_0_8,
  MR_Word * STATE_VARIABLE_TypesMap_9,
  MR_Word STATE_VARIABLE_NeededModules_0_10,
  MR_Word * STATE_VARIABLE_NeededModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3,
  MR_Word STATE_VARIABLE_FIMsCord_0_4,
  MR_Word * STATE_VARIABLE_FIMsCord_5,
  MR_Word STATE_VARIABLE_TypesMap_0_6,
  MR_Word * STATE_VARIABLE_TypesMap_7,
  MR_Word STATE_VARIABLE_NeededModules_0_8,
  MR_Word * STATE_VARIABLE_NeededModules_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_6,
  MR_Word * STATE_VARIABLE_IntAvailsCord_7,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_9,
  MR_Word STATE_VARIABLE_IntItemsCord_0_10,
  MR_Word * STATE_VARIABLE_IntItemsCord_11,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpItemsCord_13);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_imp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_14_p_0(
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
  MR_Word STATE_VARIABLE_IntItemsCord_0_11,
  MR_Word * STATE_VARIABLE_IntItemsCord_12,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_13,
  MR_Word * STATE_VARIABLE_ImpItemsCord_14);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SectionItemsCord_0_3,
  MR_Word * STATE_VARIABLE_SectionItemsCord_4);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntAvails_0_4,
  MR_Word * STATE_VARIABLE_IntAvails_5,
  MR_Word STATE_VARIABLE_IntItems_0_6,
  MR_Word * STATE_VARIABLE_IntItems_7,
  MR_Word STATE_VARIABLE_NeedAvails_0_8,
  MR_Word * STATE_VARIABLE_NeedAvails_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItems_0_2,
  MR_Word * STATE_VARIABLE_IntItems_3,
  MR_Word STATE_VARIABLE_NeedAvails_0_4,
  MR_Word * STATE_VARIABLE_NeedAvails_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0(
  MR_String ClauseOrPragma_4,
  MR_Word Context_5);

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
parse_tree__comp_unit_interface____Unify____need_avails_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_avails_0_0_10001(
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


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[12][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[16][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[3][4];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[6][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][10];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][9];

static /* final */ const MR_Integer parse_tree__comp_unit_interface_scalar_common_12[1][2];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1)),
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][9] = {
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

static /* final */ const MR_Integer parse_tree__comp_unit_interface_scalar_common_12[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_foreign_enum_reconstructor_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_enum_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_maybe_attrs_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_foreign_enum_reconstructor_0_0 = {
  (MR_String) "foreign_enum_reconstructor",
  INT16_C(4),
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

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0 = {
  (MR_String) "do_not_need_avails",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1 = {
  (MR_String) "do_need_avails",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_avails_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_avails_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_1,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_avails_0_0
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_avails_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_avails_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____need_avails_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____need_avails_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "need_avails",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_avails_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_avails_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_avails_0
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
parse_tree__comp_unit_interface__IntroducedFrom__pred__find_need_imports__1805__1_2_p_0(
  MR_Word NeedForeignImportLangs1_10,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_13)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NeedForeignImportLangs1_10, STATE_VARIABLE_NeedForeignImportLangs_13);
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
parse_tree__comp_unit_interface____Compare____need_avails_0_0(
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
parse_tree__comp_unit_interface____Unify____need_avails_0_0(
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
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      parse_tree__prog_item____Compare____pragma_info_foreign_enum_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_item____Compare____item_maybe_attrs_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__term____Compare____context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
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
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = parse_tree__prog_item____Unify____pragma_info_foreign_enum_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_LangSet_0_7,
  MR_Word * STATE_VARIABLE_LangSet_8)
{
  {
    MR_Word Langs_6;

    Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(Item_4);
    mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_6, STATE_VARIABLE_LangSet_0_7, STATE_VARIABLE_LangSet_8);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_8;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word TypeInfo_for_MS_15,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_LangSet_0_11,
  MR_Word * STATE_VARIABLE_LangSet_12)
{
  {
    MR_Word Items_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_4, (MR_Integer) 4))));
    MR_Box conv1_STATE_VARIABLE_LangSet_12;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[15]), Items_10, ((MR_Box) (STATE_VARIABLE_LangSet_0_11)), &conv1_STATE_VARIABLE_LangSet_12);
    *STATE_VARIABLE_LangSet_12 = ((MR_Word) (conv1_STATE_VARIABLE_LangSet_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_foreign_import_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Items_0_8,
  MR_Word * STATE_VARIABLE_Items_9)
{
  {
    MR_Word Var_11;
    MR_Word ItemFIM_15;
    MR_Word Var_16;

    Var_16 = mercury__term__context_init_0_f_0();
    {
      ItemFIM_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemFIM_15, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), ItemFIM_15, 1) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ItemFIM_15, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), ItemFIM_15, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (ItemFIM_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Items_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Items_0_8));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_import_item_3_p_0(
  MR_Word FIMInfo_4,
  MR_Word STATE_VARIABLE_Items_0_7,
  MR_Word * STATE_VARIABLE_Items_8)
{
  {
    MR_Word Item_6;

    {
      Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_6, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Item_6, 1) = ((MR_Box) (FIMInfo_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Items_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Item_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Items_0_7));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumReconstuctor_8,
  MR_Word STATE_VARIABLE_Items_0_30,
  MR_Word * STATE_VARIABLE_Items_31,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_32,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_33)
{
  {
    MR_bool succeeded;
    MR_Word FEInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumReconstuctor_8, (MR_Integer) 0))));
    MR_Word MaybeAttrs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumReconstuctor_8, (MR_Integer) 1))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumReconstuctor_8, (MR_Integer) 2))));
    MR_Integer SeqNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForeignEnumReconstuctor_8, (MR_Integer) 3))));
    MR_Word TypeCtor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_11, (MR_Integer) 1))));
    MR_Word Defns_18;
    MR_Box conv0_Defns_18;
    MR_Word Defn_19;
    MR_Word Body_22;
    MR_Word Var_34;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), IntTypesMap_7, ((MR_Box) (TypeCtor_16)), &conv0_Defns_18);
    if (succeeded)
    {
      Defns_18 = ((MR_Word) (conv0_Defns_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Defns_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Defn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defns_18, (MR_Integer) 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defns_18, (MR_Integer) 1))));
        succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Body_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_19, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) Body_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
        }
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Pragma_27;
      MR_Word ItemPragmaInfo_28;
      MR_Word Item_29;
      MR_Word Var_36;

      {
        Pragma_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Pragma_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Pragma_27, 1) = ((MR_Box) (FEInfo_11));
      }
      {
        ItemPragmaInfo_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_28, 0) = ((MR_Box) (Pragma_27));
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_28, 1) = ((MR_Box) (MaybeAttrs_12));
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_28, 2) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(0), ItemPragmaInfo_28, 3) = ((MR_Box) (SeqNum_14));
      }
      {
        Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_29, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Item_29, 1) = ((MR_Box) (ItemPragmaInfo_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Items_31 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Item_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Items_0_30));
      }
      Var_36 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_27);
      mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_36, STATE_VARIABLE_NeedForeignImportLangs_0_32, STATE_VARIABLE_NeedForeignImportLangs_33);
    }
    else
    {
      *STATE_VARIABLE_NeedForeignImportLangs_33 = STATE_VARIABLE_NeedForeignImportLangs_0_32;
      *STATE_VARIABLE_Items_31 = STATE_VARIABLE_Items_0_30;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__is_needed_avail_2_p_0(
  MR_Word NeededModules_3,
  MR_Word Avail_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_5;

    ModuleName_5 = parse_tree__prog_item__item_avail_module_name_1_f_0(Avail_4);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_5)), NeededModules_3);
    return succeeded;
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
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_7_p_0_1(
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
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_7_p_0(
  MR_Word BothTypesMap_8,
  MR_Word IntTypesMap_9,
  MR_Word NeededTypeCtors_10,
  MR_Word TypeCtor_11,
  MR_Word ImpItemTypeDefnInfos_12,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_15,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_16)
{
  {
    MR_bool succeeded;
    MR_Word AbstractImpItemTypeDefnInfos_14;
    MR_Word TypeCtorInfo_20_20;
    MR_Word Var_17;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededTypeCtors_10);
    if (succeeded)
    {
      if ((ImpItemTypeDefnInfos_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.make_imp_type_abstract\'/3", (MR_String) "!.ImpItemTypeDefnInfos = []");
          return;
        }
      }
      else
      {
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItemTypeDefnInfos_12, (MR_Integer) 1))));
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItemTypeDefnInfos_12, (MR_Integer) 0))));

        if ((Var_60 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeDefn0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) TypeDefn0_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DetailsDu0_33 = (MR_Word) ((MR_Word) (TypeDefn0_29));
                MR_Word Ctors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_33, (MR_Integer) 0))));
                MR_Word MaybeEqCmp_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_33, (MR_Integer) 1))));
                MR_Word MaybeDirectArgCtors_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_33, (MR_Integer) 2))));

                succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0(BothTypesMap_8, Ctors_34, MaybeEqCmp_35, MaybeDirectArgCtors_36);
                if (succeeded)
                  AbstractImpItemTypeDefnInfos_14 = ImpItemTypeDefnInfos_12;
                else
                {
                  MR_Word DetailsAbs_38;
                  MR_Word TypeDefn_39;
                  MR_Word ImpItemTypeDefnInfo_40;
                  MR_Integer NumBits_37;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_57;
                  MR_Word Var_58;
                  MR_Integer Var_59;

                  succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu0_33, &NumBits_37);
                  if (succeeded)
                    {
                      DetailsAbs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DetailsAbs_38, 0) = ((MR_Box) (NumBits_37));
                    }
                  else
                    DetailsAbs_38 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    TypeDefn_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), TypeDefn_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), TypeDefn_39, 1) = ((MR_Box) (DetailsAbs_38));
                  }
                  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
                  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1))));
                  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 3))));
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 4))));
                  Var_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 5))));
                  {
                    ImpItemTypeDefnInfo_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_40, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_40, 1) = ((MR_Box) (Var_55));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_40, 2) = ((MR_Box) (TypeDefn_39));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_40, 3) = ((MR_Box) (Var_57));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_40, 4) = ((MR_Box) (Var_58));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_40, 5) = ((MR_Box) (Var_59));
                  }
                  {
                    AbstractImpItemTypeDefnInfos_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_14, 0) = ((MR_Box) (ImpItemTypeDefnInfo_40));
                    MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              AbstractImpItemTypeDefnInfos_14 = ImpItemTypeDefnInfos_12;
              break;
            case (MR_Integer) 2:
              AbstractImpItemTypeDefnInfos_14 = ImpItemTypeDefnInfos_12;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_29, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  AbstractImpItemTypeDefnInfos_14 = ImpItemTypeDefnInfos_12;
                  break;
                case (MR_Integer) 1:
                  AbstractImpItemTypeDefnInfos_14 = ImpItemTypeDefnInfos_12;
                  break;
              }
              break;
          }
        }
        else
          AbstractImpItemTypeDefnInfos_14 = ImpItemTypeDefnInfos_12;
      }
      TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0);
      succeeded = mercury__multi_map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtorInfo_20_20, IntTypesMap_9, ((MR_Box) (TypeCtor_11)));
      if (succeeded)
      {
        Var_17 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_20_20, Var_17, AbstractImpItemTypeDefnInfos_14);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ImpItemTypeDefnInfo_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_14, (MR_Integer) 0))));
      MR_Word ImpItemTypeDefnInfos_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_14, (MR_Integer) 1))));
      MR_Word ImpTypeDefnItem_68 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ImpItemTypeDefnInfo_65)));
      MR_Word STATE_VARIABLE_ImpTypeDefnItems_13_71;

      {
        STATE_VARIABLE_ImpTypeDefnItems_13_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpTypeDefnItems_13_71, 0) = ((MR_Box) (ImpTypeDefnItem_68));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpTypeDefnItems_13_71, 1) = ((MR_Box) (STATE_VARIABLE_ImpTypeDefnItems_0_15));
      }
      parse_tree__comp_unit_interface__add_type_defn_items_3_p_0(ImpItemTypeDefnInfos_66, STATE_VARIABLE_ImpTypeDefnItems_13_71, STATE_VARIABLE_ImpTypeDefnItems_16);
    }
    else
      *STATE_VARIABLE_ImpTypeDefnItems_16 = STATE_VARIABLE_ImpTypeDefnItems_0_15;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_type_defn_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefnItems_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefnItems_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImpTypeDefnItems_3 = STATE_VARIABLE_ImpTypeDefnItems_0_2;
    else
    {
      MR_Word ImpItemTypeDefnInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImpItemTypeDefnInfos_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ImpTypeDefnItem_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ImpItemTypeDefnInfo_7)));
      MR_Word STATE_VARIABLE_ImpTypeDefnItems_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefnItems_0_2;

      {
        STATE_VARIABLE_ImpTypeDefnItems_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpTypeDefnItems_13_13, 0) = ((MR_Box) (ImpTypeDefnItem_10));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpTypeDefnItems_13_13, 1) = ((MR_Box) (STATE_VARIABLE_ImpTypeDefnItems_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImpItemTypeDefnInfos_8;
      next_value_of_STATE_VARIABLE_ImpTypeDefnItems_0_2 = STATE_VARIABLE_ImpTypeDefnItems_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpTypeDefnItems_0_2 = next_value_of_STATE_VARIABLE_ImpTypeDefnItems_0_2;
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
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
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
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
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
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
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
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0(
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
          MR_Word Ctors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_25, (MR_Integer) 0))));
          MR_Word Var_38;
          MR_Word RhsTypeCtors_50;
          MR_Box conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37;

          Var_38 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Ctors_26, Var_38, &RhsTypeCtors_50);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_50, STATE_VARIABLE_DuArgTypeCtors_0_34, STATE_VARIABLE_DuArgTypeCtors_35);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[12]), RhsTypeCtors_50, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
              MR_Word Var_42;
              MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_43_43;
              MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_45_45;
              MR_Word Var_46;
              MR_Word Var_48;
              MR_Box conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_45_45;
              MR_Box conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33;
              MR_Box conv8_Var_24;
              MR_Box conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37;

              Var_42 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(RhsType_21, Var_42, &RhsTypeCtors_22);
              mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32, &NewRhsTypeCtors_23);
              mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32, &STATE_VARIABLE_AbsExpEqvRhsTypeCtors_43_43);
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_45_45);
              STATE_VARIABLE_ModulesNeededByTypeDefns_45_45 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_45_45));
              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ImpTypesMap_9));
              }
              Var_48 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_46, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_43_43)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Box) (Var_48)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_45_45)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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

    parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_DuArgTypeCtors_35, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
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
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
    MR_Word conv0_STATE_VARIABLE_DummyTypeCtors_41;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_2_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_39, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DummyTypeCtors_41);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_39));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DummyTypeCtors_41));
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
  MR_Word STATE_VARIABLE_DummyTypeCtors_0_26,
  MR_Word * STATE_VARIABLE_DummyTypeCtors_27)
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
      parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_2_10_p_0(IntTypesMap_11, BothTypesMap_12, TypeCtor_13, Var_49, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, STATE_VARIABLE_AbsExpEnumTypeCtors_0_24, STATE_VARIABLE_AbsExpEnumTypeCtors_25, STATE_VARIABLE_DummyTypeCtors_0_26, STATE_VARIABLE_DummyTypeCtors_27);
    else
    {
      MR_Word Var_29;
      MR_Box conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
      MR_Box conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
      MR_Box conv3_STATE_VARIABLE_DummyTypeCtors_27;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (IntTypesMap_11));
        MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (BothTypesMap_12));
        MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (TypeCtor_13));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), Var_29, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DummyTypeCtors_27);
      *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23 = ((MR_Word) (conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
      *STATE_VARIABLE_AbsExpEnumTypeCtors_25 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
      *STATE_VARIABLE_DummyTypeCtors_27 = ((MR_Word) (conv3_STATE_VARIABLE_DummyTypeCtors_27));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_2_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_38,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_39,
  MR_Word STATE_VARIABLE_DummyTypeCtors_0_40,
  MR_Word * STATE_VARIABLE_DummyTypeCtors_41)
{
  {
    MR_bool succeeded;
    MR_Word ImpTypeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_14, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ImpTypeDefn_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (ImpTypeDefn_20));
          MR_Word Ctors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 0))));
          MR_Word MaybeEqCmp_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 2))));
          MR_Box conv0_Var_32;
          MR_Integer _NumBits_33;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_32);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_28, &_NumBits_33);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEnumTypeCtors_0_38, STATE_VARIABLE_AbsExpEnumTypeCtors_39);
            *STATE_VARIABLE_DummyTypeCtors_41 = STATE_VARIABLE_DummyTypeCtors_0_40;
          }
          else
          {
            succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0(BothTypesMap_12, Ctors_29, MaybeEqCmp_30, MaybeDirectArgCtors_31);
            if (succeeded)
            {
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_DummyTypeCtors_0_40, STATE_VARIABLE_DummyTypeCtors_41);
            }
            else
              *STATE_VARIABLE_DummyTypeCtors_41 = STATE_VARIABLE_DummyTypeCtors_0_40;
            *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
          }
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
          *STATE_VARIABLE_DummyTypeCtors_41 = STATE_VARIABLE_DummyTypeCtors_0_40;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box conv2_Var_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv2_Var_27);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37);
          }
          else
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
          *STATE_VARIABLE_DummyTypeCtors_41 = STATE_VARIABLE_DummyTypeCtors_0_40;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv1_Var_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_25);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
              {
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37);
              }
              else
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
              *STATE_VARIABLE_DummyTypeCtors_41 = STATE_VARIABLE_DummyTypeCtors_0_40;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
              *STATE_VARIABLE_DummyTypeCtors_41 = STATE_VARIABLE_DummyTypeCtors_0_40;
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

    (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_36));
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
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 0))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 1))));
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Integer Var_65;

      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 2))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 3))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 4))));
      Var_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_37)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_38 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_37));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Ctors_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_38, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_38, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_38, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_59 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9));
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Ctors_39, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_40, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_41, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_59);
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
          MR_Word ItemTypeDefnInfos_35;

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34)), &ItemTypeDefnInfos_35);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_36, ItemTypeDefnInfos_35, parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_3, env_ptr);
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
  MR_Word Ctors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5 = TypeDefnMap_5;
    {
      MR_Word Ctor_12;
      MR_Word MaybeExistConstraints_14;
      MR_Word CtorArgs_16;
      MR_Word Var_22;
      uint32_t _Ordinal_13;
      MR_Word _Name_15;
      MR_Integer _Arity_17;
      MR_Word _Context_18;

      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeCanonical_7 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
      {
        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeDirectArgCtors_8 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
        {
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9 = (MR_Word) ((MR_Unsigned) 0U);
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Ctors_6 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
          {
            Ctor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_6, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_6, (MR_Integer) 1))));
            (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
            {
              _Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
              MaybeExistConstraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1))));
              _Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2))));
              CtorArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3))));
              _Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4))));
              _Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5))));
              (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeExistConstraints_14 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
              {
                if ((CtorArgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_16, (MR_Integer) 0))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_16, (MR_Integer) 1))));
                  MR_Word Var_19;
                  MR_Word Var_21;

                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                  if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                  {
                    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
                    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2))));
                    if (((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20)) == (MR_Integer) 1))
                    {
                      MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 0))));
                      MR_Word TypeArgs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 1))));
                      MR_Word _Kind_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 2))));

                      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20)), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9);
                      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_FALSE;
                      else
                      {
                        MR_Integer Arity_33;

                        Arity_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_31);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_30));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_33));
                        }
                        {
                          MR_Word Var_60;

                          Var_60 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34);
                          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_60 == (MR_Integer) 0);
                        }
                        if (!((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded))
                        {
                          parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_4(&env);
                        }
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 0)))) == (MR_Integer) 3))))
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

    (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_32));
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
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 0))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 1))));
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Integer Var_61;

      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 2))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 3))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 4))));
      Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_33)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_34 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_33));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Ctors_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_34, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_34, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_34, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Var_55 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8));
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Ctors_35, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_36, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_37, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Var_55);
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
          MR_Word ItemTypeDefnInfos_31;

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30)), &ItemTypeDefnInfos_31);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_32, ItemTypeDefnInfos_31, parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_3, env_ptr);
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
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CoveredTypes_8)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8 = CoveredTypes_8;
    {
      MR_Word Ctor_7;
      MR_Word MaybeExistConstraints_10;
      MR_Word CtorArgs_12;
      MR_Word Var_18;
      uint32_t _Ordinal_9;
      MR_Word _Name_11;
      MR_Integer _Arity_13;
      MR_Word _Context_14;

      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
      {
        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
        {
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
          {
            Ctor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
            {
              _Ordinal_9 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 0)));
              MaybeExistConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 1))));
              _Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 2))));
              CtorArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
              _Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4))));
              _Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 5))));
              (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (MaybeExistConstraints_10 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
              {
                if ((CtorArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_12, (MR_Integer) 0))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_12, (MR_Integer) 1))));
                  MR_Word Var_15;
                  MR_Word Var_17;

                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
                  if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                  {
                    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
                    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
                    if (((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16)) == (MR_Integer) 1))
                    {
                      MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 0))));
                      MR_Word TypeArgs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 1))));
                      MR_Word _Kind_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 2))));

                      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16)), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8);
                      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_FALSE;
                      else
                      {
                        MR_Integer Arity_29;

                        Arity_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_27);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_26));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_29));
                        }
                        {
                          MR_Word Var_56;

                          Var_56 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30);
                          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_56 == (MR_Integer) 0);
                        }
                        if (!((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded))
                        {
                          parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_4(&env);
                        }
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_12;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_12));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0(
  MR_Word TypeInfo_for_MS_8,
  MR_Word ItemBlocks_3,
  MR_Word * Langs_4)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word LangSet_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Box conv1_LangSet_5;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_foreign_self_imports_from_item_blocks_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_MS_8));
    }
    Var_7 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_MS_8));
    }
    mercury__list__foldl_4_p_0(TypeInfo_14_14, (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (Var_6), (MR_Word) (ItemBlocks_3), ((MR_Box) (Var_7)), &conv1_LangSet_5);
    LangSet_5 = ((MR_Word) (conv1_LangSet_5));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_5, Langs_4);
  }
}

MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  {
    MR_Word Item_6;
    MR_Word ItemFIM_7;
    MR_Word Var_8;

    Var_8 = mercury__term__context_init_0_f_0();
    {
      ItemFIM_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemFIM_7, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), ItemFIM_7, 1) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), ItemFIM_7, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), ItemFIM_7, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_6, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Item_6, 1) = ((MR_Box) (ItemFIM_7));
    }
    return Item_6;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_interface_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Item_6;

    conv2_Item_6 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Item_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_12;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_12));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__get_interface_2_p_0(
  MR_Word RawCompUnit_3,
  MR_Word * InterfaceRawCompUnit_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 1))));
    MR_Word RawItemBlocks_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 2))));
    MR_Word IFileItemBlocksCord_8;
    MR_Word IFileItemBlocks0_9;
    MR_Word IFileItemBlocks_10;
    MR_Word Var_11;
    MR_Word LangSet_24;
    MR_Word Langs_25;
    MR_Word Var_31;
    MR_Box conv1_LangSet_24;

    Var_11 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]));
    parse_tree__comp_unit_interface__get_ifile_in_raw_item_blocks_acc_3_p_0(RawItemBlocks_7, Var_11, &IFileItemBlocksCord_8);
    IFileItemBlocks0_9 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), IFileItemBlocksCord_8);
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_4[1]), IFileItemBlocks0_9, ((MR_Box) (Var_31)), &conv1_LangSet_24);
    LangSet_24 = ((MR_Word) (conv1_LangSet_24));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_24, &Langs_25);
    if ((Langs_25 == (MR_Word) ((MR_Unsigned) 0U)))
      IFileItemBlocks_10 = IFileItemBlocks0_9;
    else
    {
      MR_Word ImportItems_28;
      MR_Word ImportItemBlock_29;
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_interface_2_p_0_2));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ModuleName_5));
      }
      ImportItems_28 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_32, Langs_25);
      {
        ImportItemBlock_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImportItemBlock_29, 0) = ((MR_Box) (ModuleName_5));
        MR_hl_field(MR_mktag(0), ImportItemBlock_29, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ImportItemBlock_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImportItemBlock_29, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImportItemBlock_29, 4) = ((MR_Box) (ImportItems_28));
      }
      {
        IFileItemBlocks_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IFileItemBlocks_10, 0) = ((MR_Box) (ImportItemBlock_29));
        MR_hl_field(MR_mktag(1), IFileItemBlocks_10, 1) = ((MR_Box) (IFileItemBlocks0_9));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *InterfaceRawCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IFileItemBlocks_10));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_in_raw_item_blocks_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IFileItemBlocksCord_0_2,
  MR_Word * STATE_VARIABLE_IFileItemBlocksCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IFileItemBlocksCord_3 = STATE_VARIABLE_IFileItemBlocksCord_0_2;
    else
    {
      MR_Word RawItemBlock_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 0))));
      MR_Word Section_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 1))));
      MR_Word Incls_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 2))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 3))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_IFileItemBlocksCord_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_2;

      switch (Section_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_IFileItemBlocksCord_23_23 = STATE_VARIABLE_IFileItemBlocksCord_0_2;
          break;
        case (MR_Integer) 0:
          {
            MR_Word IFileItemsCord_17;
            MR_Word IFileItems_18;
            MR_Word Var_22;

            Var_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
            parse_tree__comp_unit_interface__get_ifile_in_items_acc_3_p_0(Items_14, Var_22, &IFileItemsCord_17);
            IFileItems_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IFileItemsCord_17);
            succeeded = (Incls_12 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Avails_13 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = (IFileItems_18 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              STATE_VARIABLE_IFileItemBlocksCord_23_23 = STATE_VARIABLE_IFileItemBlocksCord_0_2;
            else
            {
              MR_Word IFileItemBlock_19;

              {
                IFileItemBlock_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), IFileItemBlock_19, 0) = ((MR_Box) (ModuleName_10));
                MR_hl_field(MR_mktag(0), IFileItemBlock_19, 1) = ((MR_Box) (Section_11));
                MR_hl_field(MR_mktag(0), IFileItemBlock_19, 2) = ((MR_Box) (Incls_12));
                MR_hl_field(MR_mktag(0), IFileItemBlock_19, 3) = ((MR_Box) (Avails_13));
                MR_hl_field(MR_mktag(0), IFileItemBlock_19, 4) = ((MR_Box) (IFileItems_18));
              }
              STATE_VARIABLE_IFileItemBlocksCord_23_23 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), STATE_VARIABLE_IFileItemBlocksCord_0_2, ((MR_Box) (IFileItemBlock_19)));
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_8;
      next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_2 = STATE_VARIABLE_IFileItemBlocksCord_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IFileItemBlocksCord_0_2 = next_value_of_STATE_VARIABLE_IFileItemBlocksCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_ifile_in_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IFileItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IFileItemsCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IFileItemsCord_3 = STATE_VARIABLE_IFileItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IFileItemsCord_15_15;
      MR_Word ItemInstance_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IFileItemsCord_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        ItemInstance_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        {
          MR_Word AbstractItemInstance_11;
          MR_Word AbstractItem_12;

          AbstractItemInstance_11 = parse_tree__item_util__make_instance_abstract_1_f_0(ItemInstance_10);
          {
            AbstractItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AbstractItem_12, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), AbstractItem_12, 1) = ((MR_Box) (AbstractItemInstance_11));
          }
          STATE_VARIABLE_IFileItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_2, ((MR_Box) (AbstractItem_12)));
        }
      }
      else
      {
        STATE_VARIABLE_IFileItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IFileItemsCord_0_2, ((MR_Box) (Item_7)));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_IFileItemsCord_0_2 = STATE_VARIABLE_IFileItemsCord_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IFileItemsCord_0_2 = next_value_of_STATE_VARIABLE_IFileItemsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Items_8;

    parse_tree__comp_unit_interface__add_foreign_import_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Items_8);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Items_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Items_8;

    parse_tree__comp_unit_interface__add_foreign_import_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Items_8);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Items_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Items_8;

    parse_tree__comp_unit_interface__add_foreign_import_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Items_8);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Items_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Items_8;

    parse_tree__comp_unit_interface__add_foreign_import_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Items_8);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Items_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Items_31;
    MR_Word conv2_STATE_VARIABLE_NeedForeignImportLangs_33;

    parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Items_31, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_NeedForeignImportLangs_33);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Items_31));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_NeedForeignImportLangs_33));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImpTypeDefnItems_16;

    parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ImpTypeDefnItems_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ImpTypeDefnItems_16));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word * ParseTreeInt2_9,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    MR_Word IntInclsCord_19;
    MR_Word ImpInclsCord_20;
    MR_Word IntAvailsCord_21;
    MR_Word ImpAvailsCord0_22;
    MR_Word IntItemsCord0_23;
    MR_Word ImpItemsCord0_24;
    MR_Word ImpForeignEnumsCord_25;
    MR_Word IntFIMsCord_26;
    MR_Word ImpFIMsCord_27;
    MR_Word IntTypesMap_28;
    MR_Word ImpTypesMap_29;
    MR_Word ModulesNeededByTypeClassDefns_30;
    MR_Word IntIncls_31;
    MR_Word ImpIncls_32;
    MR_Word IntAvails_33;
    MR_Word ImpAvails0_34;
    MR_Word IntItems0_35;
    MR_Word ImpItems0_36;
    MR_Word ImpForeignEnums_37;
    MR_Word IntFIMs_38;
    MR_Word ImpFIMs_39;
    MR_Word BothTypesMap_40;
    MR_Word NeededImpTypeCtors_41;
    MR_Word ModulesNeededByTypeDefns_42;
    MR_Word NeededModules_43;
    MR_Word ImpTypeDefnItems_44;
    MR_Word ImpForeignEnumItems_45;
    MR_Word NeedForeignImportLangs0_46;
    MR_Word IntItems_47;
    MR_Word ImpItems1_48;
    MR_Word ImpItems2_49;
    MR_Word NeedImports_50;
    MR_Word NeedForeignImportLangs_51;
    MR_Word ImpAvails_52;
    MR_Word ImpItems_53;
    MR_Word ToCheckIntItemBlock_54;
    MR_Word ShortIntItems0_56;
    MR_Word ShortImpItems0_57;
    MR_Word ShortIntNeedImports_58;
    MR_Word ShortIntNeedForeignImportLangs_59;
    MR_Word ShortImpNeedImports_60;
    MR_Word ShortImpNeedForeignImportLangs_61;
    MR_Word ShortIntAvails_62;
    MR_Word ShortImpAvails_63;
    MR_Word ShortIntItems_64;
    MR_Word ShortImpItems_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_89;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Box conv1_ImpTypeDefnItems_44;
    MR_Box conv5_ImpForeignEnumItems_45;
    MR_Box conv4_NeedForeignImportLangs0_46;
    MR_Box conv7_IntItems_47;

    Var_68 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_69 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_70 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_71 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_74 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0));
    Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0));
    Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0));
    Var_77 = mercury__multi_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_78 = mercury__multi_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_79 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_27_p_0(SrcItemBlocks_14, Var_68, &IntInclsCord_19, Var_69, &ImpInclsCord_20, Var_70, &IntAvailsCord_21, Var_71, &ImpAvailsCord0_22, Var_72, &IntItemsCord0_23, Var_73, &ImpItemsCord0_24, Var_74, &ImpForeignEnumsCord_25, Var_75, &IntFIMsCord_26, Var_76, &ImpFIMsCord_27, Var_77, &IntTypesMap_28, Var_78, &ImpTypesMap_29, Var_79, &ModulesNeededByTypeClassDefns_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_80_80);
    IntIncls_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_19);
    ImpIncls_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_20);
    IntAvails_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_21);
    ImpAvails0_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord0_22);
    IntItems0_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord0_23);
    ImpItems0_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord0_24);
    ImpForeignEnums_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), ImpForeignEnumsCord_25);
    IntFIMs_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), IntFIMsCord_26);
    ImpFIMs_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), ImpFIMsCord_27);
    BothTypesMap_40 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypesMap_28, ImpTypesMap_29);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_28, ImpTypesMap_29, BothTypesMap_40, &NeededImpTypeCtors_41, &ModulesNeededByTypeDefns_42);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesNeededByTypeClassDefns_30, ModulesNeededByTypeDefns_42, &NeededModules_43);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (BothTypesMap_40));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (IntTypesMap_28));
      MR_hl_field(MR_mktag(0), Var_81, 5) = ((MR_Box) (NeededImpTypeCtors_41));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), Var_81, ImpTypesMap_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ImpTypeDefnItems_44);
    ImpTypeDefnItems_44 = ((MR_Word) (conv1_ImpTypeDefnItems_44));
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (IntTypesMap_28));
    }
    Var_85 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), Var_83, ImpForeignEnums_37, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ImpForeignEnumItems_45, ((MR_Box) (Var_85)), &conv4_NeedForeignImportLangs0_46);
    ImpForeignEnumItems_45 = ((MR_Word) (conv5_ImpForeignEnumItems_45));
    NeedForeignImportLangs0_46 = ((MR_Word) (conv4_NeedForeignImportLangs0_46));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), IntFIMs_38, ((MR_Box) (IntItems0_35)), &conv7_IntItems_47);
    IntItems_47 = ((MR_Word) (conv7_IntItems_47));
    ImpItems1_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpForeignEnumItems_45, ImpItems0_36);
    ImpItems2_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpTypeDefnItems_44, ImpItems1_48);
    parse_tree__comp_unit_interface__find_need_imports_5_p_0(ImpTypeDefnItems_44, ImpItems1_48, &NeedImports_50, NeedForeignImportLangs0_46, &NeedForeignImportLangs_51);
    switch (NeedImports_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImpAvails_52 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        parse_tree__comp_unit_interface__strip_unneeded_imp_avails_3_p_0(NeededModules_43, ImpAvails0_34, &ImpAvails_52);
        break;
    }
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NeedForeignImportLangs_51);
    if (succeeded)
    {
      MR_Box conv9_ImpItems_53;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), ImpFIMs_39, ((MR_Box) (ImpItems2_49)), &conv9_ImpItems_53);
      ImpItems_53 = ((MR_Word) (conv9_ImpItems_53));
    }
    else
      ImpItems_53 = ImpItems2_49;
    {
      ToCheckIntItemBlock_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_54, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_54, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_54, 2) = ((MR_Box) (IntIncls_31));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_54, 3) = ((MR_Box) (IntAvails_33));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_54, 4) = ((MR_Box) (IntItems_47));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (ToCheckIntItemBlock_54));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_6, ModuleName_11, ModuleNameContext_12, Var_89, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_66);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_47));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_53));
    }
    parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(IntItems0_35, &ShortIntItems0_56);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(ImpItems2_49, &ShortImpItems0_57);
    Var_94 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__find_need_imports_5_p_0(ShortIntItems0_56, (MR_Word) ((MR_Unsigned) 0U), &ShortIntNeedImports_58, Var_94, &ShortIntNeedForeignImportLangs_59);
    Var_96 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__find_need_imports_5_p_0(ShortImpItems0_57, (MR_Word) ((MR_Unsigned) 0U), &ShortImpNeedImports_60, Var_96, &ShortImpNeedForeignImportLangs_61);
    switch (ShortIntNeedImports_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShortIntAvails_62 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        ShortIntAvails_62 = IntAvails_33;
        break;
    }
    switch (ShortImpNeedImports_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShortImpAvails_63 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        ShortImpAvails_63 = ImpAvails_52;
        break;
    }
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortIntNeedForeignImportLangs_59);
    if (succeeded)
    {
      MR_Box conv11_ShortIntItems_64;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), IntFIMs_38, ((MR_Box) (ShortIntItems0_56)), &conv11_ShortIntItems_64);
      ShortIntItems_64 = ((MR_Word) (conv11_ShortIntItems_64));
    }
    else
      ShortIntItems_64 = ShortIntItems0_56;
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortImpNeedForeignImportLangs_61);
    if (succeeded)
    {
      MR_Box conv13_ShortImpItems_65;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), ImpFIMs_39, ((MR_Box) (ShortImpItems0_57)), &conv13_ShortImpItems_65);
      ShortImpItems_65 = ((MR_Word) (conv13_ShortImpItems_65));
    }
    else
      ShortImpItems_65 = ShortImpItems0_57;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortIntAvails_62));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortImpAvails_63));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortIntItems_64));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortImpItems_65));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(
  MR_Word Int1Items_3,
  MR_Word * Int2Items_4)
{
  {
    MR_Word Int2ItemsCord_5;
    MR_Word Var_6;

    Var_6 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_acc_3_p_0(Int1Items_3, Var_6, &Int2ItemsCord_5);
    *Int2Items_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Int2ItemsCord_5);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ItemsCord_3 = STATE_VARIABLE_ItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemsCord_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_10 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_11;
            MR_Word MaybeAbstractItem_12;

            parse_tree__item_util__maybe_make_abstract_type_defn_for_int2_2_p_0(ItemTypeDefnInfo_10, &MaybeAbstractItemTypeDefnInfo_11);
            MaybeAbstractItem_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_11)));
            STATE_VARIABLE_ItemsCord_39_39 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (MaybeAbstractItem_12)));
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ItemsCord_39_39 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ItemsCord_39_39 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_14;
                MR_Word AbstractItem_15;
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
                  AbstractItem_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 1) = ((MR_Box) (AbstractItemTypeClassInfo_14));
                }
                STATE_VARIABLE_ItemsCord_39_39 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (AbstractItem_15)));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_17;
                MR_Word AbstractItem_41;
                MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 0))));
                MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 1))));
                MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 2))));
                MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 3))));
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 5))));
                MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 6))));
                MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 7))));
                MR_Integer Var_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_17 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 1) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 2) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 3) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 5) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 6) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 7) = ((MR_Box) (Var_57));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 8) = ((MR_Box) (Var_58));
                }
                {
                  AbstractItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_41, 1) = ((MR_Box) (AbstractItemInstanceInfo_17));
                }
                STATE_VARIABLE_ItemsCord_39_39 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (AbstractItem_41)));
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_ItemsCord_39_39 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_int2_items_from_int1_acc\'/3", (MR_String) "item_foreign_import_module/type_repn/nothing");
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
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__strip_unneeded_imp_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__is_needed_avail_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__strip_unneeded_imp_avails_3_p_0(
  MR_Word NeededModules_4,
  MR_Word STATE_VARIABLE_Avails_0_6,
  MR_Word * STATE_VARIABLE_Avails_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (parse_tree__comp_unit_interface__strip_unneeded_imp_avails_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (NeededModules_4));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_8, STATE_VARIABLE_Avails_0_6, STATE_VARIABLE_Avails_7);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__find_need_imports__1805__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_5_p_0(
  MR_Word MaybeForeignItems_6,
  MR_Word NotForeignItems_7,
  MR_Word * STATE_VARIABLE_NeedImports_11,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_12,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_13)
{
  {
    MR_bool succeeded;
    MR_Word NeedForeignImportLangs1_10;
    MR_Word STATE_VARIABLE_NeedImports_15_15;
    MR_Word Var_19;

    parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(MaybeForeignItems_6, (MR_Integer) 0, &STATE_VARIABLE_NeedImports_15_15, STATE_VARIABLE_NeedForeignImportLangs_0_12, &NeedForeignImportLangs1_10);
    parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(NotForeignItems_7, STATE_VARIABLE_NeedImports_15_15, STATE_VARIABLE_NeedImports_11, NeedForeignImportLangs1_10, STATE_VARIABLE_NeedForeignImportLangs_13);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__comp_unit_interface__find_need_imports_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (NeedForeignImportLangs1_10));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (*STATE_VARIABLE_NeedForeignImportLangs_13));
    }
    mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140parse_tree.comp_unit_interface.find_need_imports\'/5", (MR_String) "NeedForeignImportLangs1 != NeedForeignImportLangs");
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
    MR_Word conv0_STATE_VARIABLE_DummyTypeCtors_27;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_DummyTypeCtors_27);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_DummyTypeCtors_27));
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
    MR_Word DummyTypeCtors_13;
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
    MR_Box conv3_DummyTypeCtors_13;
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
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DummyTypeCtors_13);
    AbsExpEqvLhsTypeCtors_11 = ((MR_Word) (conv5_AbsExpEqvLhsTypeCtors_11));
    AbsExpEnumTypeCtors_12 = ((MR_Word) (conv4_AbsExpEnumTypeCtors_12));
    DummyTypeCtors_13 = ((MR_Word) (conv3_DummyTypeCtors_13));
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
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
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
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (DummyTypeCtors_13));
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_6,
  MR_Word * STATE_VARIABLE_IntAvailsCord_7,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_9,
  MR_Word STATE_VARIABLE_IntItemsCord_0_10,
  MR_Word * STATE_VARIABLE_IntItemsCord_11,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpItemsCord_13,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_14,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_15,
  MR_Word STATE_VARIABLE_IntFIMsCord_0_16,
  MR_Word * STATE_VARIABLE_IntFIMsCord_17,
  MR_Word STATE_VARIABLE_ImpFIMsCord_0_18,
  MR_Word * STATE_VARIABLE_ImpFIMsCord_19,
  MR_Word STATE_VARIABLE_IntTypesMap_0_20,
  MR_Word * STATE_VARIABLE_IntTypesMap_21,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_22,
  MR_Word * STATE_VARIABLE_ImpTypesMap_23,
  MR_Word STATE_VARIABLE_NeededModules_0_24,
  MR_Word * STATE_VARIABLE_NeededModules_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      *STATE_VARIABLE_NeededModules_25 = STATE_VARIABLE_NeededModules_0_24;
      *STATE_VARIABLE_ImpTypesMap_23 = STATE_VARIABLE_ImpTypesMap_0_22;
      *STATE_VARIABLE_IntTypesMap_21 = STATE_VARIABLE_IntTypesMap_0_20;
      *STATE_VARIABLE_ImpFIMsCord_19 = STATE_VARIABLE_ImpFIMsCord_0_18;
      *STATE_VARIABLE_IntFIMsCord_17 = STATE_VARIABLE_IntFIMsCord_0_16;
      *STATE_VARIABLE_ImpForeignEnumsCord_15 = STATE_VARIABLE_ImpForeignEnumsCord_0_14;
      *STATE_VARIABLE_ImpItemsCord_13 = STATE_VARIABLE_ImpItemsCord_0_12;
      *STATE_VARIABLE_IntItemsCord_11 = STATE_VARIABLE_IntItemsCord_0_10;
      *STATE_VARIABLE_ImpAvailsCord_9 = STATE_VARIABLE_ImpAvailsCord_0_8;
      *STATE_VARIABLE_IntAvailsCord_7 = STATE_VARIABLE_IntAvailsCord_0_6;
      *STATE_VARIABLE_ImpInclsCord_5 = STATE_VARIABLE_ImpInclsCord_0_4;
      *STATE_VARIABLE_IntInclsCord_3 = STATE_VARIABLE_IntInclsCord_0_2;
    }
    else
    {
      MR_Word SrcItemBlock_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcSection_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_67, (MR_Integer) 1))));
      MR_Word Incls_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_67, (MR_Integer) 2))));
      MR_Word Avails_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_67, (MR_Integer) 3))));
      MR_Word Items_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_67, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ImpInclsCord_115_115;
      MR_Word STATE_VARIABLE_ImpAvailsCord_117_117;
      MR_Word STATE_VARIABLE_ImpItemsCord_119_119;
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_120_120;
      MR_Word STATE_VARIABLE_ImpFIMsCord_121_121;
      MR_Word STATE_VARIABLE_ImpTypesMap_122_122;
      MR_Word STATE_VARIABLE_IntInclsCord_125_125;
      MR_Word STATE_VARIABLE_IntAvailsCord_127_127;
      MR_Word STATE_VARIABLE_IntItemsCord_129_129;
      MR_Word STATE_VARIABLE_IntFIMsCord_130_130;
      MR_Word STATE_VARIABLE_IntTypesMap_131_131;
      MR_Word STATE_VARIABLE_NeededModules_132_132;
      MR_Word STATE_VARIABLE_Specs_133_133;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_14;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMsCord_0_16;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMsCord_0_18;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_20;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_22;
      MR_Word next_value_of_STATE_VARIABLE_NeededModules_0_24;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_26;

      switch (SrcSection_83) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_item_blocks_loop\'/27", (MR_String) "sms_impl_but_exported_to_submodules");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_116;
            MR_Word Var_118;

            Var_116 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_84);
            STATE_VARIABLE_ImpInclsCord_115_115 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_4, Var_116);
            Var_118 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_85);
            STATE_VARIABLE_ImpAvailsCord_117_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_8, Var_118);
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(Items_86, STATE_VARIABLE_ImpItemsCord_0_12, &STATE_VARIABLE_ImpItemsCord_119_119, STATE_VARIABLE_ImpForeignEnumsCord_0_14, &STATE_VARIABLE_ImpForeignEnumsCord_120_120, STATE_VARIABLE_ImpFIMsCord_0_18, &STATE_VARIABLE_ImpFIMsCord_121_121, STATE_VARIABLE_ImpTypesMap_0_22, &STATE_VARIABLE_ImpTypesMap_122_122, STATE_VARIABLE_NeededModules_0_24, &STATE_VARIABLE_NeededModules_132_132, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_133_133);
            STATE_VARIABLE_IntInclsCord_125_125 = STATE_VARIABLE_IntInclsCord_0_2;
            STATE_VARIABLE_IntAvailsCord_127_127 = STATE_VARIABLE_IntAvailsCord_0_6;
            STATE_VARIABLE_IntItemsCord_129_129 = STATE_VARIABLE_IntItemsCord_0_10;
            STATE_VARIABLE_IntFIMsCord_130_130 = STATE_VARIABLE_IntFIMsCord_0_16;
            STATE_VARIABLE_IntTypesMap_131_131 = STATE_VARIABLE_IntTypesMap_0_20;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_126;
            MR_Word Var_128;

            Var_126 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_84);
            STATE_VARIABLE_IntInclsCord_125_125 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_2, Var_126);
            Var_128 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_85);
            STATE_VARIABLE_IntAvailsCord_127_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_6, Var_128);
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0(Items_86, STATE_VARIABLE_IntItemsCord_0_10, &STATE_VARIABLE_IntItemsCord_129_129, STATE_VARIABLE_IntFIMsCord_0_16, &STATE_VARIABLE_IntFIMsCord_130_130, STATE_VARIABLE_IntTypesMap_0_20, &STATE_VARIABLE_IntTypesMap_131_131, STATE_VARIABLE_NeededModules_0_24, &STATE_VARIABLE_NeededModules_132_132, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_133_133);
            STATE_VARIABLE_ImpInclsCord_115_115 = STATE_VARIABLE_ImpInclsCord_0_4;
            STATE_VARIABLE_ImpAvailsCord_117_117 = STATE_VARIABLE_ImpAvailsCord_0_8;
            STATE_VARIABLE_ImpItemsCord_119_119 = STATE_VARIABLE_ImpItemsCord_0_12;
            STATE_VARIABLE_ImpForeignEnumsCord_120_120 = STATE_VARIABLE_ImpForeignEnumsCord_0_14;
            STATE_VARIABLE_ImpFIMsCord_121_121 = STATE_VARIABLE_ImpFIMsCord_0_18;
            STATE_VARIABLE_ImpTypesMap_122_122 = STATE_VARIABLE_ImpTypesMap_0_22;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks_68;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_2 = STATE_VARIABLE_IntInclsCord_125_125;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_4 = STATE_VARIABLE_ImpInclsCord_115_115;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_6 = STATE_VARIABLE_IntAvailsCord_127_127;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8 = STATE_VARIABLE_ImpAvailsCord_117_117;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_10 = STATE_VARIABLE_IntItemsCord_129_129;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_12 = STATE_VARIABLE_ImpItemsCord_119_119;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_14 = STATE_VARIABLE_ImpForeignEnumsCord_120_120;
      next_value_of_STATE_VARIABLE_IntFIMsCord_0_16 = STATE_VARIABLE_IntFIMsCord_130_130;
      next_value_of_STATE_VARIABLE_ImpFIMsCord_0_18 = STATE_VARIABLE_ImpFIMsCord_121_121;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_20 = STATE_VARIABLE_IntTypesMap_131_131;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_22 = STATE_VARIABLE_ImpTypesMap_122_122;
      next_value_of_STATE_VARIABLE_NeededModules_0_24 = STATE_VARIABLE_NeededModules_132_132;
      next_value_of_STATE_VARIABLE_Specs_0_26 = STATE_VARIABLE_Specs_133_133;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInclsCord_0_2 = next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      STATE_VARIABLE_ImpInclsCord_0_4 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      STATE_VARIABLE_IntAvailsCord_0_6 = next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      STATE_VARIABLE_ImpAvailsCord_0_8 = next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      STATE_VARIABLE_IntItemsCord_0_10 = next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      STATE_VARIABLE_ImpItemsCord_0_12 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;
      STATE_VARIABLE_ImpForeignEnumsCord_0_14 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_14;
      STATE_VARIABLE_IntFIMsCord_0_16 = next_value_of_STATE_VARIABLE_IntFIMsCord_0_16;
      STATE_VARIABLE_ImpFIMsCord_0_18 = next_value_of_STATE_VARIABLE_ImpFIMsCord_0_18;
      STATE_VARIABLE_IntTypesMap_0_20 = next_value_of_STATE_VARIABLE_IntTypesMap_0_20;
      STATE_VARIABLE_ImpTypesMap_0_22 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_22;
      STATE_VARIABLE_NeededModules_0_24 = next_value_of_STATE_VARIABLE_NeededModules_0_24;
      STATE_VARIABLE_Specs_0_26 = next_value_of_STATE_VARIABLE_Specs_0_26;
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
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_5,
  MR_Word STATE_VARIABLE_FIMsCord_0_6,
  MR_Word * STATE_VARIABLE_FIMsCord_7,
  MR_Word STATE_VARIABLE_TypesMap_0_8,
  MR_Word * STATE_VARIABLE_TypesMap_9,
  MR_Word STATE_VARIABLE_NeededModules_0_10,
  MR_Word * STATE_VARIABLE_NeededModules_11,
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
      *STATE_VARIABLE_NeededModules_11 = STATE_VARIABLE_NeededModules_0_10;
      *STATE_VARIABLE_TypesMap_9 = STATE_VARIABLE_TypesMap_0_8;
      *STATE_VARIABLE_FIMsCord_7 = STATE_VARIABLE_FIMsCord_0_6;
      *STATE_VARIABLE_ForeignEnumsCord_5 = STATE_VARIABLE_ForeignEnumsCord_0_4;
      *STATE_VARIABLE_ItemsCord_3 = STATE_VARIABLE_ItemsCord_0_2;
    }
    else
    {
      MR_Word Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FIMsCord_83_83;
      MR_Word STATE_VARIABLE_ForeignEnumsCord_84_84;
      MR_Word STATE_VARIABLE_ItemsCord_87_87;
      MR_Word STATE_VARIABLE_NeededModules_89_89;
      MR_Word STATE_VARIABLE_TypesMap_91_91;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypesMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NeededModules_0_10;

      switch (MR_tag((MR_Word) Item_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "imp item that should be deleted by get_interface");
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
            MR_Integer Var_90;

            Var_90 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), TypeParams_42);
            {
              TypeCtor_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_47, 0) = ((MR_Box) (Name_41));
              MR_hl_field(MR_mktag(0), TypeCtor_47, 1) = ((MR_Box) (Var_90));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_47)), ((MR_Box) (ItemTypeDefn_40)), STATE_VARIABLE_TypesMap_0_8, &STATE_VARIABLE_TypesMap_91_91);
            STATE_VARIABLE_ItemsCord_87_87 = STATE_VARIABLE_ItemsCord_0_2;
            STATE_VARIABLE_ForeignEnumsCord_84_84 = STATE_VARIABLE_ForeignEnumsCord_0_4;
            STATE_VARIABLE_FIMsCord_83_83 = STATE_VARIABLE_FIMsCord_0_6;
            STATE_VARIABLE_NeededModules_89_89 = STATE_VARIABLE_NeededModules_0_10;
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
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "imp item that should be deleted by get_interface");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Pragma_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_50, (MR_Integer) 0))));
                MR_Word MaybeAttrs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_50, (MR_Integer) 1))));
                MR_Word Context_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_50, (MR_Integer) 2))));
                MR_Integer SeqNum_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPragma_50, (MR_Integer) 3))));
                MR_Word FEInfo_55;

                succeeded = ((((MR_tag((MR_Word) Pragma_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_51, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  FEInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_51, (MR_Integer) 1))));
                  {
                    MR_Word Reconstructor_56;

                    {
                      Reconstructor_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Reconstructor_56, 0) = ((MR_Box) (FEInfo_55));
                      MR_hl_field(MR_mktag(0), Reconstructor_56, 1) = ((MR_Box) (MaybeAttrs_52));
                      MR_hl_field(MR_mktag(0), Reconstructor_56, 2) = ((MR_Box) (Context_53));
                      MR_hl_field(MR_mktag(0), Reconstructor_56, 3) = ((MR_Box) (SeqNum_54));
                    }
                    STATE_VARIABLE_ForeignEnumsCord_84_84 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), STATE_VARIABLE_ForeignEnumsCord_0_4, ((MR_Box) (Reconstructor_56)));
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "non-foreign-enum pragma");
                    return;
                  }
                }
                STATE_VARIABLE_ItemsCord_87_87 = STATE_VARIABLE_ItemsCord_0_2;
                STATE_VARIABLE_FIMsCord_83_83 = STATE_VARIABLE_FIMsCord_0_6;
                STATE_VARIABLE_TypesMap_91_91 = STATE_VARIABLE_TypesMap_0_8;
                STATE_VARIABLE_NeededModules_89_89 = STATE_VARIABLE_NeededModules_0_10;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Constraints_49;
                MR_Box conv1_STATE_VARIABLE_NeededModules_89_89;

                STATE_VARIABLE_ItemsCord_87_87 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_32)));
                Constraints_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_48, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), Constraints_49, ((MR_Box) (STATE_VARIABLE_NeededModules_0_10)), &conv1_STATE_VARIABLE_NeededModules_89_89);
                STATE_VARIABLE_NeededModules_89_89 = ((MR_Word) (conv1_STATE_VARIABLE_NeededModules_89_89));
                STATE_VARIABLE_ForeignEnumsCord_84_84 = STATE_VARIABLE_ForeignEnumsCord_0_4;
                STATE_VARIABLE_FIMsCord_83_83 = STATE_VARIABLE_FIMsCord_0_6;
                STATE_VARIABLE_TypesMap_91_91 = STATE_VARIABLE_TypesMap_0_8;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word FIMInfo_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));

                STATE_VARIABLE_FIMsCord_83_83 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), STATE_VARIABLE_FIMsCord_0_6, ((MR_Box) (FIMInfo_57)));
                STATE_VARIABLE_ItemsCord_87_87 = STATE_VARIABLE_ItemsCord_0_2;
                STATE_VARIABLE_ForeignEnumsCord_84_84 = STATE_VARIABLE_ForeignEnumsCord_0_4;
                STATE_VARIABLE_TypesMap_91_91 = STATE_VARIABLE_TypesMap_0_8;
                STATE_VARIABLE_NeededModules_89_89 = STATE_VARIABLE_NeededModules_0_10;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_33;
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_87_87;
      next_value_of_STATE_VARIABLE_ForeignEnumsCord_0_4 = STATE_VARIABLE_ForeignEnumsCord_84_84;
      next_value_of_STATE_VARIABLE_FIMsCord_0_6 = STATE_VARIABLE_FIMsCord_83_83;
      next_value_of_STATE_VARIABLE_TypesMap_0_8 = STATE_VARIABLE_TypesMap_91_91;
      next_value_of_STATE_VARIABLE_NeededModules_0_10 = STATE_VARIABLE_NeededModules_89_89;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      STATE_VARIABLE_ForeignEnumsCord_0_4 = next_value_of_STATE_VARIABLE_ForeignEnumsCord_0_4;
      STATE_VARIABLE_FIMsCord_0_6 = next_value_of_STATE_VARIABLE_FIMsCord_0_6;
      STATE_VARIABLE_TypesMap_0_8 = next_value_of_STATE_VARIABLE_TypesMap_0_8;
      STATE_VARIABLE_NeededModules_0_10 = next_value_of_STATE_VARIABLE_NeededModules_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0_1(
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
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3,
  MR_Word STATE_VARIABLE_FIMsCord_0_4,
  MR_Word * STATE_VARIABLE_FIMsCord_5,
  MR_Word STATE_VARIABLE_TypesMap_0_6,
  MR_Word * STATE_VARIABLE_TypesMap_7,
  MR_Word STATE_VARIABLE_NeededModules_0_8,
  MR_Word * STATE_VARIABLE_NeededModules_9,
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
      *STATE_VARIABLE_NeededModules_9 = STATE_VARIABLE_NeededModules_0_8;
      *STATE_VARIABLE_TypesMap_7 = STATE_VARIABLE_TypesMap_0_6;
      *STATE_VARIABLE_FIMsCord_5 = STATE_VARIABLE_FIMsCord_0_4;
      *STATE_VARIABLE_ItemsCord_3 = STATE_VARIABLE_ItemsCord_0_2;
    }
    else
    {
      MR_Word Item_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FIMsCord_78_78;
      MR_Word STATE_VARIABLE_Specs_85_85;
      MR_Word STATE_VARIABLE_NeededModules_88_88;
      MR_Word STATE_VARIABLE_TypesMap_90_90;
      MR_Word STATE_VARIABLE_ItemsCord_91_91;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FIMsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypesMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_NeededModules_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      switch (MR_tag((MR_Word) Item_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_44 = (MR_Word) ((MR_Word) (Item_27));
            MR_Word Context_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_44, (MR_Integer) 6))));
            MR_Word Spec_46;

            Spec_46 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_45);
            {
              STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (Spec_46));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
            }
            STATE_VARIABLE_ItemsCord_91_91 = STATE_VARIABLE_ItemsCord_0_2;
            STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
            STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
            STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_34 = (MR_Word) (MR_body((MR_Word) (Item_27), (MR_Integer) 1));
            MR_Word Name_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 0))));
            MR_Word TypeParams_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 1))));
            MR_Word TypeCtor_41;
            MR_Integer Var_89;

            Var_89 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), TypeParams_36);
            {
              TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_41, 0) = ((MR_Box) (Name_35));
              MR_hl_field(MR_mktag(0), TypeCtor_41, 1) = ((MR_Box) (Var_89));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_41)), ((MR_Box) (ItemTypeDefn_34)), STATE_VARIABLE_TypesMap_0_6, &STATE_VARIABLE_TypesMap_90_90);
            STATE_VARIABLE_ItemsCord_91_91 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_27)));
            STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
            STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
            STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ItemsCord_91_91 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_27)));
            STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
            STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
            STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
            STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
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
                STATE_VARIABLE_ItemsCord_91_91 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_27)));
                STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
                STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
                STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
                STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word Pragma_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_47, (MR_Integer) 0))));
                MR_Word AllowedInInterface_51;
                MR_Word Context_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_47, (MR_Integer) 2))));

                AllowedInInterface_51 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_48);
                switch (AllowedInInterface_51) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_97;

                      Spec_97 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_99);
                      {
                        STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (Spec_97));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
                      }
                      STATE_VARIABLE_ItemsCord_91_91 = STATE_VARIABLE_ItemsCord_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ItemsCord_91_91 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_27)));
                      STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
                    }
                    break;
                }
                STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
                STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
                STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word PromiseType_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_52, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (PromiseType_53) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ItemsCord_91_91 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_27)));
                    }
                    break;
                  case (MR_Integer) 3:
                    STATE_VARIABLE_ItemsCord_91_91 = STATE_VARIABLE_ItemsCord_0_2;
                    break;
                }
                STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
                STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
                STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
                STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word Constraints_43;
                MR_Box conv1_STATE_VARIABLE_NeededModules_88_88;

                STATE_VARIABLE_ItemsCord_91_91 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_27)));
                Constraints_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_42, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), Constraints_43, ((MR_Box) (STATE_VARIABLE_NeededModules_0_8)), &conv1_STATE_VARIABLE_NeededModules_88_88);
                STATE_VARIABLE_NeededModules_88_88 = ((MR_Word) (conv1_STATE_VARIABLE_NeededModules_88_88));
                STATE_VARIABLE_FIMsCord_78_78 = STATE_VARIABLE_FIMsCord_0_4;
                STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
                STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/11", (MR_String) "item_initialise/finalise/mutable");
                  return;
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word FIMInfo_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));

                STATE_VARIABLE_FIMsCord_78_78 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_import_module_info_0), STATE_VARIABLE_FIMsCord_0_4, ((MR_Box) (FIMInfo_59)));
                STATE_VARIABLE_ItemsCord_91_91 = STATE_VARIABLE_ItemsCord_0_2;
                STATE_VARIABLE_TypesMap_90_90 = STATE_VARIABLE_TypesMap_0_6;
                STATE_VARIABLE_NeededModules_88_88 = STATE_VARIABLE_NeededModules_0_8;
                STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 11:
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
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_91_91;
      next_value_of_STATE_VARIABLE_FIMsCord_0_4 = STATE_VARIABLE_FIMsCord_78_78;
      next_value_of_STATE_VARIABLE_TypesMap_0_6 = STATE_VARIABLE_TypesMap_90_90;
      next_value_of_STATE_VARIABLE_NeededModules_0_8 = STATE_VARIABLE_NeededModules_88_88;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_85_85;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      STATE_VARIABLE_FIMsCord_0_4 = next_value_of_STATE_VARIABLE_FIMsCord_0_4;
      STATE_VARIABLE_TypesMap_0_6 = next_value_of_STATE_VARIABLE_TypesMap_0_6;
      STATE_VARIABLE_NeededModules_0_8 = next_value_of_STATE_VARIABLE_NeededModules_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Items_9;

    parse_tree__comp_unit_interface__accumulate_foreign_import_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Items_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Items_9));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_LangSet_8;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_LangSet_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_LangSet_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_8;

    parse_tree__comp_unit_interface__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_8));
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
    MR_Word IntItemsCord_12;
    MR_Word ImpItemsCord_13;
    MR_Word IntIncls_14;
    MR_Word ImpIncls_15;
    MR_Word IntAvails_16;
    MR_Word ImpAvails_17;
    MR_Word IntItems0_18;
    MR_Word ImpItems_19;
    MR_Word LangSet0_20;
    MR_Word LangSet_21;
    MR_Word Langs_22;
    MR_Word IntItems_23;
    MR_Word InterfaceItemBlocks_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Box conv1_LangSet0_20;
    MR_Box conv3_LangSet_21;

    Var_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_13_p_0(RawItemBlocks_7, Var_27, &IntInclsCord_8, Var_28, &ImpInclsCord_9, Var_29, &IntAvailsCord_10, Var_30, &ImpAvailsCord_11, Var_31, &IntItemsCord_12, Var_32, &ImpItemsCord_13);
    IntIncls_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_8);
    ImpIncls_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_9);
    IntAvails_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_10);
    ImpAvails_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_11);
    IntItems0_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_12);
    ImpItems_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_13);
    Var_34 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), IntItems0_18, ((MR_Box) (Var_34)), &conv1_LangSet0_20);
    LangSet0_20 = ((MR_Word) (conv1_LangSet0_20));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ImpItems_19, ((MR_Box) (LangSet0_20)), &conv3_LangSet_21);
    LangSet_21 = ((MR_Word) (conv3_LangSet_21));
    Langs_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_21);
    if ((Langs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      IntItems_23 = IntItems0_18;
    else
    {
      MR_Word Var_36;
      MR_Box conv5_IntItems_23;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3));
        MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ModuleName_5));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), Var_36, Langs_22, ((MR_Box) (IntItems0_18)), &conv5_IntItems_23);
      IntItems_23 = ((MR_Word) (conv5_IntItems_23));
    }
    parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncls_14, ImpIncls_15, IntAvails_16, ImpAvails_17, IntItems_23, ImpItems_19, &InterfaceItemBlocks_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *InterfaceRawCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InterfaceItemBlocks_26));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_6,
  MR_Word * STATE_VARIABLE_IntAvailsCord_7,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_9,
  MR_Word STATE_VARIABLE_IntItemsCord_0_10,
  MR_Word * STATE_VARIABLE_IntItemsCord_11,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpItemsCord_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpItemsCord_13 = STATE_VARIABLE_ImpItemsCord_0_12;
      *STATE_VARIABLE_IntItemsCord_11 = STATE_VARIABLE_IntItemsCord_0_10;
      *STATE_VARIABLE_ImpAvailsCord_9 = STATE_VARIABLE_ImpAvailsCord_0_8;
      *STATE_VARIABLE_IntAvailsCord_7 = STATE_VARIABLE_IntAvailsCord_0_6;
      *STATE_VARIABLE_ImpInclsCord_5 = STATE_VARIABLE_ImpInclsCord_0_4;
      *STATE_VARIABLE_IntInclsCord_3 = STATE_VARIABLE_IntInclsCord_0_2;
    }
    else
    {
      MR_Word RawItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_32, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_32, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_32, (MR_Integer) 3))));
      MR_Word Items_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_32, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ImpInclsCord_57_57;
      MR_Word STATE_VARIABLE_ImpAvailsCord_59_59;
      MR_Word STATE_VARIABLE_ImpItemsCord_61_61;
      MR_Word STATE_VARIABLE_IntInclsCord_62_62;
      MR_Word STATE_VARIABLE_IntAvailsCord_64_64;
      MR_Word STATE_VARIABLE_IntItemsCord_66_66;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;

      switch (Section_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_58;
            MR_Word Var_60;

            Var_58 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_42);
            STATE_VARIABLE_ImpInclsCord_57_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_4, Var_58);
            Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_43);
            STATE_VARIABLE_ImpAvailsCord_59_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_8, Var_60);
            parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_imp_3_p_0(Items_44, STATE_VARIABLE_ImpItemsCord_0_12, &STATE_VARIABLE_ImpItemsCord_61_61);
            STATE_VARIABLE_IntInclsCord_62_62 = STATE_VARIABLE_IntInclsCord_0_2;
            STATE_VARIABLE_IntAvailsCord_64_64 = STATE_VARIABLE_IntAvailsCord_0_6;
            STATE_VARIABLE_IntItemsCord_66_66 = STATE_VARIABLE_IntItemsCord_0_10;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_63;
            MR_Word Var_65;

            Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_42);
            STATE_VARIABLE_IntInclsCord_62_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_2, Var_63);
            Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_43);
            STATE_VARIABLE_IntAvailsCord_64_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_6, Var_65);
            parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(Items_44, STATE_VARIABLE_IntItemsCord_0_10, &STATE_VARIABLE_IntItemsCord_66_66);
            STATE_VARIABLE_ImpInclsCord_57_57 = STATE_VARIABLE_ImpInclsCord_0_4;
            STATE_VARIABLE_ImpAvailsCord_59_59 = STATE_VARIABLE_ImpAvailsCord_0_8;
            STATE_VARIABLE_ImpItemsCord_61_61 = STATE_VARIABLE_ImpItemsCord_0_12;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_33;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_2 = STATE_VARIABLE_IntInclsCord_62_62;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_4 = STATE_VARIABLE_ImpInclsCord_57_57;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_6 = STATE_VARIABLE_IntAvailsCord_64_64;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8 = STATE_VARIABLE_ImpAvailsCord_59_59;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_10 = STATE_VARIABLE_IntItemsCord_66_66;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_12 = STATE_VARIABLE_ImpItemsCord_61_61;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInclsCord_0_2 = next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      STATE_VARIABLE_ImpInclsCord_0_4 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      STATE_VARIABLE_IntAvailsCord_0_6 = next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      STATE_VARIABLE_ImpAvailsCord_0_8 = next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      STATE_VARIABLE_IntItemsCord_0_10 = next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      STATE_VARIABLE_ImpItemsCord_0_12 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_imp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ItemsCord_3 = STATE_VARIABLE_ItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemsCord_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          STATE_VARIABLE_ItemsCord_14_14 = STATE_VARIABLE_ItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_19 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_20;
            MR_Word IncludeItem_65;

            parse_tree__item_util__maybe_make_abstract_type_defn_for_int2_2_p_0(ItemTypeDefnInfo_19, &MaybeAbstractItemTypeDefnInfo_20);
            IncludeItem_65 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_20)));
            STATE_VARIABLE_ItemsCord_14_14 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (IncludeItem_65)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              STATE_VARIABLE_ItemsCord_14_14 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word Pragma_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_25, (MR_Integer) 0))));

                succeeded = ((((MR_tag((MR_Word) Pragma_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  STATE_VARIABLE_ItemsCord_14_14 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
                }
                else
                  STATE_VARIABLE_ItemsCord_14_14 = STATE_VARIABLE_ItemsCord_0_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_23;
                MR_Word IncludeItem_69;
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 0))));
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 1))));
                MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 2))));
                MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 3))));
                MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 5))));
                MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 6))));
                MR_Integer Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_22, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_23 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 1) = ((MR_Box) (Var_47));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 2) = ((MR_Box) (Var_48));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 3) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 5) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 6) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_23, 7) = ((MR_Box) (Var_53));
                }
                {
                  IncludeItem_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), IncludeItem_69, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), IncludeItem_69, 1) = ((MR_Box) (AbstractItemTypeClassInfo_23));
                }
                STATE_VARIABLE_ItemsCord_14_14 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (IncludeItem_69)));
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ItemsCord_14_14 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
              }
              break;
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.include_in_int_file_implementation\'/1", (MR_String) "item_type_repn");
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
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ItemsCord_3 = STATE_VARIABLE_ItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemsCord_16_16;
      MR_Word ItemInstance_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;

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
          STATE_VARIABLE_ItemsCord_16_16 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (AbstractItem_12)));
        }
      }
      else
      {
        STATE_VARIABLE_ItemsCord_16_16 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
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
    MR_Word IntItemsCord_17;
    MR_Word ImpItemsCord_18;
    MR_Word MaybeVersionNumbers_20;
    MR_Word IntIncls_21;
    MR_Word ImpIncls_22;
    MR_Word IntAvails_23;
    MR_Word ImpAvails_24;
    MR_Word IntItems_25;
    MR_Word ImpItems_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word VersionNumbers_19;
    MR_Box conv0_VersionNumbers_19;

    Var_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_14_p_0(ModuleName_5, SrcItemBlocks_8, Var_27, &IntInclsCord_13, Var_28, &ImpInclsCord_14, Var_29, &IntAvailsCord_15, Var_30, &ImpAvailsCord_16, Var_31, &IntItemsCord_17, Var_32, &ImpItemsCord_18);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_7, ((MR_Box) (ModuleName_5)), &conv0_VersionNumbers_19);
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
    IntIncls_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_13);
    ImpIncls_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_14);
    IntAvails_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_15);
    ImpAvails_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_16);
    IntItems_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_17);
    ImpItems_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_26));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__prog_item__avail_is_import_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_14_p_0(
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
  MR_Word STATE_VARIABLE_IntItemsCord_0_11,
  MR_Word * STATE_VARIABLE_IntItemsCord_12,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_13,
  MR_Word * STATE_VARIABLE_ImpItemsCord_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpItemsCord_14 = STATE_VARIABLE_ImpItemsCord_0_13;
      *STATE_VARIABLE_IntItemsCord_12 = STATE_VARIABLE_IntItemsCord_0_11;
      *STATE_VARIABLE_ImpAvailsCord_10 = STATE_VARIABLE_ImpAvailsCord_0_9;
      *STATE_VARIABLE_IntAvailsCord_8 = STATE_VARIABLE_IntAvailsCord_0_7;
      *STATE_VARIABLE_ImpInclsCord_6 = STATE_VARIABLE_ImpInclsCord_0_5;
      *STATE_VARIABLE_IntInclsCord_4 = STATE_VARIABLE_IntInclsCord_0_3;
    }
    else
    {
      MR_Word ItemBlock_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SrcSection_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_35, (MR_Integer) 1))));
      MR_Word Incls_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_35, (MR_Integer) 2))));
      MR_Word Avails_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_35, (MR_Integer) 3))));
      MR_Word Items_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_35, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ImpInclsCord_61_61;
      MR_Word STATE_VARIABLE_ImpItemsCord_65_65;
      MR_Word STATE_VARIABLE_IntInclsCord_66_66;
      MR_Word STATE_VARIABLE_IntAvailsCord_68_68;
      MR_Word STATE_VARIABLE_ImpAvailsCord_71_71;
      MR_Word STATE_VARIABLE_IntItemsCord_73_73;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_IntAvailsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_13;

      switch (SrcSection_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_62;
            MR_Word Var_64;

            Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_45);
            STATE_VARIABLE_ImpInclsCord_61_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_5, Var_62);
            Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_46);
            STATE_VARIABLE_ImpAvailsCord_71_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_9, Var_64);
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(HeadVar__1_1, Items_47, STATE_VARIABLE_ImpItemsCord_0_13, &STATE_VARIABLE_ImpItemsCord_65_65);
            STATE_VARIABLE_IntInclsCord_66_66 = STATE_VARIABLE_IntInclsCord_0_3;
            STATE_VARIABLE_IntAvailsCord_68_68 = STATE_VARIABLE_IntAvailsCord_0_7;
            STATE_VARIABLE_IntItemsCord_73_73 = STATE_VARIABLE_IntItemsCord_0_11;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ImportAvails_48;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_72;

            Var_67 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_45);
            STATE_VARIABLE_IntInclsCord_66_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_3, Var_67);
            Var_69 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_46);
            STATE_VARIABLE_IntAvailsCord_68_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_7, Var_69);
            mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), Avails_46, &ImportAvails_48);
            Var_72 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImportAvails_48);
            STATE_VARIABLE_ImpAvailsCord_71_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_9, Var_72);
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(HeadVar__1_1, Items_47, STATE_VARIABLE_IntItemsCord_0_11, &STATE_VARIABLE_IntItemsCord_73_73);
            STATE_VARIABLE_ImpInclsCord_61_61 = STATE_VARIABLE_ImpInclsCord_0_5;
            STATE_VARIABLE_ImpItemsCord_65_65 = STATE_VARIABLE_ImpItemsCord_0_13;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_36;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_3 = STATE_VARIABLE_IntInclsCord_66_66;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_5 = STATE_VARIABLE_ImpInclsCord_61_61;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_7 = STATE_VARIABLE_IntAvailsCord_68_68;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9 = STATE_VARIABLE_ImpAvailsCord_71_71;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_11 = STATE_VARIABLE_IntItemsCord_73_73;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_13 = STATE_VARIABLE_ImpItemsCord_65_65;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IntInclsCord_0_3 = next_value_of_STATE_VARIABLE_IntInclsCord_0_3;
      STATE_VARIABLE_ImpInclsCord_0_5 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_5;
      STATE_VARIABLE_IntAvailsCord_0_7 = next_value_of_STATE_VARIABLE_IntAvailsCord_0_7;
      STATE_VARIABLE_ImpAvailsCord_0_9 = next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9;
      STATE_VARIABLE_IntItemsCord_0_11 = next_value_of_STATE_VARIABLE_IntItemsCord_0_11;
      STATE_VARIABLE_ImpItemsCord_0_13 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_13;
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
            STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (Item_10)));
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
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (Item_10)));
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
                      STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (Item_10)));
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word InstanceInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_Word AbstractInstanceInfo_41;
                MR_Word AbstractItem_42;

                AbstractInstanceInfo_41 = parse_tree__item_util__make_instance_abstract_1_f_0(InstanceInfo_40);
                {
                  AbstractItem_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_42, 1) = ((MR_Box) (AbstractInstanceInfo_41));
                }
                STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (AbstractItem_42)));
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
                MR_Word ItemMutable_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_String MutableName_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_43, (MR_Integer) 0))));
                MR_Word Type_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_43, (MR_Integer) 2))));
                MR_Word Inst_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_43, (MR_Integer) 4))));
                MR_Word Attrs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_43, (MR_Integer) 7))));
                MR_Word Context_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_43, (MR_Integer) 8))));
                MR_Word ConstantInterface_54;

                ConstantInterface_54 = parse_tree__prog_item__mutable_var_constant_1_f_0(Attrs_51);
                switch (ConstantInterface_54) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ConstantGetPredDecl_55;
                      MR_Word ConstantSetPredDecl_56;
                      MR_Word ConstantGetPredDeclItem_57;
                      MR_Word ConstantSetPredDeclItem_58;
                      MR_Word STATE_VARIABLE_SectionItemsCord_60_72;

                      ConstantGetPredDecl_55 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_44, Type_46, Inst_48, Context_52);
                      ConstantSetPredDecl_56 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_44, Type_46, Inst_48, Context_52);
                      {
                        ConstantGetPredDeclItem_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConstantGetPredDeclItem_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), ConstantGetPredDeclItem_57, 1) = ((MR_Box) (ConstantGetPredDecl_55));
                      }
                      {
                        ConstantSetPredDeclItem_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConstantSetPredDeclItem_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), ConstantSetPredDeclItem_58, 1) = ((MR_Box) (ConstantSetPredDecl_56));
                      }
                      STATE_VARIABLE_SectionItemsCord_60_72 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (ConstantGetPredDeclItem_57)));
                      STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_60_72, ((MR_Box) (ConstantSetPredDeclItem_58)));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word StdGetPredDecl_59;
                      MR_Word StdSetPredDecl_60;
                      MR_Word StdGetPredDeclItem_61;
                      MR_Word StdSetPredDeclItem_62;
                      MR_Word IOStateInterface_63;
                      MR_Word STATE_VARIABLE_SectionItemsCord_56_68;
                      MR_Word STATE_VARIABLE_SectionItemsCord_57_69;

                      StdGetPredDecl_59 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_44, Type_46, Inst_48, Context_52);
                      StdSetPredDecl_60 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_44, Type_46, Inst_48, Context_52);
                      {
                        StdGetPredDeclItem_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdGetPredDeclItem_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdGetPredDeclItem_61, 1) = ((MR_Box) (StdGetPredDecl_59));
                      }
                      {
                        StdSetPredDeclItem_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdSetPredDeclItem_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdSetPredDeclItem_62, 1) = ((MR_Box) (StdSetPredDecl_60));
                      }
                      STATE_VARIABLE_SectionItemsCord_56_68 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (StdGetPredDeclItem_61)));
                      STATE_VARIABLE_SectionItemsCord_57_69 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_56_68, ((MR_Box) (StdSetPredDeclItem_62)));
                      IOStateInterface_63 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(Attrs_51);
                      switch (IOStateInterface_63) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word IOGetPredDecl_64;
                            MR_Word IOSetPredDecl_65;
                            MR_Word IOGetPredDeclItem_66;
                            MR_Word IOSetPredDeclItem_67;
                            MR_Word STATE_VARIABLE_SectionItemsCord_58_70;

                            IOGetPredDecl_64 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_44, Type_46, Inst_48, Context_52);
                            IOSetPredDecl_65 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_44, Type_46, Inst_48, Context_52);
                            {
                              IOGetPredDeclItem_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), IOGetPredDeclItem_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), IOGetPredDeclItem_66, 1) = ((MR_Box) (IOGetPredDecl_64));
                            }
                            {
                              IOSetPredDeclItem_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), IOSetPredDeclItem_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), IOSetPredDeclItem_67, 1) = ((MR_Box) (IOSetPredDecl_65));
                            }
                            STATE_VARIABLE_SectionItemsCord_58_70 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_57_69, ((MR_Box) (IOGetPredDeclItem_66)));
                            STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_58_70, ((MR_Box) (IOSetPredDeclItem_67)));
                          }
                          break;
                        case (MR_Integer) 0:
                          STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_57_69;
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 11:
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

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0(
  MR_Word Globals_5,
  MR_Word RawCompUnit_6,
  MR_Word * ParseTreeInt_7,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 0))));
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 1))));
    MR_Word RawItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 2))));
    MR_Word IntInclsCord_12;
    MR_Word IntAvailsCord0_13;
    MR_Word IntItemsCord_14;
    MR_Word NeedAvails_15;
    MR_Word IntIncls_16;
    MR_Word IntAvails_17;
    MR_Word IntItems_18;
    MR_Word ParseTreeInt0_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Specs_27_27;

    Var_23 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_25 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_11_p_0(RawItemBlocks_11, Var_23, &IntInclsCord_12, Var_24, &IntAvailsCord0_13, Var_25, &IntItemsCord_14, (MR_Integer) 0, &NeedAvails_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_27_27);
    IntIncls_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_12);
    switch (NeedAvails_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntAvails_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord0_13);
        break;
      case (MR_Integer) 0:
        IntAvails_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    IntItems_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_14);
    {
      ParseTreeInt0_20 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 2) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 4) = ((MR_Box) (IntIncls_16));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 6) = ((MR_Box) (IntAvails_17));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 8) = ((MR_Box) (IntItems_18));
      MR_hl_field(MR_mktag(0), ParseTreeInt0_20, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(Globals_5, ParseTreeInt0_20, ParseTreeInt_7, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_21);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntAvails_0_4,
  MR_Word * STATE_VARIABLE_IntAvails_5,
  MR_Word STATE_VARIABLE_IntItems_0_6,
  MR_Word * STATE_VARIABLE_IntItems_7,
  MR_Word STATE_VARIABLE_NeedAvails_0_8,
  MR_Word * STATE_VARIABLE_NeedAvails_9,
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
      *STATE_VARIABLE_NeedAvails_9 = STATE_VARIABLE_NeedAvails_0_8;
      *STATE_VARIABLE_IntItems_7 = STATE_VARIABLE_IntItems_0_6;
      *STATE_VARIABLE_IntAvails_5 = STATE_VARIABLE_IntAvails_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word RawItemBlock_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_27, (MR_Integer) 1))));
      MR_Word Incls_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_27, (MR_Integer) 2))));
      MR_Word Avails_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_27, (MR_Integer) 3))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_27, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_IntIncls_49_49;
      MR_Word STATE_VARIABLE_IntAvails_51_51;
      MR_Word STATE_VARIABLE_IntItems_53_53;
      MR_Word STATE_VARIABLE_NeedAvails_54_54;
      MR_Word STATE_VARIABLE_Specs_55_55;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntAvails_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntItems_0_6;
      MR_Word next_value_of_STATE_VARIABLE_NeedAvails_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      switch (Section_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_IntIncls_49_49 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntAvails_51_51 = STATE_VARIABLE_IntAvails_0_4;
            STATE_VARIABLE_IntItems_53_53 = STATE_VARIABLE_IntItems_0_6;
            STATE_VARIABLE_NeedAvails_54_54 = STATE_VARIABLE_NeedAvails_0_8;
            STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_50;
            MR_Word Var_52;

            Var_50 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_36);
            STATE_VARIABLE_IntIncls_49_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Var_50);
            Var_52 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_37);
            STATE_VARIABLE_IntAvails_51_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvails_0_4, Var_52);
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_7_p_0(Items_38, STATE_VARIABLE_IntItems_0_6, &STATE_VARIABLE_IntItems_53_53, STATE_VARIABLE_NeedAvails_0_8, &STATE_VARIABLE_NeedAvails_54_54, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_55_55);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_28;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_49_49;
      next_value_of_STATE_VARIABLE_IntAvails_0_4 = STATE_VARIABLE_IntAvails_51_51;
      next_value_of_STATE_VARIABLE_IntItems_0_6 = STATE_VARIABLE_IntItems_53_53;
      next_value_of_STATE_VARIABLE_NeedAvails_0_8 = STATE_VARIABLE_NeedAvails_54_54;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_55_55;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntAvails_0_4 = next_value_of_STATE_VARIABLE_IntAvails_0_4;
      STATE_VARIABLE_IntItems_0_6 = next_value_of_STATE_VARIABLE_IntItems_0_6;
      STATE_VARIABLE_NeedAvails_0_8 = next_value_of_STATE_VARIABLE_NeedAvails_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItems_0_2,
  MR_Word * STATE_VARIABLE_IntItems_3,
  MR_Word STATE_VARIABLE_NeedAvails_0_4,
  MR_Word * STATE_VARIABLE_NeedAvails_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_NeedAvails_5 = STATE_VARIABLE_NeedAvails_0_4;
      *STATE_VARIABLE_IntItems_3 = STATE_VARIABLE_IntItems_0_2;
    }
    else
    {
      MR_Word Item_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_NeedAvails_65_65;
      MR_Word STATE_VARIABLE_IntItems_66_66;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntItems_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NeedAvails_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      switch (MR_tag((MR_Word) Item_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_32 = (MR_Word) ((MR_Word) (Item_17));
            MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_32, (MR_Integer) 6))));
            MR_Word Spec_34;

            Spec_34 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_33);
            {
              STATE_VARIABLE_Specs_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 0) = ((MR_Box) (Spec_34));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
            }
            STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
            STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_22 = (MR_Word) (MR_body((MR_Word) (Item_17), (MR_Integer) 1));
            MR_Word AbstractOrForeignItemTypeDefnInfo_23;
            MR_Word AbstractOrForeignItem_24;

            parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(ItemTypeDefnInfo_22, &AbstractOrForeignItemTypeDefnInfo_23);
            AbstractOrForeignItem_24 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (AbstractOrForeignItemTypeDefnInfo_23)));
            STATE_VARIABLE_IntItems_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (AbstractOrForeignItem_24)));
            STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
            STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_IntItems_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (Item_17)));
            STATE_VARIABLE_NeedAvails_65_65 = (MR_Integer) 1;
            STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_IntItems_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (Item_17)));
                STATE_VARIABLE_NeedAvails_65_65 = (MR_Integer) 1;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
                MR_Word Pragma_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_35, (MR_Integer) 0))));
                MR_Word AllowedInInterface_39;
                MR_Word Context_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_35, (MR_Integer) 2))));

                AllowedInInterface_39 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_36);
                switch (AllowedInInterface_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_71;

                      Spec_71 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_73);
                      {
                        STATE_VARIABLE_Specs_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 0) = ((MR_Box) (Spec_71));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
                    break;
                }
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_26;
                MR_Word AbstractItem_27;
                MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 0))));
                MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 1))));
                MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 2))));
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 3))));
                MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 5))));
                MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 6))));
                MR_Integer Var_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_25, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_26 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 0) = ((MR_Box) (Var_75));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 1) = ((MR_Box) (Var_76));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 2) = ((MR_Box) (Var_77));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 3) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 5) = ((MR_Box) (Var_80));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 6) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_26, 7) = ((MR_Box) (Var_82));
                }
                {
                  AbstractItem_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_27, 1) = ((MR_Box) (AbstractItemTypeClassInfo_26));
                }
                STATE_VARIABLE_IntItems_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (AbstractItem_27)));
                STATE_VARIABLE_NeedAvails_65_65 = (MR_Integer) 1;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_29;
                MR_Word AbstractItem_70;
                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 0))));
                MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 1))));
                MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 2))));
                MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 3))));
                MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 5))));
                MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 6))));
                MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 7))));
                MR_Integer Var_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_28, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_29 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 0) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 1) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 2) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 3) = ((MR_Box) (Var_86));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 5) = ((MR_Box) (Var_88));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 6) = ((MR_Box) (Var_89));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 7) = ((MR_Box) (Var_90));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_29, 8) = ((MR_Box) (Var_91));
                }
                {
                  AbstractItem_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_70, 1) = ((MR_Box) (AbstractItemInstanceInfo_29));
                }
                STATE_VARIABLE_IntItems_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItems_0_2, ((MR_Box) (AbstractItem_70)));
                STATE_VARIABLE_NeedAvails_65_65 = (MR_Integer) 1;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_IntItems_66_66 = STATE_VARIABLE_IntItems_0_2;
                STATE_VARIABLE_NeedAvails_65_65 = STATE_VARIABLE_NeedAvails_0_4;
                STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_6;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_18;
      next_value_of_STATE_VARIABLE_IntItems_0_2 = STATE_VARIABLE_IntItems_66_66;
      next_value_of_STATE_VARIABLE_NeedAvails_0_4 = STATE_VARIABLE_NeedAvails_65_65;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_57_57;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntItems_0_2 = next_value_of_STATE_VARIABLE_IntItems_0_2;
      STATE_VARIABLE_NeedAvails_0_4 = next_value_of_STATE_VARIABLE_NeedAvails_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
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
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_1[11])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[9])));
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
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[8])));
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
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[7])));
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
parse_tree__comp_unit_interface____Unify____need_avails_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____need_avails_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_avails_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____need_avails_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_avails_0);
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
