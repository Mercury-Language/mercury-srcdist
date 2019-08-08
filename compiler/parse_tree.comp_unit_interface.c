/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2019-08-08
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



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

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

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

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_imports_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_imports_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_imports_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1288__1_2_p_0(
  MR_Word Langs_62,
  MR_Word HeadVar__2_103);

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
parse_tree__comp_unit_interface__acccumulate_foreign_import_item_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Items_0_10,
  MR_Word * STATE_VARIABLE_Items_11);

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
  MR_Word STATE_VARIABLE_Items_0_8,
  MR_Word * STATE_VARIABLE_Items_9);

static void MR_CALL 
parse_tree__comp_unit_interface__subtract_int_fims_map_4_p_0(
  MR_Word IntFIMsMap_5,
  MR_Word ModuleName_6,
  MR_Word ImpLangs0_7,
  MR_Word * ImpLangs_8);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_use_1_f_0(
  MR_Word ModuleName_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_import_1_f_0(
  MR_Word ModuleName_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_9_p_0(
  MR_Word ModuleName_10,
  MR_Word ModuleNameContext_11,
  MR_Word IntIncls_12,
  MR_Word IntAvails_13,
  MR_Word IntItems_14,
  MR_Word ImpItems_15,
  MR_Word IntFIMItems_16,
  MR_Word ImpFIMItems_17,
  MR_Word * ParseTreeInt2_18);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Langs_0_2,
  MR_Word * STATE_VARIABLE_Langs_3,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpItemsCord_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(
  MR_Word Int1Items_3,
  MR_Word * Int2Items_4);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_4_p_0(
  MR_Word MaybeForeignItems_5,
  MR_Word * STATE_VARIABLE_NeedImports_8,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_9,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_10);

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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_37_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntImports_0_6,
  MR_Word * STATE_VARIABLE_IntImports_7,
  MR_Word STATE_VARIABLE_IntUses_0_8,
  MR_Word * STATE_VARIABLE_IntUses_9,
  MR_Word STATE_VARIABLE_ImpImports_0_10,
  MR_Word * STATE_VARIABLE_ImpImports_11,
  MR_Word STATE_VARIABLE_ImpUses_0_12,
  MR_Word * STATE_VARIABLE_ImpUses_13,
  MR_Word STATE_VARIABLE_IntItemsCord_0_14,
  MR_Word * STATE_VARIABLE_IntItemsCord_15,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_16,
  MR_Word * STATE_VARIABLE_ImpItemsCord_17,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_18,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_19,
  MR_Word STATE_VARIABLE_IntFIMsMap_0_20,
  MR_Word * STATE_VARIABLE_IntFIMsMap_21,
  MR_Word STATE_VARIABLE_ImpFIMsMap_0_22,
  MR_Word * STATE_VARIABLE_ImpFIMsMap_23,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_24,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_25,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_26,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_27,
  MR_Word STATE_VARIABLE_IntTypesMap_0_28,
  MR_Word * STATE_VARIABLE_IntTypesMap_29,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_30,
  MR_Word * STATE_VARIABLE_ImpTypesMap_31,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_32,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_33,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ImpItemsCord_3,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_5,
  MR_Word STATE_VARIABLE_ImpFIMsMap_0_6,
  MR_Word * STATE_VARIABLE_ImpFIMsMap_7,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_8,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_9,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_10,
  MR_Word * STATE_VARIABLE_ImpTypesMap_11,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3,
  MR_Word STATE_VARIABLE_IntFIMsMap_0_4,
  MR_Word * STATE_VARIABLE_IntFIMsMap_5,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_6,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_7,
  MR_Word STATE_VARIABLE_IntTypesMap_0_8,
  MR_Word * STATE_VARIABLE_IntTypesMap_9,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_10,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_avails_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Imports_0_2,
  MR_Word * STATE_VARIABLE_Imports_3,
  MR_Word STATE_VARIABLE_Uses_0_4,
  MR_Word * STATE_VARIABLE_Uses_5);

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fims_4_p_0(
  MR_Word ModuleName_5,
  MR_Word SelfFIMs_6,
  MR_Word STATE_VARIABLE_FIMsMap_0_10,
  MR_Word * STATE_VARIABLE_FIMsMap_11);

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
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_19_p_0(
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


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[20][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[16][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[6][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[1][12];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[3][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][4];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[20][3] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_via_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[16][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[14]))),
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[6][5] = {
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
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[3][6] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
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
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
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
#include "mdbcomp.rtti_access.mh"



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
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1288__1_2_p_0(
  MR_Word Langs_62,
  MR_Word HeadVar__2_103)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), ((MR_Box) (Langs_62)), ((MR_Box) (HeadVar__2_103)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
        Var_22 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[19]);
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
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[17]), RhsTypeCtors_51, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[18]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46);
              STATE_VARIABLE_ModulesNeededByTypeDefns_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46));
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ImpTypesMap_9));
              }
              Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), Var_47, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Box) (Var_49)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_46_46)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[16]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), Var_29, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
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
parse_tree__comp_unit_interface__acccumulate_foreign_import_item_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Items_0_10,
  MR_Word * STATE_VARIABLE_Items_11)
{
  {
    MR_Word FIMInfo_8;
    MR_Word Item_9;
    MR_Word Var_12;

    Var_12 = mercury__term__context_init_0_f_0();
    {
      FIMInfo_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMInfo_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIMInfo_8, 1) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), FIMInfo_8, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), FIMInfo_8, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      Item_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_9, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Item_9, 1) = ((MR_Box) (FIMInfo_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Items_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Item_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Items_0_10));
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
    MR_Word conv0_STATE_VARIABLE_Items_11;

    parse_tree__comp_unit_interface__acccumulate_foreign_import_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Items_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Items_11));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Langs_6,
  MR_Word STATE_VARIABLE_Items_0_8,
  MR_Word * STATE_VARIABLE_Items_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_Items_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleName_5));
    }
    mercury__set__fold_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), Var_10, Langs_6, ((MR_Box) (STATE_VARIABLE_Items_0_8)), &conv1_STATE_VARIABLE_Items_9);
    *STATE_VARIABLE_Items_9 = ((MR_Word) (conv1_STATE_VARIABLE_Items_9));
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

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_import_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Avail_4;
    MR_Word ImportInfo_5;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    {
      ImportInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImportInfo_5, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), ImportInfo_5, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), ImportInfo_5, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    Avail_4 = (MR_Word) ((MR_Word) (ImportInfo_5));
    return Avail_4;
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

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_Items_9;

    parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_Items_9);
    *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_Items_9));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_Items_9;

    parse_tree__comp_unit_interface__acccumulate_foreign_import_items_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv13_STATE_VARIABLE_Items_9);
    *wrapper_arg_4 = ((MR_Box) (conv13_STATE_VARIABLE_Items_9));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_ImpLangs_8;

    parse_tree__comp_unit_interface__subtract_int_fims_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_ImpLangs_8);
    *wrapper_arg_3 = ((MR_Box) (conv12_ImpLangs_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_ImpItems_21;
    MR_Word conv8_STATE_VARIABLE_NeedForeignImportLangs_23;

    parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_ImpItems_21, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_NeedForeignImportLangs_23);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_ImpItems_21));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_NeedForeignImportLangs_23));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_5(
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
    MR_Word conv5_STATE_VARIABLE_ImpTypeDefnItems_19;
    MR_Word conv4_STATE_VARIABLE_ImpSelfFIMs_21;

    parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defn_items_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_ImpTypeDefnItems_19, ((MR_Word) (wrapper_arg_5)), &conv4_STATE_VARIABLE_ImpSelfFIMs_21);
    *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_ImpTypeDefnItems_19));
    *wrapper_arg_6 = ((MR_Box) (conv4_STATE_VARIABLE_ImpSelfFIMs_21));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_Avail_4;

    conv3_Avail_4 = parse_tree__comp_unit_interface__make_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Avail_4;

    conv2_Avail_4 = parse_tree__comp_unit_interface__make_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Avail_4));
    return wrapper_arg_2;
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
    MR_Word conv0_Avail_4;

    conv0_Avail_4 = parse_tree__comp_unit_interface__make_import_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Avail_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word * ParseTreeInt2_9,
  MR_Word * STATE_VARIABLE_Specs_90)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    MR_Word IntImports0_19;
    MR_Word IntUses0_20;
    MR_Word ImpImports0_21;
    MR_Word ImpUses0_22;
    MR_Word IntFIMsMap0_23;
    MR_Word ImpFIMsMap0_24;
    MR_Word IntSelfFIMs0_25;
    MR_Word ImpSelfFIMs0_26;
    MR_Word IntTypesMap0_27;
    MR_Word ImpTypesMap0_28;
    MR_Word IntInclsCord_29;
    MR_Word ImpInclsCord_30;
    MR_Word IntUses1_32;
    MR_Word ImpImports1_33;
    MR_Word ImpUses1_34;
    MR_Word IntItemsCord0_35;
    MR_Word ImpItemsCord0_36;
    MR_Word ImpForeignEnumsCord_37;
    MR_Word IntFIMsMap1_38;
    MR_Word ImpFIMsMap1_39;
    MR_Word IntSelfFIMs_40;
    MR_Word ImpSelfFIMs1_41;
    MR_Word IntTypesMap_42;
    MR_Word ImpTypesMap_43;
    MR_Word ImpModulesNeededByTypeClassDefns_45;
    MR_Word IntIncls_46;
    MR_Word ImpIncls_47;
    MR_Word IntItems0_48;
    MR_Word ImpItems0_49;
    MR_Word ImpForeignEnums_50;
    MR_Word BothTypesMap_51;
    MR_Word NeededImpTypeCtors_52;
    MR_Word ImpModulesNeededByTypeDefns_53;
    MR_Word ImpNeededModules_54;
    MR_Word Experiment3_55;
    MR_Word MakeImportOrUse_56;
    MR_Word IntImports_57;
    MR_Word IntUses_58;
    MR_Word IntAvails_59;
    MR_Word ImpAvails_60;
    MR_Word ImpTypeDefnItems_64;
    MR_Word ImpSelfFIMs2_65;
    MR_Word ImpForeignEnumItems_66;
    MR_Word ImpSelfFIMs_67;
    MR_Word ImpItems1_68;
    MR_Word IntFIMsMap_69;
    MR_Word ImpFIMsMap2_70;
    MR_Word ImpFIMsMap_71;
    MR_Word IntFIMItems_72;
    MR_Word ImpFIMItems_73;
    MR_Word IntItems_74;
    MR_Word ImpItems_75;
    MR_Word ToCheckIntItemBlock_76;
    MR_Word ShortIntItems0_78;
    MR_Word ShortImpItems0_79;
    MR_Word ShortIntNeedImports_80;
    MR_Word ShortIntNeedForeignImportLangs_81;
    MR_Word ShortImpNeedImports_82;
    MR_Word ShortImpNeedForeignImportLangs_83;
    MR_Word ShortIntAvails_84;
    MR_Word ShortImpAvails_85;
    MR_Word ShortIntItems_86;
    MR_Word ShortImpItems_87;
    MR_Word OldParseTreeInt2_88;
    MR_Word Experiment4_89;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word STATE_VARIABLE_Specs_99_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_125;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word _IntModulesNeeded_44;
    MR_Box conv7_ImpTypeDefnItems_64;
    MR_Box conv6_ImpSelfFIMs2_65;
    MR_Box conv11_ImpForeignEnumItems_66;
    MR_Box conv10_ImpSelfFIMs_67;
    MR_Box conv14_IntFIMItems_72;
    MR_Box conv16_ImpFIMItems_73;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntImports0_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntUses0_20);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImports0_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpUses0_22);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), &IntFIMsMap0_23);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), &ImpFIMsMap0_24);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &IntSelfFIMs0_25);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &ImpSelfFIMs0_26);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &IntTypesMap0_27);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &ImpTypesMap0_28);
    Var_92 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_93 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_94 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_95 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_96 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0));
    Var_97 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_98 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_37_p_0(SrcItemBlocks_14, Var_92, &IntInclsCord_29, Var_93, &ImpInclsCord_30, IntImports0_19, &IntImports_57, IntUses0_20, &IntUses1_32, ImpImports0_21, &ImpImports1_33, ImpUses0_22, &ImpUses1_34, Var_94, &IntItemsCord0_35, Var_95, &ImpItemsCord0_36, Var_96, &ImpForeignEnumsCord_37, IntFIMsMap0_23, &IntFIMsMap1_38, ImpFIMsMap0_24, &ImpFIMsMap1_39, IntSelfFIMs0_25, &IntSelfFIMs_40, ImpSelfFIMs0_26, &ImpSelfFIMs1_41, IntTypesMap0_27, &IntTypesMap_42, ImpTypesMap0_28, &ImpTypesMap_43, Var_97, &_IntModulesNeeded_44, Var_98, &ImpModulesNeededByTypeClassDefns_45, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_99_99);
    IntIncls_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_29);
    ImpIncls_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_30);
    IntItems0_48 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord0_35);
    ImpItems0_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord0_36);
    ImpForeignEnums_50 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), ImpForeignEnumsCord_37);
    BothTypesMap_51 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypesMap_42, ImpTypesMap_43);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_42, ImpTypesMap_43, BothTypesMap_51, &NeededImpTypeCtors_52, &ImpModulesNeededByTypeDefns_53);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_45, ImpModulesNeededByTypeDefns_53, &ImpNeededModules_54);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 695, &Experiment3_55);
    switch (Experiment3_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MakeImportOrUse_56 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]);
        break;
      case (MR_Integer) 1:
        MakeImportOrUse_56 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]);
        break;
    }
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses1_32, IntImports_57, &IntUses_58);
    Var_102 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_57);
    Var_101 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), MakeImportOrUse_56, Var_102);
    Var_105 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_58);
    Var_103 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), Var_105);
    IntAvails_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_101, Var_103);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_54);
    if (succeeded)
      ImpAvails_60 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IntModules_61;
      MR_Word ImpImports_62;
      MR_Word ImpUses_63;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_113;

      mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_57, IntUses_58, &IntModules_61);
      Var_106 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports1_33, ImpNeededModules_54);
      ImpImports_62 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_106, IntModules_61);
      Var_107 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses1_34, ImpNeededModules_54);
      Var_108 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntModules_61, ImpImports_62);
      ImpUses_63 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_107, Var_108);
      Var_110 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_62);
      Var_109 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), MakeImportOrUse_56, Var_110);
      Var_113 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_63);
      Var_111 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[13]), Var_113);
      ImpAvails_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_109, Var_111);
    }
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (BothTypesMap_51));
      MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (IntTypesMap_42));
      MR_hl_field(MR_mktag(0), Var_114, 5) = ((MR_Box) (NeededImpTypeCtors_52));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_114, ImpTypesMap_43, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ImpTypeDefnItems_64, ((MR_Box) (ImpSelfFIMs1_41)), &conv6_ImpSelfFIMs2_65);
    ImpTypeDefnItems_64 = ((MR_Word) (conv7_ImpTypeDefnItems_64));
    ImpSelfFIMs2_65 = ((MR_Word) (conv6_ImpSelfFIMs2_65));
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (IntTypesMap_42));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_116, ImpForeignEnums_50, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_ImpForeignEnumItems_66, ((MR_Box) (ImpSelfFIMs2_65)), &conv10_ImpSelfFIMs_67);
    ImpForeignEnumItems_66 = ((MR_Word) (conv11_ImpForeignEnumItems_66));
    ImpSelfFIMs_67 = ((MR_Word) (conv10_ImpSelfFIMs_67));
    Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpForeignEnumItems_66, ImpItems0_49);
    ImpItems1_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpTypeDefnItems_64, Var_118);
    parse_tree__comp_unit_interface__add_self_fims_4_p_0(ModuleName_11, IntSelfFIMs_40, IntFIMsMap1_38, &IntFIMsMap_69);
    parse_tree__comp_unit_interface__add_self_fims_4_p_0(ModuleName_11, ImpSelfFIMs_67, ImpFIMsMap1_39, &ImpFIMsMap2_70);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (IntFIMsMap_69));
    }
    mercury__map__map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_119, ImpFIMsMap2_70, &ImpFIMsMap_71);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), IntFIMsMap_69, ((MR_Box) ((MR_Unsigned) 0U)), &conv14_IntFIMItems_72);
    IntFIMItems_72 = ((MR_Word) (conv14_IntFIMItems_72));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), ImpFIMsMap_71, ((MR_Box) ((MR_Unsigned) 0U)), &conv16_ImpFIMItems_73);
    ImpFIMItems_73 = ((MR_Word) (conv16_ImpFIMItems_73));
    IntItems_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntFIMItems_72, IntItems0_48);
    ImpItems_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpFIMItems_73, ImpItems1_68);
    {
      ToCheckIntItemBlock_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_76, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_76, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_76, 2) = ((MR_Box) (IntIncls_46));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_76, 3) = ((MR_Box) (IntAvails_59));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_76, 4) = ((MR_Box) (IntItems_74));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ToCheckIntItemBlock_76));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_6, ModuleName_11, ModuleNameContext_12, Var_125, STATE_VARIABLE_Specs_99_99, STATE_VARIABLE_Specs_90);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_59));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_60));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_74));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_75));
    }
    parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(IntItems0_48, &ShortIntItems0_78);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_2_p_0(ImpItems1_68, &ShortImpItems0_79);
    Var_129 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__find_need_imports_4_p_0(ShortIntItems0_78, &ShortIntNeedImports_80, Var_129, &ShortIntNeedForeignImportLangs_81);
    Var_130 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__find_need_imports_4_p_0(ShortImpItems0_79, &ShortImpNeedImports_82, Var_130, &ShortImpNeedForeignImportLangs_83);
    switch (ShortIntNeedImports_80) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShortIntAvails_84 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        ShortIntAvails_84 = IntAvails_59;
        break;
    }
    switch (ShortImpNeedImports_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShortImpAvails_85 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        ShortImpAvails_85 = ImpAvails_60;
        break;
    }
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortIntNeedForeignImportLangs_81);
    if (succeeded)
      ShortIntItems_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntFIMItems_72, ShortIntItems0_78);
    else
      ShortIntItems_86 = ShortIntItems0_78;
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortImpNeedForeignImportLangs_83);
    if (succeeded)
      ShortImpItems_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpFIMItems_73, ShortImpItems0_79);
    else
      ShortImpItems_87 = ShortImpItems0_79;
    {
      OldParseTreeInt2_88 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 2) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 4) = ((MR_Box) (IntIncls_46));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 5) = ((MR_Box) (ImpIncls_47));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 6) = ((MR_Box) (ShortIntAvails_84));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 7) = ((MR_Box) (ShortImpAvails_85));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 8) = ((MR_Box) (ShortIntItems_86));
      MR_hl_field(MR_mktag(0), OldParseTreeInt2_88, 9) = ((MR_Box) (ShortImpItems_87));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 696, &Experiment4_89);
    switch (Experiment4_89) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ParseTreeInt2_9 = OldParseTreeInt2_88;
        break;
      case (MR_Integer) 1:
        parse_tree__comp_unit_interface__generate_interface_int2_9_p_0(ModuleName_11, ModuleNameContext_12, IntIncls_46, IntAvails_59, IntItems0_48, ImpItems1_68, IntFIMItems_72, ImpFIMItems_73, ParseTreeInt2_9);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_9_p_0(
  MR_Word ModuleName_10,
  MR_Word ModuleNameContext_11,
  MR_Word IntIncls_12,
  MR_Word IntAvails_13,
  MR_Word IntItems_14,
  MR_Word ImpItems_15,
  MR_Word IntFIMItems_16,
  MR_Word ImpFIMItems_17,
  MR_Word * ParseTreeInt2_18)
{
  {
    MR_bool succeeded;
    MR_Word ShortIntItemsCord0_19;
    MR_Word ShortImpLangs_20;
    MR_Word ShortImpItemsCord0_21;
    MR_Word ShortIntItems0_22;
    MR_Word ShortImpItems0_23;
    MR_Word ShortIntNeedImports_24;
    MR_Word ShortIntNeedForeignImportLangs_25;
    MR_Word ShortIntAvails_26;
    MR_Word ShortIntItems_27;
    MR_Word ShortImpItems_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_3_p_0(IntItems_14, Var_30, &ShortIntItemsCord0_19);
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_5_p_0(ImpItems_15, Var_31, &ShortImpLangs_20, Var_32, &ShortImpItemsCord0_21);
    ShortIntItems0_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortIntItemsCord0_19);
    ShortImpItems0_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortImpItemsCord0_21);
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(ShortIntItems0_22, (MR_Integer) 0, &ShortIntNeedImports_24, Var_33, &ShortIntNeedForeignImportLangs_25);
    switch (ShortIntNeedImports_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShortIntAvails_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        ShortIntAvails_26 = IntAvails_13;
        break;
    }
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortIntNeedForeignImportLangs_25);
    if (succeeded)
      ShortIntItems_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntFIMItems_16, ShortIntItems0_22);
    else
      ShortIntItems_27 = ShortIntItems0_22;
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ShortImpLangs_20);
    if (succeeded)
      ShortImpItems_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpFIMItems_17, ShortImpItems0_23);
    else
      ShortImpItems_28 = ShortImpItems0_23;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortIntAvails_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortIntItems_27));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortImpItems_28));
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
      MR_Word STATE_VARIABLE_Langs_43_43;
      MR_Word STATE_VARIABLE_ImpItemsCord_44_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Langs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
            STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
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
                MR_Word Var_42;

                Var_42 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_19);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_42)), STATE_VARIABLE_Langs_0_2, &STATE_VARIABLE_Langs_43_43);
              }
            }
            else
              STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_12)), STATE_VARIABLE_ImpItemsCord_0_4, &STATE_VARIABLE_ImpItemsCord_44_44);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
            STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_Langs_43_43 = STATE_VARIABLE_Langs_0_2;
                STATE_VARIABLE_ImpItemsCord_44_44 = STATE_VARIABLE_ImpItemsCord_0_4;
              }
              break;
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_int2_items_from_int1_imp\'/5", (MR_String) "item_foreign_import_module/type_repn/nothing");
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
      next_value_of_STATE_VARIABLE_Langs_0_2 = STATE_VARIABLE_Langs_43_43;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_4 = STATE_VARIABLE_ImpItemsCord_44_44;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Langs_0_2 = next_value_of_STATE_VARIABLE_Langs_0_2;
      STATE_VARIABLE_ImpItemsCord_0_4 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntItemsCord_3 = STATE_VARIABLE_IntItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntItemsCord_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_10 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_11;
            MR_Word MaybeAbstractItem_12;

            parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(ItemTypeDefnInfo_10, &MaybeAbstractItemTypeDefnInfo_11);
            MaybeAbstractItem_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_11)));
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (MaybeAbstractItem_12)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_39_39);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_39_39);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_39_39);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_15)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_39_39);
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_41)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_39_39);
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_IntItemsCord_39_39 = STATE_VARIABLE_IntItemsCord_0_2;
              break;
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_int2_items_from_int1_int\'/3", (MR_String) "item_foreign_import_module/type_repn/nothing");
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
      next_value_of_STATE_VARIABLE_IntItemsCord_0_2 = STATE_VARIABLE_IntItemsCord_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntItemsCord_0_2 = next_value_of_STATE_VARIABLE_IntItemsCord_0_2;
      continue;
    }
    break;
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

            parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(ItemTypeDefnInfo_10, &MaybeAbstractItemTypeDefnInfo_11);
            MaybeAbstractItem_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_11)));
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (MaybeAbstractItem_12)), STATE_VARIABLE_ItemsCord_0_2, &STATE_VARIABLE_ItemsCord_39_39);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ItemsCord_0_2, &STATE_VARIABLE_ItemsCord_39_39);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ItemsCord_0_2, &STATE_VARIABLE_ItemsCord_39_39);
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_15)), STATE_VARIABLE_ItemsCord_0_2, &STATE_VARIABLE_ItemsCord_39_39);
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_41)), STATE_VARIABLE_ItemsCord_0_2, &STATE_VARIABLE_ItemsCord_39_39);
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

static void MR_CALL 
parse_tree__comp_unit_interface__find_need_imports_4_p_0(
  MR_Word MaybeForeignItems_5,
  MR_Word * STATE_VARIABLE_NeedImports_8,
  MR_Word STATE_VARIABLE_NeedForeignImportLangs_0_9,
  MR_Word * STATE_VARIABLE_NeedForeignImportLangs_10)
{
  {
    parse_tree__comp_unit_interface__find_need_imports_acc_5_p_0(MaybeForeignItems_5, (MR_Integer) 0, STATE_VARIABLE_NeedImports_8, STATE_VARIABLE_NeedForeignImportLangs_0_9, STATE_VARIABLE_NeedForeignImportLangs_10);
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
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
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
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_37_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntImports_0_6,
  MR_Word * STATE_VARIABLE_IntImports_7,
  MR_Word STATE_VARIABLE_IntUses_0_8,
  MR_Word * STATE_VARIABLE_IntUses_9,
  MR_Word STATE_VARIABLE_ImpImports_0_10,
  MR_Word * STATE_VARIABLE_ImpImports_11,
  MR_Word STATE_VARIABLE_ImpUses_0_12,
  MR_Word * STATE_VARIABLE_ImpUses_13,
  MR_Word STATE_VARIABLE_IntItemsCord_0_14,
  MR_Word * STATE_VARIABLE_IntItemsCord_15,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_16,
  MR_Word * STATE_VARIABLE_ImpItemsCord_17,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_18,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_19,
  MR_Word STATE_VARIABLE_IntFIMsMap_0_20,
  MR_Word * STATE_VARIABLE_IntFIMsMap_21,
  MR_Word STATE_VARIABLE_ImpFIMsMap_0_22,
  MR_Word * STATE_VARIABLE_ImpFIMsMap_23,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_24,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_25,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_26,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_27,
  MR_Word STATE_VARIABLE_IntTypesMap_0_28,
  MR_Word * STATE_VARIABLE_IntTypesMap_29,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_30,
  MR_Word * STATE_VARIABLE_ImpTypesMap_31,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_32,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_33,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_35 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34;
      *STATE_VARIABLE_IntModulesNeeded_33 = STATE_VARIABLE_IntModulesNeeded_0_32;
      *STATE_VARIABLE_ImpTypesMap_31 = STATE_VARIABLE_ImpTypesMap_0_30;
      *STATE_VARIABLE_IntTypesMap_29 = STATE_VARIABLE_IntTypesMap_0_28;
      *STATE_VARIABLE_ImpSelfFIMs_27 = STATE_VARIABLE_ImpSelfFIMs_0_26;
      *STATE_VARIABLE_IntSelfFIMs_25 = STATE_VARIABLE_IntSelfFIMs_0_24;
      *STATE_VARIABLE_ImpFIMsMap_23 = STATE_VARIABLE_ImpFIMsMap_0_22;
      *STATE_VARIABLE_IntFIMsMap_21 = STATE_VARIABLE_IntFIMsMap_0_20;
      *STATE_VARIABLE_ImpForeignEnumsCord_19 = STATE_VARIABLE_ImpForeignEnumsCord_0_18;
      *STATE_VARIABLE_ImpItemsCord_17 = STATE_VARIABLE_ImpItemsCord_0_16;
      *STATE_VARIABLE_IntItemsCord_15 = STATE_VARIABLE_IntItemsCord_0_14;
      *STATE_VARIABLE_ImpUses_13 = STATE_VARIABLE_ImpUses_0_12;
      *STATE_VARIABLE_ImpImports_11 = STATE_VARIABLE_ImpImports_0_10;
      *STATE_VARIABLE_IntUses_9 = STATE_VARIABLE_IntUses_0_8;
      *STATE_VARIABLE_IntImports_7 = STATE_VARIABLE_IntImports_0_6;
      *STATE_VARIABLE_ImpInclsCord_5 = STATE_VARIABLE_ImpInclsCord_0_4;
      *STATE_VARIABLE_IntInclsCord_3 = STATE_VARIABLE_IntInclsCord_0_2;
    }
    else
    {
      MR_Word SrcItemBlock_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcSection_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_92, (MR_Integer) 1))));
      MR_Word Incls_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_92, (MR_Integer) 2))));
      MR_Word Avails_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_92, (MR_Integer) 3))));
      MR_Word Items_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_92, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ImpInclsCord_155_155;
      MR_Word STATE_VARIABLE_ImpImports_157_157;
      MR_Word STATE_VARIABLE_ImpUses_158_158;
      MR_Word STATE_VARIABLE_ImpItemsCord_159_159;
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_160_160;
      MR_Word STATE_VARIABLE_ImpFIMsMap_161_161;
      MR_Word STATE_VARIABLE_ImpSelfFIMs_162_162;
      MR_Word STATE_VARIABLE_ImpTypesMap_163_163;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_164_164;
      MR_Word STATE_VARIABLE_IntInclsCord_166_166;
      MR_Word STATE_VARIABLE_IntImports_168_168;
      MR_Word STATE_VARIABLE_IntUses_169_169;
      MR_Word STATE_VARIABLE_IntItemsCord_170_170;
      MR_Word STATE_VARIABLE_IntFIMsMap_171_171;
      MR_Word STATE_VARIABLE_IntSelfFIMs_172_172;
      MR_Word STATE_VARIABLE_IntTypesMap_173_173;
      MR_Word STATE_VARIABLE_IntModulesNeeded_174_174;
      MR_Word STATE_VARIABLE_Specs_175_175;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImpImports_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpUses_0_12;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_16;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_18;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMsMap_0_20;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMsMap_0_22;
      MR_Word next_value_of_STATE_VARIABLE_IntSelfFIMs_0_24;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_26;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_28;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_30;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeeded_0_32;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_36;

      switch (SrcSection_113) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_item_blocks_loop\'/37", (MR_String) "sms_impl_but_exported_to_submodules");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_156;

            Var_156 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_114);
            STATE_VARIABLE_ImpInclsCord_155_155 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_4, Var_156);
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_5_p_0(Avails_115, STATE_VARIABLE_ImpImports_0_10, &STATE_VARIABLE_ImpImports_157_157, STATE_VARIABLE_ImpUses_0_12, &STATE_VARIABLE_ImpUses_158_158);
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_15_p_0(Items_116, STATE_VARIABLE_ImpItemsCord_0_16, &STATE_VARIABLE_ImpItemsCord_159_159, STATE_VARIABLE_ImpForeignEnumsCord_0_18, &STATE_VARIABLE_ImpForeignEnumsCord_160_160, STATE_VARIABLE_ImpFIMsMap_0_22, &STATE_VARIABLE_ImpFIMsMap_161_161, STATE_VARIABLE_ImpSelfFIMs_0_26, &STATE_VARIABLE_ImpSelfFIMs_162_162, STATE_VARIABLE_ImpTypesMap_0_30, &STATE_VARIABLE_ImpTypesMap_163_163, STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34, &STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_164_164, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_175_175);
            STATE_VARIABLE_IntInclsCord_166_166 = STATE_VARIABLE_IntInclsCord_0_2;
            STATE_VARIABLE_IntImports_168_168 = STATE_VARIABLE_IntImports_0_6;
            STATE_VARIABLE_IntUses_169_169 = STATE_VARIABLE_IntUses_0_8;
            STATE_VARIABLE_IntItemsCord_170_170 = STATE_VARIABLE_IntItemsCord_0_14;
            STATE_VARIABLE_IntFIMsMap_171_171 = STATE_VARIABLE_IntFIMsMap_0_20;
            STATE_VARIABLE_IntSelfFIMs_172_172 = STATE_VARIABLE_IntSelfFIMs_0_24;
            STATE_VARIABLE_IntTypesMap_173_173 = STATE_VARIABLE_IntTypesMap_0_28;
            STATE_VARIABLE_IntModulesNeeded_174_174 = STATE_VARIABLE_IntModulesNeeded_0_32;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_167;

            Var_167 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_114);
            STATE_VARIABLE_IntInclsCord_166_166 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_2, Var_167);
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_5_p_0(Avails_115, STATE_VARIABLE_IntImports_0_6, &STATE_VARIABLE_IntImports_168_168, STATE_VARIABLE_IntUses_0_8, &STATE_VARIABLE_IntUses_169_169);
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0(Items_116, STATE_VARIABLE_IntItemsCord_0_14, &STATE_VARIABLE_IntItemsCord_170_170, STATE_VARIABLE_IntFIMsMap_0_20, &STATE_VARIABLE_IntFIMsMap_171_171, STATE_VARIABLE_IntSelfFIMs_0_24, &STATE_VARIABLE_IntSelfFIMs_172_172, STATE_VARIABLE_IntTypesMap_0_28, &STATE_VARIABLE_IntTypesMap_173_173, STATE_VARIABLE_IntModulesNeeded_0_32, &STATE_VARIABLE_IntModulesNeeded_174_174, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_175_175);
            STATE_VARIABLE_ImpInclsCord_155_155 = STATE_VARIABLE_ImpInclsCord_0_4;
            STATE_VARIABLE_ImpImports_157_157 = STATE_VARIABLE_ImpImports_0_10;
            STATE_VARIABLE_ImpUses_158_158 = STATE_VARIABLE_ImpUses_0_12;
            STATE_VARIABLE_ImpItemsCord_159_159 = STATE_VARIABLE_ImpItemsCord_0_16;
            STATE_VARIABLE_ImpForeignEnumsCord_160_160 = STATE_VARIABLE_ImpForeignEnumsCord_0_18;
            STATE_VARIABLE_ImpFIMsMap_161_161 = STATE_VARIABLE_ImpFIMsMap_0_22;
            STATE_VARIABLE_ImpSelfFIMs_162_162 = STATE_VARIABLE_ImpSelfFIMs_0_26;
            STATE_VARIABLE_ImpTypesMap_163_163 = STATE_VARIABLE_ImpTypesMap_0_30;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_164_164 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks_93;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_2 = STATE_VARIABLE_IntInclsCord_166_166;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_4 = STATE_VARIABLE_ImpInclsCord_155_155;
      next_value_of_STATE_VARIABLE_IntImports_0_6 = STATE_VARIABLE_IntImports_168_168;
      next_value_of_STATE_VARIABLE_IntUses_0_8 = STATE_VARIABLE_IntUses_169_169;
      next_value_of_STATE_VARIABLE_ImpImports_0_10 = STATE_VARIABLE_ImpImports_157_157;
      next_value_of_STATE_VARIABLE_ImpUses_0_12 = STATE_VARIABLE_ImpUses_158_158;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_14 = STATE_VARIABLE_IntItemsCord_170_170;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_16 = STATE_VARIABLE_ImpItemsCord_159_159;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_18 = STATE_VARIABLE_ImpForeignEnumsCord_160_160;
      next_value_of_STATE_VARIABLE_IntFIMsMap_0_20 = STATE_VARIABLE_IntFIMsMap_171_171;
      next_value_of_STATE_VARIABLE_ImpFIMsMap_0_22 = STATE_VARIABLE_ImpFIMsMap_161_161;
      next_value_of_STATE_VARIABLE_IntSelfFIMs_0_24 = STATE_VARIABLE_IntSelfFIMs_172_172;
      next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_26 = STATE_VARIABLE_ImpSelfFIMs_162_162;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_28 = STATE_VARIABLE_IntTypesMap_173_173;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_30 = STATE_VARIABLE_ImpTypesMap_163_163;
      next_value_of_STATE_VARIABLE_IntModulesNeeded_0_32 = STATE_VARIABLE_IntModulesNeeded_174_174;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_164_164;
      next_value_of_STATE_VARIABLE_Specs_0_36 = STATE_VARIABLE_Specs_175_175;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInclsCord_0_2 = next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      STATE_VARIABLE_ImpInclsCord_0_4 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      STATE_VARIABLE_IntImports_0_6 = next_value_of_STATE_VARIABLE_IntImports_0_6;
      STATE_VARIABLE_IntUses_0_8 = next_value_of_STATE_VARIABLE_IntUses_0_8;
      STATE_VARIABLE_ImpImports_0_10 = next_value_of_STATE_VARIABLE_ImpImports_0_10;
      STATE_VARIABLE_ImpUses_0_12 = next_value_of_STATE_VARIABLE_ImpUses_0_12;
      STATE_VARIABLE_IntItemsCord_0_14 = next_value_of_STATE_VARIABLE_IntItemsCord_0_14;
      STATE_VARIABLE_ImpItemsCord_0_16 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_16;
      STATE_VARIABLE_ImpForeignEnumsCord_0_18 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_18;
      STATE_VARIABLE_IntFIMsMap_0_20 = next_value_of_STATE_VARIABLE_IntFIMsMap_0_20;
      STATE_VARIABLE_ImpFIMsMap_0_22 = next_value_of_STATE_VARIABLE_ImpFIMsMap_0_22;
      STATE_VARIABLE_IntSelfFIMs_0_24 = next_value_of_STATE_VARIABLE_IntSelfFIMs_0_24;
      STATE_VARIABLE_ImpSelfFIMs_0_26 = next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_26;
      STATE_VARIABLE_IntTypesMap_0_28 = next_value_of_STATE_VARIABLE_IntTypesMap_0_28;
      STATE_VARIABLE_ImpTypesMap_0_30 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_30;
      STATE_VARIABLE_IntModulesNeeded_0_32 = next_value_of_STATE_VARIABLE_IntModulesNeeded_0_32;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_34;
      STATE_VARIABLE_Specs_0_36 = next_value_of_STATE_VARIABLE_Specs_0_36;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ImpItemsCord_3,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_5,
  MR_Word STATE_VARIABLE_ImpFIMsMap_0_6,
  MR_Word * STATE_VARIABLE_ImpFIMsMap_7,
  MR_Word STATE_VARIABLE_ImpSelfFIMs_0_8,
  MR_Word * STATE_VARIABLE_ImpSelfFIMs_9,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_10,
  MR_Word * STATE_VARIABLE_ImpTypesMap_11,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_13 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
      *STATE_VARIABLE_ImpTypesMap_11 = STATE_VARIABLE_ImpTypesMap_0_10;
      *STATE_VARIABLE_ImpSelfFIMs_9 = STATE_VARIABLE_ImpSelfFIMs_0_8;
      *STATE_VARIABLE_ImpFIMsMap_7 = STATE_VARIABLE_ImpFIMsMap_0_6;
      *STATE_VARIABLE_ImpForeignEnumsCord_5 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
      *STATE_VARIABLE_ImpItemsCord_3 = STATE_VARIABLE_ImpItemsCord_0_2;
    }
    else
    {
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpFIMsMap_98_98;
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_100_100;
      MR_Word STATE_VARIABLE_ImpSelfFIMs_101_101;
      MR_Word STATE_VARIABLE_ImpItemsCord_104_104;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106;
      MR_Word STATE_VARIABLE_ImpTypesMap_108_108;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMsMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;

      switch (MR_tag((MR_Word) Item_37)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/15", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_46 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 1));
            MR_Word Name_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_46, (MR_Integer) 0))));
            MR_Word TypeParams_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_46, (MR_Integer) 1))));
            MR_Word TypeCtor_53;
            MR_Integer Var_107;

            Var_107 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), TypeParams_48);
            {
              TypeCtor_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_53, 0) = ((MR_Box) (Name_47));
              MR_hl_field(MR_mktag(0), TypeCtor_53, 1) = ((MR_Box) (Var_107));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_53)), ((MR_Box) (ItemTypeDefn_46)), STATE_VARIABLE_ImpTypesMap_0_10, &STATE_VARIABLE_ImpTypesMap_108_108);
            STATE_VARIABLE_ImpItemsCord_104_104 = STATE_VARIABLE_ImpItemsCord_0_2;
            STATE_VARIABLE_ImpForeignEnumsCord_100_100 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
            STATE_VARIABLE_ImpFIMsMap_98_98 = STATE_VARIABLE_ImpFIMsMap_0_6;
            STATE_VARIABLE_ImpSelfFIMs_101_101 = STATE_VARIABLE_ImpSelfFIMs_0_8;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 0))))) {
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/15", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));
                MR_Word Pragma_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_56, (MR_Integer) 0))));
                MR_Word MaybeAttrs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_56, (MR_Integer) 1))));
                MR_Word FEInfo_61;

                succeeded = ((((MR_tag((MR_Word) Pragma_57)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_57, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  FEInfo_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_57, (MR_Integer) 1))));
                  {
                    MR_Word Reconstructor_62;
                    MR_Word FELang_63;

                    {
                      Reconstructor_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Reconstructor_62, 0) = ((MR_Box) (FEInfo_61));
                      MR_hl_field(MR_mktag(0), Reconstructor_62, 1) = ((MR_Box) (MaybeAttrs_58));
                    }
                    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_foreign_enum_reconstructor_0), ((MR_Box) (Reconstructor_62)), STATE_VARIABLE_ImpForeignEnumsCord_0_4, &STATE_VARIABLE_ImpForeignEnumsCord_100_100);
                    FELang_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_61, (MR_Integer) 0))) & (MR_Integer) 3);
                    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (FELang_63)), STATE_VARIABLE_ImpSelfFIMs_0_8, &STATE_VARIABLE_ImpSelfFIMs_101_101);
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/15", (MR_String) "non-foreign-enum pragma");
                    return;
                  }
                }
                STATE_VARIABLE_ImpItemsCord_104_104 = STATE_VARIABLE_ImpItemsCord_0_2;
                STATE_VARIABLE_ImpFIMsMap_98_98 = STATE_VARIABLE_ImpFIMsMap_0_6;
                STATE_VARIABLE_ImpTypesMap_108_108 = STATE_VARIABLE_ImpTypesMap_0_10;
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));
                MR_Word Constraints_55;
                MR_Box conv2_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_37)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_104_104);
                Constraints_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_54, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Constraints_55, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12)), &conv2_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106);
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106 = ((MR_Word) (conv2_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106));
                STATE_VARIABLE_ImpForeignEnumsCord_100_100 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
                STATE_VARIABLE_ImpFIMsMap_98_98 = STATE_VARIABLE_ImpFIMsMap_0_6;
                STATE_VARIABLE_ImpSelfFIMs_101_101 = STATE_VARIABLE_ImpSelfFIMs_0_8;
                STATE_VARIABLE_ImpTypesMap_108_108 = STATE_VARIABLE_ImpTypesMap_0_10;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word FIMInfo_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));
                MR_Word Lang_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMInfo_66, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMInfo_66, (MR_Integer) 1))));
                MR_Word Langs0_69;
                MR_Box conv0_Langs0_69;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), STATE_VARIABLE_ImpFIMsMap_0_6, ((MR_Box) (ModuleName_68)), &conv0_Langs0_69);
                if (succeeded)
                {
                  Langs0_69 = ((MR_Word) (conv0_Langs0_69));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Langs_70;

                  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_67)), Langs0_69, &Langs_70);
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_68)), ((MR_Box) (Langs_70)), STATE_VARIABLE_ImpFIMsMap_0_6, &STATE_VARIABLE_ImpFIMsMap_98_98);
                }
                else
                {
                  MR_Word Langs_118;

                  Langs_118 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_67)));
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_68)), ((MR_Box) (Langs_118)), STATE_VARIABLE_ImpFIMsMap_0_6, &STATE_VARIABLE_ImpFIMsMap_98_98);
                }
                STATE_VARIABLE_ImpItemsCord_104_104 = STATE_VARIABLE_ImpItemsCord_0_2;
                STATE_VARIABLE_ImpForeignEnumsCord_100_100 = STATE_VARIABLE_ImpForeignEnumsCord_0_4;
                STATE_VARIABLE_ImpSelfFIMs_101_101 = STATE_VARIABLE_ImpSelfFIMs_0_8;
                STATE_VARIABLE_ImpTypesMap_108_108 = STATE_VARIABLE_ImpTypesMap_0_10;
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_2 = STATE_VARIABLE_ImpItemsCord_104_104;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_4 = STATE_VARIABLE_ImpForeignEnumsCord_100_100;
      next_value_of_STATE_VARIABLE_ImpFIMsMap_0_6 = STATE_VARIABLE_ImpFIMsMap_98_98;
      next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_8 = STATE_VARIABLE_ImpSelfFIMs_101_101;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_10 = STATE_VARIABLE_ImpTypesMap_108_108;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_106_106;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpItemsCord_0_2 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;
      STATE_VARIABLE_ImpForeignEnumsCord_0_4 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_4;
      STATE_VARIABLE_ImpFIMsMap_0_6 = next_value_of_STATE_VARIABLE_ImpFIMsMap_0_6;
      STATE_VARIABLE_ImpSelfFIMs_0_8 = next_value_of_STATE_VARIABLE_ImpSelfFIMs_0_8;
      STATE_VARIABLE_ImpTypesMap_0_10 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_10;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Modules_12));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1288__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3,
  MR_Word STATE_VARIABLE_IntFIMsMap_0_4,
  MR_Word * STATE_VARIABLE_IntFIMsMap_5,
  MR_Word STATE_VARIABLE_IntSelfFIMs_0_6,
  MR_Word * STATE_VARIABLE_IntSelfFIMs_7,
  MR_Word STATE_VARIABLE_IntTypesMap_0_8,
  MR_Word * STATE_VARIABLE_IntTypesMap_9,
  MR_Word STATE_VARIABLE_IntModulesNeeded_0_10,
  MR_Word * STATE_VARIABLE_IntModulesNeeded_11,
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
      *STATE_VARIABLE_IntModulesNeeded_11 = STATE_VARIABLE_IntModulesNeeded_0_10;
      *STATE_VARIABLE_IntTypesMap_9 = STATE_VARIABLE_IntTypesMap_0_8;
      *STATE_VARIABLE_IntSelfFIMs_7 = STATE_VARIABLE_IntSelfFIMs_0_6;
      *STATE_VARIABLE_IntFIMsMap_5 = STATE_VARIABLE_IntFIMsMap_0_4;
      *STATE_VARIABLE_IntItemsCord_3 = STATE_VARIABLE_IntItemsCord_0_2;
    }
    else
    {
      MR_Word Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntFIMsMap_94_94;
      MR_Word STATE_VARIABLE_Specs_107_107;
      MR_Word STATE_VARIABLE_IntModulesNeeded_110_110;
      MR_Word STATE_VARIABLE_IntTypesMap_112_112;
      MR_Word STATE_VARIABLE_IntItemsCord_113_113;
      MR_Word STATE_VARIABLE_IntSelfFIMs_115_115;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMsMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntSelfFIMs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeeded_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      switch (MR_tag((MR_Word) Item_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_54 = (MR_Word) ((MR_Word) (Item_32));
            MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_54, (MR_Integer) 6))));
            MR_Word Spec_56;

            Spec_56 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_55);
            {
              STATE_VARIABLE_Specs_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 0) = ((MR_Box) (Spec_56));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
            }
            STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
            STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
            STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
            STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
            STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_40 = (MR_Word) (MR_body((MR_Word) (Item_32), (MR_Integer) 1));
            MR_Word Name_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 0))));
            MR_Word TypeParams_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 1))));
            MR_Word TypeDefn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 2))));
            MR_Word TypeCtor_47;
            MR_Integer Var_111;
            MR_Word ForeignType_49;
            MR_Word DetailsForeign_48;

            Var_111 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), TypeParams_42);
            {
              TypeCtor_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_47, 0) = ((MR_Box) (Name_41));
              MR_hl_field(MR_mktag(0), TypeCtor_47, 1) = ((MR_Box) (Var_111));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_47)), ((MR_Box) (ItemTypeDefn_40)), STATE_VARIABLE_IntTypesMap_0_8, &STATE_VARIABLE_IntTypesMap_112_112);
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_113_113);
            succeeded = ((MR_tag((MR_Word) TypeDefn_43)) == (MR_Integer) 2);
            if (succeeded)
            {
              DetailsForeign_48 = (MR_Word) (MR_body((MR_Word) (TypeDefn_43), (MR_Integer) 2));
              ForeignType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_48, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_114;

              Var_114 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_49);
              mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_114)), STATE_VARIABLE_IntSelfFIMs_0_6, &STATE_VARIABLE_IntSelfFIMs_115_115);
            }
            else
              STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
            STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
            STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
            STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_113_113);
            STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
            STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
            STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
            STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
            STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_113_113);
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Pragma_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_57, (MR_Integer) 0))));
                MR_Word AllowedInInterface_61;
                MR_Word Context_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_57, (MR_Integer) 2))));

                AllowedInInterface_61 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_58);
                switch (AllowedInInterface_61) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_122;

                      Spec_122 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_124);
                      {
                        STATE_VARIABLE_Specs_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 0) = ((MR_Box) (Spec_122));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
                      }
                      STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
                      STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Langs_62;

                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_113_113);
                      Langs_62 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_58);
                      succeeded = ((((MR_tag((MR_Word) Pragma_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_58, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (succeeded)
                      {
                        mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_62, STATE_VARIABLE_IntSelfFIMs_0_6, &STATE_VARIABLE_IntSelfFIMs_115_115);
                      }
                      else
                      {
                        MR_Word Var_100;

                        {
                          Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[4]));
                          MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_13_p_0_1));
                          MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (Langs_62));
                          MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/13", (MR_String) "interface pragma other than foreign_enum needs Langs");
                        STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                      }
                      STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
                    }
                    break;
                }
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word PromiseType_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_64, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (PromiseType_65) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_113_113);
                    }
                    break;
                  case (MR_Integer) 3:
                    STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
                    break;
                }
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Constraints_53;
                MR_Box conv2_STATE_VARIABLE_IntModulesNeeded_110_110;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_113_113);
                Constraints_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_52, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), Constraints_53, ((MR_Box) (STATE_VARIABLE_IntModulesNeeded_0_10)), &conv2_STATE_VARIABLE_IntModulesNeeded_110_110);
                STATE_VARIABLE_IntModulesNeeded_110_110 = ((MR_Word) (conv2_STATE_VARIABLE_IntModulesNeeded_110_110));
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntFIMsMap_94_94 = STATE_VARIABLE_IntFIMsMap_0_4;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word FIMInfo_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Lang_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMInfo_71, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word ModuleName_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMInfo_71, (MR_Integer) 1))));
                MR_Word Langs0_75;
                MR_Box conv0_Langs0_75;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), STATE_VARIABLE_IntFIMsMap_0_4, ((MR_Box) (ModuleName_73)), &conv0_Langs0_75);
                if (succeeded)
                {
                  Langs0_75 = ((MR_Word) (conv0_Langs0_75));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Langs_127;

                  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_72)), Langs0_75, &Langs_127);
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_73)), ((MR_Box) (Langs_127)), STATE_VARIABLE_IntFIMsMap_0_4, &STATE_VARIABLE_IntFIMsMap_94_94);
                }
                else
                {
                  MR_Word Langs_128;

                  Langs_128 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_72)));
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (ModuleName_73)), ((MR_Box) (Langs_128)), STATE_VARIABLE_IntFIMsMap_0_4, &STATE_VARIABLE_IntFIMsMap_94_94);
                }
                STATE_VARIABLE_IntItemsCord_113_113 = STATE_VARIABLE_IntItemsCord_0_2;
                STATE_VARIABLE_IntSelfFIMs_115_115 = STATE_VARIABLE_IntSelfFIMs_0_6;
                STATE_VARIABLE_IntTypesMap_112_112 = STATE_VARIABLE_IntTypesMap_0_8;
                STATE_VARIABLE_IntModulesNeeded_110_110 = STATE_VARIABLE_IntModulesNeeded_0_10;
                STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_0_12;
              }
              break;
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/13", (MR_String) "item_type_repn");
                  return;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_33;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_2 = STATE_VARIABLE_IntItemsCord_113_113;
      next_value_of_STATE_VARIABLE_IntFIMsMap_0_4 = STATE_VARIABLE_IntFIMsMap_94_94;
      next_value_of_STATE_VARIABLE_IntSelfFIMs_0_6 = STATE_VARIABLE_IntSelfFIMs_115_115;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_8 = STATE_VARIABLE_IntTypesMap_112_112;
      next_value_of_STATE_VARIABLE_IntModulesNeeded_0_10 = STATE_VARIABLE_IntModulesNeeded_110_110;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_107_107;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntItemsCord_0_2 = next_value_of_STATE_VARIABLE_IntItemsCord_0_2;
      STATE_VARIABLE_IntFIMsMap_0_4 = next_value_of_STATE_VARIABLE_IntFIMsMap_0_4;
      STATE_VARIABLE_IntSelfFIMs_0_6 = next_value_of_STATE_VARIABLE_IntSelfFIMs_0_6;
      STATE_VARIABLE_IntTypesMap_0_8 = next_value_of_STATE_VARIABLE_IntTypesMap_0_8;
      STATE_VARIABLE_IntModulesNeeded_0_10 = next_value_of_STATE_VARIABLE_IntModulesNeeded_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_avails_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Imports_0_2,
  MR_Word * STATE_VARIABLE_Imports_3,
  MR_Word STATE_VARIABLE_Uses_0_4,
  MR_Word * STATE_VARIABLE_Uses_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Uses_5 = STATE_VARIABLE_Uses_0_4;
      *STATE_VARIABLE_Imports_3 = STATE_VARIABLE_Imports_0_2;
    }
    else
    {
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Uses_24_24;
      MR_Word STATE_VARIABLE_Imports_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Imports_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Uses_0_4;

      if (((MR_tag((MR_Word) Avail_12)) == (MR_Integer) 0))
      {
        MR_Word ModuleName_16;
        MR_Word Var_25 = (MR_Word) ((MR_Word) (Avail_12));

        ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_16)), STATE_VARIABLE_Imports_0_2, &STATE_VARIABLE_Imports_26_26);
        STATE_VARIABLE_Uses_24_24 = STATE_VARIABLE_Uses_0_4;
      }
      else
      {
        MR_Word Var_23 = (MR_Word) (MR_body((MR_Word) (Avail_12), (MR_Integer) 1));
        MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_31)), STATE_VARIABLE_Uses_0_4, &STATE_VARIABLE_Uses_24_24);
        STATE_VARIABLE_Imports_26_26 = STATE_VARIABLE_Imports_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_13;
      next_value_of_STATE_VARIABLE_Imports_0_2 = STATE_VARIABLE_Imports_26_26;
      next_value_of_STATE_VARIABLE_Uses_0_4 = STATE_VARIABLE_Uses_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Imports_0_2 = next_value_of_STATE_VARIABLE_Imports_0_2;
      STATE_VARIABLE_Uses_0_4 = next_value_of_STATE_VARIABLE_Uses_0_4;
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
    MR_Word IntItemsCord_12;
    MR_Word ImpItemsCord_13;
    MR_Word IntIncls_14;
    MR_Word ImpIncls_15;
    MR_Word IntAvails_16;
    MR_Word ImpAvails_17;
    MR_Word IntItems_18;
    MR_Word ImpItems_19;
    MR_Word InterfaceItemBlocks_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    Var_21 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_23 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_25 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_26 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_13_p_0(RawItemBlocks_7, Var_21, &IntInclsCord_8, Var_22, &ImpInclsCord_9, Var_23, &IntAvailsCord_10, Var_24, &ImpAvailsCord_11, Var_25, &IntItemsCord_12, Var_26, &ImpItemsCord_13);
    IntIncls_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_8);
    ImpIncls_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_9);
    IntAvails_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_10);
    ImpAvails_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_11);
    IntItems_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_12);
    ImpItems_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_13);
    parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncls_14, ImpIncls_15, IntAvails_16, ImpAvails_17, IntItems_18, ImpItems_19, &InterfaceItemBlocks_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *InterfaceRawCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InterfaceItemBlocks_20));
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
      MR_Word STATE_VARIABLE_ImpItemsCord_41_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_10 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_11;
            MR_Word AbstractItem_12;

            parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(ItemTypeDefnInfo_10, &MaybeAbstractItemTypeDefnInfo_11);
            AbstractItem_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_11)));
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_12)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_41_41);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word Pragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_16, (MR_Integer) 0))));

                succeeded = ((((MR_tag((MR_Word) Pragma_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_41_41);
                }
                else
                  STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_14;
                MR_Word AbstractItem_43;
                MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 0))));
                MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 1))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 2))));
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 3))));
                MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 5))));
                MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 6))));
                MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 0) = ((MR_Box) (Var_44));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 1) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 2) = ((MR_Box) (Var_46));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 3) = ((MR_Box) (Var_47));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 5) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 6) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 7) = ((MR_Box) (Var_51));
                }
                {
                  AbstractItem_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_43, 1) = ((MR_Box) (AbstractItemTypeClassInfo_14));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_43)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_41_41);
              }
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_ImpItemsCord_41_41 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 10:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_41_41);
              }
              break;
            case (MR_Integer) 11:
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
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_2 = STATE_VARIABLE_ImpItemsCord_41_41;
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
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[12])));
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
      MR_Word STATE_VARIABLE_ImpInclsCord_60_60;
      MR_Word STATE_VARIABLE_ImpAvailsCord_62_62;
      MR_Word STATE_VARIABLE_ImpItemsCord_64_64;
      MR_Word STATE_VARIABLE_IntInclsCord_65_65;
      MR_Word STATE_VARIABLE_IntAvailsCord_67_67;
      MR_Word STATE_VARIABLE_IntItemsCord_69_69;
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
            MR_Word Var_61;
            MR_Word Var_63;

            Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_45);
            STATE_VARIABLE_ImpInclsCord_60_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_5, Var_61);
            Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_46);
            STATE_VARIABLE_ImpAvailsCord_62_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_9, Var_63);
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(HeadVar__1_1, Items_47, STATE_VARIABLE_ImpItemsCord_0_13, &STATE_VARIABLE_ImpItemsCord_64_64);
            STATE_VARIABLE_IntInclsCord_65_65 = STATE_VARIABLE_IntInclsCord_0_3;
            STATE_VARIABLE_IntAvailsCord_67_67 = STATE_VARIABLE_IntAvailsCord_0_7;
            STATE_VARIABLE_IntItemsCord_69_69 = STATE_VARIABLE_IntItemsCord_0_11;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_66;
            MR_Word Var_68;

            Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_45);
            STATE_VARIABLE_IntInclsCord_65_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_3, Var_66);
            Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_46);
            STATE_VARIABLE_IntAvailsCord_67_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_7, Var_68);
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_4_p_0(HeadVar__1_1, Items_47, STATE_VARIABLE_IntItemsCord_0_11, &STATE_VARIABLE_IntItemsCord_69_69);
            STATE_VARIABLE_ImpInclsCord_60_60 = STATE_VARIABLE_ImpInclsCord_0_5;
            STATE_VARIABLE_ImpAvailsCord_62_62 = STATE_VARIABLE_ImpAvailsCord_0_9;
            STATE_VARIABLE_ImpItemsCord_64_64 = STATE_VARIABLE_ImpItemsCord_0_13;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_36;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_3 = STATE_VARIABLE_IntInclsCord_65_65;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_5 = STATE_VARIABLE_ImpInclsCord_60_60;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_7 = STATE_VARIABLE_IntAvailsCord_67_67;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_9 = STATE_VARIABLE_ImpAvailsCord_62_62;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_11 = STATE_VARIABLE_IntItemsCord_69_69;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_13 = STATE_VARIABLE_ImpItemsCord_64_64;
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
            case (MR_Integer) 10:
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
                MR_Word InstanceInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_Word AbstractInstanceInfo_41;
                MR_Word AbstractItem_42;
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 0))));
                MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 1))));
                MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 2))));
                MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 3))));
                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 5))));
                MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 6))));
                MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 7))));
                MR_Integer Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceInfo_40, (MR_Integer) 8))));

                {
                  AbstractInstanceInfo_41 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 1) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 2) = ((MR_Box) (Var_80));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 3) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 5) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 6) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 7) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), AbstractInstanceInfo_41, 8) = ((MR_Box) (Var_86));
                }
                {
                  AbstractItem_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_42, 1) = ((MR_Box) (AbstractInstanceInfo_41));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_42)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_15_15);
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
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (ConstantGetPredDeclItem_57)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_60_72);
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (ConstantSetPredDeclItem_58)), STATE_VARIABLE_SectionItemsCord_60_72, &STATE_VARIABLE_SectionItemsCord_15_15);
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
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (StdGetPredDeclItem_61)), STATE_VARIABLE_SectionItemsCord_0_3, &STATE_VARIABLE_SectionItemsCord_56_68);
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (StdSetPredDeclItem_62)), STATE_VARIABLE_SectionItemsCord_56_68, &STATE_VARIABLE_SectionItemsCord_57_69);
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
                            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (IOGetPredDeclItem_66)), STATE_VARIABLE_SectionItemsCord_57_69, &STATE_VARIABLE_SectionItemsCord_58_70);
                            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (IOSetPredDeclItem_67)), STATE_VARIABLE_SectionItemsCord_58_70, &STATE_VARIABLE_SectionItemsCord_15_15);
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

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), SrcItemBlocks_13, &RawItemBlocks_18);
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
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
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
      MR_Word Items_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_OrigImpTypeDefns_108_108;
      MR_Word STATE_VARIABLE_IntIncls_111_111;
      MR_Word STATE_VARIABLE_IntImports_114_114;
      MR_Word STATE_VARIABLE_IntTypeDefns_115_115;
      MR_Word STATE_VARIABLE_IntInstDefns_116_116;
      MR_Word STATE_VARIABLE_IntModeDefns_117_117;
      MR_Word STATE_VARIABLE_IntTypeClasses_118_118;
      MR_Word STATE_VARIABLE_IntInstances_119_119;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_120_120;
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_121_121;
      MR_Word STATE_VARIABLE_NeedImports_122_122;
      MR_Word STATE_VARIABLE_Specs_123_123;
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
            parse_tree__comp_unit_interface__gather_imp_type_defns_5_p_0(Items_80, STATE_VARIABLE_OrigImpTypeDefns_0_18, &STATE_VARIABLE_OrigImpTypeDefns_108_108, STATE_VARIABLE_ForeignEnumTypeCtors_0_20, &STATE_VARIABLE_ForeignEnumTypeCtors_121_121);
            STATE_VARIABLE_IntIncls_111_111 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImports_114_114 = STATE_VARIABLE_IntImports_0_4;
            STATE_VARIABLE_IntTypeDefns_115_115 = STATE_VARIABLE_IntTypeDefns_0_6;
            STATE_VARIABLE_IntInstDefns_116_116 = STATE_VARIABLE_IntInstDefns_0_8;
            STATE_VARIABLE_IntModeDefns_117_117 = STATE_VARIABLE_IntModeDefns_0_10;
            STATE_VARIABLE_IntTypeClasses_118_118 = STATE_VARIABLE_IntTypeClasses_0_12;
            STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_14;
            STATE_VARIABLE_OrigIntTypeDefns_120_120 = STATE_VARIABLE_OrigIntTypeDefns_0_16;
            STATE_VARIABLE_NeedImports_122_122 = STATE_VARIABLE_NeedImports_0_22;
            STATE_VARIABLE_Specs_123_123 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word IncludeModuleNames_81;
            MR_Word Imports_82;
            MR_Word ImportModuleNames_83;

            IncludeModuleNames_81 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), Incls_78);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IncludeModuleNames_81, STATE_VARIABLE_IntIncls_0_2, &STATE_VARIABLE_IntIncls_111_111);
            mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Avails_79, &Imports_82);
            ImportModuleNames_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), Imports_82);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportModuleNames_83, STATE_VARIABLE_IntImports_0_4, &STATE_VARIABLE_IntImports_114_114);
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_19_p_0(Items_80, STATE_VARIABLE_IntTypeDefns_0_6, &STATE_VARIABLE_IntTypeDefns_115_115, STATE_VARIABLE_IntInstDefns_0_8, &STATE_VARIABLE_IntInstDefns_116_116, STATE_VARIABLE_IntModeDefns_0_10, &STATE_VARIABLE_IntModeDefns_117_117, STATE_VARIABLE_IntTypeClasses_0_12, &STATE_VARIABLE_IntTypeClasses_118_118, STATE_VARIABLE_IntInstances_0_14, &STATE_VARIABLE_IntInstances_119_119, STATE_VARIABLE_OrigIntTypeDefns_0_16, &STATE_VARIABLE_OrigIntTypeDefns_120_120, STATE_VARIABLE_ForeignEnumTypeCtors_0_20, &STATE_VARIABLE_ForeignEnumTypeCtors_121_121, STATE_VARIABLE_NeedImports_0_22, &STATE_VARIABLE_NeedImports_122_122, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_123_123);
            STATE_VARIABLE_OrigImpTypeDefns_108_108 = STATE_VARIABLE_OrigImpTypeDefns_0_18;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_63;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_111_111;
      next_value_of_STATE_VARIABLE_IntImports_0_4 = STATE_VARIABLE_IntImports_114_114;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_6 = STATE_VARIABLE_IntTypeDefns_115_115;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_8 = STATE_VARIABLE_IntInstDefns_116_116;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_10 = STATE_VARIABLE_IntModeDefns_117_117;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_12 = STATE_VARIABLE_IntTypeClasses_118_118;
      next_value_of_STATE_VARIABLE_IntInstances_0_14 = STATE_VARIABLE_IntInstances_119_119;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_16 = STATE_VARIABLE_OrigIntTypeDefns_120_120;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_18 = STATE_VARIABLE_OrigImpTypeDefns_108_108;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_20 = STATE_VARIABLE_ForeignEnumTypeCtors_121_121;
      next_value_of_STATE_VARIABLE_NeedImports_0_22 = STATE_VARIABLE_NeedImports_122_122;
      next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_123_123;
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
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_39_39;
      MR_Word STATE_VARIABLE_ImpTypeDefns_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_16 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefnInfo_16)), STATE_VARIABLE_ImpTypeDefns_0_2, &STATE_VARIABLE_ImpTypeDefns_40_40);
            STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Pragma_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_17, (MR_Integer) 0))));
                MR_Word PragmaInfoForeignEnum_48;

                succeeded = ((((MR_tag((MR_Word) Pragma_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  PragmaInfoForeignEnum_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_18, (MR_Integer) 1))));
                  {
                    MR_Word Lang_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_48, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word TypeCtor_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_48, (MR_Integer) 1))));
                    MR_Word OoMValues_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_48, (MR_Integer) 2))));
                    MR_Word TypeSymName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_50, (MR_Integer) 0))));
                    MR_Integer TypeArity_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_50, (MR_Integer) 1))));
                    MR_String TypeName_54;
                    MR_Word UnqualTypeCtor_55;
                    MR_Word LVs0_56;
                    MR_Box conv0_LVs0_56;

                    TypeName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_52);
                    {
                      UnqualTypeCtor_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), UnqualTypeCtor_55, 0) = ((MR_Box) (TypeName_54));
                      MR_hl_field(MR_mktag(0), UnqualTypeCtor_55, 1) = ((MR_Box) (TypeArity_53));
                    }
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), STATE_VARIABLE_ForeignEnumTypeCtors_0_4, ((MR_Box) (UnqualTypeCtor_55)), &conv0_LVs0_56);
                    if (succeeded)
                    {
                      LVs0_56 = ((MR_Word) (conv0_LVs0_56));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Word Var_57;
                      MR_Word Var_59;

                      {
                        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Lang_49));
                        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (OoMValues_51));
                      }
                      {
                        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_59));
                        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (LVs0_56));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_55)), ((MR_Box) (Var_57)), STATE_VARIABLE_ForeignEnumTypeCtors_0_4, &STATE_VARIABLE_ForeignEnumTypeCtors_39_39);
                    }
                    else
                    {
                      MR_Word Var_60;
                      MR_Word Var_62;

                      {
                        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Lang_49));
                        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (OoMValues_51));
                      }
                      {
                        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_62));
                        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_55)), ((MR_Box) (Var_60)), STATE_VARIABLE_ForeignEnumTypeCtors_0_4, &STATE_VARIABLE_ForeignEnumTypeCtors_39_39);
                    }
                  }
                }
                else
                  STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_ImpTypeDefns_40_40 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_39_39 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2 = STATE_VARIABLE_ImpTypeDefns_40_40;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4 = STATE_VARIABLE_ForeignEnumTypeCtors_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpTypeDefns_0_2 = next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      STATE_VARIABLE_ForeignEnumTypeCtors_0_4 = next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_19_p_0(
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
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_111_111;
      MR_Word STATE_VARIABLE_Specs_113_113;
      MR_Word STATE_VARIABLE_IntModeDefns_115_115;
      MR_Word STATE_VARIABLE_IntInstDefns_117_117;
      MR_Word STATE_VARIABLE_IntInstances_119_119;
      MR_Word STATE_VARIABLE_NeedImports_120_120;
      MR_Word STATE_VARIABLE_IntTypeClasses_124_124;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_125_125;
      MR_Word STATE_VARIABLE_IntTypeDefns_126_126;
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
            MR_Word Context_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_76, (MR_Integer) 6))));

            Spec_77 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_136);
            {
              STATE_VARIABLE_Specs_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_113_113, 0) = ((MR_Box) (Spec_77));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_113_113, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
            }
            STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
            STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
            STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
            STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_58 = (MR_Word) (MR_body((MR_Word) (Item_47), (MR_Integer) 1));
            MR_Word AbstractOrForeignItemTypeDefnInfo_59;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefnInfo_58)), STATE_VARIABLE_OrigIntTypeDefns_0_12, &STATE_VARIABLE_OrigIntTypeDefns_125_125);
            parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(ItemTypeDefnInfo_58, &AbstractOrForeignItemTypeDefnInfo_59);
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (AbstractOrForeignItemTypeDefnInfo_59)), STATE_VARIABLE_IntTypeDefns_0_2, &STATE_VARIABLE_IntTypeDefns_126_126);
            STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
            STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
            STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstInfo_72 = (MR_Word) (MR_body((MR_Word) (Item_47), (MR_Integer) 2));
            MR_Word AbstractItemInstInfo_73;
            MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 0))));
            MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 1))));
            MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 2))));
            MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 4))));
            MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 5))));
            MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstInfo_72, (MR_Integer) 6))));

            {
              AbstractItemInstInfo_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 0) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 1) = ((MR_Box) (Var_151));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 2) = ((MR_Box) (Var_152));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 4) = ((MR_Box) (Var_154));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 5) = ((MR_Box) (Var_155));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_73, 6) = ((MR_Box) (Var_156));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (AbstractItemInstInfo_73)), STATE_VARIABLE_IntInstDefns_0_4, &STATE_VARIABLE_IntInstDefns_117_117);
            STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
            STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
            STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
            STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeInfo_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word AbstractItemModeInfo_75;
                MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 0))));
                MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 1))));
                MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 3))));
                MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 4))));
                MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeInfo_74, (MR_Integer) 5))));

                {
                  AbstractItemModeInfo_75 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 0) = ((MR_Box) (Var_157));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 1) = ((MR_Box) (Var_158));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 3) = ((MR_Box) (Var_160));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 4) = ((MR_Box) (Var_161));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_75, 5) = ((MR_Box) (Var_162));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (AbstractItemModeInfo_75)), STATE_VARIABLE_IntModeDefns_0_6, &STATE_VARIABLE_IntModeDefns_115_115);
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word Pragma_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_78, (MR_Integer) 0))));
                MR_Word AllowedInInterface_82;
                MR_Word Context_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_78, (MR_Integer) 2))));

                AllowedInInterface_82 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_79);
                switch (AllowedInInterface_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_137;

                      Spec_137 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_139);
                      {
                        STATE_VARIABLE_Specs_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_113_113, 0) = ((MR_Box) (Spec_137));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_113_113, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
                    break;
                }
                parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(Pragma_79, STATE_VARIABLE_ForeignEnumTypeCtors_0_14, &STATE_VARIABLE_ForeignEnumTypeCtors_111_111);
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractItemTypeClassInfo_69)), STATE_VARIABLE_IntTypeClasses_0_8, &STATE_VARIABLE_IntTypeClasses_124_124);
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_47, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_71;
                MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 0))));
                MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 1))));
                MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 2))));
                MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 3))));
                MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 5))));
                MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 6))));
                MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 7))));
                MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_70, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_71 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 0) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 1) = ((MR_Box) (Var_142));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 2) = ((MR_Box) (Var_143));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 3) = ((MR_Box) (Var_144));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 5) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 6) = ((MR_Box) (Var_147));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 7) = ((MR_Box) (Var_148));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_71, 8) = ((MR_Box) (Var_149));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractItemInstanceInfo_71)), STATE_VARIABLE_IntInstances_0_10, &STATE_VARIABLE_IntInstances_119_119);
                STATE_VARIABLE_NeedImports_120_120 = (MR_Integer) 1;
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_IntTypeDefns_126_126 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_115_115 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_119_119 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_125_125 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_111_111 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_120_120 = STATE_VARIABLE_NeedImports_0_16;
                STATE_VARIABLE_Specs_113_113 = STATE_VARIABLE_Specs_0_18;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_48;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_2 = STATE_VARIABLE_IntTypeDefns_126_126;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_4 = STATE_VARIABLE_IntInstDefns_117_117;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_6 = STATE_VARIABLE_IntModeDefns_115_115;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_8 = STATE_VARIABLE_IntTypeClasses_124_124;
      next_value_of_STATE_VARIABLE_IntInstances_0_10 = STATE_VARIABLE_IntInstances_119_119;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12 = STATE_VARIABLE_OrigIntTypeDefns_125_125;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14 = STATE_VARIABLE_ForeignEnumTypeCtors_111_111;
      next_value_of_STATE_VARIABLE_NeedImports_0_16 = STATE_VARIABLE_NeedImports_120_120;
      next_value_of_STATE_VARIABLE_Specs_0_18 = STATE_VARIABLE_Specs_113_113;
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
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_2[15])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[13])));
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
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[12])));
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
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[11])));
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
