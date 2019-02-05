/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2019-01-05
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
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtors_44;
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
  MR_Word parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtors_40;
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

static const MR_PseudoTypeInfo parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_import_info_0_0[3];

static const MR_DuArgLocn parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_locns_module_import_info_0_0[3];

static const MR_DuFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_import_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_import_info_0_0[1];

static const MR_DuPtagLayout parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_import_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_import_info_0[1];

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_import_info_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__671__1_3_p_0(
  MR_Word HeadVar__1_70,
  MR_Word HeadVar__2_71,
  MR_Word * HeadVar__3_72);

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
parse_tree__write_module_interface_files____Compare____module_import_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_import_info_0_0(
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
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(
  MR_Word ArgType_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

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
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
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
  MR_Word ImplTypeMap_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsEqvRhsTypeCtors_33,
  MR_Word STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_ForeignDuFieldTypeCtors_35,
  MR_Word STATE_VARIABLE_Modules_0_36,
  MR_Word * STATE_VARIABLE_Modules_37);

static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
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
  MR_Word ImplTypeMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
  MR_Word STATE_VARIABLE_Modules_0_19,
  MR_Word * STATE_VARIABLE_Modules_20);

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
  MR_Word InterfaceTypeMap_10,
  MR_Word BothTypesMap_11,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35,
  MR_Word * STATE_VARIABLE_AbsEqvLhsTypeCtors_36,
  MR_Word STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37,
  MR_Word * STATE_VARIABLE_AbsImplExpEnumTypeCtors_38,
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

static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
  MR_Word ItemTypeDefn_3);

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
  MR_Word STATE_VARIABLE_IntAvails_0_28,
  MR_Word * STATE_VARIABLE_IntAvails_29,
  MR_Word STATE_VARIABLE_ImpAvails_0_30,
  MR_Word * STATE_VARIABLE_ImpAvails_31,
  MR_Word STATE_VARIABLE_IntItems_0_32,
  MR_Word * STATE_VARIABLE_IntItems_33,
  MR_Word STATE_VARIABLE_ImpItems_0_34,
  MR_Word * STATE_VARIABLE_ImpItems_35);

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
parse_tree__write_module_interface_files__gather_type_defns_in_section_5_p_0(
  MR_Word Section_6,
  MR_Word Items0_7,
  MR_Word * Items_8,
  MR_Word STATE_VARIABLE_TypesMap_0_11,
  MR_Word * STATE_VARIABLE_TypesMap_12);

static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
  MR_Word Section_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ItemsCord_0_3,
  MR_Word * STATE_VARIABLE_ItemsCord_4,
  MR_Word STATE_VARIABLE_TypesMap_0_5,
  MR_Word * STATE_VARIABLE_TypesMap_6);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
  MR_Word InterfaceTypeMap_7,
  MR_Word ImplTypeMap_8,
  MR_Word BothTypeMap_9,
  MR_Word * DummyTypeCtors_10,
  MR_Word * NecessaryTypeCtors_11,
  MR_Word * Modules_12);

static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_items_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_module_interface_files__standardize_items_2_p_0(
  MR_Word Items0_3,
  MR_Word * Items_4);

static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevRemainderItems_0_2,
  MR_Word * STATE_VARIABLE_RevRemainderItems_3,
  MR_Word STATE_VARIABLE_TypeDefns_0_4,
  MR_Word * STATE_VARIABLE_TypeDefns_5);

static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
  MR_Word New_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__write_module_interface_files__standardize_imports_2_p_0(
  MR_Word Avails0_3,
  MR_Word * Avails_4);

static void MR_CALL 
parse_tree__write_module_interface_files__rebuild_imports_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__write_module_interface_files__standardize_imports_build_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3);

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
parse_tree__write_module_interface_files____Unify____module_import_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_import_info_0_0_10001(
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


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[17][3];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[5][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[1][12];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[2][11];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[8][6];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[1][8];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[0]))
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
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_items_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[2])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[4])),
    ((MR_Box) (parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5)),
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

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[1][12] = {
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

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[2][11] = {
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

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[8][6] = {
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
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static const MR_PseudoTypeInfo parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_import_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_locns_module_import_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_import_info_0_0 = {
  (MR_String) "module_import_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_import_info_0_0,
  NULL,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_locns_module_import_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_import_info_0_0[1] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_import_info_0_0
};

static const MR_DuPtagLayout parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_import_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_import_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_import_info_0[1] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_import_info_0_0
};

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_import_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____module_import_info_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____module_import_info_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "module_import_info",
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_import_info_0 },
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_import_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_import_info_0
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
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__671__1_3_p_0(
  MR_Word HeadVar__1_70,
  MR_Word HeadVar__2_71,
  MR_Word * HeadVar__3_72)
{
  {
    mercury__multi_map__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (HeadVar__1_70)), HeadVar__2_71, HeadVar__3_72);
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
parse_tree__write_module_interface_files____Compare____module_import_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__term____Compare____context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
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

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_import_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
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
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Modules_23;

    parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Modules_23);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Modules_23));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Modules_23;

    parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Modules_23);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Modules_23));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Modules_23;

    parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Modules_23);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Modules_23));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Modules_23;

    parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_23);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_23));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_23;

    parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_23));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(
  MR_Word ArgType_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23)
{
  switch (MR_tag((MR_Word) ArgType_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_4, (MR_Integer) 0))));
        MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_4, (MR_Integer) 1))));
        MR_Word ModuleName_12;
        MR_Word STATE_VARIABLE_Modules_26_26;
        MR_Box conv3_STATE_VARIABLE_Modules_23;

        mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeName_9, &ModuleName_12);
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_Modules_0_22, &STATE_VARIABLE_Modules_26_26);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[13]), Args_10, ((MR_Box) (STATE_VARIABLE_Modules_26_26)), &conv3_STATE_VARIABLE_Modules_23);
        *STATE_VARIABLE_Modules_23 = ((MR_Word) (conv3_STATE_VARIABLE_Modules_23));
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgType_4, (MR_Integer) 1))));
            MR_Box conv9_STATE_VARIABLE_Modules_23;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[16]), Args_32, ((MR_Box) (STATE_VARIABLE_Modules_0_22)), &conv9_STATE_VARIABLE_Modules_23);
            *STATE_VARIABLE_Modules_23 = ((MR_Word) (conv9_STATE_VARIABLE_Modules_23));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgType_4, (MR_Integer) 2))));
            MR_Box conv5_STATE_VARIABLE_Modules_23;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[14]), Args_30, ((MR_Box) (STATE_VARIABLE_Modules_0_22)), &conv5_STATE_VARIABLE_Modules_23);
            *STATE_VARIABLE_Modules_23 = ((MR_Word) (conv5_STATE_VARIABLE_Modules_23));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgType_4, (MR_Integer) 2))));
            MR_Box conv1_STATE_VARIABLE_Modules_23;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[12]), Args_28, ((MR_Box) (STATE_VARIABLE_Modules_0_22)), &conv1_STATE_VARIABLE_Modules_23);
            *STATE_VARIABLE_Modules_23 = ((MR_Word) (conv1_STATE_VARIABLE_Modules_23));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word KindedType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgType_4, (MR_Integer) 1))));
            MR_Word Args_31;
            MR_Box conv7_STATE_VARIABLE_Modules_23;

            {
              Args_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Args_31, 0) = ((MR_Box) (KindedType_16));
              MR_hl_field(MR_mktag(1), Args_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[15]), Args_31, ((MR_Box) (STATE_VARIABLE_Modules_0_22)), &conv7_STATE_VARIABLE_Modules_23);
            *STATE_VARIABLE_Modules_23 = ((MR_Word) (conv7_STATE_VARIABLE_Modules_23));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_23;

    parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_23));
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
    MR_Box conv1_STATE_VARIABLE_Modules_12;

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
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[11]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_Modules_15_15)), &conv1_STATE_VARIABLE_Modules_12);
    *STATE_VARIABLE_Modules_12 = ((MR_Word) (conv1_STATE_VARIABLE_Modules_12));
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

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[10]), Constraints_7, ((MR_Box) (STATE_VARIABLE_Modules_0_23)), &conv1_STATE_VARIABLE_Modules_24);
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
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_modules\'/3", (MR_String) "unqualified type encountered");
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

    parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_12);
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

    parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
  MR_Word ImplTypeMap_9,
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
          parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(Ctors_26, Var_38, &RhsTypeCtors_50);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_50, STATE_VARIABLE_ForeignDuFieldTypeCtors_0_34, STATE_VARIABLE_ForeignDuFieldTypeCtors_35);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[8]), RhsTypeCtors_50, ((MR_Box) (STATE_VARIABLE_Modules_0_36)), &conv1_STATE_VARIABLE_Modules_37);
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
              MR_Word STATE_VARIABLE_Modules_44_44;
              MR_Word STATE_VARIABLE_AbsEqvRhsTypeCtors_45_45;
              MR_Word Var_46;
              MR_Word Var_48;
              MR_Box conv3_STATE_VARIABLE_Modules_44_44;
              MR_Box conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_33;
              MR_Box conv8_Var_24;
              MR_Box conv7_STATE_VARIABLE_Modules_37;

              Var_42 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(RhsType_21, Var_42, &RhsTypeCtors_22);
              mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32, &NewRhsTypeCtors_23);
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[9]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_Modules_0_36)), &conv3_STATE_VARIABLE_Modules_44_44);
              STATE_VARIABLE_Modules_44_44 = ((MR_Word) (conv3_STATE_VARIABLE_Modules_44_44));
              mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsEqvRhsTypeCtors_0_32, &STATE_VARIABLE_AbsEqvRhsTypeCtors_45_45);
              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ImplTypeMap_9));
              }
              Var_48 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), Var_46, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsEqvRhsTypeCtors_45_45)), &conv9_STATE_VARIABLE_AbsEqvRhsTypeCtors_33, ((MR_Box) (Var_48)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_Modules_44_44)), &conv7_STATE_VARIABLE_Modules_37);
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
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
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

      parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(ConsArgs_13, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_18_18);
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
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
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

      parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(Type_11, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_15_15);
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
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeCtors_14;

    parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtors_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtors_14));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
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
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Box conv1_STATE_VARIABLE_TypeCtors_14;

      succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_6, &Var_10, &Var_11);
      if (succeeded)
        STATE_VARIABLE_TypeCtors_15_15 = STATE_VARIABLE_TypeCtors_0_13;
      else
      {
        succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_6);
        if (succeeded)
          STATE_VARIABLE_TypeCtors_15_15 = STATE_VARIABLE_TypeCtors_0_13;
        else
        {
          succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_8);
          if (succeeded)
            STATE_VARIABLE_TypeCtors_15_15 = STATE_VARIABLE_TypeCtors_0_13;
          else
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), STATE_VARIABLE_TypeCtors_0_13, &STATE_VARIABLE_TypeCtors_15_15);
          }
        }
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[7]), Args_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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
  MR_Word ImplTypeMap_9,
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), ImplTypeMap_9, ((MR_Box) (TypeCtor_10)), &conv0_TypeDefns_14);
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
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImplTypeMap_9));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), Var_21, TypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17)), &conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Box) (STATE_VARIABLE_Modules_0_19)), &conv4_STATE_VARIABLE_Modules_20);
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
  MR_Word InterfaceTypeMap_10,
  MR_Word BothTypesMap_11,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35,
  MR_Word * STATE_VARIABLE_AbsEqvLhsTypeCtors_36,
  MR_Word STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37,
  MR_Word * STATE_VARIABLE_AbsImplExpEnumTypeCtors_38,
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

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), InterfaceTypeMap_10, ((MR_Box) (TypeCtor_12)), &conv0_Var_31);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_27, &_NumBits_32);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37, STATE_VARIABLE_AbsImplExpEnumTypeCtors_38);
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
            *STATE_VARIABLE_AbsImplExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37;
          }
          *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
          *STATE_VARIABLE_AbsImplExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37;
          *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box conv2_Var_26;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), InterfaceTypeMap_10, ((MR_Box) (TypeCtor_12)), &conv2_Var_26);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35, STATE_VARIABLE_AbsEqvLhsTypeCtors_36);
          }
          else
            *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
          *STATE_VARIABLE_AbsImplExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37;
          *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv1_Var_24;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), InterfaceTypeMap_10, ((MR_Box) (TypeCtor_12)), &conv1_Var_24);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
              {
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_12)), STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35, STATE_VARIABLE_AbsEqvLhsTypeCtors_36);
              }
              else
                *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
              *STATE_VARIABLE_AbsImplExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37;
              *STATE_VARIABLE_DummyTypeCtors_40 = STATE_VARIABLE_DummyTypeCtors_0_39;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsEqvLhsTypeCtors_36 = STATE_VARIABLE_AbsEqvLhsTypeCtors_0_35;
              *STATE_VARIABLE_AbsImplExpEnumTypeCtors_38 = STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_37;
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
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtors_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43, (MR_Integer) 0))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43, (MR_Integer) 1))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_43, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__CoveredTypes_47 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9));
        }
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtors_44, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_45, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_46, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__CoveredTypes_47);
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
      MR_Word Args_16;
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
              Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3))));
              _Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4))));
              _Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5))));
              (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeExistConstraints_14 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
              {
                if ((Args_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
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
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39, (MR_Integer) 0))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39, (MR_Integer) 1))));
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_39, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8));
        }
        (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtors_40, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_41, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_42, (env_ptr)->parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_43);
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
      MR_Word Args_12;
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
              Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
              _Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4))));
              _Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 5))));
              (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (MaybeExistConstraints_10 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
              {
                if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env).parse_tree__write_module_interface_files__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
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

static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
  MR_Word ItemTypeDefn_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_3)));

    return HeadVar__2_2;
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

static void MR_CALL 
parse_tree__write_module_interface_files__generate_interface_int1_int2_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word * ParseTreeInt2_9,
  MR_Word * InterfaceSpecs_10)
{
  {
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    MR_Word InterfaceSpecs0_25;
    MR_Word InterfaceSpecs1_26;
    MR_Word ToCheckIntItemBlock_27;
    MR_Word BothRawItemBlocks_29;
    MR_Word ShortIntIncls_30;
    MR_Word ShortImpIncls_31;
    MR_Word ShortIntAvails_32;
    MR_Word ShortImpAvails_33;
    MR_Word ShortIntItems_34;
    MR_Word ShortImpItems_35;
    MR_Word STATE_VARIABLE_IntIncls_36_36;
    MR_Word STATE_VARIABLE_ImpIncls_37_37;
    MR_Word STATE_VARIABLE_IntAvails_38_38;
    MR_Word STATE_VARIABLE_ImpAvails_39_39;
    MR_Word STATE_VARIABLE_IntItems_40_40;
    MR_Word STATE_VARIABLE_ImpItems_41_41;
    MR_Word STATE_VARIABLE_IntAvails_42_42;
    MR_Word STATE_VARIABLE_ImpAvails_43_43;
    MR_Word STATE_VARIABLE_IntItems_44_44;
    MR_Word STATE_VARIABLE_ImpItems_45_45;
    MR_Word STATE_VARIABLE_IntItems_46_46;
    MR_Word STATE_VARIABLE_ImpItems_48_48;
    MR_Word Var_50;
    MR_Word IntInclsCord_64;
    MR_Word ImpInclsCord_65;
    MR_Word IntAvailsCord_66;
    MR_Word ImpAvailsCord_67;
    MR_Word IntItemsCord_68;
    MR_Word ImpItemsCord_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word RevItems_84;
    MR_Word RevItems_93;

    Var_70 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_71 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_74 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__src_item_blocks_to_int_imp_items_loop_13_p_0(SrcItemBlocks_20, Var_70, &IntInclsCord_64, Var_71, &ImpInclsCord_65, Var_72, &IntAvailsCord_66, Var_73, &ImpAvailsCord_67, Var_74, &IntItemsCord_68, Var_75, &ImpItemsCord_69);
    STATE_VARIABLE_IntIncls_36_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_64);
    STATE_VARIABLE_ImpIncls_37_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_65);
    STATE_VARIABLE_IntAvails_38_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_66);
    STATE_VARIABLE_ImpAvails_39_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_67);
    STATE_VARIABLE_IntItems_40_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_68);
    STATE_VARIABLE_ImpItems_41_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_69);
    parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0(STATE_VARIABLE_IntAvails_38_38, &STATE_VARIABLE_IntAvails_42_42, STATE_VARIABLE_ImpAvails_39_39, &STATE_VARIABLE_ImpAvails_43_43, STATE_VARIABLE_IntItems_40_40, &STATE_VARIABLE_IntItems_44_44, STATE_VARIABLE_ImpItems_41_41, &STATE_VARIABLE_ImpItems_45_45);
    parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(STATE_VARIABLE_IntItems_44_44, (MR_Word) ((MR_Unsigned) 0U), &RevItems_84, (MR_Word) ((MR_Unsigned) 0U), &InterfaceSpecs0_25);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevItems_84, &STATE_VARIABLE_IntItems_46_46);
    parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(STATE_VARIABLE_ImpItems_45_45, (MR_Word) ((MR_Unsigned) 0U), &RevItems_93, InterfaceSpecs0_25, &InterfaceSpecs1_26);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevItems_93, &STATE_VARIABLE_ImpItems_48_48);
    {
      ToCheckIntItemBlock_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 1) = ((MR_Box) (ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 2) = ((MR_Box) (STATE_VARIABLE_IntIncls_36_36));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 3) = ((MR_Box) (STATE_VARIABLE_IntAvails_42_42));
      MR_hl_field(MR_mktag(0), ToCheckIntItemBlock_27, 4) = ((MR_Box) (STATE_VARIABLE_IntItems_46_46));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ToCheckIntItemBlock_27));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_6, ModuleName_17, ModuleNameContext_18, Var_50, InterfaceSpecs1_26, InterfaceSpecs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_IntIncls_36_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (STATE_VARIABLE_ImpIncls_37_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (STATE_VARIABLE_IntAvails_42_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (STATE_VARIABLE_ImpAvails_43_43));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (STATE_VARIABLE_IntItems_46_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (STATE_VARIABLE_ImpItems_48_48));
    }
    parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleNameContext_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_IntIncls_36_36, STATE_VARIABLE_ImpIncls_37_37, STATE_VARIABLE_IntAvails_42_42, STATE_VARIABLE_ImpAvails_43_43, STATE_VARIABLE_IntItems_46_46, STATE_VARIABLE_ImpItems_48_48, &BothRawItemBlocks_29);
    parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_7_p_0(BothRawItemBlocks_29, &ShortIntIncls_30, &ShortImpIncls_31, &ShortIntAvails_32, &ShortImpAvails_33, &ShortIntItems_34, &ShortImpItems_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ShortIntIncls_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ShortImpIncls_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortIntAvails_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortImpAvails_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortIntItems_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortImpItems_35));
    }
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
    MR_Word conv3_HeadVar__3_72;

    parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__671__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_72);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_72));
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
  MR_Word STATE_VARIABLE_IntAvails_0_28,
  MR_Word * STATE_VARIABLE_IntAvails_29,
  MR_Word STATE_VARIABLE_ImpAvails_0_30,
  MR_Word * STATE_VARIABLE_ImpAvails_31,
  MR_Word STATE_VARIABLE_IntItems_0_32,
  MR_Word * STATE_VARIABLE_IntItems_33,
  MR_Word STATE_VARIABLE_ImpItems_0_34,
  MR_Word * STATE_VARIABLE_ImpItems_35)
{
  {
    MR_Word BothTypesMap_15;
    MR_Word NecessaryDummyTypeCtors_16;
    MR_Word NecessaryAbsImpExpTypeCtors_17;
    MR_Word NecessaryTypeImpImports_18;
    MR_Word AllNecessaryTypeCtors_19;
    MR_Word NecessaryTypeclassImpImports_20;
    MR_Word NecessaryImpImports_21;
    MR_Word RemovableAbstractExportedTypes_22;
    MR_Word NeedImports_23;
    MR_Word NeedForeignImports_24;
    MR_Word ItemsCord_25;
    MR_Word STATE_VARIABLE_IntTypesMap_36_36;
    MR_Word STATE_VARIABLE_ImpTypesMap_37_37;
    MR_Word STATE_VARIABLE_IntTypesMap_40_40;
    MR_Word STATE_VARIABLE_ImpItems_42_42;
    MR_Word STATE_VARIABLE_ImpTypesMap_43_43;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_ImpTypesMap_45_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_ImpTypesMap_49_49;
    MR_Word STATE_VARIABLE_ImpItems_51_51;
    MR_Word STATE_VARIABLE_ImpAvails_53_53;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ImpItems_55_55;
    MR_Word ItemsCord_87;
    MR_Word Var_88;
    MR_Box conv2_RemovableAbstractExportedTypes_22;
    MR_Box conv4_STATE_VARIABLE_ImpTypesMap_49_49;
    MR_Box conv6_STATE_VARIABLE_ImpItems_51_51;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), &STATE_VARIABLE_IntTypesMap_36_36);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), &STATE_VARIABLE_ImpTypesMap_37_37);
    Var_88 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 0, STATE_VARIABLE_IntItems_0_32, Var_88, &ItemsCord_87, STATE_VARIABLE_IntTypesMap_36_36, &STATE_VARIABLE_IntTypesMap_40_40);
    *STATE_VARIABLE_IntItems_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_87);
    parse_tree__write_module_interface_files__gather_type_defns_in_section_5_p_0((MR_Integer) 1, STATE_VARIABLE_ImpItems_0_34, &STATE_VARIABLE_ImpItems_42_42, STATE_VARIABLE_ImpTypesMap_37_37, &STATE_VARIABLE_ImpTypesMap_43_43);
    BothTypesMap_15 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), STATE_VARIABLE_IntTypesMap_40_40, STATE_VARIABLE_ImpTypesMap_43_43);
    parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(STATE_VARIABLE_IntTypesMap_40_40, STATE_VARIABLE_ImpTypesMap_43_43, BothTypesMap_15, &NecessaryDummyTypeCtors_16, &NecessaryAbsImpExpTypeCtors_17, &NecessaryTypeImpImports_18);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NecessaryDummyTypeCtors_16, NecessaryAbsImpExpTypeCtors_17, &AllNecessaryTypeCtors_19);
    parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_in_items_2_p_0(STATE_VARIABLE_ImpItems_42_42, &NecessaryTypeclassImpImports_20);
    NecessaryImpImports_21 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NecessaryTypeImpImports_18, NecessaryTypeclassImpImports_20);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (BothTypesMap_15));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_44, STATE_VARIABLE_ImpTypesMap_43_43, &STATE_VARIABLE_ImpTypesMap_45_45);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (STATE_VARIABLE_IntTypesMap_40_40));
    }
    Var_47 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), Var_46, STATE_VARIABLE_ImpTypesMap_45_45, ((MR_Box) (Var_47)), &conv2_RemovableAbstractExportedTypes_22);
    RemovableAbstractExportedTypes_22 = ((MR_Word) (conv2_RemovableAbstractExportedTypes_22));
    mercury__set__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[0]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), RemovableAbstractExportedTypes_22, ((MR_Box) (STATE_VARIABLE_ImpTypesMap_45_45)), &conv4_STATE_VARIABLE_ImpTypesMap_49_49);
    STATE_VARIABLE_ImpTypesMap_49_49 = ((MR_Word) (conv4_STATE_VARIABLE_ImpTypesMap_49_49));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[6]), STATE_VARIABLE_ImpTypesMap_49_49, ((MR_Box) (STATE_VARIABLE_ImpItems_42_42)), &conv6_STATE_VARIABLE_ImpItems_51_51);
    STATE_VARIABLE_ImpItems_51_51 = ((MR_Word) (conv6_STATE_VARIABLE_ImpItems_51_51));
    parse_tree__write_module_interface_files__find_need_imports_acc_5_p_0(STATE_VARIABLE_ImpItems_51_51, (MR_Integer) 0, &NeedImports_23, (MR_Integer) 0, &NeedForeignImports_24);
    switch (NeedImports_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ImpAvails_53_53 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(NecessaryImpImports_21, STATE_VARIABLE_ImpAvails_0_30, &STATE_VARIABLE_ImpAvails_53_53);
        break;
    }
    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_in_items_6_p_0(STATE_VARIABLE_ImpItems_51_51, NeedForeignImports_24, STATE_VARIABLE_IntTypesMap_40_40, AllNecessaryTypeCtors_19, Var_54, &ItemsCord_25);
    STATE_VARIABLE_ImpItems_55_55 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_25);
    if ((STATE_VARIABLE_ImpItems_55_55 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImpItems_35 = STATE_VARIABLE_ImpItems_55_55;
    else
      parse_tree__write_module_interface_files__standardize_items_2_p_0(STATE_VARIABLE_ImpItems_55_55, STATE_VARIABLE_ImpItems_35);
    parse_tree__write_module_interface_files__standardize_imports_2_p_0(STATE_VARIABLE_IntAvails_0_28, STATE_VARIABLE_IntAvails_29);
    parse_tree__write_module_interface_files__standardize_imports_2_p_0(STATE_VARIABLE_ImpAvails_53_53, STATE_VARIABLE_ImpAvails_31);
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

            Var_61 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), Params_40);
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

                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), IntTypesMap_3, ((MR_Box) (TypeCtor_27)), &conv0_Defns_29);
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
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[1]));
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
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[4]), ImpItems_3, ((MR_Box) (Var_6)), &conv1_Modules_4);
    *Modules_4 = ((MR_Word) (conv1_Modules_4));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_5_p_0(
  MR_Word Section_6,
  MR_Word Items0_7,
  MR_Word * Items_8,
  MR_Word STATE_VARIABLE_TypesMap_0_11,
  MR_Word * STATE_VARIABLE_TypesMap_12)
{
  {
    MR_Word ItemsCord_10;
    MR_Word Var_13;

    Var_13 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(Section_6, Items0_7, Var_13, &ItemsCord_10, STATE_VARIABLE_TypesMap_0_11, STATE_VARIABLE_TypesMap_12);
    *Items_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_10);
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

          Var_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), Args_21);
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
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
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
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_38;
    MR_Word conv0_STATE_VARIABLE_DummyTypeCtors_40;

    parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_36, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_38, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DummyTypeCtors_40);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_36));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_38));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DummyTypeCtors_40));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
  MR_Word InterfaceTypeMap_7,
  MR_Word ImplTypeMap_8,
  MR_Word BothTypeMap_9,
  MR_Word * DummyTypeCtors_10,
  MR_Word * NecessaryTypeCtors_11,
  MR_Word * Modules_12)
{
  {
    MR_Word ImplTypes_13;
    MR_Word AbsImplExpLhsTypeCtors_14;
    MR_Word AbsImplExpEnumTypeCtors_15;
    MR_Word AbsEqvRhsTypeCtors_16;
    MR_Word ForeignDuFieldTypeCtors_17;
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
    MR_Box conv5_AbsImplExpLhsTypeCtors_14;
    MR_Box conv4_AbsImplExpEnumTypeCtors_15;
    MR_Box conv3_DummyTypeCtors_10;
    MR_Box conv11_AbsEqvRhsTypeCtors_16;
    MR_Box conv10_ForeignDuFieldTypeCtors_17;
    MR_Box conv9_Modules_12;

    mercury__multi_map__to_flat_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ImplTypeMap_8, &ImplTypes_13);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (InterfaceTypeMap_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (BothTypeMap_9));
    }
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_21 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), Var_18, ImplTypes_13, ((MR_Box) (Var_19)), &conv5_AbsImplExpLhsTypeCtors_14, ((MR_Box) (Var_20)), &conv4_AbsImplExpEnumTypeCtors_15, ((MR_Box) (Var_21)), &conv3_DummyTypeCtors_10);
    AbsImplExpLhsTypeCtors_14 = ((MR_Word) (conv5_AbsImplExpLhsTypeCtors_14));
    AbsImplExpEnumTypeCtors_15 = ((MR_Word) (conv4_AbsImplExpEnumTypeCtors_15));
    *DummyTypeCtors_10 = ((MR_Word) (conv3_DummyTypeCtors_10));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ImplTypeMap_8));
    }
    Var_23 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_24 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_25 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), Var_22, AbsImplExpLhsTypeCtors_14, ((MR_Box) (Var_23)), &conv11_AbsEqvRhsTypeCtors_16, ((MR_Box) (Var_24)), &conv10_ForeignDuFieldTypeCtors_17, ((MR_Box) (Var_25)), &conv9_Modules_12);
    AbsEqvRhsTypeCtors_16 = ((MR_Word) (conv11_AbsEqvRhsTypeCtors_16));
    ForeignDuFieldTypeCtors_17 = ((MR_Word) (conv10_ForeignDuFieldTypeCtors_17));
    *Modules_12 = ((MR_Word) (conv9_Modules_12));
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (AbsImplExpEnumTypeCtors_15));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ForeignDuFieldTypeCtors_17));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (AbsEqvRhsTypeCtors_16));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (AbsImplExpLhsTypeCtors_14));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    *NecessaryTypeCtors_11 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_26);
  }
}

static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_items_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__standardize_items_2_p_0(
  MR_Word Items0_3,
  MR_Word * Items_4)
{
  {
    MR_Word RevRemainderItems_5;
    MR_Word TypeDefnInfos_6;
    MR_Word RemainderItems_7;
    MR_Word TypeDefnItems_8;

    parse_tree__write_module_interface_files__do_standardize_impl_items_5_p_0(Items0_3, (MR_Word) ((MR_Unsigned) 0U), &RevRemainderItems_5, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnInfos_6);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevRemainderItems_5, &RemainderItems_7);
    TypeDefnItems_8 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[3]), TypeDefnInfos_6);
    *Items_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), TypeDefnItems_8, RemainderItems_7);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevRemainderItems_0_2,
  MR_Word * STATE_VARIABLE_RevRemainderItems_3,
  MR_Word STATE_VARIABLE_TypeDefns_0_4,
  MR_Word * STATE_VARIABLE_TypeDefns_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TypeDefns_5 = STATE_VARIABLE_TypeDefns_0_4;
      *STATE_VARIABLE_RevRemainderItems_3 = STATE_VARIABLE_RevRemainderItems_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_21_21;
      MR_Word STATE_VARIABLE_RevRemainderItems_22_22;
      MR_Word ItemTypeDefn_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevRemainderItems_0_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_4;

      succeeded = ((MR_tag((MR_Word) Item_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        ItemTypeDefn_16 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));
        parse_tree__write_module_interface_files__insert_type_defn_3_p_0(ItemTypeDefn_16, STATE_VARIABLE_TypeDefns_0_4, &STATE_VARIABLE_TypeDefns_21_21);
        STATE_VARIABLE_RevRemainderItems_22_22 = STATE_VARIABLE_RevRemainderItems_0_2;
      }
      else
      {
        {
          STATE_VARIABLE_RevRemainderItems_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRemainderItems_22_22, 0) = ((MR_Box) (Item_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRemainderItems_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevRemainderItems_0_2));
        }
        STATE_VARIABLE_TypeDefns_21_21 = STATE_VARIABLE_TypeDefns_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_RevRemainderItems_0_2 = STATE_VARIABLE_RevRemainderItems_22_22;
      next_value_of_STATE_VARIABLE_TypeDefns_0_4 = STATE_VARIABLE_TypeDefns_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevRemainderItems_0_2 = next_value_of_STATE_VARIABLE_RevRemainderItems_0_2;
      STATE_VARIABLE_TypeDefns_0_4 = next_value_of_STATE_VARIABLE_TypeDefns_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
  MR_Word New_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (New_1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word NewSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), New_1, (MR_Integer) 0))));
      MR_Word NewParams_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), New_1, (MR_Integer) 1))));
      MR_Word HeadSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 0))));
      MR_Word HeadParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 1))));
      MR_Word CompareSymName_22;

      mdbcomp__sym_name____Compare____sym_name_0_0(&CompareSymName_22, NewSymName_10, HeadSymName_16);
      switch (CompareSymName_22) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer NewParamsLength_23;
            MR_Integer HeadParamsLength_24;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), NewParams_11, &NewParamsLength_23);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), HeadParams_17, &HeadParamsLength_24);
            succeeded = (NewParamsLength_23 < HeadParamsLength_24);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              succeeded = (NewParamsLength_23 > HeadParamsLength_24);
              if (succeeded)
                succeeded = MR_FALSE;
            }
          }
          break;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (New_1));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__2_2));
        }
      else
      {
        MR_Word NewTail_26;

        parse_tree__write_module_interface_files__insert_type_defn_3_p_0(New_1, Tail_8, &NewTail_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewTail_26));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__standardize_imports_2_p_0(
  MR_Word Avails0_3,
  MR_Word * Avails_4)
{
  {
    MR_Word Map_5;
    MR_Word AssocList_6;
    MR_Word Var_7;

    Var_7 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0));
    parse_tree__write_module_interface_files__standardize_imports_build_map_3_p_0(Avails0_3, Var_7, &Map_5);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0), Map_5, &AssocList_6);
    parse_tree__write_module_interface_files__rebuild_imports_2_p_0(AssocList_6, Avails_4);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__rebuild_imports_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Pair_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Pairs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Avail_5;
    MR_Word Avails_6;
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_3, (MR_Integer) 0))));
    MR_Word ImportOrUse_8;
    MR_Word Context_9;
    MR_Integer SeqNum_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_3, (MR_Integer) 1))));

    ImportOrUse_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))) & (MR_Integer) 1);
    Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    SeqNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
    switch (ImportOrUse_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_13;

          {
            Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (SeqNum_10));
          }
          Avail_5 = (MR_Word) ((MR_Word) (Var_13));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12;

          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (SeqNum_10));
          }
          Avail_5 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_12)));
        }
        break;
    }
    parse_tree__write_module_interface_files__rebuild_imports_2_p_0(Pairs_4, &Avails_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Avails_6));
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__standardize_imports_build_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10;
      MR_Word Context_11;
      MR_Integer SeqNum_12;
      MR_Word ImportOrUse_13;
      MR_Word STATE_VARIABLE_Map_24_24;
      MR_Word OldInfo_14;
      MR_Box conv0_OldInfo_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_Integer) 0))
      {
        MR_Word Var_22 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
        SeqNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2))));
        ImportOrUse_13 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_21 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
        SeqNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 2))));
        ImportOrUse_13 = (MR_Integer) 1;
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0), STATE_VARIABLE_Map_0_2, ((MR_Box) (ModuleName_10)), &conv0_OldInfo_14);
      if (succeeded)
      {
        OldInfo_14 = ((MR_Word) (conv0_OldInfo_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldImportOrUse_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldInfo_14, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word OldContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldInfo_14, (MR_Integer) 1))));

        succeeded = (ImportOrUse_13 == OldImportOrUse_15);
        if (succeeded)
        {
          MR_Word Var_40;

          mercury__term____Compare____context_0_0(&Var_40, Context_11, OldContext_16);
          succeeded = ((MR_Integer) 1 == Var_40);
          if (succeeded)
          {
            MR_Word Info_18;

            {
              Info_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Info_18, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_13));
              MR_hl_field(MR_mktag(0), Info_18, 1) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(0), Info_18, 2) = ((MR_Box) (SeqNum_12));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (Info_18)), STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_24_24);
          }
          else
            STATE_VARIABLE_Map_24_24 = STATE_VARIABLE_Map_0_2;
        }
        else
        {
          succeeded = (ImportOrUse_13 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (OldImportOrUse_15 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word Info_28;

            {
              Info_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Info_28, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_13));
              MR_hl_field(MR_mktag(0), Info_28, 1) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(0), Info_28, 2) = ((MR_Box) (SeqNum_12));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (Info_28)), STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_24_24);
          }
          else
            STATE_VARIABLE_Map_24_24 = STATE_VARIABLE_Map_0_2;
        }
      }
      else
      {
        MR_Word Info_30;

        {
          Info_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Info_30, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_13));
          MR_hl_field(MR_mktag(0), Info_30, 1) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Info_30, 2) = ((MR_Box) (SeqNum_12));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (Info_30)), STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_24_24);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_8;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
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
        MR_hl_field(MR_mktag(1), NotWrittenPieces_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[7])));
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
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[7])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[8])));
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
parse_tree__write_module_interface_files____Unify____module_import_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__write_module_interface_files____Unify____module_import_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_import_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__write_module_interface_files____Compare____module_import_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_import_info_0);
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
