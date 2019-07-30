/*
** Automatically generated from `recompilation.version.m'
** by the Mercury compiler,
** version rotd-2019-07-30
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


// :- module recompilation.version.
// :- implementation.

/*
INIT mercury__recompilation__version__init
ENDINIT
*/

#include "recompilation.version.mih"


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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s {
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9;
  MR_Integer recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32;
  MR_bool recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded;
  jmp_buf recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_49_49;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decls_17;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decl_18;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_35;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_52;
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_34;
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Decl_18;
};

struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s {
  MR_Word * recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12;
  MR_Word * recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14;
  MR_bool recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded;
  jmp_buf recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0;
  MR_Word recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17;
  MR_Word recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18;
  MR_Word recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19;
  MR_Box recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18;
  MR_Box recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19;
};


static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_VA_PseudoTypeInfo_Struct3 recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct3 recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_VA_TypeInfo_Struct3 recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_item_info_0_0[3];

static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_item_info_0_0[3];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0;

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0[1];

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0[1];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0[1];

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0[1];

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2];

static const MR_DuArgLocn recompilation__version__recompilation__version__field_locns_item_version_numbers_result_0_0[2];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1;

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1];

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0[2];

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0[2];

static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_maybe_changed_0[2];

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1413__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word * HeadVar__2_72);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1396__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_String * LambdaHeadVar__2_24);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1093__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__522__1_1_f_0(
  MR_Word LambdaHeadVar__1_39);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__add_gathered_item__462__1_1_f_0(
  MR_Word LambdaHeadVar__1_59);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__194__1_5_f_0(
  MR_Word SourceFileTime_6,
  MR_Word OldInstanceItemMap_8,
  MR_Word OldInstanceVersionNumbers_9,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__parse_version_numbers__1366__1_2_f_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Word LambdaHeadVar__2_29);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__func__write_version_numbers__1282__1_2_f_0(
  MR_Word VersionNumbers_6,
  MR_Word LambdaHeadVar__1_17,
  MR_Word * LambdaHeadVar__2_18);

static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version__parse_item_version_number_3_p_0(
  MR_Word ParseName_4,
  MR_Word Term_5,
  MR_Word * Result_6);

static void MR_CALL 
recompilation__version__parse_key_version_number_3_p_0(
  MR_Word ParseName_4,
  MR_Word Term_5,
  MR_Word * Result_6);

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4);

static void MR_CALL 
recompilation__version__write_symname_arity_version_number_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__version__write_name_arity_version_number_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__version__is_item_avail_changed_3_p_0(
  MR_Word Avail1_4,
  MR_Word Avail2_5,
  MR_Word * Changed_6);

static void MR_CALL 
recompilation__version__is_item_include_changed_3_p_0(
  MR_Word ItemInclude1_4,
  MR_Word ItemInclude2_5,
  MR_Word * Changed_6);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0(
  MR_Word MaybePredOrFunc_8,
  MR_Word SymName_9,
  MR_Integer Arity_10,
  MR_Word Item_11,
  MR_Word Section_12,
  MR_Word STATE_VARIABLE_ClassItems_0_32,
  MR_Word * STATE_VARIABLE_ClassItems_33);

static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0(
  MR_Tuple HeadVar__1_1,
  MR_Word STATE_VARIABLE_GatheredItems_0_15,
  MR_Word * STATE_VARIABLE_GatheredItems_16);

static MR_Box MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
  MR_Word Decl0_3);

static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_3_6_f_0(
  MR_Word SourceFileTime_8,
  MR_Word OldGatheredItems_9,
  MR_Word OldItemVersionNumbers_10,
  MR_Word ItemType_11,
  MR_Word NameArity_12,
  MR_Word CurItems_13);

static void MR_CALL 
recompilation__version__are_items_changed_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
recompilation__version__is_item_changed_3_p_0(
  MR_Word Item1_4,
  MR_Word Item2_5,
  MR_Word * Changed_6);

static MR_bool MR_CALL 
recompilation__version__class_interface_is_unchanged_2_p_0(
  MR_Word Interface0_3,
  MR_Word Interface_4);

static MR_Box MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(
  MR_Word InstVarSet1_7,
  MR_Word Modes1_8,
  MR_Word MaybeWithInst1_9,
  MR_Word InstVarSet2_10,
  MR_Word Modes2_11,
  MR_Word MaybeWithInst2_12);

static MR_Box MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0(
  MR_Word TVarSet1_11,
  MR_Word ExistQVars1_12,
  MR_Word TypesAndModes1_13,
  MR_Word MaybeWithType1_14,
  MR_Word Constraints1_15,
  MR_Word TVarSet2_16,
  MR_Word ExistQVars2_17,
  MR_Word TypesAndModes2_18,
  MR_Word MaybeWithType2_19,
  MR_Word Constraints2_20);

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0(
  MR_Word TVarSet1_8,
  MR_Word Types1_9,
  MR_Word TVarSet2_10,
  MR_Word Types2_11,
  MR_Word * TVarSet_12,
  MR_Word * Renaming_13,
  MR_Word * Types2ToTypes1Subst_14);

static MR_Box MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0(
  MR_Word SourceFileTime_7,
  MR_Word OldGatheredItems_8,
  MR_Word OldItemVersionNumbers_9,
  MR_Word ItemType_10,
  MR_Word CurGatheredItems_11);

static MR_Box MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version__write_version_numbers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_4_p_0(
  MR_Word IntItems_5,
  MR_Word ImpItems_6,
  MR_Word * GatheredItems_7,
  MR_Word * Instances_8);

static void MR_CALL 
recompilation__version__gather_in_section_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
recompilation__version__gather_in_item_4_p_0(
  MR_Word Section_5,
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_Info_0_117,
  MR_Word * STATE_VARIABLE_Info_118);

static void MR_CALL 
recompilation__version__is_pred_pragma_2_p_0(
  MR_Word PragmaType_3,
  MR_Word * MaybePredOrFuncId_4);

static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__version__add_gathered_item_5_p_0(
  MR_Word Item_6,
  MR_Word ItemId_7,
  MR_Word Section_8,
  MR_Word STATE_VARIABLE_GatheredItems_0_56,
  MR_Word * STATE_VARIABLE_GatheredItems_57);

static MR_Box MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0(
  MR_Word SourceFileTime_6,
  MR_Word CurInstanceItemMap_7,
  MR_Word OldInstanceItemMap_8,
  MR_Word OldInstanceVersionNumbers_9,
  MR_Word * NewInstanceVersionNumbers_10);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box recompilation__version_scalar_common_1[23][3];

static /* final */ const MR_Box recompilation__version_scalar_common_2[38][2];

static /* final */ const MR_Box recompilation__version_scalar_common_3[7][5];

static /* final */ const MR_Box recompilation__version_scalar_common_4[5][4];

static /* final */ const MR_Box recompilation__version_scalar_common_5[2][9];

static /* final */ const MR_Box recompilation__version_scalar_common_6[9][6];

static /* final */ const MR_Box recompilation__version_scalar_common_7[2][10];

static /* final */ const MR_Box recompilation__version_scalar_common_8[2][1];




static /* final */ const MR_Box recompilation__version_scalar_common_1[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[0])),
    ((MR_Box) (&recompilation__version_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__version_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__version_scalar_common_2[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[1])),
    ((MR_Box) (recompilation__version__add_gathered_item_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[2])),
    ((MR_Box) (recompilation__version__add_gathered_item_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__gather_items_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__compute_version_numbers_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[3])),
    ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[3])),
    ((MR_Box) (recompilation__version__parse_version_numbers_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[4])),
    ((MR_Box) (recompilation__version__parse_version_numbers_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[4])),
    ((MR_Box) (recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[1])),
    ((MR_Box) (recompilation__version__split_class_method_types_and_modes_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[6])),
    ((MR_Box) (recompilation__version__write_item_type_and_versions_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[5])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[6])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_2[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&recompilation__version_scalar_common_3[0]))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[5]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[3]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[23]))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[25]))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[2]))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid item type version numbers."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error in item version number."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[30])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_3[7][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_4[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__version_scalar_common_1[3])),
    ((MR_Box) (&recompilation__version_scalar_common_1[3])),
    ((MR_Box) (&recompilation__version_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[5])),
    ((MR_Box) (recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[5])),
    ((MR_Box) (recompilation__version__class_methods_are_unchanged_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[7])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[21]))
  },
  /* row 4 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[8])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[22]))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_6[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_7[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[32])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[34])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_type_0),
    (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct3 recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
    (MR_TypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
    (MR_TypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_VA_TypeInfo_Struct3 recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_TypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_item_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_item_info_0_0[3] = {
  (MR_String) "gii_gathered_items",
  (MR_String) "gii_pragma_items",
  (MR_String) "gii_instances"
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0 = {
  (MR_String) "gathered_item_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__version__recompilation__version__field_types_gathered_item_info_0_0,
  recompilation__version__recompilation__version__field_names_gathered_item_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0
};

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0
};

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____gathered_item_info_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_info_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_info",
  {     recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0 },
  {     recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_item_map_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_map_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_items_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_items_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_items_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_instance_item_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____instance_item_map_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____instance_item_map_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "instance_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_type_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)
};

static const MR_DuArgLocn recompilation__version__recompilation__version__field_locns_item_version_numbers_result_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0 = {
  (MR_String) "items",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0,
  NULL,
  recompilation__version__recompilation__version__field_locns_item_version_numbers_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0)
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1 = {
  (MR_String) "instances",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1
};

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0[2] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1,
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0
};

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____item_version_numbers_result_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____item_version_numbers_result_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "item_version_numbers_result",
  {     recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0 },
  {     recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0
};

static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "unchanged",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0[2] = {
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0,
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0[2] = {
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1,
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0
};

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation__version____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_changed_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_changed",
  {     recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0 },
  {     recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  recompilation__version__recompilation__version__functor_number_map_maybe_changed_0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_maybe_pred_or_func_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_pred_or_func_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1413__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word * HeadVar__2_72)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_71, HeadVar__2_72);
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1396__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_String * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_23)) == (MR_Integer) 0);
    MR_Word Var_25;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        *LambdaHeadVar__2_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1093__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43;

    if (((MR_tag((MR_Word) LambdaHeadVar__1_42)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "type_and_mode");
    }
    else
      LambdaHeadVar__2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 0))));
    return LambdaHeadVar__2_43;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__522__1_1_f_0(
  MR_Word LambdaHeadVar__1_39)
{
  {
    MR_Word LambdaHeadVar__2_40;

    {
      LambdaHeadVar__2_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_40, 0) = ((MR_Box) (LambdaHeadVar__1_39));
    }
    return LambdaHeadVar__2_40;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__add_gathered_item__462__1_1_f_0(
  MR_Word LambdaHeadVar__1_59)
{
  {
    MR_Word LambdaHeadVar__2_60;

    {
      LambdaHeadVar__2_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_60, 0) = ((MR_Box) (LambdaHeadVar__1_59));
    }
    return LambdaHeadVar__2_60;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__194__1_5_f_0(
  MR_Word SourceFileTime_6,
  MR_Word OldInstanceItemMap_8,
  MR_Word OldInstanceVersionNumbers_9,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__3_19;
    MR_Word OldInstanceVersionNumber_15;
    MR_Word TypeCtorInfo_28_28;
    MR_Word OldItems_14;
    MR_Word Var_20;
    MR_Word Var_29;
    MR_Box conv0_OldItems_14;
    MR_Box conv1_OldInstanceVersionNumber_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), OldInstanceItemMap_8, ((MR_Box) (LambdaHeadVar__1_17)), &conv0_OldItems_14);
    if (succeeded)
    {
      OldItems_14 = ((MR_Word) (conv0_OldItems_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_20 = (MR_Integer) 0;
      recompilation__version__are_items_changed_3_p_0(OldItems_14, LambdaHeadVar__2_18, &Var_29);
      succeeded = (Var_20 == Var_29);
      if (succeeded)
      {
        TypeCtorInfo_28_28 = (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), TypeCtorInfo_28_28, OldInstanceVersionNumbers_9, ((MR_Box) (LambdaHeadVar__1_17)), &conv1_OldInstanceVersionNumber_15);
        if (succeeded)
        {
          OldInstanceVersionNumber_15 = ((MR_Word) (conv1_OldInstanceVersionNumber_15));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      LambdaHeadVar__3_19 = OldInstanceVersionNumber_15;
    else
      LambdaHeadVar__3_19 = SourceFileTime_6;
    return LambdaHeadVar__3_19;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__parse_version_numbers__1366__1_2_f_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Word LambdaHeadVar__2_29)
{
  {
    MR_Word LambdaHeadVar__3_30;
    MR_Word VNs_15;
    MR_Word Instances_16;
    MR_Word VNs0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_29, (MR_Integer) 0))));
    MR_Word Instances0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_29, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) LambdaHeadVar__1_28)) == (MR_Integer) 1))
    {
      Instances_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_28, (MR_Integer) 0))));
      VNs_15 = VNs0_32;
    }
    else
    {
      MR_Word ItemType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ItemVNs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 1))));

      recompilation__update_ids_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[1]), ItemType_17, ((MR_Box) (ItemVNs_18)), VNs0_32, &VNs_15);
      Instances_16 = Instances0_33;
    }
    {
      LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 0) = ((MR_Box) (VNs_15));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 1) = ((MR_Box) (Instances_16));
    }
    return LambdaHeadVar__3_30;
  }
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__func__write_version_numbers__1282__1_2_f_0(
  MR_Word VersionNumbers_6,
  MR_Word LambdaHeadVar__1_17,
  MR_Word * LambdaHeadVar__2_18)
{
  {
    MR_bool succeeded;
    MR_Word ItemVersions_10;
    MR_Box conv0_ItemVersions_10;

    conv0_ItemVersions_10 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[1]), VersionNumbers_6, LambdaHeadVar__1_17);
    ItemVersions_10 = ((MR_Word) (conv0_ItemVersions_10));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ItemVersions_10);
    succeeded = !(succeeded);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__2_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LambdaHeadVar__1_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ItemVersions_10));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0(
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
recompilation__version____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_16)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;
        MR_Integer Var_25 = (MR_Integer) (Var_24);
        MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_25 > Var_26);
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
          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_11_11 = (MR_Word) (&recompilation__version_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&recompilation__version_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_4[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_4[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_4[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_4[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&recompilation__version_scalar_common_2[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&recompilation__version_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version__parse_item_version_number_3_p_0(
  MR_Word ParseName_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word SymName_13;
    MR_Integer Arity_14;
    MR_Word VersionNumber_15;
    MR_Word TypeCtorInfo_46_46;
    MR_Word ItemNameArityTerm_7;
    MR_Word VersionNumberTerm_8;
    MR_Word NameTerm_10;
    MR_Word ArityTerm_11;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_SymName_13;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ItemNameArityTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              VersionNumberTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ItemNameArityTerm_7)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 0))));
                  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_24, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NameTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
                        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ArityTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
                          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ParseName_4, (MR_Integer) 1))));
                            succeeded = func_0(((MR_Box) (ParseName_4)), ((MR_Box) (NameTerm_10)), &conv1_SymName_13);
                            if (succeeded)
                            {
                              SymName_13 = ((MR_Word) (conv1_SymName_13));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              TypeCtorInfo_46_46 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                              succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_46_46, ArityTerm_11, &Arity_14);
                              if (succeeded)
                                succeeded = recompilation__term_to_version_number_1_f_0(TypeCtorInfo_46_46, VersionNumberTerm_8, &VersionNumber_15);
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
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (SymName_13));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Arity_14));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (VersionNumber_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;

      Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[37])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_37));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      }
    }
  }
}

static void MR_CALL 
recompilation__version__parse_key_version_number_3_p_0(
  MR_Word ParseName_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_String Name_13;
    MR_Integer Arity_14;
    MR_Word VersionNumber_15;
    MR_Word TypeCtorInfo_46_46;
    MR_Word ItemNameArityTerm_7;
    MR_Word VersionNumberTerm_8;
    MR_Word NameTerm_10;
    MR_Word ArityTerm_11;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Name_13;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ItemNameArityTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              VersionNumberTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ItemNameArityTerm_7)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 0))));
                  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_24, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NameTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
                        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ArityTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
                          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ParseName_4, (MR_Integer) 1))));
                            succeeded = func_0(((MR_Box) (ParseName_4)), ((MR_Box) (NameTerm_10)), &conv1_Name_13);
                            if (succeeded)
                            {
                              Name_13 = ((MR_String) (conv1_Name_13));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              TypeCtorInfo_46_46 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                              succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_46_46, ArityTerm_11, &Arity_14);
                              if (succeeded)
                                succeeded = recompilation__term_to_version_number_1_f_0(TypeCtorInfo_46_46, VersionNumberTerm_8, &VersionNumber_15);
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
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Name_13));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Arity_14));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (VersionNumber_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;

      Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[37])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_37));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      }
    }
  }
}

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Result_6;

    recompilation__version__parse_item_version_number_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Result_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_Result_6));
  }
}

static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_72;

    succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1413__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_72);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_72));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Result_6;

    recompilation__version__parse_key_version_number_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Result_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Result_6));
  }
}

static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_24;

    succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1396__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word ItemsVNsTerms_6;
    MR_Word ItemType_8;
    MR_String ItemTypeStr_5;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      ItemsVNsTerms_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        ItemTypeStr_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        succeeded = recompilation__string_to_item_type_2_p_0(ItemTypeStr_5, &ItemType_8);
      }
    }
    if (succeeded)
    {
      MR_Word Result0_13;

      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[7]), (MR_Word) (&recompilation__version_scalar_common_4[3]), ItemsVNsTerms_6, &Result0_13);
      if (((MR_tag((MR_Word) Result0_13)) == (MR_Integer) 0))
        *Result_4 = (MR_Word) (Result0_13);
      else
      {
        MR_Word VNsAL_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_13, (MR_Integer) 0))));
        MR_Word VNsMap_15;
        MR_Word Var_28;

        mercury__map__from_assoc_list_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VNsAL_14, &VNsMap_15);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = (MR_Box) ((MR_Unsigned) (ItemType_8));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (VNsMap_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        }
      }
    }
    else
    {
      MR_Word InstanceVNsTerms_17;
      MR_Word Var_29;
      MR_String Var_30;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
        InstanceVNsTerms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) "instance") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Result1_19;

        parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_4[4]), InstanceVNsTerms_17, &Result1_19);
        if (((MR_tag((MR_Word) Result1_19)) == (MR_Integer) 0))
          *Result_4 = (MR_Word) (Result1_19);
        else
        {
          MR_Word Var_33;
          MR_Word VNsAL_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result1_19, (MR_Integer) 0))));
          MR_Word VNsMap_53;

          mercury__map__from_assoc_list_2_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VNsAL_52, &VNsMap_53);
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (VNsMap_53));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
          }
        }
      }
      else
      {
        MR_Word Spec_21;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_48;

        Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[36])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_41));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__version__write_symname_arity_version_number_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ItemName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VersionNumber_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_4, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemName_4, (MR_Integer) 1))));

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, SymName_7);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_8);
    mercury__io__write_string_3_p_0((MR_String) " - ");
    recompilation__write_version_number_3_p_0(VersionNumber_5);
  }
}

static void MR_CALL 
recompilation__version__write_name_arity_version_number_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word NameArity_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VersionNumber_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), NameArity_4, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NameArity_4, (MR_Integer) 1))));
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Name_7));
    }
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, Var_12);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_8);
    mercury__io__write_string_3_p_0((MR_String) " - ");
    recompilation__write_version_number_3_p_0(VersionNumber_5);
  }
}

static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__version__write_name_arity_version_number_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ItemType_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ItemVersions_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ItemTypeStr_7;
    MR_Word ItemVersionsList_8;

    recompilation__string_to_item_type_2_p_1(&ItemTypeStr_7, ItemType_4);
    mercury__io__write_string_3_p_0(ItemTypeStr_7);
    mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ItemVersions_5, &ItemVersionsList_8);
    mercury__io__write_list_5_p_0((MR_Word) (&recompilation__version_scalar_common_1[7]), ItemVersionsList_8, (MR_String) ",\n\t\t", (MR_Word) (&recompilation__version_scalar_common_1[20]));
    mercury__io__write_string_3_p_0((MR_String) "\n\t)");
  }
}

static void MR_CALL 
recompilation__version__is_item_avail_changed_3_p_0(
  MR_Word Avail1_4,
  MR_Word Avail2_5,
  MR_Word * Changed_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Avail1_4)) == (MR_Integer) 0))
    {
      MR_Word ModuleName1_7;
      MR_Word Var_19 = (MR_Word) ((MR_Word) (Avail1_4));
      MR_Word ModuleName2_10;
      MR_Word Var_20;

      ModuleName1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Avail2_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = (MR_Word) ((MR_Word) (Avail2_5));
        ModuleName2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_7, ModuleName2_10);
      }
      if (succeeded)
        *Changed_6 = (MR_Integer) 0;
      else
        *Changed_6 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = (MR_Word) (MR_body((MR_Word) (Avail1_4), (MR_Integer) 1));
      MR_Word ModuleName1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      MR_Word Var_18;
      MR_Word ModuleName2_21;

      succeeded = ((MR_tag((MR_Word) Avail2_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_18 = (MR_Word) (MR_body((MR_Word) (Avail2_5), (MR_Integer) 1));
        ModuleName2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_23, ModuleName2_21);
      }
      if (succeeded)
        *Changed_6 = (MR_Integer) 0;
      else
        *Changed_6 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
recompilation__version__is_item_include_changed_3_p_0(
  MR_Word ItemInclude1_4,
  MR_Word ItemInclude2_5,
  MR_Word * Changed_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude1_4, (MR_Integer) 0))));
    MR_Word ModuleName2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude2_5, (MR_Integer) 0))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_7, ModuleName2_10);
    if (succeeded)
      *Changed_6 = (MR_Integer) 0;
    else
      *Changed_6 = (MR_Integer) 1;
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34 = ((MR_Word) ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_34));
    recompilation__version__distribute_pragma_items_class_items_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decl_18 = ((MR_Word) ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Decl_18));
    recompilation__version__distribute_pragma_items_class_items_7_p_0_4(env_ptr);
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Unsigned packed_word_0;
      MR_Unsigned packed_word_1;

      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decl_18)) == (MR_Integer) 0);
      if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19 = (MR_Word) ((MR_Word) ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decl_18));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 0))));
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 1)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 1))) & (MR_Integer) 1);
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 2))));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 3))));
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 4))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 5))));
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 6))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 7))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 8))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 9)));
        Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 9))) & (MR_Integer) 3);
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 10))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 11))));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_52);
        if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
        {
          if (((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 == (MR_Word) ((MR_Unsigned) 0U)))
            (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
          else
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8, (MR_Integer) 0))));

            (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 == Var_53);
          }
          if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
          {
            if (((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Var_36;
              MR_Integer Var_54;

              Var_36 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21);
              parse_tree__prog_util__adjust_func_arity_3_p_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10, &Var_54);
              (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = (Var_36 == Var_54);
            }
            else
              (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
            if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
              recompilation__version__distribute_pragma_items_class_items_7_p_0_1(env_ptr);
          }
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34, (MR_Integer) 0))));
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Integer Var_47;

      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34, (MR_Integer) 1))));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 1))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 1))));
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 2))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 3))));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 4))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 5))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 6))));
        Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 7))));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_35 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decls_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_35, (MR_Integer) 0))));
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_49_49 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0);
          mercury__list__member_2_p_1((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_49_49, &(env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Decl_18, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decls_17, recompilation__version__distribute_pragma_items_class_items_7_p_0_5, env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_6(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&recompilation__version_scalar_common_1[2]), &(env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_34, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32, recompilation__version__distribute_pragma_items_class_items_7_p_0_3, env_ptr);
        }
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0(
  MR_Word MaybePredOrFunc_8,
  MR_Word SymName_9,
  MR_Integer Arity_10,
  MR_Word Item_11,
  MR_Word Section_12,
  MR_Word STATE_VARIABLE_ClassItems_0_32,
  MR_Word * STATE_VARIABLE_ClassItems_33)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s env;

    (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 = MaybePredOrFunc_8;
    (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9 = SymName_9;
    (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10 = Arity_10;
    (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32 = STATE_VARIABLE_ClassItems_0_32;
    recompilation__version__distribute_pragma_items_class_items_7_p_0_6(&env);
    if ((env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
    {
      MR_Word Var_38;
      MR_Word Var_39;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Section_12));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Item_11));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_ClassItems_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32, Var_38);
    }
    else
      *STATE_VARIABLE_ClassItems_33 = (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32;
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ClassItems_33;

    recompilation__version__distribute_pragma_items_class_items_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ClassItems_33);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ClassItems_33));
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0(
  MR_Tuple HeadVar__1_1,
  MR_Word STATE_VARIABLE_GatheredItems_0_15,
  MR_Word * STATE_VARIABLE_GatheredItems_16)
{
  {
    MR_Word ItemId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Item_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Section_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word MaybePredOrFunc_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemId_4, (MR_Integer) 0))));
    MR_Word SymName_9;
    MR_Integer Arity_10;
    MR_Word ItemName_11;
    MR_Word GatheredTypeClasses_14;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemId_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_GatheredItems_25_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv1_Var_27;

    SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
    Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
    {
      ItemName_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemName_11, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), ItemName_11, 1) = ((MR_Box) (Arity_10));
    }
    if ((MaybePredOrFunc_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_GatheredItems_19_19;
      MR_Word Var_21;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ItemName_11));
      }
      recompilation__version__add_gathered_item_5_p_0(Item_5, Var_18, Section_6, STATE_VARIABLE_GatheredItems_0_15, &STATE_VARIABLE_GatheredItems_19_19);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ItemName_11));
      }
      recompilation__version__add_gathered_item_5_p_0(Item_5, Var_21, Section_6, STATE_VARIABLE_GatheredItems_19_19, &STATE_VARIABLE_GatheredItems_25_25);
    }
    else
    {
      MR_Word PredOrFunc_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_8, (MR_Integer) 0))));
      MR_Word ItemType_13;
      MR_Word Var_24;

      ItemType_13 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_12);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = (MR_Box) ((MR_Unsigned) (ItemType_13));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ItemName_11));
      }
      recompilation__version__add_gathered_item_5_p_0(Item_5, Var_24, Section_6, STATE_VARIABLE_GatheredItems_0_15, &STATE_VARIABLE_GatheredItems_25_25);
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (recompilation__version__distribute_pragma_items_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (MaybePredOrFunc_8));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (Arity_10));
      MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (Item_5));
      MR_hl_field(MR_mktag(0), Var_26, 7) = ((MR_Box) (Section_6));
    }
    conv1_Var_27 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), STATE_VARIABLE_GatheredItems_25_25, (MR_Integer) 4);
    Var_27 = ((MR_Word) (conv1_Var_27));
    mercury__map__map_values_only_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]), (MR_Word) (&recompilation__version_scalar_common_1[0]), Var_26, Var_27, &GatheredTypeClasses_14);
    recompilation__update_ids_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), (MR_Integer) 4, ((MR_Box) (GatheredTypeClasses_14)), STATE_VARIABLE_GatheredItems_25_25, STATE_VARIABLE_GatheredItems_16);
  }
}

static MR_Box MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_40;

    conv0_LambdaHeadVar__2_40 = recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__522__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_40));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
  MR_Word Decl0_3)
{
  {
    MR_bool succeeded;
    MR_Word Decls_4;

    if (((MR_tag((MR_Word) Decl0_3)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo0_34 = (MR_Word) (MR_body((MR_Word) (Decl0_3), (MR_Integer) 1));
      MR_Word Decl_35;
      MR_Word Var_36;
      MR_Word SymName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_34, (MR_Integer) 0))));
      MR_Word WithInst_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_34, (MR_Integer) 3))));
      MR_Word MaybeDetism_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_34, (MR_Integer) 4))));
      MR_Word InstVarSet_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_34, (MR_Integer) 5))));
      MR_Word Modes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_34, (MR_Integer) 2))));
      MR_Word MaybePredOrFunc_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_34, (MR_Integer) 1))));
      MR_Word ModeInfo_55;

      Var_36 = mercury__term__context_init_0_f_0();
      {
        ModeInfo_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeInfo_55, 0) = ((MR_Box) (SymName_48));
        MR_hl_field(MR_mktag(0), ModeInfo_55, 1) = ((MR_Box) (MaybePredOrFunc_54));
        MR_hl_field(MR_mktag(0), ModeInfo_55, 2) = ((MR_Box) (Modes_53));
        MR_hl_field(MR_mktag(0), ModeInfo_55, 3) = ((MR_Box) (WithInst_49));
        MR_hl_field(MR_mktag(0), ModeInfo_55, 4) = ((MR_Box) (MaybeDetism_50));
        MR_hl_field(MR_mktag(0), ModeInfo_55, 5) = ((MR_Box) (InstVarSet_51));
        MR_hl_field(MR_mktag(0), ModeInfo_55, 6) = ((MR_Box) (Var_36));
      }
      Decl_35 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ModeInfo_55)));
      {
        Decls_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Decls_4, 0) = ((MR_Box) (Decl_35));
        MR_hl_field(MR_mktag(1), Decls_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word PredOrFuncInfo0_5 = (MR_Word) ((MR_Word) (Decl0_3));
      MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 0))));
      MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndModes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 2))));
      MR_Word WithType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 3))));
      MR_Word WithInst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 4))));
      MR_Word MaybeDetism_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 5))));
      MR_Word TypeVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 6))));
      MR_Word InstVarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 7))));
      MR_Word ExistQVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 8))));
      MR_Word Purity_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_5, (MR_Integer) 10))));
      MR_Word TypesWithoutModes_24;
      MR_Word ModeDecls_30;
      MR_Word EmptyInstVarSet_31;
      MR_Word PredOrFuncInfo_32;
      MR_Word PredOrFuncDecl_33;
      MR_Word Var_45;
      MR_Word Types_18;
      MR_Word Modes_20;
      MR_Word MaybeModes_19;

      parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_8, &Types_18, &MaybeModes_19);
      succeeded = (MaybeModes_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Modes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_19, (MR_Integer) 0))));
        succeeded = (Modes_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (WithInst_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybePredOrFunc_27;
        MR_Word ModeInfo_28;
        MR_Word ModeDecl_29;
        MR_Word Var_41;

        TypesWithoutModes_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&recompilation__version_scalar_common_1[19]), Types_18);
        if ((WithInst_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybePredOrFunc_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePredOrFunc_27, 0) = ((MR_Box) (PredOrFunc_7));
          }
        else
          MaybePredOrFunc_27 = (MR_Word) ((MR_Unsigned) 0U);
        Var_41 = mercury__term__context_init_0_f_0();
        {
          ModeInfo_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeInfo_28, 0) = ((MR_Box) (SymName_6));
          MR_hl_field(MR_mktag(0), ModeInfo_28, 1) = ((MR_Box) (MaybePredOrFunc_27));
          MR_hl_field(MR_mktag(0), ModeInfo_28, 2) = ((MR_Box) (Modes_20));
          MR_hl_field(MR_mktag(0), ModeInfo_28, 3) = ((MR_Box) (WithInst_10));
          MR_hl_field(MR_mktag(0), ModeInfo_28, 4) = ((MR_Box) (MaybeDetism_11));
          MR_hl_field(MR_mktag(0), ModeInfo_28, 5) = ((MR_Box) (InstVarSet_13));
          MR_hl_field(MR_mktag(0), ModeInfo_28, 6) = ((MR_Box) (Var_41));
        }
        ModeDecl_29 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ModeInfo_28)));
        {
          ModeDecls_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ModeDecls_30, 0) = ((MR_Box) (ModeDecl_29));
          MR_hl_field(MR_mktag(1), ModeDecls_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        TypesWithoutModes_24 = TypesAndModes_8;
        ModeDecls_30 = (MR_Word) ((MR_Unsigned) 0U);
      }
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_31);
      Var_45 = mercury__term__context_init_0_f_0();
      {
        PredOrFuncInfo_32 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 0) = ((MR_Box) (SymName_6));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 2) = ((MR_Box) (TypesWithoutModes_24));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 3) = ((MR_Box) (WithType_9));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 6) = ((MR_Box) (TypeVarSet_12));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 7) = ((MR_Box) (EmptyInstVarSet_31));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 8) = ((MR_Box) (ExistQVars_14));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 9) = (MR_Box) ((MR_Unsigned) (Purity_15));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 10) = ((MR_Box) (Constraints_16));
        MR_hl_field(MR_mktag(0), PredOrFuncInfo_32, 11) = ((MR_Box) (Var_45));
      }
      PredOrFuncDecl_33 = (MR_Word) ((MR_Word) (PredOrFuncInfo_32));
      {
        Decls_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Decls_4, 0) = ((MR_Box) (PredOrFuncDecl_33));
        MR_hl_field(MR_mktag(1), Decls_4, 1) = ((MR_Box) (ModeDecls_30));
      }
    }
    return Decls_4;
  }
}

static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_3_6_f_0(
  MR_Word SourceFileTime_8,
  MR_Word OldGatheredItems_9,
  MR_Word OldItemVersionNumbers_10,
  MR_Word ItemType_11,
  MR_Word NameArity_12,
  MR_Word CurItems_13)
{
  {
    MR_bool succeeded;
    MR_Word TimeStamp_14;
    MR_Word OldIds_15;
    MR_Word OldItemTypeVersionNumbers_16;
    MR_Box conv0_OldIds_15;
    MR_Box conv1_OldItemTypeVersionNumbers_16;
    MR_Word OldItemVersionNumber_20;
    MR_Word TypeInfo_26_26;
    MR_Word TypeCtorInfo_27_27;
    MR_Word OldItems_17;
    MR_Word SortedOldItems_18;
    MR_Word SortedCurItems_19;
    MR_Word Var_21;
    MR_Word Var_28;
    MR_Box conv2_OldItems_17;
    MR_Box conv3_OldItemVersionNumber_20;

    conv0_OldIds_15 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), OldGatheredItems_9, ItemType_11);
    OldIds_15 = ((MR_Word) (conv0_OldIds_15));
    conv1_OldItemTypeVersionNumbers_16 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[1]), OldItemVersionNumbers_10, ItemType_11);
    OldItemTypeVersionNumbers_16 = ((MR_Word) (conv1_OldItemTypeVersionNumbers_16));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]), OldIds_15, ((MR_Box) (NameArity_12)), &conv2_OldItems_17);
    if (succeeded)
    {
      OldItems_17 = ((MR_Word) (conv2_OldItems_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&recompilation__version_scalar_common_1[2]);
      mercury__list__sort_2_p_0(TypeInfo_26_26, OldItems_17, &SortedOldItems_18);
      mercury__list__sort_2_p_0(TypeInfo_26_26, CurItems_13, &SortedCurItems_19);
      Var_21 = (MR_Integer) 0;
      recompilation__version__are_items_changed_3_p_0(SortedOldItems_18, SortedCurItems_19, &Var_28);
      succeeded = (Var_21 == Var_28);
      if (succeeded)
      {
        TypeCtorInfo_27_27 = (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), TypeCtorInfo_27_27, OldItemTypeVersionNumbers_16, ((MR_Box) (NameArity_12)), &conv3_OldItemVersionNumber_20);
        if (succeeded)
        {
          OldItemVersionNumber_20 = ((MR_Word) (conv3_OldItemVersionNumber_20));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      TimeStamp_14 = OldItemVersionNumber_20;
    else
      TimeStamp_14 = SourceFileTime_8;
    return TimeStamp_14;
  }
}

static void MR_CALL 
recompilation__version__are_items_changed_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Integer) 0;
      else
        *HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word Section1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        MR_Word Item1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
        MR_Word Section2_11;
        MR_Word Item2_12;
        MR_Word Items2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

        Section2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        Item2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
        succeeded = (Section1_8 == Section2_11);
        if (succeeded)
        {
          MR_Word ItemChanged_15;

          recompilation__version__is_item_changed_3_p_0(Item1_9, Item2_12, &ItemChanged_15);
          switch (ItemChanged_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *HeadVar__3_3 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__1_1 = Var_18;
                MR_Word next_value_of_HeadVar__2_2 = Items2_13;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
              break;
          }
        }
        else
          *HeadVar__3_3 = (MR_Integer) 1;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__version__is_item_changed_3_p_0(
  MR_Word Item1_4,
  MR_Word Item2_5,
  MR_Word * Changed_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Item1_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ItemClause1_7 = (MR_Word) ((MR_Word) (Item1_4));
          MR_Word PorF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 2))));
          MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 3))));
          MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 4))));
          MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 5))));
          MR_Word TypeInfo_267_267;
          MR_Word TypeInfo_269_269;
          MR_Word TypeInfo_270_270;
          MR_Word ItemClause2_16;
          MR_Word Var_217;
          MR_Word Var_218;
          MR_Word Var_219;
          MR_Word Var_220;

          succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            ItemClause2_16 = (MR_Word) ((MR_Word) (Item2_5));
            Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 2))));
            Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 3))));
            Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 4))));
            Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 5))));
            TypeInfo_267_267 = (MR_Word) (&recompilation__version_scalar_common_2[14]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_267_267, ((MR_Box) (PorF_10)), ((MR_Box) (Var_217)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(SymName_11, Var_218);
              if (succeeded)
              {
                TypeInfo_269_269 = (MR_Word) (&recompilation__version_scalar_common_2[15]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_269_269, ((MR_Box) (Args_12)), ((MR_Box) (Var_219)));
                if (succeeded)
                {
                  TypeInfo_270_270 = (MR_Word) (&recompilation__version_scalar_common_2[16]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_270_270, ((MR_Box) (Goal_13)), ((MR_Box) (Var_220)));
                }
              }
            }
          }
          if (succeeded)
            *Changed_6 = (MR_Integer) 0;
          else
            *Changed_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefn1_21 = (MR_Word) (MR_body((MR_Word) (Item1_4), (MR_Integer) 1));
          MR_Word Name_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 1))));
          MR_Word Defn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 3))));
          MR_Word Args_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 2))));
          MR_Word TypeInfo_305_305;
          MR_Word TypeInfo_307_307;
          MR_Word ItemTypeDefn2_27;
          MR_Word Var_221;
          MR_Word Var_222;
          MR_Word Var_223;

          succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            ItemTypeDefn2_27 = (MR_Word) (MR_body((MR_Word) (Item2_5), (MR_Integer) 1));
            Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 1))));
            Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 2))));
            Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 3))));
            TypeInfo_305_305 = (MR_Word) (&recompilation__version_scalar_common_2[27]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_305_305, ((MR_Box) (Name_23)), ((MR_Box) (Var_221)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_defn_0_0(Args_184, Var_222);
              if (succeeded)
              {
                TypeInfo_307_307 = (MR_Word) (&recompilation__version_scalar_common_2[28]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_307_307, ((MR_Box) (Defn_24)), ((MR_Box) (Var_223)));
              }
            }
          }
          if (succeeded)
            *Changed_6 = (MR_Integer) 0;
          else
            *Changed_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemInstDefn1_31 = (MR_Word) (MR_body((MR_Word) (Item1_4), (MR_Integer) 2));
          MR_Word MaybeForTypeCtor_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 3))));
          MR_Word Args_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 2))));
          MR_Word Name_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 1))));
          MR_Word Defn_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 4))));
          MR_Word TypeInfo_275_275;
          MR_Word TypeInfo_276_276;
          MR_Word TypeInfo_278_278;
          MR_Word ItemInstDefn2_36;
          MR_Word Var_224;
          MR_Word Var_225;
          MR_Word Var_226;
          MR_Word Var_227;

          succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 2);
          if (succeeded)
          {
            ItemInstDefn2_36 = (MR_Word) (MR_body((MR_Word) (Item2_5), (MR_Integer) 2));
            Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 1))));
            Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 2))));
            Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 3))));
            Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 4))));
            TypeInfo_275_275 = (MR_Word) (&recompilation__version_scalar_common_2[17]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_275_275, ((MR_Box) (Name_186)), ((MR_Box) (Var_224)));
            if (succeeded)
            {
              TypeInfo_276_276 = (MR_Word) (&recompilation__version_scalar_common_2[18]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_276_276, ((MR_Box) (Args_185)), ((MR_Box) (Var_225)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_item____Unify____maybe_abstract_inst_defn_0_0(MaybeForTypeCtor_33, Var_226);
                if (succeeded)
                {
                  TypeInfo_278_278 = (MR_Word) (&recompilation__version_scalar_common_2[19]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_278_278, ((MR_Box) (Defn_187)), ((MR_Box) (Var_227)));
                }
              }
            }
          }
          if (succeeded)
            *Changed_6 = (MR_Integer) 0;
          else
            *Changed_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemModeDefn1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word Args_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 2))));
              MR_Word Name_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 1))));
              MR_Word Defn_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 3))));
              MR_Word TypeInfo_288_288;
              MR_Word TypeInfo_290_290;
              MR_Word ItemModeDefn2_44;
              MR_Word Var_228;
              MR_Word Var_229;
              MR_Word Var_230;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ItemModeDefn2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 1))));
                Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 2))));
                Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 3))));
                TypeInfo_288_288 = (MR_Word) (&recompilation__version_scalar_common_2[17]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_288_288, ((MR_Box) (Name_189)), ((MR_Box) (Var_228)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_item____Unify____maybe_abstract_mode_defn_0_0(Args_188, Var_229);
                  if (succeeded)
                  {
                    TypeInfo_290_290 = (MR_Word) (&recompilation__version_scalar_common_2[19]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_290_290, ((MR_Box) (Defn_190)), ((MR_Box) (Var_230)));
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ItemPredDecl1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word PredOrFunc_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word TypesAndModes1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 2))));
              MR_Word WithType1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 3))));
              MR_Word Det1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 5))));
              MR_Word TVarSet1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 7))));
              MR_Word ExistQVars1_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 9))));
              MR_Word Purity_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 10))) & (MR_Integer) 3);
              MR_Word Constraints1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 11))));
              MR_Word Name_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 0))));
              MR_Word ItemPredDecl2_62;
              MR_Word TypesAndModes2_63;
              MR_Word WithType2_64;
              MR_Word Det2_66;
              MR_Word TVarSet2_68;
              MR_Word ExistQVars2_70;
              MR_Word Constraints2_71;
              MR_Word Var_231;
              MR_Word Var_232;
              MR_Word Var_233;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ItemPredDecl2_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 0))));
                Var_232 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 1))) & (MR_Integer) 1);
                TypesAndModes2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 2))));
                WithType2_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 3))));
                Det2_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 5))));
                TVarSet2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 7))));
                ExistQVars2_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 9))));
                Var_233 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 10))) & (MR_Integer) 3);
                Constraints2_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 11))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_191, Var_231);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_49 == Var_232);
                  if (succeeded)
                  {
                    succeeded = (Purity_58 == Var_233);
                    if (succeeded)
                    {
                      switch (PredOrFunc_49) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[22]), ((MR_Box) (Det1_53)), ((MR_Box) (Det2_66)));
                          }
                          break;
                        case (MR_Integer) 0:
                          succeeded = MR_TRUE;
                          break;
                      }
                      if (succeeded)
                        succeeded = recompilation__version__pred_or_func_type_is_unchanged_10_p_0(TVarSet1_55, ExistQVars1_57, TypesAndModes1_50, WithType1_51, Constraints1_59, TVarSet2_68, ExistQVars2_70, TypesAndModes2_63, WithType2_64, Constraints2_71);
                    }
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ItemModeDecl1_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word Modes1_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 2))));
              MR_Word WithInst1_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 3))));
              MR_Word Det_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 4))));
              MR_Word InstVarSet1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 5))));
              MR_Word Name_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 0))));
              MR_Word PredOrFunc_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 1))));
              MR_Word TypeInfo_286_286;
              MR_Word TypeInfo_287_287;
              MR_Word ItemModeDecl2_81;
              MR_Word Modes2_82;
              MR_Word WithInst2_83;
              MR_Word InstVarSet2_84;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word Var_236;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ItemModeDecl2_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 0))));
                Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 1))));
                Modes2_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 2))));
                WithInst2_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 3))));
                Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 4))));
                InstVarSet2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 5))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_192, Var_234);
                if (succeeded)
                {
                  TypeInfo_286_286 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_286_286, ((MR_Box) (PredOrFunc_193)), ((MR_Box) (Var_235)));
                  if (succeeded)
                  {
                    TypeInfo_287_287 = (MR_Word) (&recompilation__version_scalar_common_2[22]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_287_287, ((MR_Box) (Det_77)), ((MR_Box) (Var_236)));
                    if (succeeded)
                      succeeded = recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(InstVarSet1_78, Modes1_75, WithInst1_76, InstVarSet2_84, Modes2_82, WithInst2_83);
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ItemPragma1_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word PragmaType1_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma1_87, (MR_Integer) 0))));
              MR_Word PragmaType2_93;
              MR_Word ItemPragma2_92;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ItemPragma2_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                PragmaType2_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma2_92, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word TypeSubst1_103;
                MR_Word TypeSubst2_105;
                MR_Word TVarSet1_196;
                MR_Word TVarSet2_197;
                MR_Word TypeInfo_298_298;
                MR_Word TypeInfo_299_299;
                MR_Word TypeSpecInfo1_97;
                MR_Word TypeSpecInfo2_98;
                MR_Word SpecName_99;
                MR_Integer Arity_100;
                MR_Word MaybePredOrFunc_101;
                MR_Word MaybeModes_102;
                MR_Word Name_194;
                MR_Word Var_237;
                MR_Word Var_238;
                MR_Integer Var_239;
                MR_Word Var_240;
                MR_Word Var_241;

                succeeded = ((((MR_tag((MR_Word) PragmaType1_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PragmaType1_88, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  TypeSpecInfo1_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType1_88, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) PragmaType2_93)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PragmaType2_93, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    TypeSpecInfo2_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType2_93, (MR_Integer) 1))));
                    Name_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 0))));
                    SpecName_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 1))));
                    Arity_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 2))));
                    MaybePredOrFunc_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 3))));
                    MaybeModes_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 4))));
                    TypeSubst1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 5))));
                    TVarSet1_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 6))));
                    Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 0))));
                    Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 1))));
                    Var_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 2))));
                    Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 3))));
                    Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 4))));
                    TypeSubst2_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 5))));
                    TVarSet2_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 6))));
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_194, Var_237);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SpecName_99, Var_238);
                      if (succeeded)
                      {
                        succeeded = (Arity_100 == Var_239);
                        if (succeeded)
                        {
                          TypeInfo_298_298 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_298_298, ((MR_Box) (MaybePredOrFunc_101)), ((MR_Box) (Var_240)));
                          if (succeeded)
                          {
                            TypeInfo_299_299 = (MR_Word) (&recompilation__version_scalar_common_2[24]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_299_299, ((MR_Box) (MaybeModes_102)), ((MR_Box) (Var_241)));
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word TVars1_107;
                  MR_Word Types1_108;
                  MR_Word TVars2_109;
                  MR_Word Types2_110;
                  MR_Word KindMap_111;
                  MR_Word TVarTypes1_112;
                  MR_Word TVarTypes2_113;
                  MR_Word Var_182;
                  MR_Word Var_183;
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word Var_116;

                  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubst1_103, &TVars1_107, &Types1_108);
                  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubst2_105, &TVars2_109, &Types2_110);
                  KindMap_111 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_111, TVars1_107, &TVarTypes1_112);
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_111, TVars2_109, &TVarTypes2_113);
                  Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TVarTypes1_112, Types1_108);
                  Var_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TVarTypes2_113, Types2_110);
                  succeeded = recompilation__version__type_list_is_unchanged_7_p_0(TVarSet1_196, Var_182, TVarSet2_197, Var_183, &Var_114, &Var_115, &Var_116);
                  if (succeeded)
                    *Changed_6 = (MR_Integer) 0;
                  else
                    *Changed_6 = (MR_Integer) 1;
                }
                else
                {
                  succeeded = parse_tree__prog_item____Unify____pragma_type_0_0(PragmaType1_88, PragmaType2_93);
                  if (succeeded)
                    *Changed_6 = (MR_Integer) 0;
                  else
                    *Changed_6 = (MR_Integer) 1;
                }
              }
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ItemPromiseInfo1_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word PromiseType_118 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word UnivVars_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 3))));
              MR_Word Goal_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 1))));
              MR_Word TypeInfo_304_304;
              MR_Word ItemPromiseInfo2_123;
              MR_Word Var_242;
              MR_Word Var_243;
              MR_Word Var_244;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ItemPromiseInfo2_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_242 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 1))));
                Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 3))));
                succeeded = (PromiseType_118 == Var_242);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_item____Unify____goal_0_0(Goal_204, Var_243);
                  if (succeeded)
                  {
                    TypeInfo_304_304 = (MR_Word) (&recompilation__version_scalar_common_2[26]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_304_304, ((MR_Box) (UnivVars_120)), ((MR_Box) (Var_244)));
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ItemTypeClass1_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word Constraints_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 0))));
              MR_Word FunDeps_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 1))));
              MR_Word Vars_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 3))));
              MR_Word Interface1_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 4))));
              MR_Word Name_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 2))));
              MR_Word TypeInfo_309_309;
              MR_Word TypeInfo_310_310;
              MR_Word TypeInfo_311_311;
              MR_Word ItemTypeClass2_163;
              MR_Word Interface2_164;
              MR_Word Var_257;
              MR_Word Var_258;
              MR_Word Var_259;
              MR_Word Var_260;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ItemTypeClass2_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 0))));
                Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 1))));
                Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 2))));
                Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 3))));
                Interface2_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 4))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Constraints_156, Var_257);
                if (succeeded)
                {
                  TypeInfo_309_309 = (MR_Word) (&recompilation__version_scalar_common_2[27]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_309_309, ((MR_Box) (FunDeps_157)), ((MR_Box) (Var_258)));
                  if (succeeded)
                  {
                    TypeInfo_310_310 = (MR_Word) (&recompilation__version_scalar_common_2[21]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_310_310, ((MR_Box) (Name_211)), ((MR_Box) (Var_259)));
                    if (succeeded)
                    {
                      TypeInfo_311_311 = (MR_Word) (&recompilation__version_scalar_common_2[29]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_311_311, ((MR_Box) (Vars_158)), ((MR_Box) (Var_260)));
                      if (succeeded)
                        succeeded = recompilation__version__class_interface_is_unchanged_2_p_0(Interface1_159, Interface2_164);
                    }
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ItemInstance1_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word Types_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 2))));
              MR_Word OriginalTypes_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 3))));
              MR_Word Body_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 4))));
              MR_Word Module_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 6))));
              MR_Word Name_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 1))));
              MR_Word Constraints_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 0))));
              MR_Word TypeInfo_280_280;
              MR_Word TypeInfo_281_281;
              MR_Word TypeInfo_282_282;
              MR_Word ItemInstance2_176;
              MR_Word Var_261;
              MR_Word Var_262;
              MR_Word Var_263;
              MR_Word Var_264;
              MR_Word Var_265;
              MR_Word Var_266;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ItemInstance2_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 0))));
                Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 1))));
                Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 2))));
                Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 3))));
                Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 4))));
                Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 6))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Constraints_213, Var_261);
                if (succeeded)
                {
                  TypeInfo_280_280 = (MR_Word) (&recompilation__version_scalar_common_2[20]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_280_280, ((MR_Box) (Name_212)), ((MR_Box) (Var_262)));
                  if (succeeded)
                  {
                    TypeInfo_281_281 = (MR_Word) (&recompilation__version_scalar_common_2[20]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_281_281, ((MR_Box) (Types_169)), ((MR_Box) (Var_263)));
                    if (succeeded)
                    {
                      TypeInfo_282_282 = (MR_Word) (&recompilation__version_scalar_common_2[21]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_282_282, ((MR_Box) (OriginalTypes_170)), ((MR_Box) (Var_264)));
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data____Unify____instance_body_0_0(Body_171, Var_265);
                        if (succeeded)
                          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_173, Var_266);
                      }
                    }
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ItemInitialise1_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word A_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 0))));
              MR_Integer B_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 1))));
              MR_Word C_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 2))));
              MR_Word ItemInitialise2_133;
              MR_Word Var_245;
              MR_Integer Var_246;
              MR_Word Var_247;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ItemInitialise2_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 0))));
                Var_246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 1))));
                Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(A_128, Var_245);
                if (succeeded)
                {
                  succeeded = (B_129 == Var_246);
                  if (succeeded)
                    succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(C_130, Var_247);
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ItemFinalise1_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word A_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 0))));
              MR_Integer B_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 1))));
              MR_Word C_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 2))));
              MR_Word ItemFinalise2_139;
              MR_Word Var_248;
              MR_Integer Var_249;
              MR_Word Var_250;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ItemFinalise2_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 0))));
                Var_249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 1))));
                Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(A_205, Var_248);
                if (succeeded)
                {
                  succeeded = (B_206 == Var_249);
                  if (succeeded)
                    succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(C_207, Var_250);
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ItemMutable1_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1))));
              MR_Word D_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 5))));
              MR_Word E_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 6))));
              MR_Word F_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 7))));
              MR_String A_208 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 0))));
              MR_Word B_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 2))));
              MR_Word C_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 4))));
              MR_Word TypeInfo_293_293;
              MR_Word TypeInfo_294_294;
              MR_Word ItemMutable2_150;
              MR_String Var_251;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_254;
              MR_Word Var_255;
              MR_Word Var_256;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ItemMutable2_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1))));
                Var_251 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 0))));
                Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 2))));
                Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 4))));
                Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 5))));
                Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 6))));
                Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 7))));
                succeeded = (strcmp(A_208, Var_251) == 0);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(B_209, Var_252);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(C_210, Var_253);
                    if (succeeded)
                    {
                      TypeInfo_293_293 = (MR_Word) (&recompilation__version_scalar_common_2[5]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_293_293, ((MR_Box) (D_145)), ((MR_Box) (Var_254)));
                      if (succeeded)
                      {
                        TypeInfo_294_294 = (MR_Word) (&recompilation__version_scalar_common_2[15]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_294_294, ((MR_Box) (E_146)), ((MR_Box) (Var_255)));
                        if (succeeded)
                          succeeded = parse_tree__prog_item____Unify____mutable_var_attributes_0_0(F_147, Var_256);
                      }
                    }
                  }
                }
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 10:
          case (MR_Integer) 11:
            *Changed_6 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
recompilation__version__class_interface_is_unchanged_2_p_0(
  MR_Word Interface0_3,
  MR_Word Interface_4)
{
  {
    MR_bool succeeded;

    if ((Interface0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (Interface_4 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Methods1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_3, (MR_Integer) 0))));
      MR_Word Methods2_6;

      succeeded = (Interface_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Methods2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_4, (MR_Integer) 0))));
        succeeded = recompilation__version__class_methods_are_unchanged_2_p_0(Methods1_5, Methods2_6);
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Decl1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Decls1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Decl2_5;
      MR_Word Decls2_6;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Decl2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Decls2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Decl1_3)) == (MR_Integer) 1))
        {
          MR_Word TypeInfo_50_50;
          MR_Word TypeInfo_51_51;
          MR_Word TypeCtorInfo_38_85;
          MR_Word TypeCtorInfo_39_86;
          MR_Word TypeCtorInfo_40_87;
          MR_Word TypeInfo_41_88;
          MR_Word ModeInfo1_29 = (MR_Word) (MR_body((MR_Word) (Decl1_3), (MR_Integer) 1));
          MR_Word ModeInfo2_30;
          MR_Word Modes1_31;
          MR_Word WithInst1_32;
          MR_Word Det_33;
          MR_Word InstVarSet1_34;
          MR_Word Modes2_36;
          MR_Word WithInst2_37;
          MR_Word InstVarSet2_38;
          MR_Word Name_40;
          MR_Word PredOrFunc_41;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word VarSet1_60;
          MR_Word VarSet2_61;
          MR_Word InstRenaming_63;
          MR_Word ModeTerms1_64;
          MR_Word ModeTerms2_65;
          MR_Word AllModeTerms1_70;
          MR_Word AllModeTerms2_71;
          MR_Word SubstAllModeTerms2_72;
          MR_Word Var_75;
          MR_Word Var_62;
          MR_Word Var_73;
          MR_Word Var_74;

          succeeded = ((MR_tag((MR_Word) Decl2_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            ModeInfo2_30 = (MR_Word) (MR_body((MR_Word) (Decl2_5), (MR_Integer) 1));
            Name_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo1_29, (MR_Integer) 0))));
            PredOrFunc_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo1_29, (MR_Integer) 1))));
            Modes1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo1_29, (MR_Integer) 2))));
            WithInst1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo1_29, (MR_Integer) 3))));
            Det_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo1_29, (MR_Integer) 4))));
            InstVarSet1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo1_29, (MR_Integer) 5))));
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo2_30, (MR_Integer) 0))));
            Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo2_30, (MR_Integer) 1))));
            Modes2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo2_30, (MR_Integer) 2))));
            WithInst2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo2_30, (MR_Integer) 3))));
            Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo2_30, (MR_Integer) 4))));
            InstVarSet2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo2_30, (MR_Integer) 5))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_40, Var_46);
            if (succeeded)
            {
              TypeInfo_50_50 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (PredOrFunc_41)), ((MR_Box) (Var_47)));
              if (succeeded)
              {
                TypeInfo_51_51 = (MR_Word) (&recompilation__version_scalar_common_2[22]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (Det_33)), ((MR_Box) (Var_48)));
                if (succeeded)
                {
                  TypeCtorInfo_38_85 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
                  TypeCtorInfo_39_86 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_38_85, TypeCtorInfo_39_86, InstVarSet1_34, &VarSet1_60);
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_38_85, TypeCtorInfo_39_86, InstVarSet2_38, &VarSet2_61);
                  mercury__varset__merge_renaming_4_p_0(TypeCtorInfo_39_86, VarSet1_60, VarSet2_61, &Var_62, &InstRenaming_63);
                  TypeCtorInfo_40_87 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                  TypeInfo_41_88 = (MR_Word) (&recompilation__version_scalar_common_2[5]);
                  Var_75 = (MR_Word) (&recompilation__version_scalar_common_4[2]);
                  ModeTerms1_64 = mercury__list__map_2_f_0(TypeCtorInfo_40_87, TypeInfo_41_88, Var_75, Modes1_31);
                  ModeTerms2_65 = mercury__list__map_2_f_0(TypeCtorInfo_40_87, TypeInfo_41_88, Var_75, Modes2_36);
                  if ((WithInst1_32 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    succeeded = (WithInst2_37 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      AllModeTerms1_70 = ModeTerms1_64;
                      AllModeTerms2_71 = ModeTerms2_65;
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word Inst1_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WithInst1_32, (MR_Integer) 0))));
                    MR_Word Inst2_67;
                    MR_Word WithInstTerm1_68;
                    MR_Word WithInstTerm2_69;
                    MR_Word Var_79;
                    MR_Word Var_80;
                    MR_Word Var_81;
                    MR_Word Var_82;
                    MR_Word Var_83;
                    MR_Word Var_84;

                    succeeded = (WithInst2_37 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Inst2_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WithInst2_37, (MR_Integer) 0))));
                      Var_79 = (MR_Integer) 0;
                      Var_81 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
                        MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Inst1_66));
                      }
                      WithInstTerm1_68 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_79, Var_80);
                      Var_82 = (MR_Integer) 0;
                      Var_84 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_84));
                        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Inst2_67));
                      }
                      WithInstTerm2_69 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_82, Var_83);
                      {
                        AllModeTerms1_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), AllModeTerms1_70, 0) = ((MR_Box) (WithInstTerm1_68));
                        MR_hl_field(MR_mktag(1), AllModeTerms1_70, 1) = ((MR_Box) (ModeTerms1_64));
                      }
                      {
                        AllModeTerms2_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), AllModeTerms2_71, 0) = ((MR_Box) (WithInstTerm2_69));
                        MR_hl_field(MR_mktag(1), AllModeTerms2_71, 1) = ((MR_Box) (ModeTerms2_65));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    mercury__term__apply_renaming_in_terms_3_p_0(TypeCtorInfo_39_86, InstRenaming_63, AllModeTerms2_71, &SubstAllModeTerms2_72);
                    succeeded = mercury__term__list_subsumes_3_p_0(TypeCtorInfo_39_86, AllModeTerms1_70, SubstAllModeTerms2_72, &Var_73);
                    if (succeeded)
                      succeeded = mercury__term__list_subsumes_3_p_0(TypeCtorInfo_39_86, SubstAllModeTerms2_72, AllModeTerms1_70, &Var_74);
                  }
                }
              }
            }
          }
        }
        else
        {
          MR_Word TypeInfo_53_53;
          MR_Word PredOrFuncInfo1_7 = (MR_Word) ((MR_Word) (Decl1_3));
          MR_Word PredOrFuncInfo2_8;
          MR_Word Name_9;
          MR_Word PredOrFunc_10;
          MR_Word TypesAndModes1_11;
          MR_Word WithType1_12;
          MR_Word Detism_14;
          MR_Word TVarSet1_15;
          MR_Word ExistQVars1_17;
          MR_Word Purity_18;
          MR_Word Constraints1_19;
          MR_Word TypesAndModes2_21;
          MR_Word WithType2_22;
          MR_Word TVarSet2_24;
          MR_Word ExistQVars2_26;
          MR_Word Constraints2_27;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          succeeded = ((MR_tag((MR_Word) Decl2_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            PredOrFuncInfo2_8 = (MR_Word) ((MR_Word) (Decl2_5));
            Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 0))));
            PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 1))) & (MR_Integer) 1);
            TypesAndModes1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 2))));
            WithType1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 3))));
            Detism_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 5))));
            TVarSet1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 6))));
            ExistQVars1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 8))));
            Purity_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 9))) & (MR_Integer) 3);
            Constraints1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo1_7, (MR_Integer) 10))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 0))));
            Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 1))) & (MR_Integer) 1);
            TypesAndModes2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 2))));
            WithType2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 3))));
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 5))));
            TVarSet2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 6))));
            ExistQVars2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 8))));
            Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 9))) & (MR_Integer) 3);
            Constraints2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo2_8, (MR_Integer) 10))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_9, Var_42);
            if (succeeded)
            {
              succeeded = (PredOrFunc_10 == Var_43);
              if (succeeded)
              {
                TypeInfo_53_53 = (MR_Word) (&recompilation__version_scalar_common_2[22]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (Detism_14)), ((MR_Box) (Var_44)));
                if (succeeded)
                {
                  succeeded = (Purity_18 == Var_45);
                  if (succeeded)
                    succeeded = recompilation__version__pred_or_func_type_is_unchanged_10_p_0(TVarSet1_15, ExistQVars1_17, TypesAndModes1_11, WithType1_12, Constraints1_19, TVarSet2_24, ExistQVars2_26, TypesAndModes2_21, WithType2_22, Constraints2_27);
                }
              }
            }
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Decls1_4;
          next_value_of_HeadVar__2_2 = Decls2_6;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(
  MR_Word InstVarSet1_7,
  MR_Word Modes1_8,
  MR_Word MaybeWithInst1_9,
  MR_Word InstVarSet2_10,
  MR_Word Modes2_11,
  MR_Word MaybeWithInst2_12)
{
  {
    MR_bool succeeded;
    MR_Word VarSet1_13;
    MR_Word VarSet2_14;
    MR_Word InstRenaming_16;
    MR_Word ModeTerms1_17;
    MR_Word ModeTerms2_18;
    MR_Word AllModeTerms1_23;
    MR_Word AllModeTerms2_24;
    MR_Word SubstAllModeTerms2_25;
    MR_Word Var_15;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstVarSet1_7, &VarSet1_13);
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstVarSet2_10, &VarSet2_14);
    mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet1_13, VarSet2_14, &Var_15, &InstRenaming_16);
    ModeTerms1_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__version_scalar_common_2[5]), (MR_Word) (&recompilation__version_scalar_common_4[1]), Modes1_8);
    ModeTerms2_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__version_scalar_common_2[5]), (MR_Word) (&recompilation__version_scalar_common_4[1]), Modes2_11);
    if ((MaybeWithInst1_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (MaybeWithInst2_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        AllModeTerms1_23 = ModeTerms1_17;
        AllModeTerms2_24 = ModeTerms2_18;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Inst1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst1_9, (MR_Integer) 0))));
      MR_Word Inst2_20;
      MR_Word WithInstTerm1_21;
      MR_Word WithInstTerm2_22;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      succeeded = (MaybeWithInst2_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Inst2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst2_12, (MR_Integer) 0))));
        Var_32 = (MR_Integer) 0;
        Var_34 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Inst1_19));
        }
        WithInstTerm1_21 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_32, Var_33);
        Var_35 = (MR_Integer) 0;
        Var_37 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Inst2_20));
        }
        WithInstTerm2_22 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_35, Var_36);
        {
          AllModeTerms1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllModeTerms1_23, 0) = ((MR_Box) (WithInstTerm1_21));
          MR_hl_field(MR_mktag(1), AllModeTerms1_23, 1) = ((MR_Box) (ModeTerms1_17));
        }
        {
          AllModeTerms2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllModeTerms2_24, 0) = ((MR_Box) (WithInstTerm2_22));
          MR_hl_field(MR_mktag(1), AllModeTerms2_24, 1) = ((MR_Box) (ModeTerms2_18));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      mercury__term__apply_renaming_in_terms_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstRenaming_16, AllModeTerms2_24, &SubstAllModeTerms2_25);
      succeeded = mercury__term__list_subsumes_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllModeTerms1_23, SubstAllModeTerms2_25, &Var_26);
      if (succeeded)
        succeeded = mercury__term__list_subsumes_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SubstAllModeTerms2_25, AllModeTerms1_23, &Var_27);
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_43;

    conv0_LambdaHeadVar__2_43 = recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1093__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_43));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0(
  MR_Word TVarSet1_11,
  MR_Word ExistQVars1_12,
  MR_Word TypesAndModes1_13,
  MR_Word MaybeWithType1_14,
  MR_Word Constraints1_15,
  MR_Word TVarSet2_16,
  MR_Word ExistQVars2_17,
  MR_Word TypesAndModes2_18,
  MR_Word MaybeWithType2_19,
  MR_Word Constraints2_20)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_51_51;
    MR_Word TypeCtorInfo_52_52;
    MR_Word Types1_26;
    MR_Word Types2_27;
    MR_Word AllTypes1_30;
    MR_Word AllTypes2_31;
    MR_Word Renaming_33;
    MR_Word Types2ToTypes1Subst_34;
    MR_Word KindMap2_35;
    MR_Word RenamedKindMap2_36;
    MR_Word RenamedExistQVars2_37;
    MR_Word SubstExistQTypes2_38;
    MR_Word RenamedConstraints2_40;
    MR_Word SubstConstraints2_41;
    MR_Word _TVarSet_32;
    MR_Word SubstExistQVars2_39;

    Types1_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_1[18]), TypesAndModes1_13);
    Types2_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_1[18]), TypesAndModes2_18);
    if ((MaybeWithType1_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (MaybeWithType2_19 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        AllTypes1_30 = Types1_26;
        AllTypes2_31 = Types2_27;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WithType1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType1_14, (MR_Integer) 0))));
      MR_Word WithType2_29;

      succeeded = (MaybeWithType2_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        WithType2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType2_19, (MR_Integer) 0))));
        {
          AllTypes1_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllTypes1_30, 0) = ((MR_Box) (WithType1_28));
          MR_hl_field(MR_mktag(1), AllTypes1_30, 1) = ((MR_Box) (Types1_26));
        }
        {
          AllTypes2_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllTypes2_31, 0) = ((MR_Box) (WithType2_29));
          MR_hl_field(MR_mktag(1), AllTypes2_31, 1) = ((MR_Box) (Types2_27));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      succeeded = recompilation__version__type_list_is_unchanged_7_p_0(TVarSet1_11, AllTypes1_30, TVarSet2_16, AllTypes2_31, &_TVarSet_32, &Renaming_33, &Types2ToTypes1Subst_34);
      if (succeeded)
      {
        TypeInfo_51_51 = (MR_Word) (&recompilation__version_scalar_common_2[2]);
        TypeCtorInfo_52_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_51_51, TypeCtorInfo_52_52, &KindMap2_35);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_33, KindMap2_35, &RenamedKindMap2_36);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_33, ExistQVars2_17, &RenamedExistQVars2_37);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap2_36, Types2ToTypes1Subst_34, RenamedExistQVars2_37, &SubstExistQTypes2_38);
        succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(SubstExistQTypes2_38, &SubstExistQVars2_39);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[27]), ((MR_Box) (ExistQVars1_12)), ((MR_Box) (SubstExistQVars2_39)));
        }
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "non-var");
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(Renaming_33, Constraints2_20, &RenamedConstraints2_40);
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(Types2ToTypes1Subst_34, RenamedConstraints2_40, &SubstConstraints2_41);
          succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(Constraints1_15, SubstConstraints2_41);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18 = ((MR_Word) ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18));
    (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19 = ((MR_Word) ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19));
    recompilation__version__type_list_is_unchanged_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_20;
      MR_Word TypeCtorInfo_32_32;
      MR_String VarName1_21;
      MR_String VarName2_22;

      (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19)) == (MR_Integer) 0);
      if ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19, (MR_Integer) 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19, (MR_Integer) 1))));
        TypeCtorInfo_32_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_32, *((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12), (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17, &VarName1_21);
        mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_32, *((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12), (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18, &VarName2_22);
        (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = (strcmp(VarName1_21, VarName2_22) == 0);
        if (!((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded))
        {
          MR_String VarNum_57;
          MR_String VarNum_88;
          MR_String Var_90;
          MR_Integer Var_58;
          MR_Integer Var_89;

          (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) "V_", &VarNum_57, VarName1_21);
          if ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
          {
            (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_57, &Var_58);
            if ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
            {
              Var_90 = (MR_String) "V_";
              (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_90, &VarNum_88, VarName2_22);
              if ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
                (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_88, &Var_89);
            }
          }
        }
        (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = !((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded);
        if ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
          recompilation__version__type_list_is_unchanged_7_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__map__member_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14), &(env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18, &(env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19, recompilation__version__type_list_is_unchanged_7_p_0_3, env_ptr);
        }
        (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0(
  MR_Word TVarSet1_8,
  MR_Word Types1_9,
  MR_Word TVarSet2_10,
  MR_Word Types2_11,
  MR_Word * TVarSet_12,
  MR_Word * Renaming_13,
  MR_Word * Types2ToTypes1Subst_14)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s env;

    (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12 = TVarSet_12;
    (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14 = Types2ToTypes1Subst_14;
    {
      MR_Word SubstTypes2_15;
      MR_Word Var_16;

      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet1_8, TVarSet2_10, (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12, Renaming_13);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(*Renaming_13, Types2_11, &SubstTypes2_15);
      (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(SubstTypes2_15, Types1_9, (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14);
      if ((env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
      {
        (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(Types1_9, SubstTypes2_15, &Var_16);
        if ((env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
        {
          recompilation__version__type_list_is_unchanged_7_p_0_4(&env);
          (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = !((env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded);
        }
      }
      return (env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded;
    }
  }
}

static MR_Box MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_TimeStamp_14;

    conv0_TimeStamp_14 = recompilation__version__compute_item_version_numbers_3_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_TimeStamp_14));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0(
  MR_Word SourceFileTime_7,
  MR_Word OldGatheredItems_8,
  MR_Word OldItemVersionNumbers_9,
  MR_Word ItemType_10,
  MR_Word CurGatheredItems_11)
{
  {
    MR_Word HeadVar__6_6;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (recompilation__version__compute_item_version_numbers_2_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (SourceFileTime_7));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (OldGatheredItems_8));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (OldItemVersionNumbers_9));
      MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (ItemType_10));
    }
    HeadVar__6_6 = mercury__map__map_values_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_12, CurGatheredItems_11);
    return HeadVar__6_6;
  }
}

MR_Integer MR_CALL 
recompilation__version__version_numbers_version_number_0_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static MR_Box MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_30;

    conv1_LambdaHeadVar__3_30 = recompilation__version__IntroducedFrom__func__parse_version_numbers__1366__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_30));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_4;

    recompilation__version__parse_item_type_version_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_4));
  }
}

void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0(
  MR_Word VersionNumbersTerm_3,
  MR_Word * Result_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) VersionNumbersTerm_3)) == (MR_Integer) 0);
    MR_Word VersionNumbersTermList_7;
    MR_Word Result0_8;
    MR_Word VersionNumbersTermList0_5;
    MR_Word Var_20;
    MR_String Var_21;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VersionNumbersTerm_3, (MR_Integer) 0))));
      VersionNumbersTermList0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VersionNumbersTerm_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = (strcmp(Var_21, (MR_String) "{}") == 0);
      }
    }
    if (succeeded)
      VersionNumbersTermList_7 = VersionNumbersTermList0_5;
    else
    {
      {
        VersionNumbersTermList_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VersionNumbersTermList_7, 0) = ((MR_Box) (VersionNumbersTerm_3));
        MR_hl_field(MR_mktag(1), VersionNumbersTermList_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0), (MR_Word) (&recompilation__version_scalar_common_1[16]), VersionNumbersTermList_7, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 0))
      *Result_4 = (MR_Word) (Result0_8);
    else
    {
      MR_Word List_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0))));
      MR_Word VersionNumbers0_10;
      MR_Word VersionNumbers_11;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Box conv2_VersionNumbers_11;

      Var_25 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
      Var_24 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[1]), ((MR_Box) (Var_25)));
      Var_26 = mercury__map__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
      {
        VersionNumbers0_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VersionNumbers0_10, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), VersionNumbers0_10, 1) = ((MR_Box) (Var_26));
      }
      conv2_VersionNumbers_11 = mercury__list__foldl_3_f_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), (MR_Word) (&recompilation__version_scalar_common_1[17]), List_9, ((MR_Box) (VersionNumbers0_10)));
      VersionNumbers_11 = ((MR_Word) (conv2_VersionNumbers_11));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_11));
      }
    }
  }
}

static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__version__write_symname_arity_version_number_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__version__write_item_type_and_versions_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
recompilation__version__write_version_numbers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_18;

    succeeded = recompilation__version__IntroducedFrom__func__write_version_numbers__1282__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_18);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
recompilation__version__write_version_numbers_3_p_0(
  MR_Word AllVersionNumbers_4)
{
  {
    MR_bool succeeded;
    MR_Word VersionNumbers_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllVersionNumbers_4, (MR_Integer) 0))));
    MR_Word InstanceVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllVersionNumbers_4, (MR_Integer) 1))));
    MR_Word VersionNumbersList_8;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&recompilation__version_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (VersionNumbers_6));
    }
    VersionNumbersList_8 = mercury__list__filter_map_2_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_type_0), (MR_Word) (&recompilation__version_scalar_common_1[4]), Var_16, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[13])));
    mercury__io__write_string_3_p_0((MR_String) "{\n\t");
    mercury__io__write_list_5_p_0((MR_Word) (&recompilation__version_scalar_common_1[4]), VersionNumbersList_8, (MR_String) ",\n\t", (MR_Word) (&recompilation__version_scalar_common_1[14]));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), InstanceVersionNumbers_7);
    if (!(succeeded))
    {
      MR_Word InstanceAL_13;

      if (!((VersionNumbersList_8 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      mercury__io__write_string_3_p_0((MR_String) "instance(");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), InstanceVersionNumbers_7, &InstanceAL_13);
      mercury__io__write_list_5_p_0((MR_Word) (&recompilation__version_scalar_common_1[5]), InstanceAL_13, (MR_String) ",\n\n\t", (MR_Word) (&recompilation__version_scalar_common_1[15]));
      mercury__io__write_string_3_p_0((MR_String) ")\n\t");
    }
    mercury__io__write_string_3_p_0((MR_String) "\n}");
  }
}

static MR_Box MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__6_6;

    conv2_HeadVar__6_6 = recompilation__version__compute_item_version_numbers_2_5_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_GatheredItems_16;

    recompilation__version__distribute_pragma_items_3_p_0(((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GatheredItems_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GatheredItems_16));
  }
}

void MR_CALL 
recompilation__version__compute_version_numbers_4_p_0(
  MR_Word SourceFileTime_5,
  MR_Word CurParseTreeInt_6,
  MR_Word MaybeOldParseTreeInt_7,
  MR_Word * NewVersionNumbers_8)
{
  {
    MR_bool succeeded;
    MR_Word CurIntItems_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 8))));
    MR_Word CurImpItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 9))));
    MR_Word CurGatheredItems_19;
    MR_Word CurInstanceItems_20;
    MR_Word OldItemVersionNumbers_33;
    MR_Word OldInstanceVersionNumbers_34;
    MR_Word OldGatheredItems_35;
    MR_Word OldInstanceItems_36;
    MR_Word NewItemVersionNumbers_37;
    MR_Word NewInstanceVersionNumbers_38;
    MR_Word GatheredItems0_51;
    MR_Word Info0_52;
    MR_Word Info1_53;
    MR_Word Info_54;
    MR_Word GatheredItems1_55;
    MR_Word PragmaItemsCord_56;
    MR_Word PragmaItems_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Func_78;
    MR_Word Var_79;
    MR_Box conv1_CurGatheredItems_19;
    MR_Word OldIntItems_30;
    MR_Word OldImpItems_31;
    MR_Word OldVersionNumbers_32;
    MR_Word OldParseTreeInt_21;
    MR_Word OldMaybeVersionNumbers_25;

    Var_58 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]));
    GatheredItems0_51 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), ((MR_Box) (Var_58)));
    Var_59 = mercury__cord__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_3[0]));
    Var_60 = mercury__map__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]));
    {
      Info0_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_52, 0) = ((MR_Box) (GatheredItems0_51));
      MR_hl_field(MR_mktag(0), Info0_52, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Info0_52, 2) = ((MR_Box) (Var_60));
    }
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 0, CurIntItems_17, Info0_52, &Info1_53);
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 1, CurImpItems_18, Info1_53, &Info_54);
    GatheredItems1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_54, (MR_Integer) 0))));
    PragmaItemsCord_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_54, (MR_Integer) 1))));
    CurInstanceItems_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_54, (MR_Integer) 2))));
    PragmaItems_57 = mercury__cord__list_1_f_0((MR_Word) (&recompilation__version_scalar_common_3[0]), PragmaItemsCord_56);
    mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_3[0]), (MR_Word) (&recompilation__version_scalar_common_4[0]), (MR_Word) (&recompilation__version_scalar_common_1[13]), PragmaItems_57, ((MR_Box) (GatheredItems1_55)), &conv1_CurGatheredItems_19);
    CurGatheredItems_19 = ((MR_Word) (conv1_CurGatheredItems_19));
    succeeded = (MaybeOldParseTreeInt_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OldParseTreeInt_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_7, (MR_Integer) 0))));
      OldMaybeVersionNumbers_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 3))));
      OldIntItems_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 8))));
      OldImpItems_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 9))));
      succeeded = (OldMaybeVersionNumbers_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        OldVersionNumbers_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldMaybeVersionNumbers_25, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      OldItemVersionNumbers_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldVersionNumbers_32, (MR_Integer) 0))));
      OldInstanceVersionNumbers_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldVersionNumbers_32, (MR_Integer) 1))));
      recompilation__version__gather_items_4_p_0(OldIntItems_30, OldImpItems_31, &OldGatheredItems_35, &OldInstanceItems_36);
    }
    else
    {
      MR_Word Var_39;
      MR_Word Var_40;

      Var_39 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
      OldItemVersionNumbers_33 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[1]), ((MR_Box) (Var_39)));
      Var_40 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]));
      OldGatheredItems_35 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), ((MR_Box) (Var_40)));
      mercury__map__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), &OldInstanceItems_36);
      mercury__map__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), &OldInstanceVersionNumbers_34);
    }
    {
      Func_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Func_78, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Func_78, 1) = ((MR_Box) (recompilation__version__compute_version_numbers_4_p_0_2));
      MR_hl_field(MR_mktag(0), Func_78, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Func_78, 3) = ((MR_Box) (SourceFileTime_5));
      MR_hl_field(MR_mktag(0), Func_78, 4) = ((MR_Box) (OldGatheredItems_35));
      MR_hl_field(MR_mktag(0), Func_78, 5) = ((MR_Box) (OldItemVersionNumbers_33));
    }
    Var_79 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    NewItemVersionNumbers_37 = recompilation__map_ids_3_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), (MR_Word) (&recompilation__version_scalar_common_1[1]), Func_78, CurGatheredItems_19, ((MR_Box) (Var_79)));
    recompilation__version__compute_instance_version_numbers_5_p_0(SourceFileTime_5, CurInstanceItems_20, OldInstanceItems_36, OldInstanceVersionNumbers_34, &NewInstanceVersionNumbers_38);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *NewVersionNumbers_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewItemVersionNumbers_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewInstanceVersionNumbers_38));
    }
  }
}

static void MR_CALL 
recompilation__version__gather_items_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_GatheredItems_16;

    recompilation__version__distribute_pragma_items_3_p_0(((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GatheredItems_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GatheredItems_16));
  }
}

static void MR_CALL 
recompilation__version__gather_items_4_p_0(
  MR_Word IntItems_5,
  MR_Word ImpItems_6,
  MR_Word * GatheredItems_7,
  MR_Word * Instances_8)
{
  {
    MR_Word GatheredItems0_9;
    MR_Word Info0_10;
    MR_Word Info1_11;
    MR_Word Info_12;
    MR_Word GatheredItems1_13;
    MR_Word PragmaItemsCord_14;
    MR_Word PragmaItems_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv1_GatheredItems_7;

    Var_16 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]));
    GatheredItems0_9 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), ((MR_Box) (Var_16)));
    Var_17 = mercury__cord__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_3[0]));
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]));
    {
      Info0_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_10, 0) = ((MR_Box) (GatheredItems0_9));
      MR_hl_field(MR_mktag(0), Info0_10, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Info0_10, 2) = ((MR_Box) (Var_18));
    }
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 0, IntItems_5, Info0_10, &Info1_11);
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 1, ImpItems_6, Info1_11, &Info_12);
    GatheredItems1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
    PragmaItemsCord_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))));
    *Instances_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 2))));
    PragmaItems_15 = mercury__cord__list_1_f_0((MR_Word) (&recompilation__version_scalar_common_3[0]), PragmaItemsCord_14);
    mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_3[0]), (MR_Word) (&recompilation__version_scalar_common_4[0]), (MR_Word) (&recompilation__version_scalar_common_1[12]), PragmaItems_15, ((MR_Box) (GatheredItems1_13)), &conv1_GatheredItems_7);
    *GatheredItems_7 = ((MR_Word) (conv1_GatheredItems_7));
  }
}

static void MR_CALL 
recompilation__version__gather_in_section_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word Item_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      recompilation__version__gather_in_item_4_p_0(HeadVar__1_1, Item_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_11;
      next_value_of_STATE_VARIABLE_Info_0_3 = STATE_VARIABLE_Info_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_3 = next_value_of_STATE_VARIABLE_Info_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
recompilation__version__gather_in_item_4_p_0(
  MR_Word Section_5,
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_Info_0_117,
  MR_Word * STATE_VARIABLE_Info_118)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Item_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.gather_in_item\'/4", (MR_String) "unexpected item in interface");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefn_8 = (MR_Word) (MR_body((MR_Word) (Item_6), (MR_Integer) 1));
          MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 0))));
          MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 1))));
          MR_Word Body_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 2))));
          MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 3))));
          MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 4))));
          MR_Integer SeqNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 5))));
          MR_Word NameItem_16;
          MR_Word BodyItem_17;
          MR_Word TypeCtorItem_25;
          MR_Word GatheredItems0_26;
          MR_Word GatheredItems1_27;
          MR_Word GatheredItems_28;
          MR_Integer Var_148;
          MR_Word Var_149;
          MR_Word Var_151;
          MR_Word Var_201;
          MR_Word Var_202;

          switch (MR_tag((MR_Word) Body_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word NameItemTypeDefn_21;

                {
                  NameItemTypeDefn_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 0) = ((MR_Box) (Name_9));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 1) = ((MR_Box) (Args_10));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[35])));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 3) = ((MR_Box) (VarSet_12));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 4) = ((MR_Box) (Context_13));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 5) = ((MR_Box) (SeqNum_14));
                }
                NameItem_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (NameItemTypeDefn_21)));
                BodyItem_17 = Item_6;
              }
              break;
            case (MR_Integer) 1:
              {
                NameItem_16 = Item_6;
                BodyItem_17 = Item_6;
              }
              break;
            case (MR_Integer) 2:
              {
                NameItem_16 = Item_6;
                BodyItem_17 = Item_6;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    NameItem_16 = Item_6;
                    BodyItem_17 = Item_6;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    NameItem_16 = Item_6;
                    BodyItem_17 = Item_6;
                  }
                  break;
              }
              break;
          }
          Var_148 = mercury__list__length_1_f_0((MR_Word) (&recompilation__version_scalar_common_2[2]), Args_10);
          {
            TypeCtorItem_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorItem_25, 0) = ((MR_Box) (Name_9));
            MR_hl_field(MR_mktag(0), TypeCtorItem_25, 1) = ((MR_Box) (Var_148));
          }
          GatheredItems0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
          {
            Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_149, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (TypeCtorItem_25));
          }
          recompilation__version__add_gathered_item_5_p_0(NameItem_16, Var_149, Section_5, GatheredItems0_26, &GatheredItems1_27);
          {
            Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_151, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (TypeCtorItem_25));
          }
          recompilation__version__add_gathered_item_5_p_0(BodyItem_17, Var_151, Section_5, GatheredItems1_27, &GatheredItems_28);
          Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
          Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_118 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_28));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_201));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_202));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemInstDefn_69 = (MR_Word) (MR_body((MR_Word) (Item_6), (MR_Integer) 2));
          MR_Word Params_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 1))));
          MR_Word Var_131;
          MR_Word Name_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 0))));
          MR_Integer Arity_168;
          MR_Word GatheredItems0_186;
          MR_Word GatheredItems_187;
          MR_Word ItemId_192;
          MR_Word Var_226;
          MR_Word Var_227;

          mercury__list__length_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[3]), Params_70, &Arity_168);
          {
            Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (Name_167));
            MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (Arity_168));
          }
          {
            ItemId_192 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemId_192, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ItemId_192, 1) = ((MR_Box) (Var_131));
          }
          GatheredItems0_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
          recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_192, Section_5, GatheredItems0_186, &GatheredItems_187);
          Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
          Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_118 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_187));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_226));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_227));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemModeDefn_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word Var_129;
              MR_Word Name_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 0))));
              MR_Integer Arity_170;
              MR_Word Params_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 1))));
              MR_Word GatheredItems0_259;
              MR_Word GatheredItems_260;
              MR_Word ItemId_261;
              MR_Word Var_254;
              MR_Word Var_255;

              mercury__list__length_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[3]), Params_171, &Arity_170);
              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (Name_169));
                MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (Arity_170));
              }
              {
                ItemId_261 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemId_261, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ItemId_261, 1) = ((MR_Box) (Var_129));
              }
              GatheredItems0_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
              recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_261, Section_5, GatheredItems0_259, &GatheredItems_260);
              Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
              Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_118 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_260));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_254));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_255));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ItemPredDecl_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word TypesAndModes_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 2))));
              MR_Word WithType_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 3))));
              MR_Word Var_127;
              MR_Word SymName_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 0))));
              MR_Word PredOrFunc_173 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer Arity_174;
              MR_Word ItemType_175;
              MR_Word GatheredItems0_276;
              MR_Word GatheredItems_277;
              MR_Word ItemId_278;
              MR_Word Var_271;
              MR_Word Var_272;

              if ((WithType_83 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Integer Var_126;

                Var_126 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_82);
                parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_173, &Arity_174, Var_126);
              }
              else
              {
                Arity_174 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_82);
              }
              ItemType_175 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_173);
              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (SymName_172));
                MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (Arity_174));
              }
              {
                ItemId_278 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemId_278, 0) = (MR_Box) ((MR_Unsigned) (ItemType_175));
                MR_hl_field(MR_mktag(0), ItemId_278, 1) = ((MR_Box) (Var_127));
              }
              GatheredItems0_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
              recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_278, Section_5, GatheredItems0_276, &GatheredItems_277);
              Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
              Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_118 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_277));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_271));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_272));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ItemModeDecl_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 0))));
              MR_Word MaybePredOrFunc_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 1))));
              MR_Word Modes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 2))));
              MR_Word WithInst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 3))));

              succeeded = (MaybePredOrFunc_31 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (WithInst_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
              if (succeeded)
              {
                MR_Word ItemName_39;
                MR_Integer Var_139;
                MR_Word Var_140;
                MR_Word Var_142;
                MR_Word GatheredItems0_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
                MR_Word GatheredItems1_155;
                MR_Word GatheredItems_156;
                MR_Word Var_206;
                MR_Word Var_207;

                Var_139 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_32);
                {
                  ItemName_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemName_39, 0) = ((MR_Box) (SymName_30));
                  MR_hl_field(MR_mktag(0), ItemName_39, 1) = ((MR_Box) (Var_139));
                }
                {
                  Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_140, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (ItemName_39));
                }
                recompilation__version__add_gathered_item_5_p_0(Item_6, Var_140, Section_5, GatheredItems0_154, &GatheredItems1_155);
                {
                  Var_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_142, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (ItemName_39));
                }
                recompilation__version__add_gathered_item_5_p_0(Item_6, Var_142, Section_5, GatheredItems1_155, &GatheredItems_156);
                Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
                Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_118 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_156));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_206));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_207));
                }
              }
              else
              if ((MaybePredOrFunc_31 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
              else
              {
                MR_Word PredOrFunc_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_31, (MR_Integer) 0))));
                MR_Integer Arity_41;
                MR_Word ItemType_42;
                MR_Word ItemId_43;
                MR_Integer Var_145;
                MR_Word Var_146;
                MR_Word GatheredItems0_157;
                MR_Word GatheredItems_158;
                MR_Word Var_211;
                MR_Word Var_212;

                Var_145 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_32);
                parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_40, &Arity_41, Var_145);
                ItemType_42 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_40);
                {
                  Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (SymName_30));
                  MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (Arity_41));
                }
                {
                  ItemId_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemId_43, 0) = (MR_Box) ((MR_Unsigned) (ItemType_42));
                  MR_hl_field(MR_mktag(0), ItemId_43, 1) = ((MR_Box) (Var_146));
                }
                GatheredItems0_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
                recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_43, Section_5, GatheredItems0_157, &GatheredItems_158);
                Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
                Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_118 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_158));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_211));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_212));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ItemPragma_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word PragmaType_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_61, (MR_Integer) 0))));
              MR_Word PredOrFuncId_66;
              MR_Word Var_133;

              recompilation__version__is_pred_pragma_2_p_0(PragmaType_62, &Var_133);
              succeeded = (Var_133 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PredOrFuncId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_133, (MR_Integer) 0))));
                {
                  MR_Word PragmaItems0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
                  MR_Word PragmaItems_68;
                  MR_Tuple Var_134;
                  MR_Word Var_220;
                  MR_Word Var_222;

                  {
                    Var_134 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (PredOrFuncId_66));
                    MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (Item_6));
                    MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) (Section_5));
                  }
                  PragmaItems_68 = mercury__cord__snoc_2_f_0((MR_Word) (&recompilation__version_scalar_common_3[0]), PragmaItems0_67, ((MR_Box) (Var_134)));
                  Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
                  Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_118 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_220));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PragmaItems_68));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_222));
                  }
                }
              }
              else
                *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
            }
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
            break;
          case (MR_Integer) 5:
            {
              MR_Word ItemTypeClass_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word ClassVars_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 1))));
              MR_Word Var_125;
              MR_Word ClassName_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 0))));
              MR_Integer ClassArity_177;
              MR_Word GatheredItems0_293;
              MR_Word GatheredItems_294;
              MR_Word ItemId_295;
              MR_Word Var_288;
              MR_Word Var_289;

              mercury__list__length_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), ClassVars_96, &ClassArity_177);
              {
                Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (ClassName_176));
                MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (ClassArity_177));
              }
              {
                ItemId_295 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemId_295, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), ItemId_295, 1) = ((MR_Box) (Var_125));
              }
              GatheredItems0_293 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
              recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_295, Section_5, GatheredItems0_293, &GatheredItems_294);
              Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
              Var_289 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_118 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_294));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_288));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_289));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ItemInstance_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word ClassName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 0))));
              MR_Word ClassArgs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 1))));
              MR_Word Instances0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
              MR_Integer ClassArity_55;
              MR_Word ClassItemName_56;
              MR_Word NewInstanceItem_57;
              MR_Word Instances_60;
              MR_Word OldInstanceItems_58;
              MR_Box conv0_OldInstanceItems_58;
              MR_Word Var_215;
              MR_Word Var_216;

              ClassArity_55 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassArgs_46);
              {
                ClassItemName_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassItemName_56, 0) = ((MR_Box) (ClassName_45));
                MR_hl_field(MR_mktag(0), ClassItemName_56, 1) = ((MR_Box) (ClassArity_55));
              }
              {
                NewInstanceItem_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NewInstanceItem_57, 0) = ((MR_Box) (Section_5));
                MR_hl_field(MR_mktag(0), NewInstanceItem_57, 1) = ((MR_Box) (Item_6));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), Instances0_54, ((MR_Box) (ClassItemName_56)), &conv0_OldInstanceItems_58);
              if (succeeded)
              {
                OldInstanceItems_58 = ((MR_Word) (conv0_OldInstanceItems_58));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NewInstanceItems_59;

                {
                  NewInstanceItems_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewInstanceItems_59, 0) = ((MR_Box) (NewInstanceItem_57));
                  MR_hl_field(MR_mktag(1), NewInstanceItems_59, 1) = ((MR_Box) (OldInstanceItems_58));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ClassItemName_56)), ((MR_Box) (NewInstanceItems_59)), Instances0_54, &Instances_60);
              }
              else
              {
                MR_Word Var_136;

                {
                  Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (NewInstanceItem_57));
                  MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ClassItemName_56)), ((MR_Box) (Var_136)), Instances0_54, &Instances_60);
              }
              Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
              Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_118 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_215));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_216));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Instances_60));
              }
            }
            break;
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.gather_in_item\'/4", (MR_String) "unexpected item in interface");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
            break;
          case (MR_Integer) 11:
            {
              MR_Word ItemTypeRepn_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
              MR_Word TypeCtorSymName_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_104, (MR_Integer) 0))));
              MR_Word TypeCtorArgs_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_104, (MR_Integer) 1))));
              MR_Integer TypeCtorArity_111;
              MR_Word Var_121;
              MR_Word TypeCtorItem_195;
              MR_Word GatheredItems0_196;
              MR_Word GatheredItems_197;
              MR_Word Var_231;
              MR_Word Var_232;

              mercury__list__length_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), TypeCtorArgs_106, &TypeCtorArity_111);
              {
                TypeCtorItem_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeCtorItem_195, 0) = ((MR_Box) (TypeCtorSymName_105));
                MR_hl_field(MR_mktag(0), TypeCtorItem_195, 1) = ((MR_Box) (TypeCtorArity_111));
              }
              GatheredItems0_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 0))));
              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (TypeCtorItem_195));
              }
              recompilation__version__add_gathered_item_5_p_0(Item_6, Var_121, Section_5, GatheredItems0_196, &GatheredItems_197);
              Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 1))));
              Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_117, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_118 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_197));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_231));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_232));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__version__is_pred_pragma_2_p_0(
  MR_Word PragmaType_3,
  MR_Word * MaybePredOrFuncId_4)
{
  switch (MR_tag((MR_Word) PragmaType_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *MaybePredOrFuncId_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo_40 = (MR_Word) (MR_body((MR_Word) (PragmaType_3), (MR_Integer) 2));
        MR_Word Args_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_40, (MR_Integer) 3))));
        MR_Integer Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Name_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_40, (MR_Integer) 1))));
        MR_Integer Arity_103;
        MR_Word PredOrFunc_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo_40, (MR_Integer) 2))) & (MR_Integer) 1);

        Var_75 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Args_42);
        parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_104, &Arity_103, Var_75);
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (PredOrFunc_104));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Name_102));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Arity_103));
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_78));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredOrFuncId_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_76));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameModesPF_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_48, (MR_Integer) 1))));
            MR_Word Modes_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_50, (MR_Integer) 1))));
            MR_Integer Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Name_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_50, (MR_Integer) 0))));
            MR_Integer Arity_109;
            MR_Word PredOrFunc_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_50, (MR_Integer) 2))) & (MR_Integer) 1);

            Var_68 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_67);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_110, &Arity_109, Var_68);
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (PredOrFunc_110));
            }
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Name_108));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Arity_109));
            }
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Var_71));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_69));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 14:
        case (MR_Integer) 17:
        case (MR_Integer) 29:
          *MaybePredOrFuncId_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          {
            MR_Word ExternalInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Name_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_46, (MR_Integer) 0))));
            MR_Integer Arity_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExternalInfo_46, (MR_Integer) 1))));
            MR_Word PredOrFunc_107 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExternalInfo_46, (MR_Integer) 2))) & (MR_Integer) 1);

            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (PredOrFunc_107));
            }
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Name_105));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Arity_106));
            }
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeSpecInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word MaybePredOrFunc_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 3))));
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Name_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 0))));
            MR_Integer Arity_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 2))));

            {
              Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Name_95));
              MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (Arity_96));
            }
            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (MaybePredOrFunc_19));
              MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Var_85));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_84));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word PredNameArity_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_125, (MR_Integer) 0))));
            MR_Integer Arity_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_125, (MR_Integer) 1))));
            MR_Word Var_128;
            MR_Word Var_130;

            {
              Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (Name_126));
              MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (Arity_127));
            }
            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (Var_130));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_128));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word PredNameArity_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_152, (MR_Integer) 0))));
            MR_Integer Arity_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_152, (MR_Integer) 1))));
            MR_Word Var_155;
            MR_Word Var_157;

            {
              Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (Name_153));
              MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (Arity_154));
            }
            {
              Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) (Var_157));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_155));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word PredNameArity_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_113, (MR_Integer) 0))));
            MR_Integer Arity_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_113, (MR_Integer) 1))));
            MR_Word Var_116;
            MR_Word Var_118;

            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (Name_114));
              MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (Arity_115));
            }
            {
              Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Var_118));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_116));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word UnusedArgsInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameArityPFMn_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_29, (MR_Integer) 0))));
            MR_Word PredOrFunc_239 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_238, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_241;
            MR_Word Var_242;
            MR_Word Var_243;
            MR_Word Name_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_238, (MR_Integer) 0))));
            MR_Integer Arity_245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_238, (MR_Integer) 1))));

            {
              Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_242, 0) = ((MR_Box) (PredOrFunc_239));
            }
            {
              Var_243 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_243, 0) = ((MR_Box) (Name_244));
              MR_hl_field(MR_mktag(0), Var_243, 1) = ((MR_Box) (Arity_245));
            }
            {
              Var_241 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_241, 0) = ((MR_Box) (Var_242));
              MR_hl_field(MR_mktag(0), Var_241, 1) = ((MR_Box) (Var_243));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_241));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word PredNameArityPFMn_30;
            MR_Word ExceptionsInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredOrFunc_38;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Name_100;
            MR_Integer Arity_101;

            PredNameArityPFMn_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_32, (MR_Integer) 0))));
            Name_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_30, (MR_Integer) 0))));
            Arity_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_30, (MR_Integer) 1))));
            PredOrFunc_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_30, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (PredOrFunc_38));
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Name_100));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Arity_101));
            }
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word TrailingInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameArityPFMn_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailingInfo_34, (MR_Integer) 0))));
            MR_Word PredOrFunc_230 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_229, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_232;
            MR_Word Var_233;
            MR_Word Var_234;
            MR_Word Name_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_229, (MR_Integer) 0))));
            MR_Integer Arity_236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_229, (MR_Integer) 1))));

            {
              Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (PredOrFunc_230));
            }
            {
              Var_234 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_234, 0) = ((MR_Box) (Name_235));
              MR_hl_field(MR_mktag(0), Var_234, 1) = ((MR_Box) (Arity_236));
            }
            {
              Var_232 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_232, 0) = ((MR_Box) (Var_233));
              MR_hl_field(MR_mktag(0), Var_232, 1) = ((MR_Box) (Var_234));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_232));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word MMTablingOnfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameArityPFMn_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MMTablingOnfo_36, (MR_Integer) 0))));
            MR_Word PredOrFunc_133 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_132, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_135;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Name_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_132, (MR_Integer) 0))));
            MR_Integer Arity_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_132, (MR_Integer) 1))));

            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (PredOrFunc_133));
            }
            {
              Var_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Name_138));
              MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (Arity_139));
            }
            {
              Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Var_136));
              MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (Var_137));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_135));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word PredNameArity_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_158, (MR_Integer) 0))));
            MR_Integer Arity_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_158, (MR_Integer) 1))));
            MR_Word Var_161;
            MR_Word Var_163;

            {
              Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Name_159));
              MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (Arity_160));
            }
            {
              Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) (Var_163));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_161));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word PredNameArity_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_146, (MR_Integer) 0))));
            MR_Integer Arity_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_146, (MR_Integer) 1))));
            MR_Word Var_149;
            MR_Word Var_151;

            {
              Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (Name_147));
              MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (Arity_148));
            }
            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (Var_151));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_149));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word TabledInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameArityMPF_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_24, (MR_Integer) 1))));
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Name_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_26, (MR_Integer) 0))));
            MR_Integer Arity_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_26, (MR_Integer) 1))));
            MR_Word MaybePredOrFunc_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityMPF_26, (MR_Integer) 2))));

            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Name_97));
              MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Arity_98));
            }
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (MaybePredOrFunc_99));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Var_83));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_82));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word FTInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Var_86;
            MR_Word Var_88;
            MR_Word PredNameArity_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FTInfo_15, (MR_Integer) 0))));
            MR_Word Name_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_92, (MR_Integer) 0))));
            MR_Integer Arity_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_92, (MR_Integer) 1))));

            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (Name_93));
              MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (Arity_94));
            }
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Var_88));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_86));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word PredNameArity_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_164, (MR_Integer) 0))));
            MR_Integer Arity_166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_164, (MR_Integer) 1))));
            MR_Word Var_167;
            MR_Word Var_169;

            {
              Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Name_165));
              MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (Arity_166));
            }
            {
              Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (Var_169));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_167));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word PredNameArity_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_170, (MR_Integer) 0))));
            MR_Integer Arity_172 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_170, (MR_Integer) 1))));
            MR_Word Var_173;
            MR_Word Var_175;

            {
              Var_175 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (Name_171));
              MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (Arity_172));
            }
            {
              Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) (Var_175));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_173));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word PredNameArity_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_176, (MR_Integer) 0))));
            MR_Integer Arity_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_176, (MR_Integer) 1))));
            MR_Word Var_179;
            MR_Word Var_181;

            {
              Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_181, 0) = ((MR_Box) (Name_177));
              MR_hl_field(MR_mktag(0), Var_181, 1) = ((MR_Box) (Arity_178));
            }
            {
              Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) (Var_181));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_179));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word TermInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameModesPF_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_52, (MR_Integer) 0))));
            MR_Word Modes_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_218, (MR_Integer) 1))));
            MR_Integer Var_220;
            MR_Word Var_221;
            MR_Word Var_222;
            MR_Word Var_223;
            MR_Word Name_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_218, (MR_Integer) 0))));
            MR_Integer Arity_225;
            MR_Word PredOrFunc_226 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_218, (MR_Integer) 2))) & (MR_Integer) 1);

            Var_220 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_219);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_226, &Arity_225, Var_220);
            {
              Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (PredOrFunc_226));
            }
            {
              Var_223 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_223, 0) = ((MR_Box) (Name_224));
              MR_hl_field(MR_mktag(0), Var_223, 1) = ((MR_Box) (Arity_225));
            }
            {
              Var_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_221, 0) = ((MR_Box) (Var_222));
              MR_hl_field(MR_mktag(0), Var_221, 1) = ((MR_Box) (Var_223));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_221));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Term2Info_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameModesPF_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_55, (MR_Integer) 0))));
            MR_Word Modes_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_208, (MR_Integer) 1))));
            MR_Integer Var_210;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word Var_213;
            MR_Word Name_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_208, (MR_Integer) 0))));
            MR_Integer Arity_215;
            MR_Word PredOrFunc_216 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_208, (MR_Integer) 2))) & (MR_Integer) 1);

            Var_210 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_209);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_216, &Arity_215, Var_210);
            {
              Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (PredOrFunc_216));
            }
            {
              Var_213 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_213, 0) = ((MR_Box) (Name_214));
              MR_hl_field(MR_mktag(0), Var_213, 1) = ((MR_Box) (Arity_215));
            }
            {
              Var_211 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_211, 0) = ((MR_Box) (Var_212));
              MR_hl_field(MR_mktag(0), Var_211, 1) = ((MR_Box) (Var_213));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_211));
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word PredNameArity_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_202, (MR_Integer) 0))));
            MR_Integer Arity_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_202, (MR_Integer) 1))));
            MR_Word Var_205;
            MR_Word Var_207;

            {
              Var_207 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (Name_203));
              MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) (Arity_204));
            }
            {
              Var_205 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_205, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_205, 1) = ((MR_Box) (Var_207));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_205));
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word PredNameArity_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_119, (MR_Integer) 0))));
            MR_Integer Arity_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_119, (MR_Integer) 1))));
            MR_Word Var_122;
            MR_Word Var_124;

            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Name_120));
              MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (Arity_121));
            }
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (Var_124));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_122));
            }
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word PredNameArity_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_12, (MR_Integer) 0))));
            MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_12, (MR_Integer) 1))));
            MR_Word Var_89;
            MR_Word Var_91;

            {
              Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Name_13));
              MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Arity_14));
            }
            {
              Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (Var_91));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_89));
            }
          }
          break;
        case (MR_Integer) 26:
          {
            MR_Word PredNameArity_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word Name_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_140, (MR_Integer) 0))));
            MR_Integer Arity_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_140, (MR_Integer) 1))));
            MR_Word Var_143;
            MR_Word Var_145;

            {
              Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (Name_141));
              MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (Arity_142));
            }
            {
              Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) (Var_145));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_143));
            }
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word SharingInfo_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameModesPF_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_59, (MR_Integer) 0))));
            MR_Word Modes_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_192, (MR_Integer) 1))));
            MR_Integer Var_194;
            MR_Word Var_195;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Name_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_192, (MR_Integer) 0))));
            MR_Integer Arity_199;
            MR_Word PredOrFunc_200 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_192, (MR_Integer) 2))) & (MR_Integer) 1);

            Var_194 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_193);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_200, &Arity_199, Var_194);
            {
              Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (PredOrFunc_200));
            }
            {
              Var_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (Name_198));
              MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (Arity_199));
            }
            {
              Var_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_195, 0) = ((MR_Box) (Var_196));
              MR_hl_field(MR_mktag(0), Var_195, 1) = ((MR_Box) (Var_197));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_195));
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word ReuseInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1))));
            MR_Word PredNameModesPF_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_63, (MR_Integer) 0))));
            MR_Word Modes_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_182, (MR_Integer) 1))));
            MR_Integer Var_184;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_Word Name_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_182, (MR_Integer) 0))));
            MR_Integer Arity_189;
            MR_Word PredOrFunc_190 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_182, (MR_Integer) 2))) & (MR_Integer) 1);

            Var_184 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_183);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_190, &Arity_189, Var_184);
            {
              Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (PredOrFunc_190));
            }
            {
              Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (Name_188));
              MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) (Arity_189));
            }
            {
              Var_185 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (Var_186));
              MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (Var_187));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_185));
            }
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Decls_4;

    conv1_Decls_4 = recompilation__version__split_class_method_types_and_modes_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Decls_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_60;

    conv0_LambdaHeadVar__2_60 = recompilation__version__IntroducedFrom__func__add_gathered_item__462__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_60));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
recompilation__version__add_gathered_item_5_p_0(
  MR_Word Item_6,
  MR_Word ItemId_7,
  MR_Word Section_8,
  MR_Word STATE_VARIABLE_GatheredItems_0_56,
  MR_Word * STATE_VARIABLE_GatheredItems_57)
{
  {
    MR_bool succeeded;
    MR_Word ItemType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemId_7, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ItemName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemId_7, (MR_Integer) 1))));
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_11, (MR_Integer) 0))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemName_11, (MR_Integer) 1))));
    MR_String Name_14;
    MR_Word NameArity_15;
    MR_Word AddedItems_46;
    MR_Word IdMap0_53;
    MR_Word IdMap_55;
    MR_Word PredName_17;
    MR_Word PredOrFunc_18;
    MR_Word WithType_20;
    MR_Word WithInst_21;
    MR_Word MaybeDetism_22;
    MR_Word Origin_23;
    MR_Word TypeVarSet_24;
    MR_Word InstVarSet_25;
    MR_Word ExistQVars_26;
    MR_Word Purity_27;
    MR_Word Constraints_28;
    MR_Word Context_29;
    MR_Integer SeqNum_30;
    MR_Word Types_31;
    MR_Word Modes_33;
    MR_Word ItemPredDecl_16;
    MR_Word TypesAndModes_19;
    MR_Word MaybeModes_32;
    MR_Box conv2_IdMap0_53;
    MR_Word OldItems_54;
    MR_Box conv3_OldItems_54;

    Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
    {
      NameArity_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NameArity_15, 0) = ((MR_Box) (Name_14));
      MR_hl_field(MR_mktag(0), NameArity_15, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = ((((MR_tag((MR_Word) Item_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ItemPredDecl_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
      PredName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 0))));
      PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 1))) & (MR_Integer) 1);
      TypesAndModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 2))));
      WithType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 3))));
      WithInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 4))));
      MaybeDetism_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 5))));
      Origin_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 6))));
      TypeVarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 7))));
      InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 8))));
      ExistQVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 9))));
      Purity_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 10))) & (MR_Integer) 3);
      Constraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 11))));
      Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 12))));
      SeqNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 13))));
      parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_19, &Types_31, &MaybeModes_32);
      succeeded = (MaybeModes_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Modes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_32, (MR_Integer) 0))));
        succeeded = (Modes_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (WithInst_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypesWithoutModes_37;
      MR_Word EmptyInstVarSet_39;
      MR_Word PredItemPredDecl_40;
      MR_Word PredItem_41;
      MR_Word MaybePredOrFunc_43;
      MR_Word ModeItemModeDecl_44;
      MR_Word ModeItem_45;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;

      TypesWithoutModes_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&recompilation__version_scalar_common_1[10]), Types_31);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_39);
      {
        PredItemPredDecl_40 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 0) = ((MR_Box) (PredName_17));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 2) = ((MR_Box) (TypesWithoutModes_37));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 3) = ((MR_Box) (WithType_20));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 6) = ((MR_Box) (Origin_23));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 7) = ((MR_Box) (TypeVarSet_24));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 8) = ((MR_Box) (EmptyInstVarSet_39));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 9) = ((MR_Box) (ExistQVars_26));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 10) = (MR_Box) ((MR_Unsigned) (Purity_27));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 11) = ((MR_Box) (Constraints_28));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 12) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 13) = ((MR_Box) (SeqNum_30));
      }
      {
        PredItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PredItem_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), PredItem_41, 1) = ((MR_Box) (PredItemPredDecl_40));
      }
      if ((WithInst_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybePredOrFunc_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePredOrFunc_43, 0) = ((MR_Box) (PredOrFunc_18));
        }
      else
        MaybePredOrFunc_43 = (MR_Word) ((MR_Unsigned) 0U);
      {
        ModeItemModeDecl_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 0) = ((MR_Box) (PredName_17));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 1) = ((MR_Box) (MaybePredOrFunc_43));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 2) = ((MR_Box) (Modes_33));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 3) = ((MR_Box) (WithInst_21));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 4) = ((MR_Box) (MaybeDetism_22));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 5) = ((MR_Box) (InstVarSet_25));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 6) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), ModeItemModeDecl_44, 7) = ((MR_Box) (SeqNum_30));
      }
      {
        ModeItem_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeItem_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ModeItem_45, 1) = ((MR_Box) (ModeItemModeDecl_44));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Section_8));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (PredItem_41));
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Section_8));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ModeItem_45));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AddedItems_46, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), AddedItems_46, 1) = ((MR_Box) (Var_64));
      }
    }
    else
    {
      MR_Word ItemTypeClass_47;
      MR_Word Decls0_48;
      MR_Word Var_67;

      succeeded = ((((MR_tag((MR_Word) Item_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        ItemTypeClass_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 4))));
        succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Decls0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word DeclsList_49;
        MR_Word Decls_50;
        MR_Word NewItemTypeClass_51;
        MR_Word NewItem_52;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Integer Var_91;

        DeclsList_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__version_scalar_common_2[4]), (MR_Word) (&recompilation__version_scalar_common_1[11]), Decls0_48);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), DeclsList_49, &Decls_50);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Decls_50));
        }
        Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 0))));
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 1))));
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 2))));
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 3))));
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 5))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 6))));
        Var_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 7))));
        {
          NewItemTypeClass_51 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 1) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 2) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 3) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 4) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 5) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 6) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), NewItemTypeClass_51, 7) = ((MR_Box) (Var_91));
        }
        {
          NewItem_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NewItem_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), NewItem_52, 1) = ((MR_Box) (NewItemTypeClass_51));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Section_8));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (NewItem_52));
        }
        {
          AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AddedItems_46, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), AddedItems_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_72;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Section_8));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Item_6));
        }
        {
          AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AddedItems_46, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), AddedItems_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    conv2_IdMap0_53 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[3]), STATE_VARIABLE_GatheredItems_0_56, ItemType_10);
    IdMap0_53 = ((MR_Word) (conv2_IdMap0_53));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]), IdMap0_53, ((MR_Box) (NameArity_15)), &conv3_OldItems_54);
    if (succeeded)
    {
      OldItems_54 = ((MR_Word) (conv3_OldItems_54));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_74;

      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__version_scalar_common_1[2]), AddedItems_46, OldItems_54);
      mercury__map__det_update_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (NameArity_15)), ((MR_Box) (Var_74)), IdMap0_53, &IdMap_55);
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (NameArity_15)), ((MR_Box) (AddedItems_46)), IdMap0_53, &IdMap_55);
    }
    recompilation__update_ids_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), ItemType_10, ((MR_Box) (IdMap_55)), STATE_VARIABLE_GatheredItems_0_56, STATE_VARIABLE_GatheredItems_57);
  }
}

static MR_Box MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_19;

    conv0_LambdaHeadVar__3_19 = recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__194__1_5_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_19));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0(
  MR_Word SourceFileTime_6,
  MR_Word CurInstanceItemMap_7,
  MR_Word OldInstanceItemMap_8,
  MR_Word OldInstanceVersionNumbers_9,
  MR_Word * NewInstanceVersionNumbers_10)
{
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (recompilation__version__compute_instance_version_numbers_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (SourceFileTime_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OldInstanceItemMap_8));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (OldInstanceVersionNumbers_9));
    }
    *NewInstanceVersionNumbers_10 = mercury__map__map_values_2_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_16, CurInstanceItemMap_7);
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____gathered_item_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____gathered_item_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____gathered_item_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____gathered_item_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____gathered_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____gathered_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____instance_item_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____instance_item_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____item_version_numbers_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____item_version_numbers_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____maybe_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____maybe_pred_or_func_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__version____Compare____maybe_pred_or_func_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__recompilation__version__init(void)
{
}

void mercury__recompilation__version__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_item_info_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_item_map_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_items_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_instance_item_map_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_maybe_pred_or_func_id_0);
}

void mercury__recompilation__version__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__recompilation__version__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module recompilation.version.
