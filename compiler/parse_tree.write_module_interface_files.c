/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2019-02-17
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


// :- module parse_tree.write_module_interface_files.
// :- implementation.

/*
INIT mercury__parse_tree__write_module_interface_files__init
ENDINIT
*/

#include "parse_tree.write_module_interface_files.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "int.mih"
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
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.check_raw_comp_unit.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s {
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5;
  MR_bool parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34;
  jmp_buf parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_39;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Ctors_44;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_45;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_46;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__CoveredTypes_47;
  MR_Box parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_36;
};

struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s {
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8;
  MR_bool parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30;
  jmp_buf parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_35;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Ctors_40;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_41;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_42;
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_43;
  MR_Box parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_32;
};

struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s {
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfos_8;
  MR_bool parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded;
  jmp_buf parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0;
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10;
  MR_Box parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_ImpItemTypeDefnInfo_10;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0;

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0[2];

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0[2];

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0;

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0[2];

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__725__1_3_p_0(
  MR_Word HeadVar__1_61,
  MR_Word HeadVar__2_62,
  MR_Word * HeadVar__3_63);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__582__1_2_p_0(
  MR_Word ShortImpItemsSorted_71,
  MR_Word ShortImpItemsOldSorted_73);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__580__1_2_p_0(
  MR_Word ShortIntItemsSorted_70,
  MR_Word ShortIntItemsOldSorted_72);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__578__1_2_p_0(
  MR_Word ShortImpAvailsSorted_67,
  MR_Word ShortImpAvailsOldSorted_69);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__576__1_2_p_0(
  MR_Word ShortIntAvailsSorted_66,
  MR_Word ShortIntAvailsOldSorted_68);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__535__1_2_p_0(
  MR_Word ImpItemsSorted_46,
  MR_Word ImpItemsOldSorted_48);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__533__1_2_p_0(
  MR_Word IntItemsSorted_45,
  MR_Word IntItemsOldSorted_47);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__531__1_2_p_0(
  MR_Word ImpAvailsSorted_42,
  MR_Word ImpAvailsOldSorted_44);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__529__1_2_p_0(
  MR_Word IntAvailsSorted_41,
  MR_Word IntAvailsOldSorted_43);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__527__1_2_p_0(
  MR_Word InterfaceSpecsSorted_39,
  MR_Word InterfaceSpecsOldSorted_40);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
  MR_Word NecessaryImports_3,
  MR_Word Avail_4);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_2,
  MR_Word * STATE_VARIABLE_Modules_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Modules_0_23,
  MR_Word * STATE_VARIABLE_Modules_24);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
  MR_Word ImpTypeMap_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsEqvRhsTypeCtors_33,
  MR_Word STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_ForeignDuFieldTypeCtors_35,
  MR_Word STATE_VARIABLE_Modules_0_36,
  MR_Word * STATE_VARIABLE_Modules_37);

static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__write_module_interface_files__ctor_args_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
  MR_Word ImpTypeMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
  MR_Word STATE_VARIABLE_Modules_0_19,
  MR_Word * STATE_VARIABLE_Modules_20);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
  MR_Word IntTypesMap_10,
  MR_Word BothTypesMap_11,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35,
  MR_Word * STATE_VARIABLE_AbsEqvLhsTypeCtors_36,
  MR_Word STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37,
  MR_Word * STATE_VARIABLE_AbsImpExpEnumTypeCtors_38,
  MR_Word STATE_VARIABLE_DummyTypeCtors_0_39,
  MR_Word * STATE_VARIABLE_DummyTypeCtors_40);

static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
  MR_Word TypeDefnMap_4,
  MR_Word STATE_VARIABLE_ItemTypeDefnInfos_0_25,
  MR_Word * STATE_VARIABLE_ItemTypeDefnInfos_26);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0(
  MR_Word TypeDefnMap_5,
  MR_Word Ctors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CoveredTypes_8);

static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItems_0_2,
  MR_Word * STATE_VARIABLE_ImpItems_3);

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypeCtor_7,
  MR_Word ImpItemTypeDefnInfos_8,
  MR_Word STATE_VARIABLE_AbstractExportedTypes_0_19,
  MR_Word * STATE_VARIABLE_AbstractExportedTypes_20);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word * ParseTreeInt2_9,
  MR_Word * InterfaceSpecs_10);

static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_foreign_import_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3);

static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ItemsCord_3);

static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(
  MR_Word Items0_5,
  MR_Word * Items_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItems_0_2,
  MR_Word * STATE_VARIABLE_RevItems_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0(
  MR_Word STATE_VARIABLE_IntAvails_0_26,
  MR_Word * STATE_VARIABLE_IntAvails_27,
  MR_Word STATE_VARIABLE_ImpAvails_0_28,
  MR_Word * STATE_VARIABLE_ImpAvails_29,
  MR_Word STATE_VARIABLE_IntItems_0_30,
  MR_Word * STATE_VARIABLE_IntItems_31,
  MR_Word STATE_VARIABLE_ImpItems_0_32,
  MR_Word * STATE_VARIABLE_ImpItems_33);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_in_items_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedForeignImports_2,
  MR_Word IntTypesMap_3,
  MR_Word NecessaryTypeCtors_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemsCord_6);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
  MR_Word NecessaryImports_4,
  MR_Word STATE_VARIABLE_Avails_0_6,
  MR_Word * STATE_VARIABLE_Avails_7);

static void MR_CALL 
parse_tree__write_module_interface_files__find_need_imports_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedImports_0_2,
  MR_Word * STATE_VARIABLE_NeedImports_3,
  MR_Word STATE_VARIABLE_NeedForeignImports_0_4,
  MR_Word * STATE_VARIABLE_NeedForeignImports_5);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0(
  MR_Word ImpItems_3,
  MR_Word * Modules_4);

static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
  MR_Word Section_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ItemsCord_0_3,
  MR_Word * STATE_VARIABLE_ItemsCord_4,
  MR_Word STATE_VARIABLE_TypesMap_0_5,
  MR_Word * STATE_VARIABLE_TypesMap_6);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypeMap_7,
  MR_Word BothTypeMap_8,
  MR_Word * NecessaryTypeCtors_9,
  MR_Word * NecessaryTypeImpModules_10);

static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_7_p_0(
  MR_Word SrcItemBlocks_8,
  MR_Word * IntIncls_9,
  MR_Word * ImpIncls_10,
  MR_Word * IntAvails_11,
  MR_Word * ImpAvails_12,
  MR_Word * IntItems_13,
  MR_Word * ImpItems_14);

static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_13_p_0(
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
parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItems_0_2,
  MR_Word * STATE_VARIABLE_RevItems_3);

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_9,
  MR_Word MaybeTimestamp_10);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_8_p_0(
  MR_Word Globals_9,
  MR_Word Specs_10,
  MR_Word MaybePrefixMsg_11,
  MR_Word ModuleName_12,
  MR_String SuffixA_13,
  MR_Word MaybeSuffixB_14);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_14_p_0(
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
parse_tree__write_module_interface_files__process_items_for_private_interface_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SectionItemsCord_0_3,
  MR_Word * STATE_VARIABLE_SectionItemsCord_4);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[11][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[5][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[1][12];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[2][11];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[7][6];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[4][5];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[1][8];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[2])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[4])),
    ((MR_Box) (parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[5][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Error reading interface files.\n"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Error reading short interface files.\n"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".int2"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0 = {
  (MR_String) "dont_need_foreign_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1 = {
  (MR_String) "need_foreign_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1
};

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_foreign_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_need_foreign_imports",
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0 },
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0 = {
  (MR_String) "dont_need_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1 = {
  (MR_String) "need_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1
};

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_need_imports",
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0 },
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "type_defn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_pair_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "type_defn_pair",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__725__1_3_p_0(
  MR_Word HeadVar__1_61,
  MR_Word HeadVar__2_62,
  MR_Word * HeadVar__3_63)
{
  {
    mercury__multi_map__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (HeadVar__1_61)), HeadVar__2_62, HeadVar__3_63);
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__582__1_2_p_0(
  MR_Word ShortImpItemsSorted_71,
  MR_Word ShortImpItemsOldSorted_73)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), ((MR_Box) (ShortImpItemsSorted_71)), ((MR_Box) (ShortImpItemsOldSorted_73)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__580__1_2_p_0(
  MR_Word ShortIntItemsSorted_70,
  MR_Word ShortIntItemsOldSorted_72)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), ((MR_Box) (ShortIntItemsSorted_70)), ((MR_Box) (ShortIntItemsOldSorted_72)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__578__1_2_p_0(
  MR_Word ShortImpAvailsSorted_67,
  MR_Word ShortImpAvailsOldSorted_69)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), ((MR_Box) (ShortImpAvailsSorted_67)), ((MR_Box) (ShortImpAvailsOldSorted_69)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__576__1_2_p_0(
  MR_Word ShortIntAvailsSorted_66,
  MR_Word ShortIntAvailsOldSorted_68)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), ((MR_Box) (ShortIntAvailsSorted_66)), ((MR_Box) (ShortIntAvailsOldSorted_68)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__535__1_2_p_0(
  MR_Word ImpItemsSorted_46,
  MR_Word ImpItemsOldSorted_48)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), ((MR_Box) (ImpItemsSorted_46)), ((MR_Box) (ImpItemsOldSorted_48)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__533__1_2_p_0(
  MR_Word IntItemsSorted_45,
  MR_Word IntItemsOldSorted_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), ((MR_Box) (IntItemsSorted_45)), ((MR_Box) (IntItemsOldSorted_47)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__531__1_2_p_0(
  MR_Word ImpAvailsSorted_42,
  MR_Word ImpAvailsOldSorted_44)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), ((MR_Box) (ImpAvailsSorted_42)), ((MR_Box) (ImpAvailsOldSorted_44)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__529__1_2_p_0(
  MR_Word IntAvailsSorted_41,
  MR_Word IntAvailsOldSorted_43)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), ((MR_Box) (IntAvailsSorted_41)), ((MR_Box) (IntAvailsOldSorted_43)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__527__1_2_p_0(
  MR_Word InterfaceSpecsSorted_39,
  MR_Word InterfaceSpecsOldSorted_40)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), ((MR_Box) (InterfaceSpecsSorted_39)), ((MR_Box) (InterfaceSpecsOldSorted_40)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(
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
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(
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
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
  MR_Word NecessaryImports_3,
  MR_Word Avail_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_5;

    ModuleName_5 = parse_tree__prog_item__item_avail_module_name_1_f_0(Avail_4);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_5)), NecessaryImports_3);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_requirements_of_impl_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
        return;
      }
    }
    parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(ArgTypes_7, STATE_VARIABLE_Modules_15_15, STATE_VARIABLE_Modules_12);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_type_3_p_0(
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
          parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(ArgTypes_10, STATE_VARIABLE_Modules_26_26, STATE_VARIABLE_Modules_23);
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

              parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(ArgTypes_31, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));

              parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(ArgTypes_30, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));

              parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(ArgTypes_28, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
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
parse_tree__write_module_interface_files__accumulate_modules_from_types_3_p_0(
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

      parse_tree__write_module_interface_files__accumulate_modules_from_type_3_p_0(Type_7, STATE_VARIABLE_Modules_0_2, &STATE_VARIABLE_Modules_12_12);
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
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_12;

    parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Modules_0_23,
  MR_Word * STATE_VARIABLE_Modules_24)
{
  switch (MR_tag((MR_Word) Item_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_4, (MR_Integer) 1))));
            MR_Word Constraints_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 2))));
            MR_Box conv1_STATE_VARIABLE_Modules_24;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[9]), Constraints_7, ((MR_Box) (STATE_VARIABLE_Modules_0_23)), &conv1_STATE_VARIABLE_Modules_24);
            *STATE_VARIABLE_Modules_24 = ((MR_Word) (conv1_STATE_VARIABLE_Modules_24));
          }
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 10:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 11:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
        case (MR_Integer) 12:
          *STATE_VARIABLE_Modules_24 = STATE_VARIABLE_Modules_0_23;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_used_by_type_ctor_3_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_modules_used_by_type_ctor\'/3", (MR_String) "unqualified type encountered");
        return;
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
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
    MR_Word conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
    MR_Word conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
    MR_Word conv4_STATE_VARIABLE_Modules_20;

    parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_Modules_20);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
    *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Modules_20));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Modules_12;

    parse_tree__write_module_interface_files__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_12;

    parse_tree__write_module_interface_files__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
  MR_Word ImpTypeMap_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsEqvRhsTypeCtors_33,
  MR_Word STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_ForeignDuFieldTypeCtors_35,
  MR_Word STATE_VARIABLE_Modules_0_36,
  MR_Word * STATE_VARIABLE_Modules_37)
{
  {
    MR_Word TypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_10, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) TypeDefn_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_25 = (MR_Word) ((MR_Word) (TypeDefn_16));
          MR_Word Ctors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_25, (MR_Integer) 0))));
          MR_Word Var_38;
          MR_Word RhsTypeCtors_50;
          MR_Box conv1_STATE_VARIABLE_Modules_37;

          Var_38 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__write_module_interface_files__ctors_to_user_type_ctor_set_3_p_0(Ctors_26, Var_38, &RhsTypeCtors_50);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_50, STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34, STATE_VARIABLE_ForeignDuFieldTypeCtors_35);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[7]), RhsTypeCtors_50, ((MR_Box) (STATE_VARIABLE_Modules_0_36)), &conv1_STATE_VARIABLE_Modules_37);
          *STATE_VARIABLE_Modules_37 = ((MR_Word) (conv1_STATE_VARIABLE_Modules_37));
          *STATE_VARIABLE_AbsEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32;
          *STATE_VARIABLE_ForeignDuFieldTypeCtors_35 = STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34;
          *STATE_VARIABLE_Modules_37 = STATE_VARIABLE_Modules_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_AbsEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32;
          *STATE_VARIABLE_ForeignDuFieldTypeCtors_35 = STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34;
          *STATE_VARIABLE_Modules_37 = STATE_VARIABLE_Modules_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_16, (MR_Integer) 1))));
              MR_Word RhsType_21 = (MR_Word) (DetailsEqv_20);
              MR_Word RhsTypeCtors_22;
              MR_Word NewRhsTypeCtors_23;
              MR_Word Var_42;
              MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_43_43;
              MR_Word STATE_VARIABLE_Modules_45_45;
              MR_Word Var_46;
              MR_Word Var_48;
              MR_Box conv3_STATE_VARIABLE_Modules_45_45;
              MR_Box conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_33;
              MR_Box conv8_Var_24;
              MR_Box conv7_STATE_VARIABLE_Modules_37;

              Var_42 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0(RhsType_21, Var_42, &RhsTypeCtors_22);
              mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32, &NewRhsTypeCtors_23);
              mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32, &STATE_VARIABLE_AbsEqvRhsTypeCtors_43_43);
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[8]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_Modules_0_36)), &conv3_STATE_VARIABLE_Modules_45_45);
              STATE_VARIABLE_Modules_45_45 = ((MR_Word) (conv3_STATE_VARIABLE_Modules_45_45));
              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ImpTypeMap_9));
              }
              Var_48 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), Var_46, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsEqvRhsTypeCtors_43_43)), &conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_33, ((MR_Box) (Var_48)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_Modules_45_45)), &conv7_STATE_VARIABLE_Modules_37);
              *STATE_VARIABLE_AbsEqvRhsTypeCtors_33 = ((MR_Word) (conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_33));
              *STATE_VARIABLE_Modules_37 = ((MR_Word) (conv7_STATE_VARIABLE_Modules_37));
              *STATE_VARIABLE_ForeignDuFieldTypeCtors_35 = STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32;
              *STATE_VARIABLE_ForeignDuFieldTypeCtors_35 = STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34;
              *STATE_VARIABLE_Modules_37 = STATE_VARIABLE_Modules_0_36;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_user_type_ctor_set_3_p_0(
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
      MR_Word ConsArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_TypeCtors_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtors_0_2;

      parse_tree__write_module_interface_files__ctor_args_to_user_type_ctor_set_3_p_0(ConsArgs_13, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_18_18);
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
parse_tree__write_module_interface_files__ctor_args_to_user_type_ctor_set_3_p_0(
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

      parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0(Type_11, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_15_15);
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
parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeCtors_14;

    parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtors_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtors_14));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_6;
    MR_Word Args_7;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &Args_7);
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[6]), Args_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
      *STATE_VARIABLE_TypeCtors_14 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtors_14));
    }
    else
      *STATE_VARIABLE_TypeCtors_14 = STATE_VARIABLE_TypeCtors_0_13;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
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
    MR_Word conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_33;
    MR_Word conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_35;
    MR_Word conv1_STATE_VARIABLE_Modules_37;

    parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_33, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_35, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Modules_37);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_33));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_35));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Modules_37));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
  MR_Word ImpTypeMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
  MR_Word STATE_VARIABLE_Modules_0_19,
  MR_Word * STATE_VARIABLE_Modules_20)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefns_14;
    MR_Box conv0_TypeDefns_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), ImpTypeMap_9, ((MR_Box) (TypeCtor_10)), &conv0_TypeDefns_14);
    if (succeeded)
    {
      TypeDefns_14 = ((MR_Word) (conv0_TypeDefns_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_21;
      MR_Box conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
      MR_Box conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
      MR_Box conv4_STATE_VARIABLE_Modules_20;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypeMap_9));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), Var_21, TypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17)), &conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Box) (STATE_VARIABLE_Modules_0_19)), &conv4_STATE_VARIABLE_Modules_20);
      *STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = ((MR_Word) (conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
      *STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = ((MR_Word) (conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
      *STATE_VARIABLE_Modules_20 = ((MR_Word) (conv4_STATE_VARIABLE_Modules_20));
    }
    else
    {
      *STATE_VARIABLE_Modules_20 = STATE_VARIABLE_Modules_0_19;
      *STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17;
      *STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15;
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
  MR_Word IntTypesMap_10,
  MR_Word BothTypesMap_11,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35,
  MR_Word * STATE_VARIABLE_AbsEqvLhsTypeCtors_36,
  MR_Word STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37,
  MR_Word * STATE_VARIABLE_AbsImpExpEnumTypeCtors_38,
  MR_Word STATE_VARIABLE_DummyTypeCtors_0_39,
  MR_Word * STATE_VARIABLE_DummyTypeCtors_40)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ItemTypeDefnInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypeDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_13, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) TypeDefn_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_27 = (MR_Word) ((MR_Word) (TypeDefn_19));
          MR_Word Ctors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_27, (MR_Integer) 0))));
          MR_Word MaybeEqCmp_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_27, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_27, (MR_Integer) 2))));
          MR_Box conv0_Var_31;
          MR_Integer _NumBits_32;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), IntTypesMap_10, ((MR_Box) (TypeCtor_12)), &conv0_Var_31);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_27, &_NumBits_32);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37, STATE_VARIABLE_AbsImpExpEnumTypeCtors_38);
            *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
          }
          else
          {
            succeeded = parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0(BothTypesMap_11, Ctors_28, MaybeEqCmp_29, MaybeDirectArgCtors_30);
            if (succeeded)
            {
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_DummyTypeCtors_0_39, STATE_VARIABLE_DummyTypeCtors_40);
            }
            else
              *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
            *STATE_VARIABLE_AbsImpExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37;
          }
          *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
          *STATE_VARIABLE_AbsImpExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37;
          *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box conv2_Var_26;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), IntTypesMap_10, ((MR_Box) (TypeCtor_12)), &conv2_Var_26);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35, STATE_VARIABLE_AbsEqvLhsTypeCtors_36);
          }
          else
            *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
          *STATE_VARIABLE_AbsImpExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37;
          *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv1_Var_24;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), IntTypesMap_10, ((MR_Box) (TypeCtor_12)), &conv1_Var_24);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
              {
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35, STATE_VARIABLE_AbsEqvLhsTypeCtors_36);
              }
              else
                *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
              *STATE_VARIABLE_AbsImpExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37;
              *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
              *STATE_VARIABLE_AbsImpExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImpExpEnumTypeCtors_0_37;
              *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
  MR_Word TypeDefnMap_4,
  MR_Word STATE_VARIABLE_ItemTypeDefnInfos_0_25,
  MR_Word * STATE_VARIABLE_ItemTypeDefnInfos_26)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_ItemTypeDefnInfos_0_25 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ItemTypeDefnInfo0_6;
    MR_Word Var_27;

    if (succeeded)
    {
      ItemTypeDefnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ItemTypeDefnInfos_0_25, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ItemTypeDefnInfos_0_25, (MR_Integer) 1))));
      succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word TypeDefn0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo0_6, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) TypeDefn0_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsDu0_13 = (MR_Word) ((MR_Word) (TypeDefn0_9));
            MR_Word Ctors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_13, (MR_Integer) 0))));
            MR_Word MaybeEqCmp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_13, (MR_Integer) 1))));
            MR_Word MaybeDirectArgCtors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_13, (MR_Integer) 2))));

            succeeded = parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0(TypeDefnMap_4, Ctors_14, MaybeEqCmp_15, MaybeDirectArgCtors_16);
            if (succeeded)
              *STATE_VARIABLE_ItemTypeDefnInfos_26 = STATE_VARIABLE_ItemTypeDefnInfos_0_25;
            else
            {
              MR_Word DetailsAbs_18;
              MR_Word TypeDefn_19;
              MR_Word ItemTypeDefnInfo_20;
              MR_Integer NumBits_17;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Integer Var_35;

              succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu0_13, &NumBits_17);
              if (succeeded)
                {
                  DetailsAbs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), DetailsAbs_18, 0) = ((MR_Box) (NumBits_17));
                }
              else
                DetailsAbs_18 = (MR_Word) ((MR_Unsigned) 0U);
              {
                TypeDefn_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeDefn_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), TypeDefn_19, 1) = ((MR_Box) (DetailsAbs_18));
              }
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo0_6, (MR_Integer) 0))));
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo0_6, (MR_Integer) 1))));
              Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo0_6, (MR_Integer) 3))));
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo0_6, (MR_Integer) 4))));
              Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo0_6, (MR_Integer) 5))));
              {
                ItemTypeDefnInfo_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_20, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_20, 1) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_20, 2) = ((MR_Box) (TypeDefn_19));
                MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_20, 3) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_20, 4) = ((MR_Box) (Var_34));
                MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_20, 5) = ((MR_Box) (Var_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ItemTypeDefnInfos_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemTypeDefnInfo_20));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ItemTypeDefnInfos_26 = STATE_VARIABLE_ItemTypeDefnInfos_0_25;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ItemTypeDefnInfos_26 = STATE_VARIABLE_ItemTypeDefnInfos_0_25;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ItemTypeDefnInfos_26 = STATE_VARIABLE_ItemTypeDefnInfos_0_25;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_ItemTypeDefnInfos_26 = STATE_VARIABLE_ItemTypeDefnInfos_0_25;
              break;
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_ItemTypeDefnInfos_26 = STATE_VARIABLE_ItemTypeDefnInfos_0_25;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36 = ((MR_Word) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_36));
    parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 0))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 1))));
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Integer Var_42;

      (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 2))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 3))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 4))));
      Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_36, (MR_Integer) 5))));
      (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_39)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_39));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Ctors_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43, (MR_Integer) 0))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43, (MR_Integer) 1))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__CoveredTypes_47 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9));
        }
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Ctors_44, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_45, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_46, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__CoveredTypes_47);
        if ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
          parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_35;

          (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34)), &ItemTypeDefnInfos_35);
          if ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_36, ItemTypeDefnInfos_35, parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0(
  MR_Word TypeDefnMap_5,
  MR_Word Ctors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s env;

    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5 = TypeDefnMap_5;
    {
      MR_Word Ctor_12;
      MR_Word MaybeExistConstraints_14;
      MR_Word CtorArgs_16;
      MR_Word Var_22;
      uint32_t _Ordinal_13;
      MR_Word _Name_15;
      MR_Integer _Arity_17;
      MR_Word _Context_18;

      (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeCanonical_7 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
      {
        (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeDirectArgCtors_8 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
        {
          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9 = (MR_Word) ((MR_Unsigned) 0U);
          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Ctors_6 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
          {
            Ctor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_6, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_6, (MR_Integer) 1))));
            (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
            {
              _Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
              MaybeExistConstraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1))));
              _Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2))));
              CtorArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3))));
              _Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4))));
              _Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5))));
              (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeExistConstraints_14 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
              {
                if ((CtorArgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_16, (MR_Integer) 0))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_16, (MR_Integer) 1))));
                  MR_Word SymName_30;
                  MR_Word TypeArgs_31;
                  MR_Word Var_19;
                  MR_Word Var_21;
                  MR_Word _Kind_32;
                  MR_Word TypeCtorInfo_43_64;

                  (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                  if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                  {
                    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
                    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
                    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2))));
                    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20)) == (MR_Integer) 1);
                    if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                    {
                      SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 0))));
                      TypeArgs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 1))));
                      _Kind_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20, (MR_Integer) 2))));
                      TypeCtorInfo_43_64 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = mercury__list__member_2_p_0(TypeCtorInfo_43_64, ((MR_Box) ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20)), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9);
                      if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                        (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_FALSE;
                      else
                      {
                        MR_Integer Arity_33;
                        MR_Word Var_63;

                        Arity_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_31);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_30));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_33));
                        }
                        Var_63 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_34);
                        (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_63 == (MR_Integer) 0);
                        if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
                        else
                        {
                          parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_4(&env);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32 = ((MR_Word) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_32));
    parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 0))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 1))));
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Integer Var_38;

      (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 2))));
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 3))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 4))));
      Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_32, (MR_Integer) 5))));
      (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_35)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_35));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Ctors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39, (MR_Integer) 0))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39, (MR_Integer) 1))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8));
        }
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Ctors_40, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_41, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_42, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_43);
        if ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
          parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_31;

          (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30)), &ItemTypeDefnInfos_31);
          if ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_32, ItemTypeDefnInfos_31, parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CoveredTypes_8)
{
  {
    struct parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s env;

    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8 = CoveredTypes_8;
    {
      MR_Word Ctor_7;
      MR_Word MaybeExistConstraints_10;
      MR_Word CtorArgs_12;
      MR_Word Var_18;
      uint32_t _Ordinal_9;
      MR_Word _Name_11;
      MR_Integer _Arity_13;
      MR_Word _Context_14;

      (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
      {
        (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
        {
          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
          {
            Ctor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
            {
              _Ordinal_9 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 0)));
              MaybeExistConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 1))));
              _Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 2))));
              CtorArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
              _Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4))));
              _Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 5))));
              (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (MaybeExistConstraints_10 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
              {
                if ((CtorArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_12, (MR_Integer) 0))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_12, (MR_Integer) 1))));
                  MR_Word SymName_26;
                  MR_Word TypeArgs_27;
                  MR_Word Var_15;
                  MR_Word Var_17;
                  MR_Word _Kind_28;
                  MR_Word TypeCtorInfo_43_60;

                  (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
                  if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                  {
                    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
                    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
                    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
                    (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16)) == (MR_Integer) 1);
                    if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                    {
                      SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 0))));
                      TypeArgs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 1))));
                      _Kind_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16, (MR_Integer) 2))));
                      TypeCtorInfo_43_60 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0(TypeCtorInfo_43_60, ((MR_Box) ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16)), (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8);
                      if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                        (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_FALSE;
                      else
                      {
                        MR_Integer Arity_29;
                        MR_Word Var_59;

                        Arity_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_27);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_26));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_29));
                        }
                        Var_59 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_30);
                        (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_59 == (MR_Integer) 0);
                        if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                          (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
                        else
                        {
                          parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_4(&env);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItems_0_2,
  MR_Word * STATE_VARIABLE_ImpItems_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImpItems_3 = STATE_VARIABLE_ImpItems_0_2;
    else
    {
      MR_Word ItemTypeDefnInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemTypeDefnInfos_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpItems_12_12;
      MR_Word Var_13 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefnInfo_7)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpItems_0_2;

      {
        STATE_VARIABLE_ImpItems_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpItems_12_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpItems_12_12, 1) = ((MR_Box) (STATE_VARIABLE_ImpItems_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemTypeDefnInfos_8;
      next_value_of_STATE_VARIABLE_ImpItems_0_2 = STATE_VARIABLE_ImpItems_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpItems_0_2 = next_value_of_STATE_VARIABLE_ImpItems_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10 = ((MR_Word) ((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_ImpItemTypeDefnInfo_10));
    parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word TypeDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10, (MR_Integer) 2))));
      MR_Word Details_17;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10, (MR_Integer) 0))));
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10, (MR_Integer) 3))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10, (MR_Integer) 4))));
      MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfo_10, (MR_Integer) 5))));
      MR_Integer Var_18;

      (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = ((((MR_tag((MR_Word) TypeDefn_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
      {
        Details_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_13, (MR_Integer) 1))));
        (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) Details_17)) == (MR_Integer) 1);
        if ((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
          Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Details_17, (MR_Integer) 0))));
        (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
      }
      (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
      if ((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
        parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_ImpItemTypeDefnInfo_10, (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfos_8, parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypeCtor_7,
  MR_Word ImpItemTypeDefnInfos_8,
  MR_Word STATE_VARIABLE_AbstractExportedTypes_0_19,
  MR_Word * STATE_VARIABLE_AbstractExportedTypes_20)
{
  {
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s env;

    (env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpItemTypeDefnInfos_8 = ImpItemTypeDefnInfos_8;
    {
      MR_Word TypeCtorInfo_23_23;
      MR_Word TypeCtorInfo_24_24;

      parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(&env);
      (env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
      if ((env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
      {
        TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0);
        (env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = mercury__multi_map__contains_2_p_0(TypeCtorInfo_23_23, TypeCtorInfo_24_24, IntTypesMap_6, ((MR_Box) (ImpTypeCtor_7)));
      }
      if ((env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
      {
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (ImpTypeCtor_7)), STATE_VARIABLE_AbstractExportedTypes_0_19, STATE_VARIABLE_AbstractExportedTypes_20);
      }
      else
        *STATE_VARIABLE_AbstractExportedTypes_20 = STATE_VARIABLE_AbstractExportedTypes_0_19;
    }
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_int3_5_p_0(
  MR_Word Globals_6,
  MR_String SourceFileName_7,
  MR_Word RawCompUnit_8)
{
  parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_105_110_116_51_95_95_91_50_93_95_48_5_p_0(Globals_6, RawCompUnit_8);
}

void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_105_110_116_51_95_95_91_50_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 0))));
    MR_Word ParseTreeInt0_13;
    MR_Word Specs0_14;
    MR_Word ParseTreeInt_15;
    MR_Word Specs_16;
    MR_Integer _NumWarnings_17;
    MR_Integer _NumErrors_18;

    parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0(Globals_6, RawCompUnit_8, &ParseTreeInt0_13, &Specs0_14);
    parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(Globals_6, ParseTreeInt0_13, &ParseTreeInt_15, Specs0_14, &Specs_16);
    parse_tree__error_util__write_error_specs_8_p_0(Specs_16, Globals_6, (MR_Integer) 0, &_NumWarnings_17, (MR_Integer) 0, &_NumErrors_18);
    parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_6, ParseTreeInt_15, (MR_Word) ((MR_Unsigned) 0U));
    parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_6, ModuleName_10, (MR_String) ".date3");
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit0_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_12, (MR_Integer) 0))));
    MR_Word IntRawCompUnit_17;
    MR_Word ModuleAndImports_18;
    MR_Word AugCompUnit1_19;
    MR_Word Specs0_20;
    MR_Word Errors_21;

    parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 1, RawCompUnit0_12, &IntRawCompUnit_17);
    parse_tree__modules__grab_unqual_imported_modules_7_p_0(Globals_8, SourceFileName_9, SourceFileModuleName_10, IntRawCompUnit_17, &ModuleAndImports_18);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_18, &AugCompUnit1_19, &Specs0_20, &Errors_21);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_21);
    if (succeeded)
    {
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, Specs0_20, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[3])), ModuleName_14, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[4])));
    }
    else
    {
      MR_Word AugCompUnit_23;
      MR_Word Specs_30;
      MR_Word NoHaltAtWarnGlobals_31;
      MR_Integer NumErrors_33;
      MR_Word Var_48;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Integer _NumWarnings_32;

      Var_48 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_8, AugCompUnit1_19, &AugCompUnit_23, Var_48, &Var_24, (MR_String) "", &Var_25, &Var_26, &Var_27, &Var_28, &Var_29, Specs0_20, &Specs_30);
      libs__globals__set_option_4_p_0((MR_Integer) 3, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[0])), Globals_8, &NoHaltAtWarnGlobals_31);
      parse_tree__error_util__write_error_specs_8_p_0(Specs_30, NoHaltAtWarnGlobals_31, (MR_Integer) 0, &_NumWarnings_32, (MR_Integer) 0, &NumErrors_33);
      succeeded = (NumErrors_33 > (MR_Integer) 0);
      if (succeeded)
      {
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ModuleName_14, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[4])));
      }
      else
      {
        MR_Word ParseTreeInt1_34;
        MR_Word ParseTreeInt2_35;
        MR_Word InterfaceSpecs_36;
        MR_Integer _NumWarnings2_37;
        MR_Integer _NumErrors2_38;

        parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0(Globals_8, AugCompUnit_23, &ParseTreeInt1_34, &ParseTreeInt2_35, &InterfaceSpecs_36);
        parse_tree__error_util__write_error_specs_8_p_0(InterfaceSpecs_36, Globals_8, (MR_Integer) 0, &_NumWarnings2_37, (MR_Integer) 0, &_NumErrors2_38);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_8, ParseTreeInt1_34, MaybeTimestamp_11);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_8, ParseTreeInt2_35, MaybeTimestamp_11);
        parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_8, ModuleName_14, (MR_String) ".date");
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__582__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__580__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__578__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__576__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__535__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__533__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__531__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__529__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__generate_interface_int1_int2__527__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word * ParseTreeInt2_9,
  MR_Word * InterfaceSpecs_10)
{
  {
    MR_bool succeeded;
    MR_Word IntAvails_11;
    MR_Word ImpAvails_12;
    MR_Word IntItems_13;
    MR_Word ImpItems_14;
    MR_Word ModuleName_15;
    MR_Word ModuleNameContext_16;
    MR_Word SrcItemBlocks_18;
    MR_Word IntIncls_23;
    MR_Word ImpIncls_24;
    MR_Word InterfaceSpecs0_25;
    MR_Word InterfaceSpecs1_26;
    MR_Word ToCheckIntItemBlock_27;
    MR_Word InterfaceSpecsOld_28;
    MR_Word IntAvailsOld_29;
    MR_Word ImpAvailsOld_30;
    MR_Word IntItemsOld_31;
    MR_Word ImpItemsOld_32;
    MR_Word InterfaceSpecsSorted_39;
    MR_Word InterfaceSpecsOldSorted_40;
    MR_Word IntAvailsSorted_41;
    MR_Word ImpAvailsSorted_42;
    MR_Word IntAvailsOldSorted_43;
    MR_Word ImpAvailsOldSorted_44;
    MR_Word IntItemsSorted_45;
    MR_Word ImpItemsSorted_46;
    MR_Word IntItemsOldSorted_47;
    MR_Word ImpItemsOldSorted_48;
    MR_Word BothRawItemBlocks_49;
    MR_Word ShortIntAvailsOld_52;
    MR_Word ShortImpAvailsOld_53;
    MR_Word ShortIntItemsOld_54;
    MR_Word ShortImpItemsOld_55;
    MR_Word ShortIntAvails_62;
    MR_Word ShortImpAvails_63;
    MR_Word ShortIntItems_64;
    MR_Word ShortImpItems_65;
    MR_Word ShortIntAvailsSorted_66;
    MR_Word ShortImpAvailsSorted_67;
    MR_Word ShortIntAvailsOldSorted_68;
    MR_Word ShortImpAvailsOldSorted_69;
    MR_Word ShortIntItemsSorted_70;
    MR_Word ShortImpItemsSorted_71;
    MR_Word ShortIntItemsOldSorted_72;
    MR_Word ShortImpItemsOldSorted_73;
    MR_Word STATE_VARIABLE_IntAvails_74_74;
    MR_Word STATE_VARIABLE_ImpAvails_75_75;
    MR_Word STATE_VARIABLE_IntItems_76_76;
    MR_Word STATE_VARIABLE_ImpItems_77_77;
    MR_Word STATE_VARIABLE_IntItems_80_80;
    MR_Word STATE_VARIABLE_ImpItems_81_81;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_105;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_114;
    MR_Word _ShortIntInclsOld_50;
    MR_Word _ShortImpInclsOld_51;

    parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0(Globals_6, AugCompUnit_7, ParseTreeInt1_8, ParseTreeInt2_9, InterfaceSpecs_10);
    ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    ModuleNameContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    SrcItemBlocks_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_7_p_0(SrcItemBlocks_18, &IntIncls_23, &ImpIncls_24, &STATE_VARIABLE_IntAvails_74_74, &STATE_VARIABLE_ImpAvails_75_75, &STATE_VARIABLE_IntItems_76_76, &STATE_VARIABLE_ImpItems_77_77);
    parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0(STATE_VARIABLE_IntAvails_74_74, &IntAvailsOld_29, STATE_VARIABLE_ImpAvails_75_75, &ImpAvailsOld_30, STATE_VARIABLE_IntItems_76_76, &STATE_VARIABLE_IntItems_80_80, STATE_VARIABLE_ImpItems_77_77, &STATE_VARIABLE_ImpItems_81_81);
    parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(STATE_VARIABLE_IntItems_80_80, &IntItemsOld_31, (MR_Word) ((MR_Unsigned) 0U), &InterfaceSpecs0_25);
    parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(STATE_VARIABLE_ImpItems_81_81, &ImpItemsOld_32, InterfaceSpecs0_25, &InterfaceSpecs1_26);
    {
      ToCheckIntItemBlock_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 1) = ((MR_Box) (ModuleNameContext_16));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 2) = ((MR_Box) (IntIncls_23));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 3) = ((MR_Box) (IntAvailsOld_29));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 4) = ((MR_Box) (IntItemsOld_31));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ToCheckIntItemBlock_27));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_6, ModuleName_15, ModuleNameContext_16, Var_86, InterfaceSpecs1_26, &InterfaceSpecsOld_28);
    IntAvails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_8, (MR_Integer) 6))));
    ImpAvails_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_8, (MR_Integer) 7))));
    IntItems_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_8, (MR_Integer) 8))));
    ImpItems_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_8, (MR_Integer) 9))));
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), *InterfaceSpecs_10, &InterfaceSpecsSorted_39);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), InterfaceSpecsOld_28, &InterfaceSpecsOldSorted_40);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_11, &IntAvailsSorted_41);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvails_12, &ImpAvailsSorted_42);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsOld_29, &IntAvailsOldSorted_43);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsOld_30, &ImpAvailsOldSorted_44);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItems_13, &IntItemsSorted_45);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItems_14, &ImpItemsSorted_46);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsOld_31, &IntItemsOldSorted_47);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsOld_32, &ImpItemsOldSorted_48);
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (InterfaceSpecsSorted_39));
      MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (InterfaceSpecsOldSorted_40));
    }
    mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "interface specs mismatch");
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (IntAvailsSorted_41));
      MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (IntAvailsOldSorted_43));
    }
    mercury__require__expect_3_p_0(Var_91, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "int avail mismatch");
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (ImpAvailsSorted_42));
      MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) (ImpAvailsOldSorted_44));
    }
    mercury__require__expect_3_p_0(Var_94, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "imp avail mismatch");
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (IntItemsSorted_45));
      MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (IntItemsOldSorted_47));
    }
    mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "int item mismatch");
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (ImpItemsSorted_46));
      MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) (ImpItemsOldSorted_48));
    }
    mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "imp item mismatch");
    parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleNameContext_16, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncls_23, ImpIncls_24, IntAvails_11, ImpAvails_12, IntItems_13, ImpItems_14, &BothRawItemBlocks_49);
    parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_7_p_0(BothRawItemBlocks_49, &_ShortIntInclsOld_50, &_ShortImpInclsOld_51, &ShortIntAvailsOld_52, &ShortImpAvailsOld_53, &ShortIntItemsOld_54, &ShortImpItemsOld_55);
    ShortIntAvails_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_9, (MR_Integer) 6))));
    ShortImpAvails_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_9, (MR_Integer) 7))));
    ShortIntItems_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_9, (MR_Integer) 8))));
    ShortImpItems_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_9, (MR_Integer) 9))));
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ShortIntAvails_62, &ShortIntAvailsSorted_66);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ShortImpAvails_63, &ShortImpAvailsSorted_67);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ShortIntAvailsOld_52, &ShortIntAvailsOldSorted_68);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ShortImpAvailsOld_53, &ShortImpAvailsOldSorted_69);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortIntItems_64, &ShortIntItemsSorted_70);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortImpItems_65, &ShortImpItemsSorted_71);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortIntItemsOld_54, &ShortIntItemsOldSorted_72);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ShortImpItemsOld_55, &ShortImpItemsOldSorted_73);
    {
      Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (ShortIntAvailsSorted_66));
      MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) (ShortIntAvailsOldSorted_68));
    }
    mercury__require__expect_3_p_0(Var_105, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "short int avail mismatch");
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (ShortImpAvailsSorted_67));
      MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (ShortImpAvailsOldSorted_69));
    }
    mercury__require__expect_3_p_0(Var_108, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "short imp avail mismatch");
    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_8));
      MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (ShortIntItemsSorted_70));
      MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) (ShortIntItemsOldSorted_72));
    }
    mercury__require__expect_3_p_0(Var_111, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "short int item mismatch");
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (ShortImpItemsSorted_71));
      MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (ShortImpItemsOldSorted_73));
    }
    mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140parse_tree.write_module_interface_files.generate_interface_int1_int2\'/5", (MR_String) "short imp item mismatch");
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word RawItemBlock_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word RawItemBlocks_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word IntInclsTail_16;
    MR_Word ImpInclsTail_17;
    MR_Word IntAvailsTail_18;
    MR_Word ImpAvailsTail_19;
    MR_Word IntItemsTail_20;
    MR_Word ImpItemsTail_21;
    MR_Word Section_22;
    MR_Word Incls_24;
    MR_Word Avails1_25;
    MR_Word Items0_26;
    MR_Word ItemsCord_27;
    MR_Word Items1_28;
    MR_Word Avails_29;
    MR_Word Items_30;
    MR_Word Var_31;
    MR_Word NeedImports_41;
    MR_Word NeedForeignImports_42;

    parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_7_p_0(RawItemBlocks_9, &IntInclsTail_16, &ImpInclsTail_17, &IntAvailsTail_18, &ImpAvailsTail_19, &IntItemsTail_20, &ImpItemsTail_21);
    Section_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_8, (MR_Integer) 0))));
    Incls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_8, (MR_Integer) 2))));
    Avails1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_8, (MR_Integer) 3))));
    Items0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_8, (MR_Integer) 4))));
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__get_short_interface_from_items_acc_3_p_0(Items0_26, Var_31, &ItemsCord_27);
    Items1_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_27);
    parse_tree__write_module_interface_files__find_need_imports_acc_5_p_0(Items1_28, (MR_Integer) 0, &NeedImports_41, (MR_Integer) 0, &NeedForeignImports_42);
    switch (NeedImports_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Avails_29 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        Avails_29 = Avails1_25;
        break;
    }
    switch (NeedForeignImports_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ItemsCord_43;
          MR_Word Var_44;

          Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
          parse_tree__write_module_interface_files__strip_foreign_import_items_3_p_0(Items1_28, Var_44, &ItemsCord_43);
          Items_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_43);
        }
        break;
      case (MR_Integer) 1:
        Items_30 = Items1_28;
        break;
    }
    switch (Section_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *HeadVar__2_2 = IntInclsTail_16;
          *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_24, ImpInclsTail_17);
          *HeadVar__4_4 = IntAvailsTail_18;
          *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_29, ImpAvailsTail_19);
          *HeadVar__6_6 = IntItemsTail_20;
          *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_30, ImpItemsTail_21);
        }
        break;
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_24, IntInclsTail_16);
          *HeadVar__3_3 = ImpInclsTail_17;
          *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_29, IntAvailsTail_18);
          *HeadVar__5_5 = ImpAvailsTail_19;
          *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_30, IntItemsTail_20);
          *HeadVar__7_7 = ImpItemsTail_21;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_foreign_import_items_3_p_0(
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
      MR_Word STATE_VARIABLE_ItemsCord_28_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ItemsCord_28_28 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_ItemsCord_28_28 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
              }
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_ItemsCord_28_28 = STATE_VARIABLE_ItemsCord_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_items_acc_3_p_0(
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
      MR_Word STATE_VARIABLE_ItemsCord_37_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_10 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_11;
            MR_Word MaybeAbstractItem_12;

            parse_tree__item_util__maybe_make_abstract_type_defn_for_int2_2_p_0(ItemTypeDefnInfo_10, &MaybeAbstractItemTypeDefnInfo_11);
            MaybeAbstractItem_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_11)));
            STATE_VARIABLE_ItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (MaybeAbstractItem_12)));
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (Item_7)));
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_14;
                MR_Word AbstractItem_15;

                parse_tree__item_util__make_abstract_typeclass_2_p_0(ItemTypeClassInfo_13, &AbstractItemTypeClassInfo_14);
                {
                  AbstractItem_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 1) = ((MR_Box) (AbstractItemTypeClassInfo_14));
                }
                STATE_VARIABLE_ItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (AbstractItem_15)));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_17;
                MR_Word AbstractItem_39;
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 0))));
                MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 1))));
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 2))));
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 3))));
                MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 5))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 6))));
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 7))));
                MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_16, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_17 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 0) = ((MR_Box) (Var_40));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 1) = ((MR_Box) (Var_41));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 2) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 3) = ((MR_Box) (Var_43));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 5) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 6) = ((MR_Box) (Var_46));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 7) = ((MR_Box) (Var_47));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_17, 8) = ((MR_Box) (Var_48));
                }
                {
                  AbstractItem_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_39, 1) = ((MR_Box) (AbstractItemInstanceInfo_17));
                }
                STATE_VARIABLE_ItemsCord_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_2, ((MR_Box) (AbstractItem_39)));
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_ItemsCord_37_37 = STATE_VARIABLE_ItemsCord_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_ItemsCord_0_2 = STATE_VARIABLE_ItemsCord_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_2 = next_value_of_STATE_VARIABLE_ItemsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(
  MR_Word Items0_5,
  MR_Word * Items_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  {
    MR_Word RevItems_8;

    parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(Items0_5, (MR_Word) ((MR_Unsigned) 0U), &RevItems_8, STATE_VARIABLE_Specs_0_9, STATE_VARIABLE_Specs_10);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevItems_8, Items_6);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItems_0_2,
  MR_Word * STATE_VARIABLE_RevItems_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_RevItems_3 = STATE_VARIABLE_RevItems_0_2;
    }
    else
    {
      MR_Word Item0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevItems_43_43;
      MR_Word STATE_VARIABLE_Specs_47_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      switch (MR_tag((MR_Word) Item0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause0_16 = (MR_Word) ((MR_Word) (Item0_12));
            MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause0_16, (MR_Integer) 6))));
            MR_Word Spec_18;

            Spec_18 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "clause", Context_17);
            {
              STATE_VARIABLE_Specs_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_47_47, 0) = ((MR_Box) (Spec_18));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_47_47, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
            }
            STATE_VARIABLE_RevItems_43_43 = STATE_VARIABLE_RevItems_0_2;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              STATE_VARIABLE_RevItems_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_43_43, 0) = ((MR_Box) (Item0_12));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_2));
            }
            STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item0_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                {
                  STATE_VARIABLE_RevItems_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_43_43, 0) = ((MR_Box) (Item0_12));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_2));
                }
                STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_12, (MR_Integer) 1))));
                MR_Word Pragma_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 0))));
                MR_Word AllowedInInterface_23;
                MR_Word Context_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 2))));

                AllowedInInterface_23 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_20);
                switch (AllowedInInterface_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Spec_50;

                      Spec_50 = parse_tree__comp_unit_interface__clause_in_interface_warning_2_f_0((MR_String) "pragma", Context_52);
                      {
                        STATE_VARIABLE_Specs_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_47_47, 0) = ((MR_Box) (Spec_50));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_47_47, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                      }
                      STATE_VARIABLE_RevItems_43_43 = STATE_VARIABLE_RevItems_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_RevItems_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_43_43, 0) = ((MR_Box) (Item0_12));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_2));
                      }
                      STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_0_4;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items0_13;
      next_value_of_STATE_VARIABLE_RevItems_0_2 = STATE_VARIABLE_RevItems_43_43;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_47_47;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItems_0_2 = next_value_of_STATE_VARIABLE_RevItems_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_ImpItems_3;

    parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ImpItems_3);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ImpItems_3));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_63;

    parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__725__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_63);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_63));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_AbstractExportedTypes_20;

    parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_AbstractExportedTypes_20);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_AbstractExportedTypes_20));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ItemTypeDefnInfos_26;

    parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ItemTypeDefnInfos_26);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ItemTypeDefnInfos_26));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0(
  MR_Word STATE_VARIABLE_IntAvails_0_26,
  MR_Word * STATE_VARIABLE_IntAvails_27,
  MR_Word STATE_VARIABLE_ImpAvails_0_28,
  MR_Word * STATE_VARIABLE_ImpAvails_29,
  MR_Word STATE_VARIABLE_IntItems_0_30,
  MR_Word * STATE_VARIABLE_IntItems_31,
  MR_Word STATE_VARIABLE_ImpItems_0_32,
  MR_Word * STATE_VARIABLE_ImpItems_33)
{
  {
    MR_Word IntTypesMap_13;
    MR_Word ImpTypesMap_14;
    MR_Word BothTypesMap_15;
    MR_Word NecessaryTypeCtors_16;
    MR_Word NecessaryTypeImpImports_17;
    MR_Word NecessaryTypeclassImpImports_18;
    MR_Word NecessaryImpImports_19;
    MR_Word AbstractImpTypesMap_20;
    MR_Word RemovableAbstractExportedTypes_21;
    MR_Word AbstractFilteredImpTypesMap_22;
    MR_Word NeedImports_23;
    MR_Word NeedForeignImports_24;
    MR_Word ItemsCord_25;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_ImpItems_38_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_ImpItems_45_45;
    MR_Word Var_48;
    MR_Word ItemsCord_78;
    MR_Word Var_79;
    MR_Word ItemsCord_88;
    MR_Word Var_89;
    MR_Box conv2_RemovableAbstractExportedTypes_21;
    MR_Box conv4_AbstractFilteredImpTypesMap_22;
    MR_Box conv6_STATE_VARIABLE_ImpItems_45_45;

    Var_36 = mercury__multi_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_79 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 0, STATE_VARIABLE_IntItems_0_30, Var_79, &ItemsCord_78, Var_36, &IntTypesMap_13);
    *STATE_VARIABLE_IntItems_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_78);
    Var_39 = mercury__multi_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_89 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 1, STATE_VARIABLE_ImpItems_0_32, Var_89, &ItemsCord_88, Var_39, &ImpTypesMap_14);
    STATE_VARIABLE_ImpItems_38_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_88);
    BothTypesMap_15 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypesMap_13, ImpTypesMap_14);
    parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0(IntTypesMap_13, ImpTypesMap_14, BothTypesMap_15, &NecessaryTypeCtors_16, &NecessaryTypeImpImports_17);
    parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0(STATE_VARIABLE_ImpItems_38_38, &NecessaryTypeclassImpImports_18);
    NecessaryImpImports_19 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NecessaryTypeImpImports_17, NecessaryTypeclassImpImports_18);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (BothTypesMap_15));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_40, ImpTypesMap_14, &AbstractImpTypesMap_20);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (IntTypesMap_13));
    }
    Var_42 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), Var_41, AbstractImpTypesMap_20, ((MR_Box) (Var_42)), &conv2_RemovableAbstractExportedTypes_21);
    RemovableAbstractExportedTypes_21 = ((MR_Word) (conv2_RemovableAbstractExportedTypes_21));
    mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[0]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[4]), RemovableAbstractExportedTypes_21, ((MR_Box) (AbstractImpTypesMap_20)), &conv4_AbstractFilteredImpTypesMap_22);
    AbstractFilteredImpTypesMap_22 = ((MR_Word) (conv4_AbstractFilteredImpTypesMap_22));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), AbstractFilteredImpTypesMap_22, ((MR_Box) (STATE_VARIABLE_ImpItems_38_38)), &conv6_STATE_VARIABLE_ImpItems_45_45);
    STATE_VARIABLE_ImpItems_45_45 = ((MR_Word) (conv6_STATE_VARIABLE_ImpItems_45_45));
    parse_tree__write_module_interface_files__find_need_imports_acc_5_p_0(STATE_VARIABLE_ImpItems_45_45, (MR_Integer) 0, &NeedImports_23, (MR_Integer) 0, &NeedForeignImports_24);
    switch (NeedImports_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ImpAvails_29 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(NecessaryImpImports_19, STATE_VARIABLE_ImpAvails_0_28, STATE_VARIABLE_ImpAvails_29);
        break;
    }
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_in_items_6_p_0(STATE_VARIABLE_ImpItems_45_45, NeedForeignImports_24, IntTypesMap_13, NecessaryTypeCtors_16, Var_48, &ItemsCord_25);
    *STATE_VARIABLE_ImpItems_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_25);
    *STATE_VARIABLE_IntAvails_27 = STATE_VARIABLE_IntAvails_0_26;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_in_items_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedForeignImports_2,
  MR_Word IntTypesMap_3,
  MR_Word NecessaryTypeCtors_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemsCord_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ItemsCord_6 = STATE_VARIABLE_ItemsCord_0_5;
    else
    {
      MR_Word Item_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemsCord_66_66;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_5;

      switch (MR_tag((MR_Word) Item_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ItemsCord_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_5, ((MR_Box) (Item_13)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_38 = (MR_Word) (MR_body((MR_Word) (Item_13), (MR_Integer) 1));
            MR_Word SymName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_38, (MR_Integer) 0))));
            MR_Word Params_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_38, (MR_Integer) 1))));
            MR_Integer Var_61;
            MR_Word TypeCtor_68;

            Var_61 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[6]), Params_40);
            {
              TypeCtor_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_68, 0) = ((MR_Box) (SymName_39));
              MR_hl_field(MR_mktag(0), TypeCtor_68, 1) = ((MR_Box) (Var_61));
            }
            succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_68)), NecessaryTypeCtors_4);
            if (succeeded)
            {
              STATE_VARIABLE_ItemsCord_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_5, ((MR_Box) (Item_13)));
            }
            else
              STATE_VARIABLE_ItemsCord_66_66 = STATE_VARIABLE_ItemsCord_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_ItemsCord_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_5, ((MR_Box) (Item_13)));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_13, (MR_Integer) 1))));
                MR_Word Pragma_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_20, (MR_Integer) 0))));
                MR_Word FEInfo_25;

                succeeded = ((((MR_tag((MR_Word) Pragma_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  FEInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_21, (MR_Integer) 1))));
                  {
                    MR_Word TypeCtor_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_25, (MR_Integer) 1))));
                    MR_Word Defns_29;
                    MR_Box conv0_Defns_29;
                    MR_Word Defn_30;
                    MR_Word Body_33;
                    MR_Word Var_63;

                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), IntTypesMap_3, ((MR_Box) (TypeCtor_27)), &conv0_Defns_29);
                    if (succeeded)
                    {
                      Defns_29 = ((MR_Word) (conv0_Defns_29));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      succeeded = (Defns_29 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Defn_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defns_29, (MR_Integer) 0))));
                        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defns_29, (MR_Integer) 1))));
                        succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Body_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_30, (MR_Integer) 2))));
                          succeeded = ((((MR_tag((MR_Word) Body_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                          }
                        }
                      }
                      succeeded = !(succeeded);
                    }
                    if (succeeded)
                    {
                      STATE_VARIABLE_ItemsCord_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_5, ((MR_Box) (Item_13)));
                    }
                    else
                      STATE_VARIABLE_ItemsCord_66_66 = STATE_VARIABLE_ItemsCord_0_5;
                  }
                }
                else
                {
                  STATE_VARIABLE_ItemsCord_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_5, ((MR_Box) (Item_13)));
                }
              }
              break;
            case (MR_Integer) 10:
              switch (NeedForeignImports_2) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_ItemsCord_66_66 = STATE_VARIABLE_ItemsCord_0_5;
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_ItemsCord_66_66 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_5, ((MR_Box) (Item_13)));
                  }
                  break;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_14;
      next_value_of_STATE_VARIABLE_ItemsCord_0_5 = STATE_VARIABLE_ItemsCord_66_66;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemsCord_0_5 = next_value_of_STATE_VARIABLE_ItemsCord_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
  MR_Word NecessaryImports_4,
  MR_Word STATE_VARIABLE_Avails_0_6,
  MR_Word * STATE_VARIABLE_Avails_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (NecessaryImports_4));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_8, STATE_VARIABLE_Avails_0_6, STATE_VARIABLE_Avails_7);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__find_need_imports_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedImports_0_2,
  MR_Word * STATE_VARIABLE_NeedImports_3,
  MR_Word STATE_VARIABLE_NeedForeignImports_0_4,
  MR_Word * STATE_VARIABLE_NeedForeignImports_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NeedForeignImports_5 = STATE_VARIABLE_NeedForeignImports_0_4;
      *STATE_VARIABLE_NeedImports_3 = STATE_VARIABLE_NeedImports_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemNeedsImports_16;
      MR_Word ItemNeedsForeignImports_17;
      MR_Word STATE_VARIABLE_NeedImports_24_24;
      MR_Word STATE_VARIABLE_NeedForeignImports_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NeedForeignImports_0_4;

      ItemNeedsImports_16 = parse_tree__item_util__item_needs_imports_1_f_0(Item_12);
      ItemNeedsForeignImports_17 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(Item_12);
      switch (ItemNeedsImports_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedImports_24_24 = STATE_VARIABLE_NeedImports_0_2;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedImports_24_24 = (MR_Integer) 1;
          break;
      }
      if ((ItemNeedsForeignImports_17 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_NeedForeignImports_25_25 = STATE_VARIABLE_NeedForeignImports_0_4;
      else
        STATE_VARIABLE_NeedForeignImports_25_25 = (MR_Integer) 1;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_NeedImports_0_2 = STATE_VARIABLE_NeedImports_24_24;
      next_value_of_STATE_VARIABLE_NeedForeignImports_0_4 = STATE_VARIABLE_NeedForeignImports_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NeedImports_0_2 = next_value_of_STATE_VARIABLE_NeedImports_0_2;
      STATE_VARIABLE_NeedForeignImports_0_4 = next_value_of_STATE_VARIABLE_NeedForeignImports_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_24;

    parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_24));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0(
  MR_Word ImpItems_3,
  MR_Word * Modules_4)
{
  {
    MR_Word Var_6;
    MR_Box conv1_Modules_4;

    Var_6 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[3]), ImpItems_3, ((MR_Box) (Var_6)), &conv1_Modules_4);
    *Modules_4 = ((MR_Word) (conv1_Modules_4));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
  MR_Word Section_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ItemsCord_0_3,
  MR_Word * STATE_VARIABLE_ItemsCord_4,
  MR_Word STATE_VARIABLE_TypesMap_0_5,
  MR_Word * STATE_VARIABLE_TypesMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TypesMap_6 = STATE_VARIABLE_TypesMap_0_5;
      *STATE_VARIABLE_ItemsCord_4 = STATE_VARIABLE_ItemsCord_0_3;
    }
    else
    {
      MR_Word Item_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemsCord_32_32;
      MR_Word STATE_VARIABLE_TypesMap_33_33;
      MR_Word ItemTypeDefn_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ItemsCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TypesMap_0_5;

      succeeded = ((MR_tag((MR_Word) Item_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        ItemTypeDefn_19 = (MR_Word) (MR_body((MR_Word) (Item_15), (MR_Integer) 1));
        {
          MR_Word Name_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_19, (MR_Integer) 0))));
          MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_19, (MR_Integer) 1))));
          MR_Word TypeCtor_26;
          MR_Integer Var_31;

          Var_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[6]), Args_21);
          {
            TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtor_26, 0) = ((MR_Box) (Name_20));
            MR_hl_field(MR_mktag(0), TypeCtor_26, 1) = ((MR_Box) (Var_31));
          }
          switch (Section_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_ItemsCord_32_32 = STATE_VARIABLE_ItemsCord_0_3;
              break;
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ItemsCord_32_32 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (Item_15)));
              }
              break;
          }
          mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_26)), ((MR_Box) (ItemTypeDefn_19)), STATE_VARIABLE_TypesMap_0_5, &STATE_VARIABLE_TypesMap_33_33);
        }
      }
      else
      {
        STATE_VARIABLE_ItemsCord_32_32 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (Item_15)));
        STATE_VARIABLE_TypesMap_33_33 = STATE_VARIABLE_TypesMap_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_16;
      next_value_of_STATE_VARIABLE_ItemsCord_0_3 = STATE_VARIABLE_ItemsCord_32_32;
      next_value_of_STATE_VARIABLE_TypesMap_0_5 = STATE_VARIABLE_TypesMap_33_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ItemsCord_0_3 = next_value_of_STATE_VARIABLE_ItemsCord_0_3;
      STATE_VARIABLE_TypesMap_0_5 = next_value_of_STATE_VARIABLE_TypesMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0_2(
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
    MR_Word conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
    MR_Word conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
    MR_Word conv6_STATE_VARIABLE_Modules_20;

    parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_Modules_20);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Modules_20));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0_1(
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
    MR_Word conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_36;
    MR_Word conv1_STATE_VARIABLE_AbsImpExpEnumTypeCtors_38;
    MR_Word conv0_STATE_VARIABLE_DummyTypeCtors_40;

    parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_36, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsImpExpEnumTypeCtors_38, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DummyTypeCtors_40);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_36));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsImpExpEnumTypeCtors_38));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DummyTypeCtors_40));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypeMap_7,
  MR_Word BothTypeMap_8,
  MR_Word * NecessaryTypeCtors_9,
  MR_Word * NecessaryTypeImpModules_10)
{
  {
    MR_Word ImpTypes_11;
    MR_Word AbsImpExpLhsTypeCtors_12;
    MR_Word AbsImpExpEnumTypeCtors_13;
    MR_Word DummyTypeCtors_14;
    MR_Word AbsEqvRhsTypeCtors_15;
    MR_Word ForeignDuFieldTypeCtors_16;
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
    MR_Word Var_29;
    MR_Box conv5_AbsImpExpLhsTypeCtors_12;
    MR_Box conv4_AbsImpExpEnumTypeCtors_13;
    MR_Box conv3_DummyTypeCtors_14;
    MR_Box conv11_AbsEqvRhsTypeCtors_15;
    MR_Box conv10_ForeignDuFieldTypeCtors_16;
    MR_Box conv9_NecessaryTypeImpModules_10;

    mercury__multi_map__to_flat_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ImpTypeMap_7, &ImpTypes_11);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (IntTypesMap_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (BothTypeMap_8));
    }
    Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), Var_17, ImpTypes_11, ((MR_Box) (Var_18)), &conv5_AbsImpExpLhsTypeCtors_12, ((MR_Box) (Var_19)), &conv4_AbsImpExpEnumTypeCtors_13, ((MR_Box) (Var_20)), &conv3_DummyTypeCtors_14);
    AbsImpExpLhsTypeCtors_12 = ((MR_Word) (conv5_AbsImpExpLhsTypeCtors_12));
    AbsImpExpEnumTypeCtors_13 = ((MR_Word) (conv4_AbsImpExpEnumTypeCtors_13));
    DummyTypeCtors_14 = ((MR_Word) (conv3_DummyTypeCtors_14));
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypeMap_7));
    }
    Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_23 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_24 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[5]), Var_21, AbsImpExpLhsTypeCtors_12, ((MR_Box) (Var_22)), &conv11_AbsEqvRhsTypeCtors_15, ((MR_Box) (Var_23)), &conv10_ForeignDuFieldTypeCtors_16, ((MR_Box) (Var_24)), &conv9_NecessaryTypeImpModules_10);
    AbsEqvRhsTypeCtors_15 = ((MR_Word) (conv11_AbsEqvRhsTypeCtors_15));
    ForeignDuFieldTypeCtors_16 = ((MR_Word) (conv10_ForeignDuFieldTypeCtors_16));
    *NecessaryTypeImpModules_10 = ((MR_Word) (conv9_NecessaryTypeImpModules_10));
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (AbsImpExpEnumTypeCtors_13));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ForeignDuFieldTypeCtors_16));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (AbsEqvRhsTypeCtors_15));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (AbsImpExpLhsTypeCtors_12));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (DummyTypeCtors_14));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
    }
    *NecessaryTypeCtors_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_25);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_7_p_0(
  MR_Word SrcItemBlocks_8,
  MR_Word * IntIncls_9,
  MR_Word * ImpIncls_10,
  MR_Word * IntAvails_11,
  MR_Word * ImpAvails_12,
  MR_Word * IntItems_13,
  MR_Word * ImpItems_14)
{
  {
    MR_Word IntInclsCord_15;
    MR_Word ImpInclsCord_16;
    MR_Word IntAvailsCord_17;
    MR_Word ImpAvailsCord_18;
    MR_Word IntItemsCord_19;
    MR_Word ImpItemsCord_20;
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
    parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_13_p_0(SrcItemBlocks_8, Var_21, &IntInclsCord_15, Var_22, &ImpInclsCord_16, Var_23, &IntAvailsCord_17, Var_24, &ImpAvailsCord_18, Var_25, &IntItemsCord_19, Var_26, &ImpItemsCord_20);
    *IntIncls_9 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_15);
    *ImpIncls_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_16);
    *IntAvails_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_17);
    *ImpAvails_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_18);
    *IntItems_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_19);
    *ImpItems_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_20);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_13_p_0(
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
      MR_Word SrcItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcSection_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_32, (MR_Integer) 0))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_32, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_32, (MR_Integer) 3))));
      MR_Word Items_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_32, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ImpInclsCord_58_58;
      MR_Word STATE_VARIABLE_ImpAvailsCord_60_60;
      MR_Word STATE_VARIABLE_ImpItemsCord_62_62;
      MR_Word STATE_VARIABLE_IntInclsCord_64_64;
      MR_Word STATE_VARIABLE_IntAvailsCord_66_66;
      MR_Word STATE_VARIABLE_IntItemsCord_68_68;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_12;

      switch (SrcSection_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_59;
            MR_Word Var_61;
            MR_Word Var_63;
            MR_Word StrippedItems_76;
            MR_Word RevItems_85;

            Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_42);
            STATE_VARIABLE_ImpInclsCord_58_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_4, Var_59);
            Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_43);
            STATE_VARIABLE_ImpAvailsCord_60_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_8, Var_61);
            parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(Items_44, (MR_Word) ((MR_Unsigned) 0U), &RevItems_85);
            mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevItems_85, &StrippedItems_76);
            Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), StrippedItems_76);
            STATE_VARIABLE_ImpItemsCord_62_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ImpItemsCord_0_12, Var_63);
            STATE_VARIABLE_IntInclsCord_64_64 = STATE_VARIABLE_IntInclsCord_0_2;
            STATE_VARIABLE_IntAvailsCord_66_66 = STATE_VARIABLE_IntAvailsCord_0_6;
            STATE_VARIABLE_IntItemsCord_68_68 = STATE_VARIABLE_IntItemsCord_0_10;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word StrippedItems_45;
            MR_Word Var_65;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word RevItems_90;

            Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_42);
            STATE_VARIABLE_IntInclsCord_64_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_2, Var_65);
            Var_67 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_43);
            STATE_VARIABLE_IntAvailsCord_66_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_6, Var_67);
            parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(Items_44, (MR_Word) ((MR_Unsigned) 0U), &RevItems_90);
            mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevItems_90, &StrippedItems_45);
            Var_69 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), StrippedItems_45);
            STATE_VARIABLE_IntItemsCord_68_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_IntItemsCord_0_10, Var_69);
            STATE_VARIABLE_ImpInclsCord_58_58 = STATE_VARIABLE_ImpInclsCord_0_4;
            STATE_VARIABLE_ImpAvailsCord_60_60 = STATE_VARIABLE_ImpAvailsCord_0_8;
            STATE_VARIABLE_ImpItemsCord_62_62 = STATE_VARIABLE_ImpItemsCord_0_12;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks_33;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_2 = STATE_VARIABLE_IntInclsCord_64_64;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_4 = STATE_VARIABLE_ImpInclsCord_58_58;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_6 = STATE_VARIABLE_IntAvailsCord_66_66;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8 = STATE_VARIABLE_ImpAvailsCord_60_60;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_10 = STATE_VARIABLE_IntItemsCord_68_68;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_12 = STATE_VARIABLE_ImpItemsCord_62_62;
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
parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItems_0_2,
  MR_Word * STATE_VARIABLE_RevItems_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevItems_3 = STATE_VARIABLE_RevItems_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevItems_19_19;
      MR_Word ItemPromise_10;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        ItemPromise_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_10, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_18 == (MR_Integer) 3);
      }
      if (succeeded)
        STATE_VARIABLE_RevItems_19_19 = STATE_VARIABLE_RevItems_0_2;
      else
        {
          STATE_VARIABLE_RevItems_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_19_19, 0) = ((MR_Box) (Item_7));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_RevItems_0_2 = STATE_VARIABLE_RevItems_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItems_0_2 = next_value_of_STATE_VARIABLE_RevItems_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit0_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_12, (MR_Integer) 0))));
    MR_Word ModuleAndImports_17;
    MR_Word AugCompUnit1_18;
    MR_Word Specs0_19;
    MR_Word Errors_20;

    parse_tree__modules__grab_unqual_imported_modules_7_p_0(Globals_8, SourceFileName_9, SourceFileModuleName_10, RawCompUnit0_12, &ModuleAndImports_17);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_17, &AugCompUnit1_18, &Specs0_19, &Errors_20);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_20);
    if (succeeded)
    {
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, Specs0_19, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[2])), ModuleName_14, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
    }
    else
    {
      MR_Word AugCompUnit_22;
      MR_Word Specs_29;
      MR_Word Var_40;
      MR_Word _EventSpecMap_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_40 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_8, AugCompUnit1_18, &AugCompUnit_22, Var_40, &_EventSpecMap_23, (MR_String) "", &Var_24, &Var_25, &Var_26, &Var_27, &Var_28, Specs0_19, &Specs_29);
      if ((Specs_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParseTreeInt_32;
        MR_Word ModuleName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_22, (MR_Integer) 0))));
        MR_Word ModuleNameContext_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_22, (MR_Integer) 1))));
        MR_Word ModuleVersionNumbers_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_22, (MR_Integer) 2))));
        MR_Word SrcItemBlocks_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_22, (MR_Integer) 3))));
        MR_Word IntInclsCord_62;
        MR_Word ImpInclsCord_63;
        MR_Word IntAvailsCord_64;
        MR_Word ImpAvailsCord_65;
        MR_Word IntItemsCord_66;
        MR_Word ImpItemsCord_67;
        MR_Word MaybeVersionNumbers_69;
        MR_Word IntIncls_70;
        MR_Word ImpIncls_71;
        MR_Word IntAvails_72;
        MR_Word ImpAvails_73;
        MR_Word IntItems_74;
        MR_Word ImpItems_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word VersionNumbers_68;
        MR_Box conv0_VersionNumbers_68;

        Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
        Var_77 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
        Var_78 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
        Var_79 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
        Var_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
        Var_81 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
        parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_14_p_0(ModuleName_54, SrcItemBlocks_57, Var_76, &IntInclsCord_62, Var_77, &ImpInclsCord_63, Var_78, &IntAvailsCord_64, Var_79, &ImpAvailsCord_65, Var_80, &IntItemsCord_66, Var_81, &ImpItemsCord_67);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_56, ((MR_Box) (ModuleName_54)), &conv0_VersionNumbers_68);
        if (succeeded)
        {
          VersionNumbers_68 = ((MR_Word) (conv0_VersionNumbers_68));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            MaybeVersionNumbers_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeVersionNumbers_69, 0) = ((MR_Box) (VersionNumbers_68));
          }
        else
          MaybeVersionNumbers_69 = (MR_Word) ((MR_Unsigned) 0U);
        IntIncls_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_62);
        ImpIncls_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_63);
        IntAvails_72 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_64);
        ImpAvails_73 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_65);
        IntItems_74 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_66);
        ImpItems_75 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_67);
        {
          ParseTreeInt_32 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 0) = ((MR_Box) (ModuleName_54));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 2) = ((MR_Box) (ModuleNameContext_55));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 3) = ((MR_Box) (MaybeVersionNumbers_69));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 4) = ((MR_Box) (IntIncls_70));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 5) = ((MR_Box) (ImpIncls_71));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 6) = ((MR_Box) (IntAvails_72));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 7) = ((MR_Box) (ImpAvails_73));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 8) = ((MR_Box) (IntItems_74));
          MR_hl_field(MR_mktag(0), ParseTreeInt_32, 9) = ((MR_Box) (ImpItems_75));
        }
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_8, ParseTreeInt_32, MaybeTimestamp_11);
        parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_8, ModuleName_14, (MR_String) ".date0");
      }
      else
      {
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, Specs_29, (MR_Word) ((MR_Unsigned) 0U), ModuleName_14, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_9,
  MR_Word MaybeTimestamp_10)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt1_12;
    MR_Word ModuleName_13;
    MR_Word IntFileKind_14;
    MR_String Suffix_15;
    MR_String TmpSuffix_16;
    MR_String OutputFileName_17;
    MR_String TmpOutputFileName_18;
    MR_Word NoLineNumGlobals0_19;
    MR_Word NoLineNumGlobals_20;
    MR_Word GenerateVersionNumbers_21;
    MR_Word DisableVersionNumbers_22;
    MR_Word MaybeVersionNumbers_31;
    MR_Word ParseTreeInt_32;
    MR_Word Var_41;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0(ParseTreeInt0_9, &ParseTreeInt1_12);
    ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 0))));
    IntFileKind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 1))) & (MR_Integer) 3);
    Suffix_15 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_14);
    TmpSuffix_16 = mercury__string__f_43_43_2_f_0(Suffix_15, (MR_String) ".tmp");
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, Suffix_15, ModuleName_13, &OutputFileName_17);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, TmpSuffix_16, ModuleName_13, &TmpOutputFileName_18);
    Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_4[0]));
    libs__globals__set_option_4_p_0((MR_Integer) 152, Var_41, Globals_7, &NoLineNumGlobals0_19);
    libs__globals__set_option_4_p_0((MR_Integer) 153, Var_41, NoLineNumGlobals0_19, &NoLineNumGlobals_20);
    libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_20, (MR_Integer) 131, &GenerateVersionNumbers_21);
    libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_22);
    succeeded = (GenerateVersionNumbers_21 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableVersionNumbers_22 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Timestamp_23;
      MR_Word OldParseTreeInt_26;
      MR_Word OldErrors_28;
      MR_Word MaybeOldParseTreeInt_29;
      MR_Word VersionNumbers_30;
      MR_String _OldIntFileName_24;
      MR_Word _OldTimestamp_25;
      MR_Word _OldSpecs_27;

      if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/6", (MR_String) "with \140--smart-recompilation\', timestamp not read");
          return;
        }
      }
      else
        Timestamp_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_10, (MR_Integer) 0))));
      parse_tree__read_modules__read_module_int_14_p_0(NoLineNumGlobals_20, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, IntFileKind_14, &_OldIntFileName_24, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_4[1]), &_OldTimestamp_25, &OldParseTreeInt_26, &_OldSpecs_27, &OldErrors_28);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_28);
      if (succeeded)
        {
          MaybeOldParseTreeInt_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_29, 0) = ((MR_Box) (OldParseTreeInt_26));
        }
      else
        MaybeOldParseTreeInt_29 = (MR_Word) ((MR_Unsigned) 0U);
      recompilation__version__compute_version_numbers_4_p_0(Timestamp_23, ParseTreeInt1_12, MaybeOldParseTreeInt_29, &VersionNumbers_30);
      {
        MaybeVersionNumbers_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_31, 0) = ((MR_Box) (VersionNumbers_30));
      }
    }
    else
      MaybeVersionNumbers_31 = (MR_Word) ((MR_Unsigned) 0U);
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 0))));
    Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 1))) & (MR_Integer) 3);
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 2))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 4))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 5))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 6))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 7))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 8))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 9))));
    {
      ParseTreeInt_32 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 1) = (MR_Box) ((MR_Unsigned) (Var_77));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 2) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 3) = ((MR_Box) (MaybeVersionNumbers_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 4) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 5) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 6) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 7) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 8) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 9) = ((MR_Box) (Var_85));
    }
    parse_tree__parse_tree_out__convert_to_mercury_int_5_p_0(NoLineNumGlobals_20, TmpOutputFileName_18, ParseTreeInt_32);
    parse_tree__module_cmds__update_interface_4_p_0(Globals_7, OutputFileName_17);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_8_p_0(
  MR_Word Globals_9,
  MR_Word Specs_10,
  MR_Word MaybePrefixMsg_11,
  MR_Word ModuleName_12,
  MR_String SuffixA_13,
  MR_Word MaybeSuffixB_14)
{
  {
    MR_String IntAFileName_19;
    MR_Word NotWrittenPieces_20;
    MR_Word NotWrittenMsg_23;
    MR_Word NotWrittenSpec_24;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_64;
    MR_Integer _NumWarnings_16;
    MR_Integer _NumErrors_17;
    MR_Integer Var_25;
    MR_Integer Var_26;

    parse_tree__error_util__write_error_specs_8_p_0(Specs_10, Globals_9, (MR_Integer) 0, &_NumWarnings_16, (MR_Integer) 0, &_NumErrors_17);
    if (!((MaybePrefixMsg_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String PrefixMsg_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefixMsg_11, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(PrefixMsg_18);
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, SuffixA_13, ModuleName_12, &IntAFileName_19);
    if ((MaybeSuffixB_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_49;

      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (IntAFileName_19));
      }
      {
        NotWrittenPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_20, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[9])));
      }
    }
    else
    {
      MR_String SuffixB_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSuffixB_14, (MR_Integer) 0))));
      MR_String IntBFileName_22;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_42;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, SuffixB_21, ModuleName_12, &IntBFileName_22);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (IntAFileName_19));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (IntBFileName_22));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[9])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[10])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        NotWrittenPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_20, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_20, 1) = ((MR_Box) (Var_38));
      }
    }
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (NotWrittenPieces_20));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      NotWrittenMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_23, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_23, 3) = ((MR_Box) (Var_59));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (NotWrittenMsg_23));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      NotWrittenSpec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NotWrittenSpec_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_24, 2) = ((MR_Box) (Var_64));
    }
    parse_tree__error_util__write_error_spec_8_p_0(NotWrittenSpec_24, Globals_9, (MR_Integer) 0, &Var_25, (MR_Integer) 0, &Var_26);
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_14_p_0_1(
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
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_14_p_0(
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
      MR_Word SrcSection_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_35, (MR_Integer) 0))));
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

      switch (SrcSection_43) {
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
            parse_tree__write_module_interface_files__process_items_for_private_interface_4_p_0(HeadVar__1_1, Items_47, STATE_VARIABLE_ImpItemsCord_0_13, &STATE_VARIABLE_ImpItemsCord_65_65);
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
            mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), Avails_46, &ImportAvails_48);
            Var_72 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImportAvails_48);
            STATE_VARIABLE_ImpAvailsCord_71_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_9, Var_72);
            parse_tree__write_module_interface_files__process_items_for_private_interface_4_p_0(HeadVar__1_1, Items_47, STATE_VARIABLE_IntItemsCord_0_11, &STATE_VARIABLE_IntItemsCord_73_73);
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
parse_tree__write_module_interface_files__process_items_for_private_interface_4_p_0(
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
            case (MR_Integer) 12:
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
                MR_Word InstanceInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_Word AbstractInstanceInfo_42;
                MR_Word AbstractItem_43;

                AbstractInstanceInfo_42 = parse_tree__item_util__make_instance_abstract_1_f_0(InstanceInfo_41);
                {
                  AbstractItem_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), AbstractItem_43, 1) = ((MR_Box) (AbstractInstanceInfo_42));
                }
                STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (AbstractItem_43)));
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
                MR_Word ItemMutable_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
                MR_String MutableName_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_44, (MR_Integer) 0))));
                MR_Word Type_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_44, (MR_Integer) 2))));
                MR_Word Inst_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_44, (MR_Integer) 4))));
                MR_Word Attrs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_44, (MR_Integer) 7))));
                MR_Word Context_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_44, (MR_Integer) 8))));
                MR_Word ConstantInterface_55;

                ConstantInterface_55 = parse_tree__prog_item__mutable_var_constant_1_f_0(Attrs_52);
                switch (ConstantInterface_55) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ConstantGetPredDecl_56;
                      MR_Word ConstantSetPredDecl_57;
                      MR_Word ConstantGetPredDeclItem_58;
                      MR_Word ConstantSetPredDeclItem_59;
                      MR_Word STATE_VARIABLE_SectionItemsCord_61_73;

                      ConstantGetPredDecl_56 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_45, Type_47, Inst_49, Context_53);
                      ConstantSetPredDecl_57 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_45, Type_47, Inst_49, Context_53);
                      {
                        ConstantGetPredDeclItem_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConstantGetPredDeclItem_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), ConstantGetPredDeclItem_58, 1) = ((MR_Box) (ConstantGetPredDecl_56));
                      }
                      {
                        ConstantSetPredDeclItem_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConstantSetPredDeclItem_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), ConstantSetPredDeclItem_59, 1) = ((MR_Box) (ConstantSetPredDecl_57));
                      }
                      STATE_VARIABLE_SectionItemsCord_61_73 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (ConstantGetPredDeclItem_58)));
                      STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_61_73, ((MR_Box) (ConstantSetPredDeclItem_59)));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word StdGetPredDecl_60;
                      MR_Word StdSetPredDecl_61;
                      MR_Word StdGetPredDeclItem_62;
                      MR_Word StdSetPredDeclItem_63;
                      MR_Word IOStateInterface_64;
                      MR_Word STATE_VARIABLE_SectionItemsCord_57_69;
                      MR_Word STATE_VARIABLE_SectionItemsCord_58_70;

                      StdGetPredDecl_60 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_45, Type_47, Inst_49, Context_53);
                      StdSetPredDecl_61 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_45, Type_47, Inst_49, Context_53);
                      {
                        StdGetPredDeclItem_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdGetPredDeclItem_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdGetPredDeclItem_62, 1) = ((MR_Box) (StdGetPredDecl_60));
                      }
                      {
                        StdSetPredDeclItem_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdSetPredDeclItem_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdSetPredDeclItem_63, 1) = ((MR_Box) (StdSetPredDecl_61));
                      }
                      STATE_VARIABLE_SectionItemsCord_57_69 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_0_3, ((MR_Box) (StdGetPredDeclItem_62)));
                      STATE_VARIABLE_SectionItemsCord_58_70 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_57_69, ((MR_Box) (StdSetPredDeclItem_63)));
                      IOStateInterface_64 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(Attrs_52);
                      switch (IOStateInterface_64) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word IOGetPredDecl_65;
                            MR_Word IOSetPredDecl_66;
                            MR_Word IOGetPredDeclItem_67;
                            MR_Word IOSetPredDeclItem_68;
                            MR_Word STATE_VARIABLE_SectionItemsCord_59_71;

                            IOGetPredDecl_65 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(HeadVar__1_1, MutableName_45, Type_47, Inst_49, Context_53);
                            IOSetPredDecl_66 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(HeadVar__1_1, MutableName_45, Type_47, Inst_49, Context_53);
                            {
                              IOGetPredDeclItem_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), IOGetPredDeclItem_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), IOGetPredDeclItem_67, 1) = ((MR_Box) (IOGetPredDecl_65));
                            }
                            {
                              IOSetPredDeclItem_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), IOSetPredDeclItem_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), IOSetPredDeclItem_68, 1) = ((MR_Box) (IOSetPredDecl_66));
                            }
                            STATE_VARIABLE_SectionItemsCord_59_71 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_58_70, ((MR_Box) (IOGetPredDeclItem_67)));
                            STATE_VARIABLE_SectionItemsCord_15_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_SectionItemsCord_59_71, ((MR_Box) (IOSetPredDeclItem_68)));
                          }
                          break;
                        case (MR_Integer) 0:
                          STATE_VARIABLE_SectionItemsCord_15_15 = STATE_VARIABLE_SectionItemsCord_58_70;
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

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__write_module_interface_files__init(void)
{
}

void mercury__parse_tree__write_module_interface_files__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_foreign_imports_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_imports_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_map_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_pair_0);
}

void mercury__parse_tree__write_module_interface_files__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_module_interface_files__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_module_interface_files.
