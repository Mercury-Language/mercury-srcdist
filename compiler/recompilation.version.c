/*
** Automatically generated from `recompilation.version.m'
** by the Mercury compiler,
** version 2017-08-21
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module recompilation.version. */
/* :- implementation. */

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
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_48_48;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Methods_18;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_51;
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_34;
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Method_19;
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

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

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
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1391__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word * HeadVar__2_72);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1374__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_String * LambdaHeadVar__2_24);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1075__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__510__1_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__add_gathered_item__445__1_1_f_0(
  MR_Word LambdaHeadVar__1_59);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__192__1_5_f_0(
  MR_Word SourceFileTime_6,
  MR_Word OldInstanceItemMap_8,
  MR_Word OldInstanceVersionNumbers_9,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18);

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__parse_version_numbers__1344__1_2_f_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Word LambdaHeadVar__2_29);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__func__write_version_numbers__1260__1_2_f_0(
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
  MR_Word Method0_3);

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
  MR_Word STATE_VARIABLE_Info_0_109,
  MR_Word * STATE_VARIABLE_Info_110);

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

static /* final */ const MR_Box recompilation__version_scalar_common_2[39][2];

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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[2])),
    ((MR_Box) (recompilation__version__add_gathered_item_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__gather_items_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__compute_version_numbers_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[3])),
    ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[3])),
    ((MR_Box) (recompilation__version__parse_version_numbers_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[4])),
    ((MR_Box) (recompilation__version__parse_version_numbers_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[4])),
    ((MR_Box) (recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[1])),
    ((MR_Box) (recompilation__version__split_class_method_types_and_modes_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[6])),
    ((MR_Box) (recompilation__version__write_item_type_and_versions_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[5])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[6])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_2[39][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_warning_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[24]))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[26]))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[2]))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 30 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid item type version numbers."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error in item version number."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[31])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[5])),
    ((MR_Box) (recompilation__version__class_methods_are_unchanged_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[7])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[21]))
  },
  /* row 4 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[8])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[22]))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[33])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[35])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_PseudoTypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_TypeInfo_Struct3 recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_TypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_TypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_VA_TypeInfo_Struct3 recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_item_info_0_0[3] = {
  (MR_PseudoTypeInfo) &recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
  (MR_PseudoTypeInfo) &recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
};

static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_item_info_0_0[3] = {
  (MR_String) "gii_gathered_items",
  (MR_String) "gii_pragma_items",
  (MR_String) "gii_instances"
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0 = {
  (MR_String) "gathered_item_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__version__recompilation__version__field_types_gathered_item_info_0_0,
  recompilation__version__recompilation__version__field_names_gathered_item_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0
};

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____gathered_item_info_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_info_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_info",
  {     recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0 },
  {     recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_item_map_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_map_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_items_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_items_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_instance_item_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____instance_item_map_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____instance_item_map_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "instance_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0 = {
  (MR_String) "items",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1] = {
  (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1 = {
  (MR_String) "instances",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1
};

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____item_version_numbers_result_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____item_version_numbers_result_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "item_version_numbers_result",
  {     recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0 },
  {     recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0
};

static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "unchanged",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation__version____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_changed_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_changed",
  {     recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0 },
  {     recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  recompilation__version__recompilation__version__functor_number_map_maybe_changed_0
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_maybe_pred_or_func_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_pred_or_func_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1391__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word * HeadVar__2_72)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadVar__1_71, HeadVar__2_72);
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1374__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_String * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_23)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0)));
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 1)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        *LambdaHeadVar__2_24 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
        succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1075__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43;

    if (((MR_tag((MR_Word) LambdaHeadVar__1_42)) == (MR_mktag((MR_Integer) 1))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "type_and_mode");
    }
    else
      LambdaHeadVar__2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 0)));
    return LambdaHeadVar__2_43;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__510__1_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  {
    MR_Word LambdaHeadVar__2_34;

    {
      LambdaHeadVar__2_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_34, 0) = ((MR_Box) (LambdaHeadVar__1_33));
    }
    return LambdaHeadVar__2_34;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__add_gathered_item__445__1_1_f_0(
  MR_Word LambdaHeadVar__1_59)
{
  {
    MR_Word LambdaHeadVar__2_60;

    {
      LambdaHeadVar__2_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_60, 0) = ((MR_Box) (LambdaHeadVar__1_59));
    }
    return LambdaHeadVar__2_60;
  }
}

static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__192__1_5_f_0(
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
    MR_Word TypeCtorInfo_26_26 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0;
    MR_Word TypeCtorInfo_28_28;
    MR_Word OldItems_14;
    MR_Word Var_20;
    MR_Word Var_29;
    MR_Box conv0_OldItems_14;
    MR_Box conv1_OldInstanceVersionNumber_15;

    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_26_26, (MR_Word) &recompilation__version_scalar_common_2[0], OldInstanceItemMap_8, ((MR_Box) (LambdaHeadVar__1_17)), &conv0_OldItems_14);
    if (succeeded)
    {
      OldItems_14 = ((MR_Word) conv0_OldItems_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_20 = (MR_Integer) 0;
      recompilation__version__are_items_changed_3_p_0(OldItems_14, LambdaHeadVar__2_18, &Var_29);
      succeeded = (Var_20 == Var_29);
      if (succeeded)
      {
        TypeCtorInfo_28_28 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_26_26, TypeCtorInfo_28_28, OldInstanceVersionNumbers_9, ((MR_Box) (LambdaHeadVar__1_17)), &conv1_OldInstanceVersionNumber_15);
        if (succeeded)
        {
          OldInstanceVersionNumber_15 = ((MR_Word) conv1_OldInstanceVersionNumber_15);
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
recompilation__version__IntroducedFrom__func__parse_version_numbers__1344__1_2_f_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Word LambdaHeadVar__2_29)
{
  {
    MR_Word LambdaHeadVar__3_30;
    MR_Word VNs_15;
    MR_Word Instances_16;
    MR_Word VNs0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_29, (MR_Integer) 0)));
    MR_Word Instances0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_29, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) LambdaHeadVar__1_28)) == (MR_mktag((MR_Integer) 1))))
    {
      Instances_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), LambdaHeadVar__1_28, (MR_Integer) 0)));
      VNs_15 = VNs0_32;
    }
    else
    {
      MR_Word ItemType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 0)));
      MR_Word ItemVNs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 1)));

      recompilation__update_ids_4_p_0((MR_Word) &recompilation__version_scalar_common_1[1], ItemType_17, ((MR_Box) (ItemVNs_18)), VNs0_32, &VNs_15);
      Instances_16 = Instances0_33;
    }
    {
      LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 0) = ((MR_Box) (VNs_15));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_30, 1) = ((MR_Box) (Instances_16));
    }
    return LambdaHeadVar__3_30;
  }
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__func__write_version_numbers__1260__1_2_f_0(
  MR_Word VersionNumbers_6,
  MR_Word LambdaHeadVar__1_17,
  MR_Word * LambdaHeadVar__2_18)
{
  {
    MR_bool succeeded;
    MR_Word ItemVersions_10;
    MR_Box conv0_ItemVersions_10;

    conv0_ItemVersions_10 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__version_scalar_common_1[1], VersionNumbers_6, LambdaHeadVar__1_17);
    ItemVersions_10 = ((MR_Word) conv0_ItemVersions_10);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, ItemVersions_10);
    succeeded = !(succeeded);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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

    mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_1[6], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[9], HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_16)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;
        MR_Integer Var_25 = (MR_Integer) Var_24;
        MR_Integer Var_26 = (MR_Integer) ArgY1_5;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_25, Var_26);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_7)));
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_11_11 = (MR_Word) &recompilation__version_scalar_common_1[9];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &recompilation__version_scalar_common_1[1];
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

    mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[8], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_1[8], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_4[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_4[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_4[0], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_2[6], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[8], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_4[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &recompilation__version_scalar_common_2[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &recompilation__version_scalar_common_1[8];
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_mktag((MR_Integer) 0)));
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
    MR_Word Var_9;
    MR_Word Var_12;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_SymName_13;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ItemNameArityTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              VersionNumberTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ItemNameArityTerm_7)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 0)));
                  Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 1)));
                  Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
                    succeeded = (strcmp(Var_24, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        NameTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
                        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
                        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ArityTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
                          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ParseName_4, (MR_Integer) 1)));
                            succeeded = func_0(((MR_Box) ParseName_4), ((MR_Box) (NameTerm_10)), &conv1_SymName_13);
                            if (succeeded)
                            {
                              SymName_13 = ((MR_Word) conv1_SymName_13);
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
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
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (SymName_13));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Arity_14));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (VersionNumber_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

      Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_5);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[38])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_37));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_mktag((MR_Integer) 0)));
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
    MR_Word Var_9;
    MR_Word Var_12;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Name_13;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ItemNameArityTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              VersionNumberTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ItemNameArityTerm_7)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 0)));
                  Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 1)));
                  Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNameArityTerm_7, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
                    succeeded = (strcmp(Var_24, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        NameTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
                        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
                        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ArityTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
                          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ParseName_4, (MR_Integer) 1)));
                            succeeded = func_0(((MR_Box) ParseName_4), ((MR_Box) (NameTerm_10)), &conv1_Name_13);
                            if (succeeded)
                            {
                              Name_13 = ((MR_String) conv1_Name_13);
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
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
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Name_13));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Arity_14));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (VersionNumber_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

      Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_5);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[38])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_37));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    recompilation__version__parse_item_version_number_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv3_Result_6);
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

    succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1391__1_2_p_0(((MR_Word) wrapper_arg_1), &conv2_HeadVar__2_72);
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

    recompilation__version__parse_key_version_number_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_Result_6);
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

    succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1374__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_24);
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ItemsVNsTerms_6;
    MR_Word ItemType_8;
    MR_String ItemTypeStr_5;
    MR_Word Var_22;
    MR_Word Var_7;

    if (succeeded)
    {
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      ItemsVNsTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ItemTypeStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
        succeeded = recompilation__string_to_item_type_2_p_0(ItemTypeStr_5, &ItemType_8);
      }
    }
    if (succeeded)
    {
      MR_Word Result0_13;

      parse_tree__parse_util__map_parser_3_p_0((MR_Word) &recompilation__version_scalar_common_1[7], (MR_Word) &recompilation__version_scalar_common_4[3], ItemsVNsTerms_6, &Result0_13);
      if (((MR_tag((MR_Word) Result0_13)) == (MR_mktag((MR_Integer) 0))))
        *Result_4 = (MR_Word) Result0_13;
      else
      {
        MR_Word VNsAL_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_13, (MR_Integer) 0)));
        MR_Word VNsMap_15;
        MR_Word Var_28;

        mercury__map__from_assoc_list_2_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, VNsAL_14, &VNsMap_15);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (ItemType_8));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (VNsMap_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
      MR_Word Var_18;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
        InstanceVNsTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));
          succeeded = (strcmp(Var_30, (MR_String) "instance") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Result1_19;

        parse_tree__parse_util__map_parser_3_p_0((MR_Word) &recompilation__version_scalar_common_1[5], (MR_Word) &recompilation__version_scalar_common_4[4], InstanceVNsTerms_17, &Result1_19);
        if (((MR_tag((MR_Word) Result1_19)) == (MR_mktag((MR_Integer) 0))))
          *Result_4 = (MR_Word) Result1_19;
        else
        {
          MR_Word Var_33;
          MR_Word VNsAL_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result1_19, (MR_Integer) 0)));
          MR_Word VNsMap_53;

          mercury__map__from_assoc_list_2_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, VNsAL_52, &VNsMap_53);
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (VNsMap_53));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

        Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_3);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[37])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_41));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word ItemName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word VersionNumber_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemName_4, (MR_Integer) 0)));
    MR_Integer Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemName_4, (MR_Integer) 1)));

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
    MR_Word NameArity_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word VersionNumber_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_String Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), NameArity_4, (MR_Integer) 0)));
    MR_Integer Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NameArity_4, (MR_Integer) 1)));
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    recompilation__version__write_name_arity_version_number_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ItemType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ItemVersions_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_String ItemTypeStr_7;
    MR_Word ItemVersionsList_8;

    recompilation__string_to_item_type_2_p_1(&ItemTypeStr_7, ItemType_4);
    mercury__io__write_string_3_p_0(ItemTypeStr_7);
    mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
    mercury__map__to_assoc_list_2_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, ItemVersions_5, &ItemVersionsList_8);
    mercury__io__write_list_5_p_0((MR_Word) &recompilation__version_scalar_common_1[7], ItemVersionsList_8, (MR_String) ",\n\t\t", (MR_Word) &recompilation__version_scalar_common_1[20]);
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

    if (((MR_tag((MR_Word) Avail1_4)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ModuleName1_7;
      MR_Word Var_19 = (MR_Word) MR_body(((MR_Word) Avail1_4), (MR_Integer) 0);
      MR_Word Var_8;
      MR_Integer Var_9;
      MR_Word ModuleName2_10;
      MR_Word Var_20;
      MR_Word Var_11;
      MR_Integer Var_12;

      ModuleName1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
      Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Avail2_5)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_20 = (MR_Word) MR_body(((MR_Word) Avail2_5), (MR_Integer) 0);
        ModuleName2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1)));
        Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 2)));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_7, ModuleName2_10);
      }
      if (succeeded)
        *Changed_6 = (MR_Integer) 0;
      else
        *Changed_6 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = (MR_Word) MR_body(((MR_Word) Avail1_4), (MR_Integer) 1);
      MR_Word ModuleName1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
      MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2)));
      MR_Word Var_18;
      MR_Word ModuleName2_21;
      MR_Word Var_15;
      MR_Integer Var_16;

      succeeded = ((MR_tag((MR_Word) Avail2_5)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = (MR_Word) MR_body(((MR_Word) Avail2_5), (MR_Integer) 1);
        ModuleName2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
        Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2)));
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
    MR_Word ModuleName1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInclude1_4, (MR_Integer) 0)));
    MR_Word ModuleName2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInclude2_5, (MR_Integer) 0)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInclude1_4, (MR_Integer) 1)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInclude1_4, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInclude2_5, (MR_Integer) 1)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInclude2_5, (MR_Integer) 2)));

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
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34 = ((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_34);
    recompilation__version__distribute_pragma_items_class_items_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19 = ((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Method_19);
    recompilation__version__distribute_pragma_items_class_items_7_p_0_4(env_ptr);
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;

      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19)) == (MR_mktag((MR_Integer) 0)));
      if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 0)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 1)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 2)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 3)));
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 4)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 5)));
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 6)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 7)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 8)));
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 9)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 10)));
        Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 11)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_51);
        if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
        {
          if (((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
          else
          {
            MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8, (MR_Integer) 0)));

            (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 == Var_52);
          }
          if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
          {
            if (((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Integer Var_35;
              MR_Integer Var_53;

              Var_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21);
              parse_tree__prog_util__adjust_func_arity_3_p_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10, &Var_53);
              (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = (Var_35 == Var_53);
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
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34, (MR_Integer) 0)));
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Integer Var_46;

      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_34, (MR_Integer) 1)));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 1)));
        Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 0)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 1)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 2)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 3)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 4)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 5)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 6)));
        Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 7)));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17)) == (MR_mktag((MR_Integer) 1)));
        if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17, (MR_Integer) 0)));
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
          mercury__list__member_2_p_1((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_48_48, &(env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Method_19, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Methods_18, recompilation__version__distribute_pragma_items_class_items_7_p_0_5, env_ptr);
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
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &recompilation__version_scalar_common_1[2], &(env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_34, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32, recompilation__version__distribute_pragma_items_class_items_7_p_0_3, env_ptr);
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
      MR_Word Var_37;
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Section_12));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Item_11));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *STATE_VARIABLE_ClassItems_33 = mercury__list__f_43_43_2_f_0((MR_Word) &recompilation__version_scalar_common_1[2], (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32, Var_37);
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

    recompilation__version__distribute_pragma_items_class_items_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_ClassItems_33);
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
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word ItemId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Item_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word MaybePredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemId_4, (MR_Integer) 0)));
    MR_Word SymName_9;
    MR_Integer Arity_10;
    MR_Word ItemName_11;
    MR_Word GatheredTypeClasses_14;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemId_4, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_GatheredItems_25_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv1_Var_27;

    SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
    Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
    {
      ItemName_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemName_11, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), ItemName_11, 1) = ((MR_Box) (Arity_10));
    }
    if ((MaybePredOrFunc_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_GatheredItems_19_19;
      MR_Word Var_21;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ItemName_11));
      }
      recompilation__version__add_gathered_item_5_p_0(Item_5, Var_18, Section_6, STATE_VARIABLE_GatheredItems_0_15, &STATE_VARIABLE_GatheredItems_19_19);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ItemName_11));
      }
      recompilation__version__add_gathered_item_5_p_0(Item_5, Var_21, Section_6, STATE_VARIABLE_GatheredItems_19_19, &STATE_VARIABLE_GatheredItems_25_25);
    }
    else
    {
      MR_Word PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredOrFunc_8, (MR_Integer) 0)));
      MR_Word ItemType_13;
      MR_Word Var_24;

      ItemType_13 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_12);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (ItemType_13));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ItemName_11));
      }
      recompilation__version__add_gathered_item_5_p_0(Item_5, Var_24, Section_6, STATE_VARIABLE_GatheredItems_0_15, &STATE_VARIABLE_GatheredItems_25_25);
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (recompilation__version__distribute_pragma_items_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (MaybePredOrFunc_8));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (Arity_10));
      MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (Item_5));
      MR_hl_field(MR_mktag(0), Var_26, 7) = ((MR_Box) (Section_6));
    }
    TypeInfo_33_33 = (MR_Word) &recompilation__version_scalar_common_1[3];
    conv1_Var_27 = recompilation__extract_ids_2_f_0(TypeInfo_33_33, STATE_VARIABLE_GatheredItems_25_25, (MR_Integer) 4);
    Var_27 = ((MR_Word) conv1_Var_27);
    TypeInfo_34_34 = (MR_Word) &recompilation__version_scalar_common_2[0];
    mercury__map__map_values_only_3_p_0(TypeInfo_34_34, TypeInfo_34_34, (MR_Word) &recompilation__version_scalar_common_1[0], Var_26, Var_27, &GatheredTypeClasses_14);
    recompilation__update_ids_4_p_0(TypeInfo_33_33, (MR_Integer) 4, ((MR_Box) (GatheredTypeClasses_14)), STATE_VARIABLE_GatheredItems_25_25, STATE_VARIABLE_GatheredItems_16);
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
    MR_Word conv0_LambdaHeadVar__2_34;

    conv0_LambdaHeadVar__2_34 = recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__510__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
  MR_Word Method0_3)
{
  {
    MR_bool succeeded;
    MR_Word Methods_4;

    if (((MR_tag((MR_Word) Method0_3)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 1)));
      MR_Word TypesAndModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 2)));
      MR_Word WithType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 3)));
      MR_Word TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 6)));
      MR_Word ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 8)));
      MR_Word Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 9)));
      MR_Word Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 10)));
      MR_Word TypesWithoutModes_25;
      MR_Word PredOrFuncModeItems_29;
      MR_Word EmptyInstVarSet_30;
      MR_Word PredOrFuncItem_31;
      MR_Word Var_39;
      MR_Word SymName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 0)));
      MR_Word WithInst_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 4)));
      MR_Word MaybeDetism_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 5)));
      MR_Word InstVarSet_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 7)));
      MR_Word _Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method0_3, (MR_Integer) 11)));
      MR_Word Types_20;
      MR_Word Modes_46;
      MR_Word MaybeModes_21;

      parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_14, &Types_20, &MaybeModes_21);
      succeeded = ((MR_tag((MR_Word) MaybeModes_21)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeModes_21, (MR_Integer) 0)));
        {
          MR_Word Var_22;
          MR_Word Var_23;

          succeeded = ((MR_tag((MR_Word) Modes_46)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_46, (MR_Integer) 0)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_46, (MR_Integer) 1)));
          }
        }
        if (!(succeeded))
        {
          MR_Word Var_24;

          succeeded = ((MR_tag((MR_Word) WithInst_50)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_50, (MR_Integer) 0)));
        }
      }
      if (succeeded)
      {
        MR_Word PredOrFuncModeItem_28;
        MR_Word Var_35;
        MR_Word MaybePredOrFunc_44;

        TypesWithoutModes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &recompilation__version_scalar_common_1[19], Types_20);
        if ((WithInst_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybePredOrFunc_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePredOrFunc_44, 0) = ((MR_Box) (PredOrFunc_13));
          }
        else
          MaybePredOrFunc_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Var_35 = mercury__term__context_init_0_f_0();
        {
          PredOrFuncModeItem_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 0) = ((MR_Box) (SymName_47));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 1) = ((MR_Box) (MaybePredOrFunc_44));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 2) = ((MR_Box) (Modes_46));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 3) = ((MR_Box) (WithInst_50));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 4) = ((MR_Box) (MaybeDetism_51));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 5) = ((MR_Box) (InstVarSet_52));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItem_28, 6) = ((MR_Box) (Var_35));
        }
        {
          PredOrFuncModeItems_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItems_29, 0) = ((MR_Box) (PredOrFuncModeItem_28));
          MR_hl_field(MR_mktag(1), PredOrFuncModeItems_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        TypesWithoutModes_25 = TypesAndModes_14;
        PredOrFuncModeItems_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &EmptyInstVarSet_30);
      Var_39 = mercury__term__context_init_0_f_0();
      {
        PredOrFuncItem_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 0) = ((MR_Box) (SymName_47));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 1) = ((MR_Box) (PredOrFunc_13));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 2) = ((MR_Box) (TypesWithoutModes_25));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 3) = ((MR_Box) (WithType_15));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 6) = ((MR_Box) (TypeVarSet_16));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 7) = ((MR_Box) (EmptyInstVarSet_30));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 8) = ((MR_Box) (ExistQVars_17));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 9) = ((MR_Box) (Purity_18));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 10) = ((MR_Box) (Constraints_19));
        MR_hl_field(MR_mktag(0), PredOrFuncItem_31, 11) = ((MR_Box) (Var_39));
      }
      {
        Methods_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Methods_4, 0) = ((MR_Box) (PredOrFuncItem_31));
        MR_hl_field(MR_mktag(1), Methods_4, 1) = ((MR_Box) (PredOrFuncModeItems_29));
      }
    }
    else
    {
      MR_Word SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 0)));
      MR_Word MaybePredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 1)));
      MR_Word Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 2)));
      MR_Word WithInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 3)));
      MR_Word MaybeDetism_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 4)));
      MR_Word InstVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 5)));
      MR_Word Method_12;
      MR_Word Var_40;
      MR_Word _Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method0_3, (MR_Integer) 6)));

      Var_40 = mercury__term__context_init_0_f_0();
      {
        Method_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Method_12, 0) = ((MR_Box) (SymName_5));
        MR_hl_field(MR_mktag(1), Method_12, 1) = ((MR_Box) (MaybePredOrFunc_6));
        MR_hl_field(MR_mktag(1), Method_12, 2) = ((MR_Box) (Modes_7));
        MR_hl_field(MR_mktag(1), Method_12, 3) = ((MR_Box) (WithInst_8));
        MR_hl_field(MR_mktag(1), Method_12, 4) = ((MR_Box) (MaybeDetism_9));
        MR_hl_field(MR_mktag(1), Method_12, 5) = ((MR_Box) (InstVarSet_10));
        MR_hl_field(MR_mktag(1), Method_12, 6) = ((MR_Box) (Var_40));
      }
      {
        Methods_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Methods_4, 0) = ((MR_Box) (Method_12));
        MR_hl_field(MR_mktag(1), Methods_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return Methods_4;
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
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_26_26;
    MR_Word TypeCtorInfo_27_27;
    MR_Word OldItems_17;
    MR_Word SortedOldItems_18;
    MR_Word SortedCurItems_19;
    MR_Word Var_21;
    MR_Word Var_28;
    MR_Box conv2_OldItems_17;
    MR_Box conv3_OldItemVersionNumber_20;

    conv0_OldIds_15 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__version_scalar_common_1[3], OldGatheredItems_9, ItemType_11);
    OldIds_15 = ((MR_Word) conv0_OldIds_15);
    conv1_OldItemTypeVersionNumbers_16 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__version_scalar_common_1[1], OldItemVersionNumbers_10, ItemType_11);
    OldItemTypeVersionNumbers_16 = ((MR_Word) conv1_OldItemTypeVersionNumbers_16);
    TypeInfo_24_24 = (MR_Word) &recompilation__version_scalar_common_1[0];
    succeeded = mercury__map__search_3_p_0(TypeInfo_24_24, (MR_Word) &recompilation__version_scalar_common_2[0], OldIds_15, ((MR_Box) (NameArity_12)), &conv2_OldItems_17);
    if (succeeded)
    {
      OldItems_17 = ((MR_Word) conv2_OldItems_17);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) &recompilation__version_scalar_common_1[2];
      mercury__list__sort_2_p_0(TypeInfo_26_26, OldItems_17, &SortedOldItems_18);
      mercury__list__sort_2_p_0(TypeInfo_26_26, CurItems_13, &SortedCurItems_19);
      Var_21 = (MR_Integer) 0;
      recompilation__version__are_items_changed_3_p_0(SortedOldItems_18, SortedCurItems_19, &Var_28);
      succeeded = (Var_21 == Var_28);
      if (succeeded)
      {
        TypeCtorInfo_27_27 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
        succeeded = mercury__map__search_3_p_0(TypeInfo_24_24, TypeCtorInfo_27_27, OldItemTypeVersionNumbers_16, ((MR_Box) (NameArity_12)), &conv3_OldItemVersionNumber_20);
        if (succeeded)
        {
          OldItemVersionNumber_20 = ((MR_Word) conv3_OldItemVersionNumber_20);
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

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__3_3 = (MR_Integer) 0;
      else
        *HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word Section1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
        MR_Word Item1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
        MR_Word Section2_11;
        MR_Word Item2_12;
        MR_Word Items2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

        Section2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
        Item2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
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

                /* direct tailcall eliminated */
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
          MR_Word ItemClause1_7 = (MR_Word) MR_body(((MR_Word) Item1_4), (MR_Integer) 0);
          MR_Word PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 2)));
          MR_Word SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 3)));
          MR_Word Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 4)));
          MR_Word Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 5)));
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 0)));
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 1)));
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 6)));
          MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemClause1_7, (MR_Integer) 7)));
          MR_Word TypeInfo_273_273;
          MR_Word TypeInfo_275_275;
          MR_Word TypeInfo_276_276;
          MR_Word ItemClause2_16;
          MR_Word Var_222;
          MR_Word Var_223;
          MR_Word Var_224;
          MR_Word Var_225;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Integer Var_20;

          succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            ItemClause2_16 = (MR_Word) MR_body(((MR_Word) Item2_5), (MR_Integer) 0);
            Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 0)));
            Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 1)));
            Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 2)));
            Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 3)));
            Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 4)));
            Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 5)));
            Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 6)));
            Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemClause2_16, (MR_Integer) 7)));
            TypeInfo_273_273 = (MR_Word) &recompilation__version_scalar_common_2[14];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_273_273, ((MR_Box) (PorF_10)), ((MR_Box) (Var_222)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(SymName_11, Var_223);
              if (succeeded)
              {
                TypeInfo_275_275 = (MR_Word) &recompilation__version_scalar_common_2[15];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_275_275, ((MR_Box) (Args_12)), ((MR_Box) (Var_224)));
                if (succeeded)
                {
                  TypeInfo_276_276 = (MR_Word) &recompilation__version_scalar_common_2[16];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_276_276, ((MR_Box) (Goal_13)), ((MR_Box) (Var_225)));
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
          MR_Word ItemTypeDefn1_21 = (MR_Word) MR_body(((MR_Word) Item1_4), (MR_Integer) 1);
          MR_Word Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 1)));
          MR_Word Defn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 3)));
          MR_Word Args_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 2)));
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 0)));
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 4)));
          MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeDefn1_21, (MR_Integer) 5)));
          MR_Word TypeInfo_312_312;
          MR_Word TypeInfo_314_314;
          MR_Word ItemTypeDefn2_27;
          MR_Word Var_226;
          MR_Word Var_227;
          MR_Word Var_228;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Integer Var_30;

          succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ItemTypeDefn2_27 = (MR_Word) MR_body(((MR_Word) Item2_5), (MR_Integer) 1);
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 0)));
            Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 1)));
            Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 2)));
            Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 3)));
            Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 4)));
            Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeDefn2_27, (MR_Integer) 5)));
            TypeInfo_312_312 = (MR_Word) &recompilation__version_scalar_common_2[28];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_312_312, ((MR_Box) (Name_23)), ((MR_Box) (Var_226)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_defn_0_0(Args_188, Var_227);
              if (succeeded)
              {
                TypeInfo_314_314 = (MR_Word) &recompilation__version_scalar_common_2[29];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_314_314, ((MR_Box) (Defn_24)), ((MR_Box) (Var_228)));
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
          MR_Word ItemInstDefn1_31 = (MR_Word) MR_body(((MR_Word) Item1_4), (MR_Integer) 2);
          MR_Word MaybeForTypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 3)));
          MR_Word Args_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 2)));
          MR_Word Name_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 1)));
          MR_Word Defn_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 4)));
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 0)));
          MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 5)));
          MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstDefn1_31, (MR_Integer) 6)));
          MR_Word TypeInfo_281_281;
          MR_Word TypeInfo_282_282;
          MR_Word TypeInfo_284_284;
          MR_Word ItemInstDefn2_36;
          MR_Word Var_229;
          MR_Word Var_230;
          MR_Word Var_231;
          MR_Word Var_232;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Integer Var_39;

          succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            ItemInstDefn2_36 = (MR_Word) MR_body(((MR_Word) Item2_5), (MR_Integer) 2);
            Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 0)));
            Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 1)));
            Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 2)));
            Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 3)));
            Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 4)));
            Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 5)));
            Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstDefn2_36, (MR_Integer) 6)));
            TypeInfo_281_281 = (MR_Word) &recompilation__version_scalar_common_2[17];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_281_281, ((MR_Box) (Name_190)), ((MR_Box) (Var_229)));
            if (succeeded)
            {
              TypeInfo_282_282 = (MR_Word) &recompilation__version_scalar_common_2[18];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_282_282, ((MR_Box) (Args_189)), ((MR_Box) (Var_230)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____inst_defn_0_0(MaybeForTypeCtor_33, Var_231);
                if (succeeded)
                {
                  TypeInfo_284_284 = (MR_Word) &recompilation__version_scalar_common_2[19];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_284_284, ((MR_Box) (Defn_191)), ((MR_Box) (Var_232)));
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemModeDefn1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word Args_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 2)));
              MR_Word Name_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 1)));
              MR_Word Defn_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 3)));
              MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 0)));
              MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 4)));
              MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDefn1_40, (MR_Integer) 5)));
              MR_Word TypeInfo_294_294;
              MR_Word TypeInfo_296_296;
              MR_Word ItemModeDefn2_44;
              MR_Word Var_233;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Integer Var_47;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ItemModeDefn2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 0)));
                Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 1)));
                Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 2)));
                Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 3)));
                Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 4)));
                Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDefn2_44, (MR_Integer) 5)));
                TypeInfo_294_294 = (MR_Word) &recompilation__version_scalar_common_2[17];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_294_294, ((MR_Box) (Name_193)), ((MR_Box) (Var_233)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(Args_192, Var_234);
                  if (succeeded)
                  {
                    TypeInfo_296_296 = (MR_Word) &recompilation__version_scalar_common_2[19];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_296_296, ((MR_Box) (Defn_194)), ((MR_Box) (Var_235)));
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
              MR_Word ItemPredDecl1_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word PredOrFunc_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 1)));
              MR_Word TypesAndModes1_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 2)));
              MR_Word WithType1_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 3)));
              MR_Word Det1_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 5)));
              MR_Word TVarSet1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 7)));
              MR_Word ExistQVars1_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 9)));
              MR_Word Purity_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 10)));
              MR_Word Constraints1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 11)));
              MR_Word Name_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 0)));
              MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 4)));
              MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 6)));
              MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 8)));
              MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 12)));
              MR_Integer Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl1_48, (MR_Integer) 13)));
              MR_Word ItemPredDecl2_62;
              MR_Word TypesAndModes2_63;
              MR_Word WithType2_64;
              MR_Word Det2_66;
              MR_Word TVarSet2_68;
              MR_Word ExistQVars2_70;
              MR_Word Constraints2_71;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Var_238;
              MR_Word Var_65;
              MR_Word Var_67;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Integer Var_73;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ItemPredDecl2_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 0)));
                Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 1)));
                TypesAndModes2_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 2)));
                WithType2_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 3)));
                Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 4)));
                Det2_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 5)));
                Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 6)));
                TVarSet2_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 7)));
                Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 8)));
                ExistQVars2_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 9)));
                Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 10)));
                Constraints2_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 11)));
                Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 12)));
                Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl2_62, (MR_Integer) 13)));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_195, Var_236);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_49 == Var_237);
                  if (succeeded)
                  {
                    succeeded = (Purity_58 == Var_238);
                    if (succeeded)
                    {
                      switch (PredOrFunc_49) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_2[22], ((MR_Box) (Det1_53)), ((MR_Box) (Det2_66)));
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
              MR_Word ItemModeDecl1_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word Modes1_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 2)));
              MR_Word WithInst1_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 3)));
              MR_Word Det_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 4)));
              MR_Word InstVarSet1_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 5)));
              MR_Word Name_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 0)));
              MR_Word PredOrFunc_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 1)));
              MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 6)));
              MR_Integer Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDecl1_74, (MR_Integer) 7)));
              MR_Word TypeInfo_292_292;
              MR_Word TypeInfo_293_293;
              MR_Word ItemModeDecl2_81;
              MR_Word Modes2_82;
              MR_Word WithInst2_83;
              MR_Word InstVarSet2_84;
              MR_Word Var_239;
              MR_Word Var_240;
              MR_Word Var_241;
              MR_Word Var_85;
              MR_Integer Var_86;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ItemModeDecl2_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 0)));
                Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 1)));
                Modes2_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 2)));
                WithInst2_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 3)));
                Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 4)));
                InstVarSet2_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 5)));
                Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 6)));
                Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDecl2_81, (MR_Integer) 7)));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_196, Var_239);
                if (succeeded)
                {
                  TypeInfo_292_292 = (MR_Word) &recompilation__version_scalar_common_2[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_292_292, ((MR_Box) (PredOrFunc_197)), ((MR_Box) (Var_240)));
                  if (succeeded)
                  {
                    TypeInfo_293_293 = (MR_Word) &recompilation__version_scalar_common_2[22];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_293_293, ((MR_Box) (Det_77)), ((MR_Box) (Var_241)));
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
              MR_Word ItemPragma1_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word PragmaType1_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma1_87, (MR_Integer) 0)));
              MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma1_87, (MR_Integer) 1)));
              MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma1_87, (MR_Integer) 2)));
              MR_Integer Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragma1_87, (MR_Integer) 3)));
              MR_Word PragmaType2_93;
              MR_Word ItemPragma2_92;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Integer Var_96;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ItemPragma2_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                PragmaType2_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma2_92, (MR_Integer) 0)));
                Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma2_92, (MR_Integer) 1)));
                Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma2_92, (MR_Integer) 2)));
                Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragma2_92, (MR_Integer) 3)));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word TypeSubst1_103;
                MR_Word TypeSubst2_105;
                MR_Word TVarSet1_200;
                MR_Word TVarSet2_201;
                MR_Word TypeInfo_305_305;
                MR_Word TypeInfo_306_306;
                MR_Word TypeSpecInfo1_97;
                MR_Word TypeSpecInfo2_98;
                MR_Word SpecName_99;
                MR_Integer Arity_100;
                MR_Word MaybePredOrFunc_101;
                MR_Word MaybeModes_102;
                MR_Word Name_198;
                MR_Word Var_242;
                MR_Word Var_243;
                MR_Integer Var_244;
                MR_Word Var_245;
                MR_Word Var_246;
                MR_Word Var_104;
                MR_Word Var_106;

                succeeded = ((((MR_tag((MR_Word) PragmaType1_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PragmaType1_88, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  TypeSpecInfo1_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType1_88, (MR_Integer) 1)));
                  succeeded = ((((MR_tag((MR_Word) PragmaType2_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PragmaType2_93, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    TypeSpecInfo2_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType2_93, (MR_Integer) 1)));
                    Name_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 0)));
                    SpecName_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 1)));
                    Arity_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 2)));
                    MaybePredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 3)));
                    MaybeModes_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 4)));
                    TypeSubst1_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 5)));
                    TVarSet1_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 6)));
                    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo1_97, (MR_Integer) 7)));
                    Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 0)));
                    Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 1)));
                    Var_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 2)));
                    Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 3)));
                    Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 4)));
                    TypeSubst2_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 5)));
                    TVarSet2_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 6)));
                    Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo2_98, (MR_Integer) 7)));
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_198, Var_242);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SpecName_99, Var_243);
                      if (succeeded)
                      {
                        succeeded = (Arity_100 == Var_244);
                        if (succeeded)
                        {
                          TypeInfo_305_305 = (MR_Word) &recompilation__version_scalar_common_2[1];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_305_305, ((MR_Box) (MaybePredOrFunc_101)), ((MR_Box) (Var_245)));
                          if (succeeded)
                          {
                            TypeInfo_306_306 = (MR_Word) &recompilation__version_scalar_common_2[25];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_306_306, ((MR_Box) (MaybeModes_102)), ((MR_Box) (Var_246)));
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word TypeInfo_219_219 = (MR_Word) &recompilation__version_scalar_common_2[2];
                  MR_Word TypeCtorInfo_220_220 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  MR_Word TVars1_107;
                  MR_Word Types1_108;
                  MR_Word TVars2_109;
                  MR_Word Types2_110;
                  MR_Word KindMap_111;
                  MR_Word TVarTypes1_112;
                  MR_Word TVarTypes2_113;
                  MR_Word Var_186;
                  MR_Word Var_187;
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word Var_116;

                  mercury__assoc_list__keys_and_values_3_p_0(TypeInfo_219_219, TypeCtorInfo_220_220, TypeSubst1_103, &TVars1_107, &Types1_108);
                  mercury__assoc_list__keys_and_values_3_p_0(TypeInfo_219_219, TypeCtorInfo_220_220, TypeSubst2_105, &TVars2_109, &Types2_110);
                  KindMap_111 = mercury__map__init_0_f_0(TypeInfo_219_219, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_111, TVars1_107, &TVarTypes1_112);
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_111, TVars2_109, &TVarTypes2_113);
                  Var_186 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_220_220, TVarTypes1_112, Types1_108);
                  Var_187 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_220_220, TVarTypes2_113, Types2_110);
                  succeeded = recompilation__version__type_list_is_unchanged_7_p_0(TVarSet1_200, Var_186, TVarSet2_201, Var_187, &Var_114, &Var_115, &Var_116);
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
              MR_Word ItemPromiseInfo1_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word PromiseType_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 0)));
              MR_Word UnivVars_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 3)));
              MR_Word Goal_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 1)));
              MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 2)));
              MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 4)));
              MR_Integer Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPromiseInfo1_117, (MR_Integer) 5)));
              MR_Word TypeInfo_311_311;
              MR_Word ItemPromiseInfo2_123;
              MR_Word Var_247;
              MR_Word Var_248;
              MR_Word Var_249;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Integer Var_126;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ItemPromiseInfo2_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 0)));
                Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 1)));
                Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 2)));
                Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 3)));
                Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 4)));
                Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPromiseInfo2_123, (MR_Integer) 5)));
                succeeded = (PromiseType_118 == Var_247);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_item____Unify____goal_0_0(Goal_208, Var_248);
                  if (succeeded)
                  {
                    TypeInfo_311_311 = (MR_Word) &recompilation__version_scalar_common_2[27];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_311_311, ((MR_Box) (UnivVars_120)), ((MR_Box) (Var_249)));
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
              MR_Word ItemTypeClass1_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word Constraints_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 0)));
              MR_Word FunDeps_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 1)));
              MR_Word Vars_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 3)));
              MR_Word Interface1_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 4)));
              MR_Word Name_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 2)));
              MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 5)));
              MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 6)));
              MR_Integer Var_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeClass1_155, (MR_Integer) 7)));
              MR_Word TypeInfo_316_316;
              MR_Word TypeInfo_317_317;
              MR_Word TypeInfo_318_318;
              MR_Word ItemTypeClass2_163;
              MR_Word Interface2_164;
              MR_Word Var_262;
              MR_Word Var_263;
              MR_Word Var_264;
              MR_Word Var_265;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Integer Var_167;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ItemTypeClass2_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 0)));
                Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 1)));
                Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 2)));
                Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 3)));
                Interface2_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 4)));
                Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 5)));
                Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 6)));
                Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeClass2_163, (MR_Integer) 7)));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Constraints_156, Var_262);
                if (succeeded)
                {
                  TypeInfo_316_316 = (MR_Word) &recompilation__version_scalar_common_2[28];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_316_316, ((MR_Box) (FunDeps_157)), ((MR_Box) (Var_263)));
                  if (succeeded)
                  {
                    TypeInfo_317_317 = (MR_Word) &recompilation__version_scalar_common_2[21];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_317_317, ((MR_Box) (Name_215)), ((MR_Box) (Var_264)));
                    if (succeeded)
                    {
                      TypeInfo_318_318 = (MR_Word) &recompilation__version_scalar_common_2[30];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_318_318, ((MR_Box) (Vars_158)), ((MR_Box) (Var_265)));
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
              MR_Word ItemInstance1_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word Types_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 2)));
              MR_Word OriginalTypes_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 3)));
              MR_Word Body_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 4)));
              MR_Word Module_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 6)));
              MR_Word Name_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 1)));
              MR_Word Constraints_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 0)));
              MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 5)));
              MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 7)));
              MR_Integer Var_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstance1_168, (MR_Integer) 8)));
              MR_Word TypeInfo_286_286;
              MR_Word TypeInfo_287_287;
              MR_Word TypeInfo_288_288;
              MR_Word ItemInstance2_176;
              MR_Word Var_266;
              MR_Word Var_267;
              MR_Word Var_268;
              MR_Word Var_269;
              MR_Word Var_270;
              MR_Word Var_271;
              MR_Word Var_177;
              MR_Word Var_178;
              MR_Integer Var_179;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ItemInstance2_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 0)));
                Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 1)));
                Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 2)));
                Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 3)));
                Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 4)));
                Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 5)));
                Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 6)));
                Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 7)));
                Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstance2_176, (MR_Integer) 8)));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Constraints_217, Var_266);
                if (succeeded)
                {
                  TypeInfo_286_286 = (MR_Word) &recompilation__version_scalar_common_2[20];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_286_286, ((MR_Box) (Name_216)), ((MR_Box) (Var_267)));
                  if (succeeded)
                  {
                    TypeInfo_287_287 = (MR_Word) &recompilation__version_scalar_common_2[20];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_287_287, ((MR_Box) (Types_169)), ((MR_Box) (Var_268)));
                    if (succeeded)
                    {
                      TypeInfo_288_288 = (MR_Word) &recompilation__version_scalar_common_2[21];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_288_288, ((MR_Box) (OriginalTypes_170)), ((MR_Box) (Var_269)));
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data____Unify____instance_body_0_0(Body_171, Var_270);
                        if (succeeded)
                          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_173, Var_271);
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
              MR_Word ItemInitialise1_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word A_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 0)));
              MR_Integer B_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 1)));
              MR_Word C_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 2)));
              MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 3)));
              MR_Integer Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise1_127, (MR_Integer) 4)));
              MR_Word ItemInitialise2_133;
              MR_Word Var_250;
              MR_Integer Var_251;
              MR_Word Var_252;
              MR_Word Var_134;
              MR_Integer Var_135;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ItemInitialise2_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 0)));
                Var_251 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 1)));
                Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 2)));
                Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 3)));
                Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise2_133, (MR_Integer) 4)));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(A_128, Var_250);
                if (succeeded)
                {
                  succeeded = (B_129 == Var_251);
                  if (succeeded)
                    succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(C_130, Var_252);
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
              MR_Word ItemFinalise1_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word A_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 0)));
              MR_Integer B_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 1)));
              MR_Word C_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 2)));
              MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 3)));
              MR_Integer Var_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinalise1_136, (MR_Integer) 4)));
              MR_Word ItemFinalise2_139;
              MR_Word Var_253;
              MR_Integer Var_254;
              MR_Word Var_255;
              MR_Word Var_140;
              MR_Integer Var_141;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ItemFinalise2_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 0)));
                Var_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 1)));
                Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 2)));
                Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 3)));
                Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinalise2_139, (MR_Integer) 4)));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(A_209, Var_253);
                if (succeeded)
                {
                  succeeded = (B_210 == Var_254);
                  if (succeeded)
                    succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(C_211, Var_255);
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
              MR_Word ItemMutable1_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word D_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 5)));
              MR_Word E_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 6)));
              MR_Word F_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 7)));
              MR_String A_212 = ((MR_String) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 0)));
              MR_Word B_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 2)));
              MR_Word C_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 4)));
              MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 1)));
              MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 3)));
              MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 8)));
              MR_Integer Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemMutable1_142, (MR_Integer) 9)));
              MR_Word TypeInfo_299_299;
              MR_Word TypeInfo_300_300;
              MR_Word ItemMutable2_150;
              MR_String Var_256;
              MR_Word Var_257;
              MR_Word Var_258;
              MR_Word Var_259;
              MR_Word Var_260;
              MR_Word Var_261;
              MR_Word Var_151;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Integer Var_154;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ItemMutable2_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_256 = ((MR_String) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 0)));
                Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 1)));
                Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 2)));
                Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 3)));
                Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 4)));
                Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 5)));
                Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 6)));
                Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 7)));
                Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 8)));
                Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemMutable2_150, (MR_Integer) 9)));
                succeeded = (strcmp(A_212, Var_256) == 0);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(B_213, Var_257);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(C_214, Var_258);
                    if (succeeded)
                    {
                      TypeInfo_299_299 = (MR_Word) &recompilation__version_scalar_common_2[5];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_299_299, ((MR_Box) (D_145)), ((MR_Box) (Var_259)));
                      if (succeeded)
                      {
                        TypeInfo_300_300 = (MR_Word) &recompilation__version_scalar_common_2[15];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_300_300, ((MR_Box) (E_146)), ((MR_Box) (Var_260)));
                        if (succeeded)
                          succeeded = parse_tree__prog_item____Unify____mutable_var_attributes_0_0(F_147, Var_261);
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
            {
              MR_Word ItemNothing1_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item1_4, (MR_Integer) 1)));
              MR_Word A_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNothing1_180, (MR_Integer) 0)));
              MR_Word Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNothing1_180, (MR_Integer) 1)));
              MR_Integer Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemNothing1_180, (MR_Integer) 2)));
              MR_Word TypeInfo_302_302;
              MR_Word ItemNothing2_183;
              MR_Word Var_272;
              MR_Word Var_184;
              MR_Integer Var_185;

              succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ItemNothing2_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item2_5, (MR_Integer) 1)));
                Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNothing2_183, (MR_Integer) 0)));
                Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemNothing2_183, (MR_Integer) 1)));
                Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemNothing2_183, (MR_Integer) 2)));
                TypeInfo_302_302 = (MR_Word) &recompilation__version_scalar_common_2[23];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_302_302, ((MR_Box) (A_218)), ((MR_Box) (Var_272)));
              }
              if (succeeded)
                *Changed_6 = (MR_Integer) 0;
              else
                *Changed_6 = (MR_Integer) 1;
            }
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

    if ((Interface0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = (Interface_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    else
    {
      MR_Word Methods1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Interface0_3, (MR_Integer) 0)));
      MR_Word Methods2_6;

      succeeded = ((MR_tag((MR_Word) Interface_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Methods2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Interface_4, (MR_Integer) 0)));
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

    conv0_HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    else
    {
      MR_Word Method1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Methods1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Method2_5;
      MR_Word Methods2_6;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Method2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Methods2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) Method1_3)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word TypeInfo_46_46;
          MR_Word Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 0)));
          MR_Word PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 1)));
          MR_Word TypesAndModes1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 2)));
          MR_Word WithType1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 3)));
          MR_Word Detism_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 5)));
          MR_Word TVarSet1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 6)));
          MR_Word ExistQVars1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 8)));
          MR_Word Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 9)));
          MR_Word Constraints1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 10)));
          MR_Word TypesAndModes2_19;
          MR_Word WithType2_20;
          MR_Word TVarSet2_22;
          MR_Word ExistQVars2_24;
          MR_Word Constraints2_25;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 4)));
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 7)));
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method1_3, (MR_Integer) 11)));
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Word Var_26;

          succeeded = ((MR_tag((MR_Word) Method2_5)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 0)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 1)));
            TypesAndModes2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 2)));
            WithType2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 3)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 4)));
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 5)));
            TVarSet2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 6)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 7)));
            ExistQVars2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 8)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 9)));
            Constraints2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 10)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method2_5, (MR_Integer) 11)));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_7, Var_38);
            if (succeeded)
            {
              succeeded = (PredOrFunc_8 == Var_39);
              if (succeeded)
              {
                TypeInfo_46_46 = (MR_Word) &recompilation__version_scalar_common_2[22];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (Detism_12)), ((MR_Box) (Var_40)));
                if (succeeded)
                {
                  succeeded = (Purity_16 == Var_41);
                  if (succeeded)
                    succeeded = recompilation__version__pred_or_func_type_is_unchanged_10_p_0(TVarSet1_13, ExistQVars1_15, TypesAndModes1_9, WithType1_10, Constraints1_17, TVarSet2_22, ExistQVars2_24, TypesAndModes2_19, WithType2_20, Constraints2_25);
                }
              }
            }
          }
        }
        else
        {
          MR_Word TypeInfo_48_48;
          MR_Word TypeInfo_49_49;
          MR_Word TypeCtorInfo_38_81;
          MR_Word TypeCtorInfo_39_82;
          MR_Word TypeCtorInfo_40_83;
          MR_Word TypeInfo_41_84;
          MR_Word Modes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 2)));
          MR_Word WithInst1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 3)));
          MR_Word Det_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 4)));
          MR_Word InstVarSet1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 5)));
          MR_Word Modes2_32;
          MR_Word WithInst2_33;
          MR_Word InstVarSet2_34;
          MR_Word Name_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 0)));
          MR_Word PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 1)));
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word VarSet1_56;
          MR_Word VarSet2_57;
          MR_Word InstRenaming_59;
          MR_Word ModeTerms1_60;
          MR_Word ModeTerms2_61;
          MR_Word AllModeTerms1_66;
          MR_Word AllModeTerms2_67;
          MR_Word SubstAllModeTerms2_68;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method1_3, (MR_Integer) 6)));
          MR_Word Var_35;
          MR_Word Var_58;
          MR_Word Var_69;
          MR_Word Var_70;

          succeeded = ((MR_tag((MR_Word) Method2_5)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 1)));
            Modes2_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 2)));
            WithInst2_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 3)));
            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 4)));
            InstVarSet2_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 5)));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Method2_5, (MR_Integer) 6)));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_36, Var_42);
            if (succeeded)
            {
              TypeInfo_48_48 = (MR_Word) &recompilation__version_scalar_common_2[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (PredOrFunc_37)), ((MR_Box) (Var_43)));
              if (succeeded)
              {
                TypeInfo_49_49 = (MR_Word) &recompilation__version_scalar_common_2[22];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (Det_29)), ((MR_Box) (Var_44)));
                if (succeeded)
                {
                  TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
                  TypeCtorInfo_39_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_38_81, TypeCtorInfo_39_82, InstVarSet1_30, &VarSet1_56);
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_38_81, TypeCtorInfo_39_82, InstVarSet2_34, &VarSet2_57);
                  mercury__varset__merge_renaming_4_p_0(TypeCtorInfo_39_82, VarSet1_56, VarSet2_57, &Var_58, &InstRenaming_59);
                  TypeCtorInfo_40_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                  TypeInfo_41_84 = (MR_Word) &recompilation__version_scalar_common_2[5];
                  Var_72 = (MR_Integer) 0;
                  Var_71 = (MR_Word) &recompilation__version_scalar_common_4[2];
                  ModeTerms1_60 = mercury__list__map_2_f_0(TypeCtorInfo_40_83, TypeInfo_41_84, Var_71, Modes1_27);
                  ModeTerms2_61 = mercury__list__map_2_f_0(TypeCtorInfo_40_83, TypeInfo_41_84, Var_71, Modes2_32);
                  if ((WithInst1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    succeeded = (WithInst2_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      AllModeTerms1_66 = ModeTerms1_60;
                      AllModeTerms2_67 = ModeTerms2_61;
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word Inst1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst1_28, (MR_Integer) 0)));
                    MR_Word Inst2_63;
                    MR_Word WithInstTerm1_64;
                    MR_Word WithInstTerm2_65;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_78;
                    MR_Word Var_79;
                    MR_Word Var_80;

                    succeeded = ((MR_tag((MR_Word) WithInst2_33)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Inst2_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst2_33, (MR_Integer) 0)));
                      Var_75 = (MR_Integer) 0;
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
                        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Inst1_62));
                      }
                      WithInstTerm1_64 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_75, Var_76);
                      Var_78 = (MR_Integer) 0;
                      Var_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
                        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Inst2_63));
                      }
                      WithInstTerm2_65 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_78, Var_79);
                      {
                        AllModeTerms1_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), AllModeTerms1_66, 0) = ((MR_Box) (WithInstTerm1_64));
                        MR_hl_field(MR_mktag(1), AllModeTerms1_66, 1) = ((MR_Box) (ModeTerms1_60));
                      }
                      {
                        AllModeTerms2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), AllModeTerms2_67, 0) = ((MR_Box) (WithInstTerm2_65));
                        MR_hl_field(MR_mktag(1), AllModeTerms2_67, 1) = ((MR_Box) (ModeTerms2_61));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    mercury__term__apply_renaming_in_terms_3_p_0(TypeCtorInfo_39_82, InstRenaming_59, AllModeTerms2_67, &SubstAllModeTerms2_68);
                    succeeded = mercury__term__list_subsumes_3_p_0(TypeCtorInfo_39_82, AllModeTerms1_66, SubstAllModeTerms2_68, &Var_69);
                    if (succeeded)
                      succeeded = mercury__term__list_subsumes_3_p_0(TypeCtorInfo_39_82, SubstAllModeTerms2_68, AllModeTerms1_66, &Var_70);
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          /* direct tailcall eliminated */
          next_value_of_HeadVar__1_1 = Methods1_4;
          next_value_of_HeadVar__2_2 = Methods2_6;
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

    conv0_HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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
    MR_Word TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
    MR_Word TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word TypeCtorInfo_40_40;
    MR_Word TypeInfo_41_41;
    MR_Word VarSet1_13;
    MR_Word VarSet2_14;
    MR_Word InstRenaming_16;
    MR_Word ModeTerms1_17;
    MR_Word ModeTerms2_18;
    MR_Word AllModeTerms1_23;
    MR_Word AllModeTerms2_24;
    MR_Word SubstAllModeTerms2_25;
    MR_Word Var_28;
    MR_Word Var_15;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__varset__coerce_2_p_0(TypeCtorInfo_38_38, TypeCtorInfo_39_39, InstVarSet1_7, &VarSet1_13);
    mercury__varset__coerce_2_p_0(TypeCtorInfo_38_38, TypeCtorInfo_39_39, InstVarSet2_10, &VarSet2_14);
    mercury__varset__merge_renaming_4_p_0(TypeCtorInfo_39_39, VarSet1_13, VarSet2_14, &Var_15, &InstRenaming_16);
    TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    TypeInfo_41_41 = (MR_Word) &recompilation__version_scalar_common_2[5];
    Var_28 = (MR_Word) &recompilation__version_scalar_common_4[1];
    ModeTerms1_17 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeInfo_41_41, Var_28, Modes1_8);
    ModeTerms2_18 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeInfo_41_41, Var_28, Modes2_11);
    if ((MaybeWithInst1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (MaybeWithInst2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        AllModeTerms1_23 = ModeTerms1_17;
        AllModeTerms2_24 = ModeTerms2_18;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Inst1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithInst1_9, (MR_Integer) 0)));
      MR_Word Inst2_20;
      MR_Word WithInstTerm1_21;
      MR_Word WithInstTerm2_22;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      succeeded = ((MR_tag((MR_Word) MaybeWithInst2_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Inst2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithInst2_12, (MR_Integer) 0)));
        Var_32 = (MR_Integer) 0;
        Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Inst1_19));
        }
        WithInstTerm1_21 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_32, Var_33);
        Var_35 = (MR_Integer) 0;
        Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Inst2_20));
        }
        WithInstTerm2_22 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_35, Var_36);
        {
          AllModeTerms1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllModeTerms1_23, 0) = ((MR_Box) (WithInstTerm1_21));
          MR_hl_field(MR_mktag(1), AllModeTerms1_23, 1) = ((MR_Box) (ModeTerms1_17));
        }
        {
          AllModeTerms2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllModeTerms2_24, 0) = ((MR_Box) (WithInstTerm2_22));
          MR_hl_field(MR_mktag(1), AllModeTerms2_24, 1) = ((MR_Box) (ModeTerms2_18));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      mercury__term__apply_renaming_in_terms_3_p_0(TypeCtorInfo_39_39, InstRenaming_16, AllModeTerms2_24, &SubstAllModeTerms2_25);
      succeeded = mercury__term__list_subsumes_3_p_0(TypeCtorInfo_39_39, AllModeTerms1_23, SubstAllModeTerms2_25, &Var_26);
      if (succeeded)
        succeeded = mercury__term__list_subsumes_3_p_0(TypeCtorInfo_39_39, SubstAllModeTerms2_25, AllModeTerms1_23, &Var_27);
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

    conv0_LambdaHeadVar__2_43 = recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1075__1_1_f_0(((MR_Word) wrapper_arg_1));
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
    MR_Word TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
    MR_Word TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word TypeInfo_53_53;
    MR_Word TypeCtorInfo_54_54;
    MR_Word GetArgTypes_21 = (MR_Word) &recompilation__version_scalar_common_1[18];
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

    Types1_26 = mercury__list__map_2_f_0(TypeCtorInfo_51_51, TypeCtorInfo_52_52, GetArgTypes_21, TypesAndModes1_13);
    Types2_27 = mercury__list__map_2_f_0(TypeCtorInfo_51_51, TypeCtorInfo_52_52, GetArgTypes_21, TypesAndModes2_18);
    if ((MaybeWithType1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (MaybeWithType2_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        AllTypes1_30 = Types1_26;
        AllTypes2_31 = Types2_27;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WithType1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithType1_14, (MR_Integer) 0)));
      MR_Word WithType2_29;

      succeeded = ((MR_tag((MR_Word) MaybeWithType2_19)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        WithType2_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithType2_19, (MR_Integer) 0)));
        {
          AllTypes1_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllTypes1_30, 0) = ((MR_Box) (WithType1_28));
          MR_hl_field(MR_mktag(1), AllTypes1_30, 1) = ((MR_Box) (Types1_26));
        }
        {
          AllTypes2_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        TypeInfo_53_53 = (MR_Word) &recompilation__version_scalar_common_2[2];
        TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
        mercury__map__init_1_p_0(TypeInfo_53_53, TypeCtorInfo_54_54, &KindMap2_35);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_33, KindMap2_35, &RenamedKindMap2_36);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_33, ExistQVars2_17, &RenamedExistQVars2_37);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap2_36, Types2ToTypes1Subst_34, RenamedExistQVars2_37, &SubstExistQTypes2_38);
        succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(SubstExistQTypes2_38, &SubstExistQVars2_39);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_2[28], ((MR_Box) (ExistQVars1_12)), ((MR_Box) (SubstExistQVars2_39)));
        }
        else
        {
          mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "non-var");
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
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18 = ((MR_Word) (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18);
    (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19 = ((MR_Word) (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19);
    recompilation__version__type_list_is_unchanged_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_20;
      MR_Word TypeCtorInfo_32_32;
      MR_String VarName1_21;
      MR_String VarName2_22;

      (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19)) == (MR_mktag((MR_Integer) 0)));
      if ((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19, (MR_Integer) 0)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19, (MR_Integer) 1)));
        TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
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
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__map__member_3_p_0((MR_Word) &recompilation__version_scalar_common_2[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *((env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14), &(env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18, &(env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19, recompilation__version__type_list_is_unchanged_7_p_0_3, env_ptr);
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

    conv0_TimeStamp_14 = recompilation__version__compute_item_version_numbers_3_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (recompilation__version__compute_item_version_numbers_2_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (SourceFileTime_7));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (OldGatheredItems_8));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (OldItemVersionNumbers_9));
      MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (ItemType_10));
    }
    HeadVar__6_6 = mercury__map__map_values_2_f_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, Var_12, CurGatheredItems_11);
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

    conv1_LambdaHeadVar__3_30 = recompilation__version__IntroducedFrom__func__parse_version_numbers__1344__1_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version__parse_item_type_version_numbers_2_p_0(((MR_Word) wrapper_arg_1), &conv0_Result_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_4));
  }
}

void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0(
  MR_Word VersionNumbersTerm_3,
  MR_Word * Result_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) VersionNumbersTerm_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word TypeCtorInfo_36_36;
    MR_Word VersionNumbersTermList_7;
    MR_Word Result0_8;
    MR_Word VersionNumbersTermList0_5;
    MR_Word Var_20;
    MR_String Var_21;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), VersionNumbersTerm_3, (MR_Integer) 0)));
      VersionNumbersTermList0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), VersionNumbersTerm_3, (MR_Integer) 1)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), VersionNumbersTerm_3, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
        succeeded = (strcmp(Var_21, (MR_String) "{}") == 0);
      }
    }
    if (succeeded)
      VersionNumbersTermList_7 = VersionNumbersTermList0_5;
    else
    {
      {
        VersionNumbersTermList_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VersionNumbersTermList_7, 0) = ((MR_Box) (VersionNumbersTerm_3));
        MR_hl_field(MR_mktag(1), VersionNumbersTermList_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    TypeCtorInfo_36_36 = (MR_Word) &recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0;
    parse_tree__parse_util__map_parser_3_p_0(TypeCtorInfo_36_36, (MR_Word) &recompilation__version_scalar_common_1[16], VersionNumbersTermList_7, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 0))))
      *Result_4 = (MR_Word) Result0_8;
    else
    {
      MR_Word TypeCtorInfo_39_39 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
      MR_Word List_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));
      MR_Word VersionNumbers0_10;
      MR_Word VersionNumbers_11;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Box conv2_VersionNumbers_11;

      Var_25 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], TypeCtorInfo_39_39);
      Var_24 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[1], ((MR_Box) (Var_25)));
      Var_26 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, TypeCtorInfo_39_39);
      {
        VersionNumbers0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VersionNumbers0_10, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), VersionNumbers0_10, 1) = ((MR_Box) (Var_26));
      }
      conv2_VersionNumbers_11 = mercury__list__foldl_3_f_0(TypeCtorInfo_36_36, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &recompilation__version_scalar_common_1[17], List_9, ((MR_Box) (VersionNumbers0_10)));
      VersionNumbers_11 = ((MR_Word) conv2_VersionNumbers_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

    recompilation__version__write_symname_arity_version_number_3_p_0(((MR_Word) wrapper_arg_1));
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

    recompilation__version__write_item_type_and_versions_3_p_0(((MR_Word) wrapper_arg_1));
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

    succeeded = recompilation__version__IntroducedFrom__func__write_version_numbers__1260__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_18);
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
    MR_Word TypeInfo_52_52 = (MR_Word) &recompilation__version_scalar_common_1[4];
    MR_Word VersionNumbers_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), AllVersionNumbers_4, (MR_Integer) 0)));
    MR_Word InstanceVersionNumbers_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), AllVersionNumbers_4, (MR_Integer) 1)));
    MR_Word VersionNumbersList_8;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&recompilation__version_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (VersionNumbers_6));
    }
    VersionNumbersList_8 = mercury__list__filter_map_2_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, TypeInfo_52_52, Var_16, (MR_Word) MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[13]));
    mercury__io__write_string_3_p_0((MR_String) "{\n\t");
    mercury__io__write_list_5_p_0(TypeInfo_52_52, VersionNumbersList_8, (MR_String) ",\n\t", (MR_Word) &recompilation__version_scalar_common_1[14]);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, InstanceVersionNumbers_7);
    if (!(succeeded))
    {
      MR_Word InstanceAL_13;

      if (!((VersionNumbersList_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      mercury__io__write_string_3_p_0((MR_String) "instance(");
      mercury__map__to_assoc_list_2_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, InstanceVersionNumbers_7, &InstanceAL_13);
      mercury__io__write_list_5_p_0((MR_Word) &recompilation__version_scalar_common_1[5], InstanceAL_13, (MR_String) ",\n\n\t", (MR_Word) &recompilation__version_scalar_common_1[15]);
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

    conv2_HeadVar__6_6 = recompilation__version__compute_item_version_numbers_2_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version__distribute_pragma_items_3_p_0(((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_GatheredItems_16);
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
    MR_Word TypeInfo_24_66 = (MR_Word) &recompilation__version_scalar_common_2[0];
    MR_Word TypeInfo_25_67;
    MR_Word CurIntItems_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 8)));
    MR_Word CurImpItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 9)));
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
    MR_Word _ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 0)));
    MR_Word _IntFileKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 1)));
    MR_Word _ModuleNameContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 2)));
    MR_Word _CurMaybeVersionNumbers_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 3)));
    MR_Word _CurIntIncls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 4)));
    MR_Word _CurImpIncls_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 5)));
    MR_Word _CurIntAvails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 6)));
    MR_Word _CurImpAvails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurParseTreeInt_6, (MR_Integer) 7)));
    MR_Box conv1_CurGatheredItems_19;
    MR_Word OldIntItems_30;
    MR_Word OldImpItems_31;
    MR_Word OldVersionNumbers_32;
    MR_Word OldParseTreeInt_21;
    MR_Word OldMaybeVersionNumbers_25;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word _OldIntIncls_26;
    MR_Word _OldImpIncls_27;
    MR_Word _OldIntAvails_28;
    MR_Word _OldImpAvails_29;

    Var_58 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], TypeInfo_24_66);
    GatheredItems0_51 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (Var_58)));
    TypeInfo_25_67 = (MR_Word) &recompilation__version_scalar_common_3[0];
    Var_59 = mercury__cord__init_0_f_0(TypeInfo_25_67);
    Var_60 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, TypeInfo_24_66);
    {
      Info0_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_52, 0) = ((MR_Box) (GatheredItems0_51));
      MR_hl_field(MR_mktag(0), Info0_52, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Info0_52, 2) = ((MR_Box) (Var_60));
    }
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 0, CurIntItems_17, Info0_52, &Info1_53);
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 1, CurImpItems_18, Info1_53, &Info_54);
    GatheredItems1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_54, (MR_Integer) 0)));
    PragmaItemsCord_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_54, (MR_Integer) 1)));
    CurInstanceItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_54, (MR_Integer) 2)));
    PragmaItems_57 = mercury__cord__list_1_f_0(TypeInfo_25_67, PragmaItemsCord_56);
    mercury__list__foldl_4_p_0(TypeInfo_25_67, (MR_Word) &recompilation__version_scalar_common_4[0], (MR_Word) &recompilation__version_scalar_common_1[13], PragmaItems_57, ((MR_Box) (GatheredItems1_55)), &conv1_CurGatheredItems_19);
    CurGatheredItems_19 = ((MR_Word) conv1_CurGatheredItems_19);
    succeeded = ((MR_tag((MR_Word) MaybeOldParseTreeInt_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      OldParseTreeInt_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_7, (MR_Integer) 0)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 0)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 1)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 2)));
      OldMaybeVersionNumbers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 3)));
      _OldIntIncls_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 4)));
      _OldImpIncls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 5)));
      _OldIntAvails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 6)));
      _OldImpAvails_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 7)));
      OldIntItems_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 8)));
      OldImpItems_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldParseTreeInt_21, (MR_Integer) 9)));
      succeeded = ((MR_tag((MR_Word) OldMaybeVersionNumbers_25)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        OldVersionNumbers_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldMaybeVersionNumbers_25, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      OldItemVersionNumbers_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldVersionNumbers_32, (MR_Integer) 0)));
      OldInstanceVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldVersionNumbers_32, (MR_Integer) 1)));
      recompilation__version__gather_items_4_p_0(OldIntItems_30, OldImpItems_31, &OldGatheredItems_35, &OldInstanceItems_36);
    }
    else
    {
      MR_Word TypeInfo_42_42 = (MR_Word) &recompilation__version_scalar_common_1[0];
      MR_Word TypeCtorInfo_43_43 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
      MR_Word TypeInfo_45_45;
      MR_Word TypeCtorInfo_46_46;
      MR_Word Var_39;
      MR_Word Var_40;

      Var_39 = mercury__map__init_0_f_0(TypeInfo_42_42, TypeCtorInfo_43_43);
      OldItemVersionNumbers_33 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[1], ((MR_Box) (Var_39)));
      TypeInfo_45_45 = (MR_Word) &recompilation__version_scalar_common_2[0];
      Var_40 = mercury__map__init_0_f_0(TypeInfo_42_42, TypeInfo_45_45);
      OldGatheredItems_35 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (Var_40)));
      TypeCtorInfo_46_46 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0;
      mercury__map__init_1_p_0(TypeCtorInfo_46_46, TypeInfo_45_45, &OldInstanceItems_36);
      mercury__map__init_1_p_0(TypeCtorInfo_46_46, TypeCtorInfo_43_43, &OldInstanceVersionNumbers_34);
    }
    {
      Func_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Func_78, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Func_78, 1) = ((MR_Box) (recompilation__version__compute_version_numbers_4_p_0_2));
      MR_hl_field(MR_mktag(0), Func_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Func_78, 3) = ((MR_Box) (SourceFileTime_5));
      MR_hl_field(MR_mktag(0), Func_78, 4) = ((MR_Box) (OldGatheredItems_35));
      MR_hl_field(MR_mktag(0), Func_78, 5) = ((MR_Box) (OldItemVersionNumbers_33));
    }
    Var_79 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
    NewItemVersionNumbers_37 = recompilation__map_ids_3_f_0((MR_Word) &recompilation__version_scalar_common_1[3], (MR_Word) &recompilation__version_scalar_common_1[1], Func_78, CurGatheredItems_19, ((MR_Box) (Var_79)));
    recompilation__version__compute_instance_version_numbers_5_p_0(SourceFileTime_5, CurInstanceItems_20, OldInstanceItems_36, OldInstanceVersionNumbers_34, &NewInstanceVersionNumbers_38);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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

    recompilation__version__distribute_pragma_items_3_p_0(((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_GatheredItems_16);
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
    MR_Word TypeInfo_24_24 = (MR_Word) &recompilation__version_scalar_common_2[0];
    MR_Word TypeInfo_25_25;
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

    Var_16 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], TypeInfo_24_24);
    GatheredItems0_9 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (Var_16)));
    TypeInfo_25_25 = (MR_Word) &recompilation__version_scalar_common_3[0];
    Var_17 = mercury__cord__init_0_f_0(TypeInfo_25_25);
    Var_18 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, TypeInfo_24_24);
    {
      Info0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_10, 0) = ((MR_Box) (GatheredItems0_9));
      MR_hl_field(MR_mktag(0), Info0_10, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Info0_10, 2) = ((MR_Box) (Var_18));
    }
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 0, IntItems_5, Info0_10, &Info1_11);
    recompilation__version__gather_in_section_4_p_0((MR_Integer) 1, ImpItems_6, Info1_11, &Info_12);
    GatheredItems1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
    PragmaItemsCord_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)));
    *Instances_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 2)));
    PragmaItems_15 = mercury__cord__list_1_f_0(TypeInfo_25_25, PragmaItemsCord_14);
    mercury__list__foldl_4_p_0(TypeInfo_25_25, (MR_Word) &recompilation__version_scalar_common_4[0], (MR_Word) &recompilation__version_scalar_common_1[12], PragmaItems_15, ((MR_Box) (GatheredItems1_13)), &conv1_GatheredItems_7);
    *GatheredItems_7 = ((MR_Word) conv1_GatheredItems_7);
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
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Info_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      recompilation__version__gather_in_item_4_p_0(HeadVar__1_1, Item_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
      /* direct tailcall eliminated */
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
  MR_Word STATE_VARIABLE_Info_0_109,
  MR_Word * STATE_VARIABLE_Info_110)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Item_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.gather_in_item\'/4", (MR_String) "unexpected item in interface");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefn_8 = (MR_Word) MR_body(((MR_Word) Item_6), (MR_Integer) 1);
          MR_Word Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 0)));
          MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 1)));
          MR_Word Body_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 2)));
          MR_Word VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 3)));
          MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 4)));
          MR_Integer SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeDefn_8, (MR_Integer) 5)));
          MR_Word NameItem_16;
          MR_Word BodyItem_17;
          MR_Word TypeCtorItem_25;
          MR_Word GatheredItems0_26;
          MR_Word GatheredItems1_27;
          MR_Word GatheredItems_28;
          MR_Integer Var_138;
          MR_Word Var_139;
          MR_Word Var_141;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_Word Var_187;

          switch (MR_tag((MR_Word) Body_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word NameItemTypeDefn_21;

                {
                  NameItemTypeDefn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 0) = ((MR_Box) (Name_9));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 1) = ((MR_Box) (Args_10));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[36])));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 3) = ((MR_Box) (VarSet_12));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 4) = ((MR_Box) (Context_13));
                  MR_hl_field(MR_mktag(0), NameItemTypeDefn_21, 5) = ((MR_Box) (SeqNum_14));
                }
                NameItem_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) NameItemTypeDefn_21);
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_11, (MR_Integer) 0)))) {
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
          Var_138 = mercury__list__length_1_f_0((MR_Word) &recompilation__version_scalar_common_2[2], Args_10);
          {
            TypeCtorItem_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorItem_25, 0) = ((MR_Box) (Name_9));
            MR_hl_field(MR_mktag(0), TypeCtorItem_25, 1) = ((MR_Box) (Var_138));
          }
          GatheredItems0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
          Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
          Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (TypeCtorItem_25));
          }
          recompilation__version__add_gathered_item_5_p_0(NameItem_16, Var_139, Section_5, GatheredItems0_26, &GatheredItems1_27);
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (TypeCtorItem_25));
          }
          recompilation__version__add_gathered_item_5_p_0(BodyItem_17, Var_141, Section_5, GatheredItems1_27, &GatheredItems_28);
          Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
          Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
          Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_110 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_28));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_188));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_189));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemInstDefn_69 = (MR_Word) MR_body(((MR_Word) Item_6), (MR_Integer) 2);
          MR_Word Params_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 1)));
          MR_Word Var_121;
          MR_Word Name_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 0)));
          MR_Integer Arity_158;
          MR_Word GatheredItems0_176;
          MR_Word GatheredItems_177;
          MR_Word ItemId_182;
          MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 2)));
          MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 3)));
          MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 4)));
          MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 5)));
          MR_Integer Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstDefn_69, (MR_Integer) 6)));
          MR_Word Var_210;
          MR_Word Var_211;
          MR_Word Var_213;
          MR_Word Var_214;
          MR_Word Var_212;

          mercury__list__length_2_p_0((MR_Word) &recompilation__version_scalar_common_2[3], Params_70, &Arity_158);
          {
            Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Name_157));
            MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (Arity_158));
          }
          {
            ItemId_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemId_182, 0) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ItemId_182, 1) = ((MR_Box) (Var_121));
          }
          GatheredItems0_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
          Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
          Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
          recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_182, Section_5, GatheredItems0_176, &GatheredItems_177);
          Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
          Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
          Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_110 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_177));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_213));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_214));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemModeDefn_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word Var_119;
              MR_Word Name_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 0)));
              MR_Integer Arity_160;
              MR_Word Params_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 1)));
              MR_Word GatheredItems0_240;
              MR_Word GatheredItems_241;
              MR_Word ItemId_242;
              MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 2)));
              MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 3)));
              MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 4)));
              MR_Integer Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDefn_76, (MR_Integer) 5)));
              MR_Word Var_231;
              MR_Word Var_232;
              MR_Word Var_235;
              MR_Word Var_236;
              MR_Word Var_233;

              mercury__list__length_2_p_0((MR_Word) &recompilation__version_scalar_common_2[3], Params_161, &Arity_160);
              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Name_159));
                MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (Arity_160));
              }
              {
                ItemId_242 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemId_242, 0) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ItemId_242, 1) = ((MR_Box) (Var_119));
              }
              GatheredItems0_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_242, Section_5, GatheredItems0_240, &GatheredItems_241);
              Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_110 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_241));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_235));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_236));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ItemPredDecl_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word TypesAndModes_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 2)));
              MR_Word WithType_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 3)));
              MR_Word Var_117;
              MR_Word SymName_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 0)));
              MR_Word PredOrFunc_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 1)));
              MR_Integer Arity_164;
              MR_Word ItemType_165;
              MR_Word GatheredItems0_257;
              MR_Word GatheredItems_258;
              MR_Word ItemId_259;
              MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 4)));
              MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 5)));
              MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 6)));
              MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 7)));
              MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 8)));
              MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 9)));
              MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 10)));
              MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 11)));
              MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 12)));
              MR_Integer Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_81, (MR_Integer) 13)));
              MR_Word Var_248;
              MR_Word Var_249;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_250;

              if ((WithType_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer Var_116;

                Var_116 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, TypesAndModes_82);
                parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_163, &Arity_164, Var_116);
              }
              else
              {
                Arity_164 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, TypesAndModes_82);
              }
              ItemType_165 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_163);
              {
                Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (SymName_162));
                MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (Arity_164));
              }
              {
                ItemId_259 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemId_259, 0) = ((MR_Box) (ItemType_165));
                MR_hl_field(MR_mktag(0), ItemId_259, 1) = ((MR_Box) (Var_117));
              }
              GatheredItems0_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_259, Section_5, GatheredItems0_257, &GatheredItems_258);
              Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_110 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_258));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_252));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_253));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ItemModeDecl_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 0)));
              MR_Word MaybePredOrFunc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 1)));
              MR_Word Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 2)));
              MR_Word WithInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 3)));
              MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 4)));
              MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 5)));
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 6)));
              MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 7)));
              MR_Word Var_38;

              succeeded = (MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) WithInst_33)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_33, (MR_Integer) 0)));
              }
              if (succeeded)
              {
                MR_Word ItemName_39;
                MR_Integer Var_129;
                MR_Word Var_130;
                MR_Word Var_132;
                MR_Word GatheredItems0_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
                MR_Word GatheredItems1_145;
                MR_Word GatheredItems_146;
                MR_Word Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
                MR_Word Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
                MR_Word Var_193;
                MR_Word Var_194;
                MR_Word Var_192;

                Var_129 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_32);
                {
                  ItemName_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemName_39, 0) = ((MR_Box) (SymName_30));
                  MR_hl_field(MR_mktag(0), ItemName_39, 1) = ((MR_Box) (Var_129));
                }
                {
                  Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (ItemName_39));
                }
                recompilation__version__add_gathered_item_5_p_0(Item_6, Var_130, Section_5, GatheredItems0_144, &GatheredItems1_145);
                {
                  Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ItemName_39));
                }
                recompilation__version__add_gathered_item_5_p_0(Item_6, Var_132, Section_5, GatheredItems1_145, &GatheredItems_146);
                Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
                Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
                Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_110 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_146));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_193));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_194));
                }
              }
              else
              if ((MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
              else
              {
                MR_Word PredOrFunc_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredOrFunc_31, (MR_Integer) 0)));
                MR_Integer Arity_41;
                MR_Word ItemType_42;
                MR_Word ItemId_43;
                MR_Integer Var_135;
                MR_Word Var_136;
                MR_Word GatheredItems0_147;
                MR_Word GatheredItems_148;
                MR_Word Var_195;
                MR_Word Var_196;
                MR_Word Var_198;
                MR_Word Var_199;
                MR_Word Var_197;

                Var_135 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_32);
                parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_40, &Arity_41, Var_135);
                ItemType_42 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_40);
                {
                  Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (SymName_30));
                  MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (Arity_41));
                }
                {
                  ItemId_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemId_43, 0) = ((MR_Box) (ItemType_42));
                  MR_hl_field(MR_mktag(0), ItemId_43, 1) = ((MR_Box) (Var_136));
                }
                GatheredItems0_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
                Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
                Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
                recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_43, Section_5, GatheredItems0_147, &GatheredItems_148);
                Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
                Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
                Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_110 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_148));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_198));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_199));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ItemPragma_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word PragmaType_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma_61, (MR_Integer) 0)));
              MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma_61, (MR_Integer) 1)));
              MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma_61, (MR_Integer) 2)));
              MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragma_61, (MR_Integer) 3)));
              MR_Word PredOrFuncId_66;
              MR_Word Var_123;

              recompilation__version__is_pred_pragma_2_p_0(PragmaType_62, &Var_123);
              succeeded = ((MR_tag((MR_Word) Var_123)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                PredOrFuncId_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_123, (MR_Integer) 0)));
                {
                  MR_Word PragmaItems0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
                  MR_Word PragmaItems_68;
                  MR_Tuple Var_124;
                  MR_Word Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
                  MR_Word Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
                  MR_Word Var_207;
                  MR_Word Var_209;
                  MR_Word Var_208;

                  {
                    Var_124 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (PredOrFuncId_66));
                    MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (Item_6));
                    MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) (Section_5));
                  }
                  PragmaItems_68 = mercury__cord__snoc_2_f_0((MR_Word) &recompilation__version_scalar_common_3[0], PragmaItems0_67, ((MR_Box) (Var_124)));
                  Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
                  Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
                  Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_110 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_207));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PragmaItems_68));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_209));
                  }
                }
              }
              else
                *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
            }
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
            break;
          case (MR_Integer) 5:
            {
              MR_Word ItemTypeClass_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word ClassVars_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 1)));
              MR_Word Var_115;
              MR_Word ClassName_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 0)));
              MR_Integer ClassArity_167;
              MR_Word GatheredItems0_274;
              MR_Word GatheredItems_275;
              MR_Word ItemId_276;
              MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 2)));
              MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 3)));
              MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 4)));
              MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 5)));
              MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 6)));
              MR_Integer Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeClass_95, (MR_Integer) 7)));
              MR_Word Var_265;
              MR_Word Var_266;
              MR_Word Var_269;
              MR_Word Var_270;
              MR_Word Var_267;

              mercury__list__length_2_p_0((MR_Word) &recompilation__version_scalar_common_2[2], ClassVars_96, &ClassArity_167);
              {
                Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (ClassName_166));
                MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ClassArity_167));
              }
              {
                ItemId_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemId_276, 0) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), ItemId_276, 1) = ((MR_Box) (Var_115));
              }
              GatheredItems0_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              recompilation__version__add_gathered_item_5_p_0(Item_6, ItemId_276, Section_5, GatheredItems0_274, &GatheredItems_275);
              Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_110 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GatheredItems_275));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_269));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_270));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ItemInstance_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
              MR_Word ClassName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 0)));
              MR_Word ClassArgs_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 1)));
              MR_Word Instances0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              MR_Integer ClassArity_55;
              MR_Word ClassItemName_56;
              MR_Word NewInstanceItem_57;
              MR_Word Instances_60;
              MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 2)));
              MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 3)));
              MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 4)));
              MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 5)));
              MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 6)));
              MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 7)));
              MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInstance_44, (MR_Integer) 8)));
              MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              MR_Word OldInstanceItems_58;
              MR_Box conv0_OldInstanceItems_58;
              MR_Word Var_202;
              MR_Word Var_203;
              MR_Word Var_204;

              ClassArity_55 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ClassArgs_46);
              {
                ClassItemName_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassItemName_56, 0) = ((MR_Box) (ClassName_45));
                MR_hl_field(MR_mktag(0), ClassItemName_56, 1) = ((MR_Box) (ClassArity_55));
              }
              {
                NewInstanceItem_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NewInstanceItem_57, 0) = ((MR_Box) (Section_5));
                MR_hl_field(MR_mktag(0), NewInstanceItem_57, 1) = ((MR_Box) (Item_6));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], Instances0_54, ((MR_Box) (ClassItemName_56)), &conv0_OldInstanceItems_58);
              if (succeeded)
              {
                OldInstanceItems_58 = ((MR_Word) conv0_OldInstanceItems_58);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NewInstanceItems_59;

                {
                  NewInstanceItems_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewInstanceItems_59, 0) = ((MR_Box) (NewInstanceItem_57));
                  MR_hl_field(MR_mktag(1), NewInstanceItems_59, 1) = ((MR_Box) (OldInstanceItems_58));
                }
                mercury__map__det_update_4_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (ClassItemName_56)), ((MR_Box) (NewInstanceItems_59)), Instances0_54, &Instances_60);
              }
              else
              {
                MR_Word Var_126;

                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (NewInstanceItem_57));
                  MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                mercury__map__det_insert_4_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (ClassItemName_56)), ((MR_Box) (Var_126)), Instances0_54, &Instances_60);
              }
              Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 0)));
              Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 1)));
              Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_109, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_110 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_202));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_203));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Instances_60));
              }
            }
            break;
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.gather_in_item\'/4", (MR_String) "unexpected item in interface");
                return;
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
      *MaybePredOrFuncId_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), PragmaType_3, (MR_Integer) 0)));
        MR_Word Args_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 3)));
        MR_Integer Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Name_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 1)));
        MR_Integer Arity_105;
        MR_Word PredOrFunc_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 2)));
        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 0)));
        MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 4)));
        MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 5)));
        MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_42, (MR_Integer) 6)));

        Var_77 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, Args_44);
        parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_106, &Arity_105, Var_77);
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (PredOrFunc_106));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Name_104));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Arity_105));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_80));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredOrFuncId_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_78));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameModesPF_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPEInfo_50, (MR_Integer) 1)));
            MR_Word Modes_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_52, (MR_Integer) 1)));
            MR_Integer Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Name_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_52, (MR_Integer) 0)));
            MR_Integer Arity_111;
            MR_Word PredOrFunc_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_52, (MR_Integer) 2)));
            MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPEInfo_50, (MR_Integer) 0)));
            MR_String Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), FPEInfo_50, (MR_Integer) 2)));

            Var_70 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_69);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_112, &Arity_111, Var_70);
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (PredOrFunc_112));
            }
            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Name_110));
              MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (Arity_111));
            }
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Var_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_71));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 14:
        case (MR_Integer) 17:
        case (MR_Integer) 29:
        case (MR_Integer) 30:
        case (MR_Integer) 31:
          *MaybePredOrFuncId_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 3:
          {
            MR_Word ExternalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Name_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExternalInfo_48, (MR_Integer) 0)));
            MR_Integer Arity_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ExternalInfo_48, (MR_Integer) 1)));
            MR_Word PredOrFunc_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExternalInfo_48, (MR_Integer) 2)));
            MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExternalInfo_48, (MR_Integer) 3)));

            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (PredOrFunc_109));
            }
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Name_107));
              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Arity_108));
            }
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Var_76));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_74));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeSpecInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word MaybePredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 3)));
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Name_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 0)));
            MR_Integer Arity_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 2)));
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 1)));
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 4)));
            MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 5)));
            MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 6)));
            MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_19, (MR_Integer) 7)));

            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Name_97));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (Arity_98));
            }
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (MaybePredOrFunc_21));
              MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Var_87));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_86));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word PredNameArity_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_127, (MR_Integer) 0)));
            MR_Integer Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_127, (MR_Integer) 1)));
            MR_Word Var_130;
            MR_Word Var_132;

            {
              Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (Name_128));
              MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (Arity_129));
            }
            {
              Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (Var_132));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_130));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word PredNameArity_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_154, (MR_Integer) 0)));
            MR_Integer Arity_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_154, (MR_Integer) 1)));
            MR_Word Var_157;
            MR_Word Var_159;

            {
              Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (Name_155));
              MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (Arity_156));
            }
            {
              Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (Var_159));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_157));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word PredNameArity_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_115, (MR_Integer) 0)));
            MR_Integer Arity_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_115, (MR_Integer) 1)));
            MR_Word Var_118;
            MR_Word Var_120;

            {
              Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (Name_116));
              MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (Arity_117));
            }
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (Var_120));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_118));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word UnusedArgsInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameArityPFMn_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnusedArgsInfo_31, (MR_Integer) 0)));
            MR_Word PredOrFunc_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_240, (MR_Integer) 2)));
            MR_Word Var_243;
            MR_Word Var_244;
            MR_Word Var_245;
            MR_Word Name_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_240, (MR_Integer) 0)));
            MR_Integer Arity_247 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_240, (MR_Integer) 1)));
            MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnusedArgsInfo_31, (MR_Integer) 1)));
            MR_Integer Var_239 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_240, (MR_Integer) 3)));

            {
              Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (PredOrFunc_241));
            }
            {
              Var_245 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_245, 0) = ((MR_Box) (Name_246));
              MR_hl_field(MR_mktag(0), Var_245, 1) = ((MR_Box) (Arity_247));
            }
            {
              Var_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_243, 0) = ((MR_Box) (Var_244));
              MR_hl_field(MR_mktag(0), Var_243, 1) = ((MR_Box) (Var_245));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_243));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word PredNameArityPFMn_32;
            MR_Word ExceptionsInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredOrFunc_40;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Name_102;
            MR_Integer Arity_103;
            MR_Word Var_35;
            MR_Integer Var_41;

            PredNameArityPFMn_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExceptionsInfo_34, (MR_Integer) 0)));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExceptionsInfo_34, (MR_Integer) 1)));
            Name_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_32, (MR_Integer) 0)));
            Arity_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_32, (MR_Integer) 1)));
            PredOrFunc_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_32, (MR_Integer) 2)));
            Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_32, (MR_Integer) 3)));
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (PredOrFunc_40));
            }
            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Name_102));
              MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Arity_103));
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Var_83));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_81));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word TrailingInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameArityPFMn_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), TrailingInfo_36, (MR_Integer) 0)));
            MR_Word PredOrFunc_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_231, (MR_Integer) 2)));
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Word Var_236;
            MR_Word Name_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_231, (MR_Integer) 0)));
            MR_Integer Arity_238 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_231, (MR_Integer) 1)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), TrailingInfo_36, (MR_Integer) 1)));
            MR_Integer Var_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_231, (MR_Integer) 3)));

            {
              Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (PredOrFunc_232));
            }
            {
              Var_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_236, 0) = ((MR_Box) (Name_237));
              MR_hl_field(MR_mktag(0), Var_236, 1) = ((MR_Box) (Arity_238));
            }
            {
              Var_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_234, 0) = ((MR_Box) (Var_235));
              MR_hl_field(MR_mktag(0), Var_234, 1) = ((MR_Box) (Var_236));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_234));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word MMTablingOnfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameArityPFMn_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), MMTablingOnfo_38, (MR_Integer) 0)));
            MR_Word PredOrFunc_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_134, (MR_Integer) 2)));
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Name_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_134, (MR_Integer) 0)));
            MR_Integer Arity_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_134, (MR_Integer) 1)));
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), MMTablingOnfo_38, (MR_Integer) 1)));
            MR_Integer Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityPFMn_134, (MR_Integer) 3)));

            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (PredOrFunc_135));
            }
            {
              Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Name_140));
              MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (Arity_141));
            }
            {
              Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Var_138));
              MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (Var_139));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_137));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word PredNameArity_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_160, (MR_Integer) 0)));
            MR_Integer Arity_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_160, (MR_Integer) 1)));
            MR_Word Var_163;
            MR_Word Var_165;

            {
              Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (Name_161));
              MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (Arity_162));
            }
            {
              Var_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (Var_165));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_163));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word PredNameArity_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_148, (MR_Integer) 0)));
            MR_Integer Arity_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_148, (MR_Integer) 1)));
            MR_Word Var_151;
            MR_Word Var_153;

            {
              Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (Name_149));
              MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (Arity_150));
            }
            {
              Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (Var_153));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_151));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word TabledInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameArityMPF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), TabledInfo_26, (MR_Integer) 1)));
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Name_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityMPF_28, (MR_Integer) 0)));
            MR_Integer Arity_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArityMPF_28, (MR_Integer) 1)));
            MR_Word MaybePredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArityMPF_28, (MR_Integer) 2)));
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), TabledInfo_26, (MR_Integer) 0)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), TabledInfo_26, (MR_Integer) 2)));
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), TabledInfo_26, (MR_Integer) 3)));

            {
              Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Name_99));
              MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (Arity_100));
            }
            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (MaybePredOrFunc_101));
              MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Var_85));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_84));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word FTInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Var_88;
            MR_Word Var_90;
            MR_Word PredNameArity_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), FTInfo_17, (MR_Integer) 0)));
            MR_Word Name_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_94, (MR_Integer) 0)));
            MR_Integer Arity_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_94, (MR_Integer) 1)));
            MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), FTInfo_17, (MR_Integer) 1)));

            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Name_95));
              MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Arity_96));
            }
            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (Var_90));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_88));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word PredNameArity_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_166, (MR_Integer) 0)));
            MR_Integer Arity_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_166, (MR_Integer) 1)));
            MR_Word Var_169;
            MR_Word Var_171;

            {
              Var_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (Name_167));
              MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (Arity_168));
            }
            {
              Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (Var_171));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_169));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word PredNameArity_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_172, (MR_Integer) 0)));
            MR_Integer Arity_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_172, (MR_Integer) 1)));
            MR_Word Var_175;
            MR_Word Var_177;

            {
              Var_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (Name_173));
              MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (Arity_174));
            }
            {
              Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (Var_177));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_175));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word PredNameArity_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_178, (MR_Integer) 0)));
            MR_Integer Arity_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_178, (MR_Integer) 1)));
            MR_Word Var_181;
            MR_Word Var_183;

            {
              Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (Name_179));
              MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (Arity_180));
            }
            {
              Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_181, 1) = ((MR_Box) (Var_183));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_181));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word TermInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameModesPF_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermInfo_54, (MR_Integer) 0)));
            MR_Word Modes_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_220, (MR_Integer) 1)));
            MR_Integer Var_222;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Name_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_220, (MR_Integer) 0)));
            MR_Integer Arity_227;
            MR_Word PredOrFunc_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_220, (MR_Integer) 2)));
            MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermInfo_54, (MR_Integer) 1)));
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermInfo_54, (MR_Integer) 2)));

            Var_222 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_221);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_228, &Arity_227, Var_222);
            {
              Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_224, 0) = ((MR_Box) (PredOrFunc_228));
            }
            {
              Var_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_225, 0) = ((MR_Box) (Name_226));
              MR_hl_field(MR_mktag(0), Var_225, 1) = ((MR_Box) (Arity_227));
            }
            {
              Var_223 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_223, 0) = ((MR_Box) (Var_224));
              MR_hl_field(MR_mktag(0), Var_223, 1) = ((MR_Box) (Var_225));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_223));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Term2Info_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameModesPF_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term2Info_57, (MR_Integer) 0)));
            MR_Word Modes_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_210, (MR_Integer) 1)));
            MR_Integer Var_212;
            MR_Word Var_213;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Word Name_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_210, (MR_Integer) 0)));
            MR_Integer Arity_217;
            MR_Word PredOrFunc_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_210, (MR_Integer) 2)));
            MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term2Info_57, (MR_Integer) 1)));
            MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term2Info_57, (MR_Integer) 2)));
            MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term2Info_57, (MR_Integer) 3)));

            Var_212 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_211);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_218, &Arity_217, Var_212);
            {
              Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (PredOrFunc_218));
            }
            {
              Var_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (Name_216));
              MR_hl_field(MR_mktag(0), Var_215, 1) = ((MR_Box) (Arity_217));
            }
            {
              Var_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_213, 0) = ((MR_Box) (Var_214));
              MR_hl_field(MR_mktag(0), Var_213, 1) = ((MR_Box) (Var_215));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_213));
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word PredNameArity_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_204, (MR_Integer) 0)));
            MR_Integer Arity_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_204, (MR_Integer) 1)));
            MR_Word Var_207;
            MR_Word Var_209;

            {
              Var_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_209, 0) = ((MR_Box) (Name_205));
              MR_hl_field(MR_mktag(0), Var_209, 1) = ((MR_Box) (Arity_206));
            }
            {
              Var_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) (Var_209));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_207));
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word PredNameArity_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_121, (MR_Integer) 0)));
            MR_Integer Arity_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_121, (MR_Integer) 1)));
            MR_Word Var_124;
            MR_Word Var_126;

            {
              Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Name_122));
              MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (Arity_123));
            }
            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (Var_126));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_124));
            }
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word PredNameArity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_14, (MR_Integer) 0)));
            MR_Integer Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_14, (MR_Integer) 1)));
            MR_Word Var_91;
            MR_Word Var_93;

            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Name_15));
              MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Arity_16));
            }
            {
              Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Var_93));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_91));
            }
          }
          break;
        case (MR_Integer) 26:
          {
            MR_Word PredNameArity_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameArity_142, (MR_Integer) 0)));
            MR_Integer Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredNameArity_142, (MR_Integer) 1)));
            MR_Word Var_145;
            MR_Word Var_147;

            {
              Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (Name_143));
              MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (Arity_144));
            }
            {
              Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (Var_147));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_145));
            }
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word SharingInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameModesPF_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), SharingInfo_61, (MR_Integer) 0)));
            MR_Word Modes_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_194, (MR_Integer) 1)));
            MR_Integer Var_196;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Name_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_194, (MR_Integer) 0)));
            MR_Integer Arity_201;
            MR_Word PredOrFunc_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_194, (MR_Integer) 2)));
            MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), SharingInfo_61, (MR_Integer) 1)));
            MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), SharingInfo_61, (MR_Integer) 2)));
            MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), SharingInfo_61, (MR_Integer) 3)));

            Var_196 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_195);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_202, &Arity_201, Var_196);
            {
              Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (PredOrFunc_202));
            }
            {
              Var_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) (Name_200));
              MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) (Arity_201));
            }
            {
              Var_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (Var_198));
              MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (Var_199));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_197));
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word ReuseInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_3, (MR_Integer) 1)));
            MR_Word PredNameModesPF_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseInfo_65, (MR_Integer) 0)));
            MR_Word Modes_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_184, (MR_Integer) 1)));
            MR_Integer Var_186;
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Word Name_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_184, (MR_Integer) 0)));
            MR_Integer Arity_191;
            MR_Word PredOrFunc_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredNameModesPF_184, (MR_Integer) 2)));
            MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseInfo_65, (MR_Integer) 1)));
            MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseInfo_65, (MR_Integer) 2)));
            MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseInfo_65, (MR_Integer) 3)));

            Var_186 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_185);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_192, &Arity_191, Var_186);
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (PredOrFunc_192));
            }
            {
              Var_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (Name_190));
              MR_hl_field(MR_mktag(0), Var_189, 1) = ((MR_Box) (Arity_191));
            }
            {
              Var_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (Var_188));
              MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) (Var_189));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_187));
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
    MR_Word conv1_Methods_4;

    conv1_Methods_4 = recompilation__version__split_class_method_types_and_modes_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_Methods_4));
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

    conv0_LambdaHeadVar__2_60 = recompilation__version__IntroducedFrom__func__add_gathered_item__445__1_1_f_0(((MR_Word) wrapper_arg_1));
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
    MR_Word TypeInfo_99_99;
    MR_Word ItemType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemId_7, (MR_Integer) 0)));
    MR_Word ItemName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemId_7, (MR_Integer) 1)));
    MR_Word SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemName_11, (MR_Integer) 0)));
    MR_Integer Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemName_11, (MR_Integer) 1)));
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
      NameArity_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NameArity_15, 0) = ((MR_Box) (Name_14));
      MR_hl_field(MR_mktag(0), NameArity_15, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = ((((MR_tag((MR_Word) Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ItemPredDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
      PredName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 0)));
      PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 1)));
      TypesAndModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 2)));
      WithType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 3)));
      WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 4)));
      MaybeDetism_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 5)));
      Origin_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 6)));
      TypeVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 7)));
      InstVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 8)));
      ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 9)));
      Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 10)));
      Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 11)));
      Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 12)));
      SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_16, (MR_Integer) 13)));
      parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_19, &Types_31, &MaybeModes_32);
      succeeded = ((MR_tag((MR_Word) MaybeModes_32)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeModes_32, (MR_Integer) 0)));
        {
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) Modes_33)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_33, (MR_Integer) 0)));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_33, (MR_Integer) 1)));
          }
        }
        if (!(succeeded))
        {
          MR_Word Var_36;

          succeeded = ((MR_tag((MR_Word) WithInst_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_21, (MR_Integer) 0)));
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

      TypesWithoutModes_37 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &recompilation__version_scalar_common_1[10], Types_31);
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &EmptyInstVarSet_39);
      {
        PredItemPredDecl_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 0) = ((MR_Box) (PredName_17));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 1) = ((MR_Box) (PredOrFunc_18));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 2) = ((MR_Box) (TypesWithoutModes_37));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 3) = ((MR_Box) (WithType_20));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 6) = ((MR_Box) (Origin_23));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 7) = ((MR_Box) (TypeVarSet_24));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 8) = ((MR_Box) (EmptyInstVarSet_39));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 9) = ((MR_Box) (ExistQVars_26));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 10) = ((MR_Box) (Purity_27));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 11) = ((MR_Box) (Constraints_28));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 12) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), PredItemPredDecl_40, 13) = ((MR_Box) (SeqNum_30));
      }
      {
        PredItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PredItem_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), PredItem_41, 1) = ((MR_Box) (PredItemPredDecl_40));
      }
      if ((WithInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybePredOrFunc_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePredOrFunc_43, 0) = ((MR_Box) (PredOrFunc_18));
        }
      else
        MaybePredOrFunc_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        ModeItemModeDecl_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
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
        ModeItem_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeItem_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ModeItem_45, 1) = ((MR_Box) (ModeItemModeDecl_44));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Section_8));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (PredItem_41));
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Section_8));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ModeItem_45));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AddedItems_46, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), AddedItems_46, 1) = ((MR_Box) (Var_64));
      }
    }
    else
    {
      MR_Word ItemTypeClass_47;
      MR_Word Methods0_48;
      MR_Word Var_67;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Integer Var_83;

      succeeded = ((((MR_tag((MR_Word) Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        ItemTypeClass_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1)));
        Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 0)));
        Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 1)));
        Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 2)));
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 3)));
        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 4)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 5)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 6)));
        Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 7)));
        succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Methods0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
        MR_Word MethodsList_49;
        MR_Word Methods_50;
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
        MR_Word Var_88;

        MethodsList_49 = mercury__list__map_2_f_0(TypeCtorInfo_95_95, (MR_Word) &recompilation__version_scalar_common_2[4], (MR_Word) &recompilation__version_scalar_common_1[11], Methods0_48);
        mercury__list__condense_2_p_0(TypeCtorInfo_95_95, MethodsList_49, &Methods_50);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Methods_50));
        }
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 0)));
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 1)));
        Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 2)));
        Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 3)));
        Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 4)));
        Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 5)));
        Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 6)));
        Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeClass_47, (MR_Integer) 7)));
        {
          NewItemTypeClass_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
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
          NewItem_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NewItem_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), NewItem_52, 1) = ((MR_Box) (NewItemTypeClass_51));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Section_8));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (NewItem_52));
        }
        {
          AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AddedItems_46, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), AddedItems_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word Var_72;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Section_8));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Item_6));
        }
        {
          AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AddedItems_46, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), AddedItems_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    TypeInfo_99_99 = (MR_Word) &recompilation__version_scalar_common_1[3];
    conv2_IdMap0_53 = recompilation__extract_ids_2_f_0(TypeInfo_99_99, STATE_VARIABLE_GatheredItems_0_56, ItemType_10);
    IdMap0_53 = ((MR_Word) conv2_IdMap0_53);
    succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], IdMap0_53, ((MR_Box) (NameArity_15)), &conv3_OldItems_54);
    if (succeeded)
    {
      OldItems_54 = ((MR_Word) conv3_OldItems_54);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_74;

      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) &recompilation__version_scalar_common_1[2], AddedItems_46, OldItems_54);
      mercury__map__det_update_4_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (NameArity_15)), ((MR_Box) (Var_74)), IdMap0_53, &IdMap_55);
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (NameArity_15)), ((MR_Box) (AddedItems_46)), IdMap0_53, &IdMap_55);
    }
    recompilation__update_ids_4_p_0(TypeInfo_99_99, ItemType_10, ((MR_Box) (IdMap_55)), STATE_VARIABLE_GatheredItems_0_56, STATE_VARIABLE_GatheredItems_57);
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

    conv0_LambdaHeadVar__3_19 = recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__192__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (recompilation__version__compute_instance_version_numbers_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (SourceFileTime_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OldInstanceItemMap_8));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (OldInstanceVersionNumbers_9));
    }
    *NewInstanceVersionNumbers_10 = mercury__map__map_values_2_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, Var_16, CurInstanceItemMap_7);
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__version____Unify____gathered_item_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____gathered_item_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = recompilation__version____Unify____gathered_item_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____gathered_item_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = recompilation__version____Unify____gathered_items_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____gathered_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = recompilation__version____Unify____instance_item_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____instance_item_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = recompilation__version____Unify____item_version_numbers_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____item_version_numbers_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = recompilation__version____Unify____maybe_changed_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = recompilation__version____Unify____maybe_pred_or_func_id_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    recompilation__version____Compare____maybe_pred_or_func_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

/* :- end_module recompilation.version. */
