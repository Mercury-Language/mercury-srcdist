/*
** Automatically generated from `recompilation.version.m'
** by the Mercury compiler,
** version rotd-2025-01-09
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


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s {
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9;
  MR_Integer recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_34;
  MR_bool recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded;
  jmp_buf recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_50_50;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decls_17;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decl_18;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndMaybeModes_21;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredFormArity_31;
  MR_Integer recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity0_32;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_36;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_37;
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_52;
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_36;
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Decl_18;
};

struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s {
  MR_bool recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded;
  MR_Word recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0___TVarSet_29;
  MR_Word recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__Types2ToTypes1Subst_31;
  jmp_buf recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__commit_0;
  MR_Word recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__VarInItem1_51;
  MR_Word recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__VarInItem2_52;
  MR_Word recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__SubstTerm_53;
  MR_Box recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__conv1_VarInItem2_52;
  MR_Box recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__conv0_SubstTerm_53;
};

struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s {
  MR_bool recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded;
  MR_Word recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_21;
  MR_Word recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_23;
  jmp_buf recompilation__version__is_type_subst_changed_5_p_0_env_0__commit_0;
  MR_Word recompilation__version__is_type_subst_changed_5_p_0_env_0__VarInItem1_39;
  MR_Word recompilation__version__is_type_subst_changed_5_p_0_env_0__VarInItem2_40;
  MR_Word recompilation__version__is_type_subst_changed_5_p_0_env_0__SubstTerm_41;
  MR_Box recompilation__version__is_type_subst_changed_5_p_0_env_0__conv3_VarInItem2_40;
  MR_Box recompilation__version__is_type_subst_changed_5_p_0_env_0__conv2_SubstTerm_41;
};

struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s {
  MR_bool recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded;
  MR_Word recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_34;
  MR_Word recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_36;
  jmp_buf recompilation__version__is_any_type_subst_changed_5_p_0_env_0__commit_0;
  MR_Word recompilation__version__is_any_type_subst_changed_5_p_0_env_0__VarInItem1_47;
  MR_Word recompilation__version__is_any_type_subst_changed_5_p_0_env_0__VarInItem2_48;
  MR_Word recompilation__version__is_any_type_subst_changed_5_p_0_env_0__SubstTerm_49;
  MR_Box recompilation__version__is_any_type_subst_changed_5_p_0_env_0__conv3_VarInItem2_48;
  MR_Box recompilation__version__is_any_type_subst_changed_5_p_0_env_0__conv2_SubstTerm_49;
};

struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s {
  MR_bool recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded;
  MR_Word recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_35;
  MR_Word recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_37;
  jmp_buf recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__commit_0;
  MR_Word recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__VarInItem1_43;
  MR_Word recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__VarInItem2_44;
  MR_Word recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__SubstTerm_45;
  MR_Box recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__conv2_VarInItem2_44;
  MR_Box recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__conv1_SubstTerm_45;
};


static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__cord__pti_cord_1__plain_recompilation__version__type_ctor_info_decl_pragma_record_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_decl_pragma_record_0_0[3];

static const MR_DuArgLocn recompilation__version__recompilation__version__field_locns_decl_pragma_record_0_0[3];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_decl_pragma_record_0_0;

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_decl_pragma_record_0_0[1];

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_decl_pragma_record_0[1];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_decl_pragma_record_0[1];

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_decl_pragma_record_0[1];

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_items_0_0[8];

static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_items_0_0[8];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_items_0_0;

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_items_0_0[1];

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_items_0[1];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_gathered_items_0[1];

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_gathered_items_0[1];

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2];

static const MR_DuArgLocn recompilation__version__recompilation__version__field_locns_item_version_numbers_result_0_0[2];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0;

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1];

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1;

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1];

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2];

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0[2];

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0[2];

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__2075__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__2058__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_String * LambdaHeadVar__2_24);

static void MR_CALL 
recompilation__version__IntroducedFrom__pred__is_type_subst_changed__1745__1_3_p_0(
  MR_Word LambdaHeadVar__1_24,
  MR_Word * LambdaHeadVar__2_25,
  MR_Word * LambdaHeadVar__3_26);

static void MR_CALL 
recompilation__version__IntroducedFrom__pred__is_var_or_ground_constraint_changed__1704__1_2_p_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Word * LambdaHeadVar__2_29);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int2__492__1_2_p_0(
  MR_Word ImpModeDefns_30,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int2__491__1_2_p_0(
  MR_Word ImpInstDefns_28,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int1__430__1_2_p_0(
  MR_Word ImpModeDefns_39,
  MR_Word HeadVar__2_56);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int1__429__1_2_p_0(
  MR_Word ImpInstDefns_37,
  MR_Word HeadVar__2_52);

static void MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_module_item_version_numbers__2032__1_3_p_0(
  MR_Word LambdaHeadVar__1_24,
  MR_Word LambdaHeadVar__2_25,
  MR_Word * LambdaHeadVar__3_26);

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__module_item_version_numbers_to_string__1914__1_2_p_0(
  MR_Word HeadVar__1_46,
  MR_String * HeadVar__2_47);

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
recompilation__version____Compare____item_version_numbers_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0(
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
recompilation__version____Compare____gathered_item_multi_map_na_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_na_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_in_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_in_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__version____Compare____decl_pragma_record_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__version____Unify____decl_pragma_record_0_0(
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

static MR_String MR_CALL 
recompilation__version__recomp_item_name_version_number_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
recompilation__version__name_arity_version_number_to_string_1_f_0(
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
  MR_Word STATE_VARIABLE_ClassItems_0_34,
  MR_Word * STATE_VARIABLE_ClassItems_35);

static void MR_CALL 
recompilation__version__apply_decl_pragma_record_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__version__apply_decl_pragma_record_7_p_0(
  MR_Word DeclPragma_8,
  MR_Word STATE_VARIABLE_PredMap_0_20,
  MR_Word * STATE_VARIABLE_PredMap_21,
  MR_Word STATE_VARIABLE_FuncMap_0_22,
  MR_Word * STATE_VARIABLE_FuncMap_23,
  MR_Word STATE_VARIABLE_TypeClassMap_0_24,
  MR_Word * STATE_VARIABLE_TypeClassMap_25);

static void MR_CALL 
recompilation__version__gather_in_type_repn_4_p_0(
  MR_Word Section_5,
  MR_Word ItemTypeRepn_6,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_16,
  MR_Word * STATE_VARIABLE_TypeDefnMap_17);

static void MR_CALL 
recompilation__version__gather_in_decl_marker_4_p_0(
  MR_Word Section_5,
  MR_Word DeclMarker_6,
  MR_Word STATE_VARIABLE_DeclPragmas_0_12,
  MR_Word * STATE_VARIABLE_DeclPragmas_13);

static void MR_CALL 
recompilation__version__gather_in_decl_pragma_4_p_0(
  MR_Word Section_5,
  MR_Word DeclPragma_6,
  MR_Word STATE_VARIABLE_DeclPragmas_0_12,
  MR_Word * STATE_VARIABLE_DeclPragmas_13);

static void MR_CALL 
recompilation__version__gather_decl_pragma_for_what_pf_id_2_p_0(
  MR_Word DeclPragma_3,
  MR_Word * MaybePredOrFuncId_4);

static void MR_CALL 
recompilation__version__gather_in_instance_4_p_0(
  MR_Word Section_5,
  MR_Word ItemInstance_6,
  MR_Word STATE_VARIABLE_InstanceMap_0_19,
  MR_Word * STATE_VARIABLE_InstanceMap_20);

static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
  MR_Word Decl0_3);

static MR_Box MR_CALL 
recompilation__version__gather_in_typeclass_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__version__gather_in_typeclass_4_p_0(
  MR_Word Section_5,
  MR_Word ItemTypeClass_6,
  MR_Word STATE_VARIABLE_TypeClassMap_0_23,
  MR_Word * STATE_VARIABLE_TypeClassMap_24);

static void MR_CALL 
recompilation__version__gather_in_mode_decl_6_p_0(
  MR_Word Section_7,
  MR_Word ItemModeDecl_8,
  MR_Word STATE_VARIABLE_PredMap_0_24,
  MR_Word * STATE_VARIABLE_PredMap_25,
  MR_Word STATE_VARIABLE_FuncMap_0_26,
  MR_Word * STATE_VARIABLE_FuncMap_27);

static void MR_CALL 
recompilation__version__gather_in_pred_decl_6_p_0(
  MR_Word Section_7,
  MR_Word ItemPredDecl_8,
  MR_Word STATE_VARIABLE_PredMap_0_42,
  MR_Word * STATE_VARIABLE_PredMap_43,
  MR_Word STATE_VARIABLE_FuncMap_0_44,
  MR_Word * STATE_VARIABLE_FuncMap_45);

static void MR_CALL 
recompilation__version__gather_in_mode_defn_4_p_0(
  MR_Word Section_5,
  MR_Word ItemModeDefn_6,
  MR_Word STATE_VARIABLE_ModeMap_0_16,
  MR_Word * STATE_VARIABLE_ModeMap_17);

static void MR_CALL 
recompilation__version__gather_in_inst_defn_4_p_0(
  MR_Word Section_5,
  MR_Word ItemInstDefn_6,
  MR_Word STATE_VARIABLE_InstMap_0_17,
  MR_Word * STATE_VARIABLE_InstMap_18);

static void MR_CALL 
recompilation__version__gather_in_type_defn_6_p_0(
  MR_Word Section_7,
  MR_Word ItemTypeDefn_8,
  MR_Word STATE_VARIABLE_TypeMap_0_30,
  MR_Word * STATE_VARIABLE_TypeMap_31,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_32,
  MR_Word * STATE_VARIABLE_TypeDefnMap_33);

static void MR_CALL 
recompilation__version__compute_item_name_version_map_entry_6_p_0(
  MR_Word SourceFileTime_7,
  MR_Word OldGatheredMap_8,
  MR_Word OldVersionMap_9,
  MR_Word ItemName_10,
  MR_Word CurItems_11,
  MR_Word * TimeStamp_12);

static void MR_CALL 
recompilation__version__compute_name_arity_version_map_entry_6_p_0(
  MR_Word SourceFileTime_7,
  MR_Word OldGatheredMap_8,
  MR_Word OldVersionMap_9,
  MR_Word NameArity_10,
  MR_Word CurItems_11,
  MR_Word * TimeStamp_12);

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

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0(
  MR_Word TVarSet1_11,
  MR_Word ExistQVars1_12,
  MR_Word TypesAndMaybeModes1_13,
  MR_Word MaybeWithType1_14,
  MR_Word Constraints1_15,
  MR_Word TVarSet2_16,
  MR_Word ExistQVars2_17,
  MR_Word TypesAndMaybeModes2_18,
  MR_Word MaybeWithType2_19,
  MR_Word Constraints2_20);

static void MR_CALL 
recompilation__version__is_gen_pragma_changed_3_p_0(
  MR_Word GenPragma1_4,
  MR_Word GenPragma2_5,
  MR_Word * Changed_6);

static void MR_CALL 
recompilation__version__is_impl_pragma_changed_3_p_0(
  MR_Word ImplPragma1_4,
  MR_Word ImplPragma2_5,
  MR_Word * Changed_6);

static void MR_CALL 
recompilation__version__is_decl_pragma_changed_3_p_0(
  MR_Word DeclPragma1_4,
  MR_Word DeclPragma2_5,
  MR_Word * Changed_6);

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0(
  MR_Word TVarSet1_6,
  MR_Word TVarSet2_7,
  MR_Word TypeSubst1_8,
  MR_Word TypeSubst2_9,
  MR_Word * Changed_10);

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0(
  MR_Word TVarSet1_1,
  MR_Word TVarSet2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0(
  MR_Word TVarSet1_1,
  MR_Word TVarSet2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recompilation__version__parse_module_item_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__parse_module_item_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
recompilation__version__module_item_version_numbers_to_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
recompilation__version__module_item_version_numbers_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
recompilation__version__item_type_and_versions_to_string_na_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
recompilation__version__item_type_and_versions_to_string_na_2_f_0(
  MR_Word ItemType_4,
  MR_Word VersionMap_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0(
  MR_Word ParseTreeInt2_3,
  MR_Word * GatheredItems_4);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0(
  MR_Word ParseTreeInt1_3,
  MR_Word * GatheredItems_4);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0(
  MR_Word ParseTreeInt0_3,
  MR_Word * GatheredItems_4);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0(
  MR_Word MaybeOldVersionNumbersGatherResults_5,
  MR_Word CurSourceFileTime_6,
  MR_Word CurGatheredItems_7,
  MR_Word * NewVersionNumbers_8);

static MR_bool MR_CALL 
recompilation__version____Unify____decl_pragma_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____decl_pragma_record_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_in_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_in_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_na_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_na_0_0_10001(
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
recompilation__version____Unify____item_version_numbers_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0_10001(
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


static /* final */ const MR_Box recompilation__version_scalar_common_1[52][2];

static /* final */ const MR_Box recompilation__version_scalar_common_2[23][3];

static /* final */ const MR_Box recompilation__version_scalar_common_3[42][4];

static /* final */ const MR_Box recompilation__version_scalar_common_4[1][1];

static /* final */ const MR_Box recompilation__version_scalar_common_5[5][9];

static /* final */ const MR_Box recompilation__version_scalar_common_6[7][7];

static /* final */ const MR_Box recompilation__version_scalar_common_7[2][10];

static /* final */ const MR_Box recompilation__version_scalar_common_8[10][5];

static /* final */ const MR_Box recompilation__version_scalar_common_9[5][6];




static /* final */ const MR_Box recompilation__version_scalar_common_1[52][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[3]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[4]))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[13]))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[8]))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[8]))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[10]))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[28]))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[9]))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  32 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row  33 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0))
  },
  /* row  34 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row  35 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0))
  },
  /* row  36 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_domain_0))
  },
  /* row  37 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_sharing_domain_0))
  },
  /* row  38 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  39 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[38]))
  },
  /* row  40 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[9]))
  },
  /* row  41 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0))
  },
  /* row  42 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[41]))
  },
  /* row  43 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_backend_0))
  },
  /* row  44 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0))
  },
  /* row  45 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0))
  },
  /* row  46 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid item type version numbers."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__version_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &recompilation__version_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error in item version number."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__version_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &recompilation__version_scalar_common_1[47])))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_2[23][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation__version_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__version_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[14])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_7[0])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_7[0])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[2])),
    ((MR_Box) (recompilation__version__item_type_and_versions_to_string_na_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[3])),
    ((MR_Box) (recompilation__version__module_item_version_numbers_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[4])),
    ((MR_Box) (recompilation__version__module_item_version_numbers_to_string_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[5])),
    ((MR_Box) (recompilation__version__parse_module_item_version_numbers_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[0])),
    ((MR_Box) (recompilation__version__parse_module_item_version_numbers_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[6])),
    ((MR_Box) (recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[1])),
    ((MR_Box) (recompilation__version__is_any_type_subst_changed_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[1])),
    ((MR_Box) (recompilation__version__is_type_subst_changed_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[7])),
    ((MR_Box) (recompilation__version__gather_in_typeclass_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[8])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[9])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_3[42][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&recompilation__version_scalar_common_1[17])),
    ((MR_Box) (&recompilation__version_scalar_common_1[17]))
  },
  /* row   1 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[1])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[4])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[4])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[5])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  11 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  12 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[1])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  13 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  14 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_14)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  15 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  16 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[4])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  17 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[4])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  18 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[5])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int0_2_p_0_18)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  19 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[1])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[4])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[4])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[5])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[6])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  30 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_14)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  31 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[0])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[1])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[3])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_6[6])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  38 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[2])),
    ((MR_Box) (recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[2])),
    ((MR_Box) (recompilation__version__class_methods_are_unchanged_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[3])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[21]))
  },
  /* row  41 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_9[4])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[22]))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box recompilation__version_scalar_common_5[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_6[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&recompilation__version__cord__pti_cord_1__plain_recompilation__version__type_ctor_info_decl_pragma_record_0)),
    ((MR_Box) (&recompilation__version__cord__pti_cord_1__plain_recompilation__version__type_ctor_info_decl_pragma_record_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0)),
    ((MR_Box) (&recompilation__version__cord__pti_cord_1__plain_recompilation__version__type_ctor_info_decl_pragma_record_0)),
    ((MR_Box) (&recompilation__version__cord__pti_cord_1__plain_recompilation__version__type_ctor_info_decl_pragma_record_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_7[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_8[10][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_9[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&recompilation__version__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__version__pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__cord__pti_cord_1__plain_recompilation__version__type_ctor_info_decl_pragma_record_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&recompilation__version__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&recompilation__version__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__item_types__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
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

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&recompilation__version__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_decl_pragma_record_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_DuArgLocn recompilation__version__recompilation__version__field_locns_decl_pragma_record_0_0[3] = {
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

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_decl_pragma_record_0_0 = {
  (MR_String) "decl_pragma_record",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__version__recompilation__version__field_types_decl_pragma_record_0_0,
  NULL,
  recompilation__version__recompilation__version__field_locns_decl_pragma_record_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_decl_pragma_record_0_0[1] = { &recompilation__version__recompilation__version__du_functor_desc_decl_pragma_record_0_0 };

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_decl_pragma_record_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_decl_pragma_record_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_decl_pragma_record_0[1] = { &recompilation__version__recompilation__version__du_functor_desc_decl_pragma_record_0_0 };

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_decl_pragma_record_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____decl_pragma_record_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____decl_pragma_record_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "decl_pragma_record",
  { recompilation__version__recompilation__version__du_name_ordered_decl_pragma_record_0 },
  { recompilation__version__recompilation__version__du_ptag_ordered_decl_pragma_record_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__version__recompilation__version__functor_number_map_decl_pragma_record_0,

};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0),
    (MR_TypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_multi_map_in_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_item_multi_map_in_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_multi_map_in_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_multi_map_in",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_TypeInfo) (&recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_multi_map_na_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_item_multi_map_na_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_multi_map_na_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_multi_map_na",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_items_0_0[8] = {
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0list__ti_list_1pair__ti_pair_2parse_tree__prog_parse_tree__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_items_0_0[8] = {
  (MR_String) "gi_type_names",
  (MR_String) "gi_type_defns",
  (MR_String) "gi_modes",
  (MR_String) "gi_insts",
  (MR_String) "gi_typeclasses",
  (MR_String) "gi_instances",
  (MR_String) "gi_predicates",
  (MR_String) "gi_functions"
};

static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_items_0_0 = {
  (MR_String) "gathered_items",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__version__recompilation__version__field_types_gathered_items_0_0,
  recompilation__version__recompilation__version__field_names_gathered_items_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_items_0_0[1] = { &recompilation__version__recompilation__version__du_functor_desc_gathered_items_0_0 };

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_gathered_items_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_gathered_items_0[1] = { &recompilation__version__recompilation__version__du_functor_desc_gathered_items_0_0 };

static const MR_Integer recompilation__version__recompilation__version__functor_number_map_gathered_items_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_items_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____gathered_items_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_items_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_items",
  { recompilation__version__recompilation__version__du_name_ordered_gathered_items_0 },
  { recompilation__version__recompilation__version__du_ptag_ordered_gathered_items_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__version__recompilation__version__functor_number_map_gathered_items_0,

};

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_type_0),
  (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0)
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

static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1] = { (MR_PseudoTypeInfo) (&recompilation__version__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0) };

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

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1] = { &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0 };

static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1] = { &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1 };

static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____item_version_numbers_result_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____item_version_numbers_result_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "item_version_numbers_result",
  { recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0 },
  { recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0,

};

const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_maybe_pred_or_func_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_pred_or_func_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_arity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__2075__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_57, HeadVar__2_58);
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__2058__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_String * LambdaHeadVar__2_24)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_23)) == (MR_Integer) 0);
  MR_Word Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      *LambdaHeadVar__2_24 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version__IntroducedFrom__pred__is_type_subst_changed__1745__1_3_p_0(
  MR_Word LambdaHeadVar__1_24,
  MR_Word * LambdaHeadVar__2_25,
  MR_Word * LambdaHeadVar__3_26)
{
  *LambdaHeadVar__2_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, (MR_Integer) 0))));
  *LambdaHeadVar__3_26 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, (MR_Integer) 1))));
}

static void MR_CALL 
recompilation__version__IntroducedFrom__pred__is_var_or_ground_constraint_changed__1704__1_2_p_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Word * LambdaHeadVar__2_29)
{
  if (((MR_tag((MR_Word) LambdaHeadVar__1_28)) == (MR_Integer) 1))
  {
    MR_Word GroundType_22 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_28, (MR_Integer) 0))));

    *LambdaHeadVar__2_29 = (MR_Word) (GroundType_22);
  }
  else
  {
    MR_Word TVar_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_28, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_29 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TVar_20));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int2__492__1_2_p_0(
  MR_Word ImpModeDefns_30,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[7]), ((MR_Box) (ImpModeDefns_30)), ((MR_Box) (HeadVar__2_46)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int2__491__1_2_p_0(
  MR_Word ImpInstDefns_28,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[6]), ((MR_Box) (ImpInstDefns_28)), ((MR_Box) (HeadVar__2_42)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int1__430__1_2_p_0(
  MR_Word ImpModeDefns_39,
  MR_Word HeadVar__2_56)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[7]), ((MR_Box) (ImpModeDefns_39)), ((MR_Box) (HeadVar__2_56)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int1__429__1_2_p_0(
  MR_Word ImpInstDefns_37,
  MR_Word HeadVar__2_52)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[6]), ((MR_Box) (ImpInstDefns_37)), ((MR_Box) (HeadVar__2_52)));
  return succeeded;
}

static void MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_module_item_version_numbers__2032__1_3_p_0(
  MR_Word LambdaHeadVar__1_24,
  MR_Word LambdaHeadVar__2_25,
  MR_Word * LambdaHeadVar__3_26)
{
  if (((MR_tag((MR_Word) LambdaHeadVar__1_24)) == (MR_Integer) 1))
  {
    MR_Word InstancesVNs_16 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_24, (MR_Integer) 0))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
    MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_93));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_94));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 5) = ((MR_Box) (InstancesVNs_16));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_98));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_99));
    }
  }
  else
  {
    MR_Word ItemType_14 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_24, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ItemVNs_15 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, (MR_Integer) 1))));

    switch (ItemType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 9:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.parse_module_item_version_numbers\'/2", (MR_String) "recomp_foreign_proc");
          return;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
          MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
          MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_85));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_86));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_87));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_88));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_89));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_90));
            MR_hl_field(0, base, 7) = ((MR_Box) (ItemVNs_15));
          }
        }
        break;
      case (MR_Integer) 5:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.parse_module_item_version_numbers\'/2", (MR_String) "recomp_functor");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
          MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));
          MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
            MR_hl_field(0, base, 2) = ((MR_Box) (ItemVNs_15));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_56));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_57));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_58));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_59));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
          MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
          MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
          MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_61));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_62));
            MR_hl_field(0, base, 3) = ((MR_Box) (ItemVNs_15));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_64));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_65));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_66));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_67));
          }
        }
        break;
      case (MR_Integer) 8:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.parse_module_item_version_numbers\'/2", (MR_String) "recomp_mutable");
          return;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
          MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_77));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_78));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_79));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_80));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_81));
            MR_hl_field(0, base, 6) = ((MR_Box) (ItemVNs_15));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_83));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
            MR_hl_field(0, base, 1) = ((MR_Box) (ItemVNs_15));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_48));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_51));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 4))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));
          MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (ItemVNs_15));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 0))));
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 1))));
          MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 2))));
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 3))));
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 5))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 6))));
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_25, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__3_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_69));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_71));
            MR_hl_field(0, base, 4) = ((MR_Box) (ItemVNs_15));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_73));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_74));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_75));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__module_item_version_numbers_to_string__1914__1_2_p_0(
  MR_Word HeadVar__1_46,
  MR_String * HeadVar__2_47)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__2_47;

  succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_46, &conv0_HeadVar__2_47);
  if (succeeded)
  {
    *HeadVar__2_47 = ((MR_String) (conv0_HeadVar__2_47));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_16 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_17 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_16 < Var_17);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_16 > Var_17);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_11_11 = (MR_Word) (&recompilation__version_scalar_common_2[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
    }
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&recompilation__version_scalar_common_2[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&recompilation__version_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&recompilation__version_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_na_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_na_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_in_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_in_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____decl_pragma_record_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_item____Compare____item_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____decl_pragma_record_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&recompilation__version_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = parse_tree__prog_item____Unify____item_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version__parse_item_version_number_3_p_0(
  MR_Word ParseName_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word SymName_13;
  MR_Integer Arity_14;
  MR_Word VersionNumber_15;
  MR_Word TypeCtorInfo_41_41;
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
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ItemNameArityTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VersionNumberTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ItemNameArityTerm_7)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_23 = ((MR_Word) ((MR_hl_field(0, ItemNameArityTerm_7, (MR_Integer) 0))));
                Var_25 = ((MR_Word) ((MR_hl_field(0, ItemNameArityTerm_7, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_24, (MR_String) "/") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NameTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
                      Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
                      succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArityTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
                        Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
                        succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseName_4, (MR_Integer) 1))));
                          succeeded = func_0(((MR_Box) (ParseName_4)), ((MR_Box) (NameTerm_10)), &conv1_SymName_13);
                          if (succeeded)
                          {
                            SymName_13 = ((MR_Word) (conv1_SymName_13));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeCtorInfo_41_41 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_41_41, ArityTerm_11, &Arity_14);
                            if (succeeded)
                              succeeded = recompilation__item_types__parse_version_number_term_2_p_0(TypeCtorInfo_41_41, VersionNumberTerm_8, &VersionNumber_15);
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
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (SymName_13));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (Arity_14));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (VersionNumber_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
    }
  }
  else
  {
    MR_Word Spec_17;
    MR_Word Var_38;
    MR_Word Var_39;

    Var_38 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.version.parse_item_version_number\'/3"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Var_38));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (MR_mkword(1, &recompilation__version_scalar_common_1[51])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    }
  }
}

static void MR_CALL 
recompilation__version__parse_key_version_number_3_p_0(
  MR_Word ParseName_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String Name_13;
  MR_Integer Arity_14;
  MR_Word VersionNumber_15;
  MR_Word TypeCtorInfo_41_41;
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
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ItemNameArityTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VersionNumberTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ItemNameArityTerm_7)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_23 = ((MR_Word) ((MR_hl_field(0, ItemNameArityTerm_7, (MR_Integer) 0))));
                Var_25 = ((MR_Word) ((MR_hl_field(0, ItemNameArityTerm_7, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_24, (MR_String) "/") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NameTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
                      Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
                      succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArityTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
                        Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
                        succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseName_4, (MR_Integer) 1))));
                          succeeded = func_0(((MR_Box) (ParseName_4)), ((MR_Box) (NameTerm_10)), &conv1_Name_13);
                          if (succeeded)
                          {
                            Name_13 = ((MR_String) (conv1_Name_13));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeCtorInfo_41_41 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_41_41, ArityTerm_11, &Arity_14);
                            if (succeeded)
                              succeeded = recompilation__item_types__parse_version_number_term_2_p_0(TypeCtorInfo_41_41, VersionNumberTerm_8, &VersionNumber_15);
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
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (Name_13));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (Arity_14));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (VersionNumber_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
    }
  }
  else
  {
    MR_Word Spec_17;
    MR_Word Var_38;
    MR_Word Var_39;

    Var_38 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.version.parse_key_version_number\'/3"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Var_38));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (MR_mkword(1, &recompilation__version_scalar_common_1[51])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    }
  }
}

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Result_6;

  recompilation__version__parse_item_version_number_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_Result_6));
}

static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_58;

  succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__2075__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_58);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_58));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_6;

  recompilation__version__parse_key_version_number_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Result_6));
}

static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_24;

  succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__2058__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word ItemsVNsTerms_6;
  MR_Word ItemType_8;
  MR_String ItemTypeStr_5;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    ItemsVNsTerms_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
    if (succeeded)
    {
      ItemTypeStr_5 = ((MR_String) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
      succeeded = recompilation__item_types__string_to_recomp_item_type_2_p_0(ItemTypeStr_5, &ItemType_8);
    }
  }
  if (succeeded)
  {
    MR_Word Result0_13;

    parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[3]), (MR_Word) (&recompilation__version_scalar_common_3[40]), ItemsVNsTerms_6, &Result0_13);
    if (((MR_tag((MR_Word) Result0_13)) == (MR_Integer) 0))
      *Result_4 = (MR_Word) (Result0_13);
    else
    {
      MR_Word VNsAL_14 = ((MR_Word) ((MR_hl_field(1, Result0_13, (MR_Integer) 0))));
      MR_Word VNsMap_15;
      MR_Word Var_28;

      mercury__map__from_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VNsAL_14, &VNsMap_15);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = (MR_Box) ((MR_Unsigned) (ItemType_8));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (VNsMap_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
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
      Var_29 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
      InstanceVNsTerms_17 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
        succeeded = (strcmp(Var_30, (MR_String) "instance") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Result1_19;

      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&recompilation__version_scalar_common_2[4]), (MR_Word) (&recompilation__version_scalar_common_3[41]), InstanceVNsTerms_17, &Result1_19);
      if (((MR_tag((MR_Word) Result1_19)) == (MR_Integer) 0))
        *Result_4 = (MR_Word) (Result1_19);
      else
      {
        MR_Word Var_33;
        MR_Word VNsAL_47 = ((MR_Word) ((MR_hl_field(1, Result1_19, (MR_Integer) 0))));
        MR_Word VNsMap_48;

        mercury__map__from_assoc_list_2_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VNsAL_47, &VNsMap_48);
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (VNsMap_48));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
        }
      }
    }
    else
    {
      MR_Word Spec_21;
      MR_Word Var_42;
      MR_Word Var_43;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.version.parse_item_type_version_numbers\'/2"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_42));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (MR_mkword(1, &recompilation__version_scalar_common_1[49])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      }
    }
  }
}

static MR_String MR_CALL 
recompilation__version__recomp_item_name_version_number_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Word ItemName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word VersionNumber_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ItemName_3, (MR_Integer) 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, ItemName_3, (MR_Integer) 1))));
  MR_String SymNameStr_8;
  MR_String VersionNumberStr_9;
  MR_String Var_20;
  MR_String Var_21;
  MR_String Var_28;
  MR_String Var_30;

  SymNameStr_8 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_ngt_2_f_0((MR_Integer) 0, SymName_6);
  VersionNumberStr_9 = recompilation__item_types__version_number_to_string_1_f_0(VersionNumber_4);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) " - ", VersionNumberStr_9);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&recompilation__version_scalar_common_4[0]), Arity_7, &Var_21);
  Var_28 = mercury__string__f_43_43_2_f_0(Var_21, Var_20);
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_28);
  Str_5 = mercury__string__f_43_43_2_f_0(SymNameStr_8, Var_30);
  return Str_5;
}

static MR_String MR_CALL 
recompilation__version__name_arity_version_number_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Word NameArity_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word VersionNumber_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, NameArity_3, (MR_Integer) 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, NameArity_3, (MR_Integer) 1))));
  MR_String SymNameStr_8;
  MR_String VersionNumberStr_9;
  MR_Word Var_11;
  MR_String Var_21;
  MR_String Var_22;
  MR_String Var_29;
  MR_String Var_31;
  MR_String Var_32;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Name_6));
  }
  SymNameStr_8 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_ngt_2_f_0((MR_Integer) 0, Var_11);
  VersionNumberStr_9 = recompilation__item_types__version_number_to_string_1_f_0(VersionNumber_4);
  Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " - ", VersionNumberStr_9);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&recompilation__version_scalar_common_4[0]), Arity_7, &Var_22);
  Var_29 = mercury__string__f_43_43_2_f_0(Var_22, Var_21);
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_29);
  Var_32 = mercury__string__f_43_43_2_f_0(SymNameStr_8, Var_31);
  Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_32);
  return Str_5;
}

static void MR_CALL 
recompilation__version__is_item_avail_changed_3_p_0(
  MR_Word Avail1_4,
  MR_Word Avail2_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Avail1_4)) == (MR_Integer) 0))
  {
    MR_Word ModuleName1_7;
    MR_Word Var_17 = (MR_Word) ((MR_Word) (Avail1_4));
    MR_Word ModuleName2_10;
    MR_Word Var_18;

    ModuleName1_7 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Avail2_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = (MR_Word) ((MR_Word) (Avail2_5));
      ModuleName2_10 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_7, ModuleName2_10);
    }
    if (succeeded)
      *Changed_6 = (MR_Integer) 0;
    else
      *Changed_6 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_19 = (MR_Word) (MR_body((MR_Word) (Avail1_4), (MR_Integer) 1));
    MR_Word ModuleName1_23 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    MR_Word Var_20;
    MR_Word ModuleName2_21;

    succeeded = ((MR_tag((MR_Word) Avail2_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_20 = (MR_Word) (MR_body((MR_Word) (Avail2_5), (MR_Integer) 1));
      ModuleName2_21 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_23, ModuleName2_21);
    }
    if (succeeded)
      *Changed_6 = (MR_Integer) 0;
    else
      *Changed_6 = (MR_Integer) 1;
  }
}

static void MR_CALL 
recompilation__version__is_item_include_changed_3_p_0(
  MR_Word ItemInclude1_4,
  MR_Word ItemInclude2_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;
  MR_Word ModuleName1_7 = ((MR_Word) ((MR_hl_field(0, ItemInclude1_4, (MR_Integer) 0))));
  MR_Word ModuleName2_10 = ((MR_Word) ((MR_hl_field(0, ItemInclude2_5, (MR_Integer) 0))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName1_7, ModuleName2_10);
  if (succeeded)
    *Changed_6 = (MR_Integer) 0;
  else
    *Changed_6 = (MR_Integer) 1;
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_1(
  void * env_ptr_arg)
{
  struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_3(
  void * env_ptr_arg)
{
  struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_36 = ((MR_Word) ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_36));
  recompilation__version__distribute_pragma_items_class_items_7_p_0_2(env_ptr);
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_5(
  void * env_ptr_arg)
{
  struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decl_18 = ((MR_Word) ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Decl_18));
  recompilation__version__distribute_pragma_items_class_items_7_p_0_4(env_ptr);
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_4(
  void * env_ptr_arg)
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
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_52 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 0))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 1)));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 1))) & (MR_Integer) 1);
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndMaybeModes_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 2))));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 3))));
      Var_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 4))));
      Var_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 5))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 6))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 7))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 8))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 9)));
      Var_28 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 9))) & (MR_Integer) 3);
      Var_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 10))));
      Var_30 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredOrFuncInfo_19, (MR_Integer) 11))));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_52);
      if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
      {
        if (((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 == (MR_Word) ((MR_Unsigned) 0U)))
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
        else
        {
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8, (MR_Integer) 0))));

          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 == Var_53);
        }
        if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredFormArity_31 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndMaybeModes_21);
          (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity0_32 = (MR_Integer) ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__PredFormArity_31);
          if (((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer Var_54;

            parse_tree__prog_util__adjust_func_arity_3_p_0((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10, &Var_54);
            (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity0_32 == Var_54);
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

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_2(
  void * env_ptr_arg)
{
  struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_36, (MR_Integer) 0))));
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;

    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_36, (MR_Integer) 1))));
    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
    {
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 1))));
      Var_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 1))));
      Var_44 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 2))));
      Var_45 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 3))));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 4))));
      Var_46 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 5))));
      Var_47 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 6))));
      Var_48 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 7))));
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_37 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
      {
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decls_17 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Var_37, (MR_Integer) 0))));
        (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_50_50 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0);
        mercury__list__member_2_p_1((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_50_50, &(env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Decl_18, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Decls_17, recompilation__version__distribute_pragma_items_class_items_7_p_0_5, env_ptr);
      }
    }
  }
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_6(
  void * env_ptr_arg)
{
  struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&recompilation__version_scalar_common_2[0]), &(env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_Var_36, (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_34, recompilation__version__distribute_pragma_items_class_items_7_p_0_3, env_ptr);
      (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0(
  MR_Word MaybePredOrFunc_8,
  MR_Word SymName_9,
  MR_Integer Arity_10,
  MR_Word Item_11,
  MR_Word Section_12,
  MR_Word STATE_VARIABLE_ClassItems_0_34,
  MR_Word * STATE_VARIABLE_ClassItems_35)
{
  struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s env;

  (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 = MaybePredOrFunc_8;
  (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9 = SymName_9;
  (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10 = Arity_10;
  (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_34 = STATE_VARIABLE_ClassItems_0_34;
  recompilation__version__distribute_pragma_items_class_items_7_p_0_6(&env);
  if ((env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
  {
    MR_Word Var_39;
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (Section_12));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (Item_11));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_ClassItems_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__version_scalar_common_2[0]), (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_34, Var_39);
  }
  else
    *STATE_VARIABLE_ClassItems_35 = (env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_34;
}

static void MR_CALL 
recompilation__version__apply_decl_pragma_record_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ClassItems_35;

  recompilation__version__distribute_pragma_items_class_items_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ClassItems_35);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ClassItems_35));
}

static void MR_CALL 
recompilation__version__apply_decl_pragma_record_7_p_0(
  MR_Word DeclPragma_8,
  MR_Word STATE_VARIABLE_PredMap_0_20,
  MR_Word * STATE_VARIABLE_PredMap_21,
  MR_Word STATE_VARIABLE_FuncMap_0_22,
  MR_Word * STATE_VARIABLE_FuncMap_23,
  MR_Word STATE_VARIABLE_TypeClassMap_0_24,
  MR_Word * STATE_VARIABLE_TypeClassMap_25)
{
  MR_Word Section_12 = ((MR_Unsigned) ((MR_hl_field(0, DeclPragma_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ItemId_13 = ((MR_Word) ((MR_hl_field(0, DeclPragma_8, (MR_Integer) 1))));
  MR_Word Item_14 = ((MR_Word) ((MR_hl_field(0, DeclPragma_8, (MR_Integer) 2))));
  MR_Word MaybePredOrFunc_15 = ((MR_Word) ((MR_hl_field(0, ItemId_13, (MR_Integer) 0))));
  MR_Word SymName_16;
  MR_Integer Arity_17;
  MR_Word NameArity_18;
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, ItemId_13, (MR_Integer) 1))));
  MR_String Var_27;
  MR_Word Var_36;

  SymName_16 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
  Arity_17 = ((MR_Integer) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
  Var_27 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
  {
    NameArity_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NameArity_18, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, NameArity_18, 1) = ((MR_Box) (Arity_17));
  }
  if ((MaybePredOrFunc_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (Section_12));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (Item_14));
    }
    mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (NameArity_18)), ((MR_Box) (Var_32)), STATE_VARIABLE_PredMap_0_20, STATE_VARIABLE_PredMap_21);
    mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (NameArity_18)), ((MR_Box) (Var_32)), STATE_VARIABLE_FuncMap_0_22, STATE_VARIABLE_FuncMap_23);
  }
  else
  {
    MR_Word PredOrFunc_19 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_15, (MR_Integer) 0))));

    switch (PredOrFunc_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (Section_12));
            MR_hl_field(0, Var_30, 1) = ((MR_Box) (Item_14));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (NameArity_18)), ((MR_Box) (Var_30)), STATE_VARIABLE_FuncMap_0_22, STATE_VARIABLE_FuncMap_23);
          *STATE_VARIABLE_PredMap_21 = STATE_VARIABLE_PredMap_0_20;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (Section_12));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) (Item_14));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (NameArity_18)), ((MR_Box) (Var_28)), STATE_VARIABLE_PredMap_0_20, STATE_VARIABLE_PredMap_21);
          *STATE_VARIABLE_FuncMap_23 = STATE_VARIABLE_FuncMap_0_22;
        }
        break;
    }
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (recompilation__version__apply_decl_pragma_record_7_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (MaybePredOrFunc_15));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (SymName_16));
    MR_hl_field(0, Var_36, 5) = ((MR_Box) (Arity_17));
    MR_hl_field(0, Var_36, 6) = ((MR_Box) (Item_14));
    MR_hl_field(0, Var_36, 7) = ((MR_Box) (Section_12));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), Var_36, STATE_VARIABLE_TypeClassMap_0_24, STATE_VARIABLE_TypeClassMap_25);
}

static void MR_CALL 
recompilation__version__gather_in_type_repn_4_p_0(
  MR_Word Section_5,
  MR_Word ItemTypeRepn_6,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_16,
  MR_Word * STATE_VARIABLE_TypeDefnMap_17)
{
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_6, (MR_Integer) 0))));
  MR_Word Params_9 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_6, (MR_Integer) 1))));
  MR_Word Item_14;
  MR_Word TypeCtorNA_15;
  MR_String Var_18;
  MR_Integer Var_19;
  MR_Word Var_20;

  {
    Item_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Item_14, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Item_14, 1) = ((MR_Box) (ItemTypeRepn_6));
  }
  Var_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
  Var_19 = mercury__list__length_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[9]), Params_9);
  {
    TypeCtorNA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorNA_15, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, TypeCtorNA_15, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (Section_5));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (Item_14));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (TypeCtorNA_15)), ((MR_Box) (Var_20)), STATE_VARIABLE_TypeDefnMap_0_16, STATE_VARIABLE_TypeDefnMap_17);
}

static void MR_CALL 
recompilation__version__gather_in_decl_marker_4_p_0(
  MR_Word Section_5,
  MR_Word DeclMarker_6,
  MR_Word STATE_VARIABLE_DeclPragmas_0_12,
  MR_Word * STATE_VARIABLE_DeclPragmas_13)
{
  MR_Word PredOrFuncId_9;
  MR_Word Item_10;
  MR_Word Record_11;
  MR_Word PredNameArity_16 = ((MR_Word) ((MR_hl_field(0, DeclMarker_6, (MR_Integer) 1))));
  MR_Word PFU_19 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArity_16, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Name_20 = ((MR_Word) ((MR_hl_field(0, PredNameArity_16, (MR_Integer) 1))));
  MR_Integer Arity_21;
  MR_Word MaybePredOrFunc_22;
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, PredNameArity_16, (MR_Integer) 2))));
  MR_Word Var_25;

  Arity_21 = (MR_Integer) (Var_23);
  MaybePredOrFunc_22 = parse_tree__prog_item__pfu_to_maybe_pred_or_func_1_f_0(PFU_19);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (Name_20));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (Arity_21));
  }
  {
    PredOrFuncId_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredOrFuncId_9, 0) = ((MR_Box) (MaybePredOrFunc_22));
    MR_hl_field(0, PredOrFuncId_9, 1) = ((MR_Box) (Var_25));
  }
  {
    Item_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Item_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Item_10, 1) = ((MR_Box) (DeclMarker_6));
  }
  {
    Record_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Record_11, 0) = (MR_Box) ((MR_Unsigned) (Section_5));
    MR_hl_field(0, Record_11, 1) = ((MR_Box) (PredOrFuncId_9));
    MR_hl_field(0, Record_11, 2) = ((MR_Box) (Item_10));
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0), ((MR_Box) (Record_11)), STATE_VARIABLE_DeclPragmas_0_12, STATE_VARIABLE_DeclPragmas_13);
}

static void MR_CALL 
recompilation__version__gather_in_decl_pragma_4_p_0(
  MR_Word Section_5,
  MR_Word DeclPragma_6,
  MR_Word STATE_VARIABLE_DeclPragmas_0_12,
  MR_Word * STATE_VARIABLE_DeclPragmas_13)
{
  MR_Word MaybePredOrFuncId_8;

  recompilation__version__gather_decl_pragma_for_what_pf_id_2_p_0(DeclPragma_6, &MaybePredOrFuncId_8);
  if ((MaybePredOrFuncId_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_DeclPragmas_13 = STATE_VARIABLE_DeclPragmas_0_12;
  else
  {
    MR_Word PredOrFuncId_9 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFuncId_8, (MR_Integer) 0))));
    MR_Word Item_10;
    MR_Word Record_11;

    {
      Item_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Item_10, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Item_10, 1) = ((MR_Box) (DeclPragma_6));
    }
    {
      Record_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Record_11, 0) = (MR_Box) ((MR_Unsigned) (Section_5));
      MR_hl_field(0, Record_11, 1) = ((MR_Box) (PredOrFuncId_9));
      MR_hl_field(0, Record_11, 2) = ((MR_Box) (Item_10));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0), ((MR_Box) (Record_11)), STATE_VARIABLE_DeclPragmas_0_12, STATE_VARIABLE_DeclPragmas_13);
  }
}

static void MR_CALL 
recompilation__version__gather_decl_pragma_for_what_pf_id_2_p_0(
  MR_Word DeclPragma_3,
  MR_Word * MaybePredOrFuncId_4)
{
  switch (MR_tag((MR_Word) DeclPragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObsoletePred_25 = (MR_Word) ((MR_Word) (DeclPragma_3));
        MR_Word PredNameArity_26 = ((MR_Word) ((MR_hl_field(0, ObsoletePred_25, (MR_Integer) 0))));
        MR_Word PFU_30 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArity_26, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, PredNameArity_26, (MR_Integer) 2))));
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Name_84 = ((MR_Word) ((MR_hl_field(0, PredNameArity_26, (MR_Integer) 1))));
        MR_Word MaybePredOrFunc_85;
        MR_Integer Arity_86 = (MR_Integer) (Var_71);

        MaybePredOrFunc_85 = parse_tree__prog_item__pfu_to_maybe_pred_or_func_1_f_0(PFU_30);
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (Name_84));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (Arity_86));
        }
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (MaybePredOrFunc_85));
          MR_hl_field(0, Var_72, 1) = ((MR_Box) (Var_73));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredOrFuncId_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ObsoleteProc_18 = (MR_Word) (MR_body((MR_Word) (DeclPragma_3), (MR_Integer) 1));
        MR_Word PredNameModesPF_19 = ((MR_Word) ((MR_hl_field(0, ObsoleteProc_18, (MR_Integer) 0))));
        MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_19, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_19, (MR_Integer) 2))));
        MR_Integer Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Name_82 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_19, (MR_Integer) 1))));
        MR_Integer Arity_83;

        Var_67 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_24);
        parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_23, &Arity_83, Var_67);
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (PredOrFunc_23));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (Name_82));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) (Arity_83));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (Var_70));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredOrFuncId_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_68));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FormatCall_31 = (MR_Word) (MR_body((MR_Word) (DeclPragma_3), (MR_Integer) 2));
        MR_Word PF_35;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Name_87;
        MR_Integer Arity_88;
        MR_Word PredNameArity_89 = ((MR_Word) ((MR_hl_field(0, FormatCall_31, (MR_Integer) 0))));

        PF_35 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArity_89, (MR_Integer) 0))) & (MR_Integer) 1);
        Name_87 = ((MR_Word) ((MR_hl_field(0, PredNameArity_89, (MR_Integer) 1))));
        Var_74 = ((MR_Word) ((MR_hl_field(0, PredNameArity_89, (MR_Integer) 2))));
        Arity_88 = (MR_Integer) (Var_74);
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (PF_35));
        }
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_77, 0) = ((MR_Box) (Name_87));
          MR_hl_field(0, Var_77, 1) = ((MR_Box) (Arity_88));
        }
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(0, Var_75, 1) = ((MR_Box) (Var_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredOrFuncId_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_75));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybePredOrFuncId_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpec_6 = ((MR_Word) ((MR_hl_field(3, DeclPragma_3, (MR_Integer) 1))));
            MR_Word PFUMM_7 = ((MR_Word) ((MR_hl_field(0, TypeSpec_6, (MR_Integer) 0))));
            MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, TypeSpec_6, (MR_Integer) 1))));
            MR_Word MaybePredOrFunc_15;
            MR_Integer Arity_16;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word _MaybeModes_17;

            parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_7, &MaybePredOrFunc_15, &Var_64, &_MaybeModes_17);
            Arity_16 = (MR_Integer) (Var_64);
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (Name_8));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) (Arity_16));
            }
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_65, 0) = ((MR_Box) (MaybePredOrFunc_15));
              MR_hl_field(0, Var_65, 1) = ((MR_Box) (Var_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_65));
            }
          }
          break;
        case (MR_Integer) 2:
          *MaybePredOrFuncId_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermInfo_37 = ((MR_Word) ((MR_hl_field(3, DeclPragma_3, (MR_Integer) 1))));
            MR_Integer Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Name_111;
            MR_Integer Arity_112;
            MR_Word PredNameModesPF_113 = ((MR_Word) ((MR_hl_field(0, TermInfo_37, (MR_Integer) 0))));
            MR_Word PredOrFunc_114 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_113, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes_115;

            Name_111 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_113, (MR_Integer) 1))));
            Modes_115 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_113, (MR_Integer) 2))));
            Var_107 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_115);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_114, &Arity_112, Var_107);
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (PredOrFunc_114));
            }
            {
              Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_110, 0) = ((MR_Box) (Name_111));
              MR_hl_field(0, Var_110, 1) = ((MR_Box) (Arity_112));
            }
            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_108, 0) = ((MR_Box) (Var_109));
              MR_hl_field(0, Var_108, 1) = ((MR_Box) (Var_110));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_108));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Term2Info_42 = ((MR_Word) ((MR_hl_field(3, DeclPragma_3, (MR_Integer) 1))));
            MR_Integer Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Name_121;
            MR_Integer Arity_122;
            MR_Word PredNameModesPF_123 = ((MR_Word) ((MR_hl_field(0, Term2Info_42, (MR_Integer) 0))));
            MR_Word PredOrFunc_124 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_123, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes_125;

            Name_121 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_123, (MR_Integer) 1))));
            Modes_125 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_123, (MR_Integer) 2))));
            Var_117 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_125);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_124, &Arity_122, Var_117);
            {
              Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_119, 0) = ((MR_Box) (PredOrFunc_124));
            }
            {
              Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_120, 0) = ((MR_Box) (Name_121));
              MR_hl_field(0, Var_120, 1) = ((MR_Box) (Arity_122));
            }
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_118, 0) = ((MR_Box) (Var_119));
              MR_hl_field(0, Var_118, 1) = ((MR_Box) (Var_120));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_118));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SharingInfo_48 = ((MR_Word) ((MR_hl_field(3, DeclPragma_3, (MR_Integer) 1))));
            MR_Integer Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Name_101;
            MR_Integer Arity_102;
            MR_Word PredNameModesPF_103 = ((MR_Word) ((MR_hl_field(0, SharingInfo_48, (MR_Integer) 0))));
            MR_Word PredOrFunc_104 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_103, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes_105;

            Name_101 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_103, (MR_Integer) 1))));
            Modes_105 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_103, (MR_Integer) 2))));
            Var_97 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_105);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_104, &Arity_102, Var_97);
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (PredOrFunc_104));
            }
            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_100, 0) = ((MR_Box) (Name_101));
              MR_hl_field(0, Var_100, 1) = ((MR_Box) (Arity_102));
            }
            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
              MR_hl_field(0, Var_98, 1) = ((MR_Box) (Var_100));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_98));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ReuseInfo_56 = ((MR_Word) ((MR_hl_field(3, DeclPragma_3, (MR_Integer) 1))));
            MR_Integer Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Name_90;
            MR_Integer Arity_91;
            MR_Word PredNameModesPF_92 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_56, (MR_Integer) 0))));
            MR_Word PredOrFunc_93 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_92, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes_94;

            Name_90 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_92, (MR_Integer) 1))));
            Modes_94 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_92, (MR_Integer) 2))));
            Var_78 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_94);
            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_93, &Arity_91, Var_78);
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (PredOrFunc_93));
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (Name_90));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (Arity_91));
            }
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(0, Var_79, 1) = ((MR_Box) (Var_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredOrFuncId_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_79));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
recompilation__version__gather_in_instance_4_p_0(
  MR_Word Section_5,
  MR_Word ItemInstance_6,
  MR_Word STATE_VARIABLE_InstanceMap_0_19,
  MR_Word * STATE_VARIABLE_InstanceMap_20)
{
  MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, ItemInstance_6, (MR_Integer) 0))));
  MR_Word ClassParams_9 = ((MR_Word) ((MR_hl_field(0, ItemInstance_6, (MR_Integer) 1))));
  MR_Word Item_17;
  MR_Word ClassNA_18;
  MR_Integer Var_21;
  MR_Word Var_22;

  {
    Item_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Item_17, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Item_17, 1) = ((MR_Box) (ItemInstance_6));
  }
  Var_21 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassParams_9);
  {
    ClassNA_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassNA_18, 0) = ((MR_Box) (ClassName_8));
    MR_hl_field(0, ClassNA_18, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (Section_5));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (Item_17));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ClassNA_18)), ((MR_Box) (Var_22)), STATE_VARIABLE_InstanceMap_0_19, STATE_VARIABLE_InstanceMap_20);
}

static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
  MR_Word Decl0_3)
{
  MR_Word Decls_4;

  if (((MR_tag((MR_Word) Decl0_3)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo0_30 = (MR_Word) (MR_body((MR_Word) (Decl0_3), (MR_Integer) 1));
    MR_Word Decl_31;
    MR_Word Var_37;
    MR_Word SymName_40 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_30, (MR_Integer) 0))));
    MR_Word WithInst_41 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_30, (MR_Integer) 3))));
    MR_Word MaybeDetism_42 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_30, (MR_Integer) 4))));
    MR_Word InstVarSet_43 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_30, (MR_Integer) 5))));
    MR_Word Modes_45 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_30, (MR_Integer) 2))));
    MR_Word MaybePredOrFunc_46 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_30, (MR_Integer) 1))));
    MR_Word ModeInfo_47;

    Var_37 = mercury__term_context__dummy_context_0_f_0();
    {
      ModeInfo_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeInfo_47, 0) = ((MR_Box) (SymName_40));
      MR_hl_field(0, ModeInfo_47, 1) = ((MR_Box) (MaybePredOrFunc_46));
      MR_hl_field(0, ModeInfo_47, 2) = ((MR_Box) (Modes_45));
      MR_hl_field(0, ModeInfo_47, 3) = ((MR_Box) (WithInst_41));
      MR_hl_field(0, ModeInfo_47, 4) = ((MR_Box) (MaybeDetism_42));
      MR_hl_field(0, ModeInfo_47, 5) = ((MR_Box) (InstVarSet_43));
      MR_hl_field(0, ModeInfo_47, 6) = ((MR_Box) (Var_37));
    }
    Decl_31 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_47)));
    {
      Decls_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Decls_4, 0) = ((MR_Box) (Decl_31));
      MR_hl_field(1, Decls_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word PredOrFuncInfo0_5 = (MR_Word) ((MR_Word) (Decl0_3));
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 0))));
    MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndMaybeModes_8 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 2))));
    MR_Word WithType_9 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 3))));
    MR_Word WithInst_10 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 4))));
    MR_Word MaybeDetism_11 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 5))));
    MR_Word TypeVarSet_12 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 6))));
    MR_Word InstVarSet_13 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 7))));
    MR_Word ExistQVars_14 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 8))));
    MR_Word Purity_15 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_5, (MR_Integer) 10))));
    MR_Word Types_18;
    MR_Word MaybeModes_19;
    MR_Word TypesWithoutModes_21;
    MR_Word ModeDecls_26;
    MR_Word EmptyInstVarSet_27;
    MR_Word PredOrFuncInfo_28;
    MR_Word PredOrFuncDecl_29;
    MR_Word Var_36;

    parse_tree__prog_item__get_declared_types_and_maybe_modes_5_p_0(TypesAndMaybeModes_8, WithInst_10, MaybeDetism_11, &Types_18, &MaybeModes_19);
    if ((MaybeModes_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      TypesWithoutModes_21 = TypesAndMaybeModes_8;
      ModeDecls_26 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(1, MaybeModes_19, (MR_Integer) 0))));
      MR_Word MaybePredOrFunc_23;
      MR_Word ModeInfo_24;
      MR_Word ModeDecl_25;
      MR_Word Var_32;

      {
        TypesWithoutModes_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TypesWithoutModes_21, 0) = ((MR_Box) (Types_18));
      }
      if ((WithInst_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybePredOrFunc_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybePredOrFunc_23, 0) = ((MR_Box) (PredOrFunc_7));
        }
      else
        MaybePredOrFunc_23 = (MR_Word) ((MR_Unsigned) 0U);
      Var_32 = mercury__term_context__dummy_context_0_f_0();
      {
        ModeInfo_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeInfo_24, 0) = ((MR_Box) (SymName_6));
        MR_hl_field(0, ModeInfo_24, 1) = ((MR_Box) (MaybePredOrFunc_23));
        MR_hl_field(0, ModeInfo_24, 2) = ((MR_Box) (Modes_20));
        MR_hl_field(0, ModeInfo_24, 3) = ((MR_Box) (WithInst_10));
        MR_hl_field(0, ModeInfo_24, 4) = ((MR_Box) (MaybeDetism_11));
        MR_hl_field(0, ModeInfo_24, 5) = ((MR_Box) (InstVarSet_13));
        MR_hl_field(0, ModeInfo_24, 6) = ((MR_Box) (Var_32));
      }
      ModeDecl_25 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_24)));
      {
        ModeDecls_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModeDecls_26, 0) = ((MR_Box) (ModeDecl_25));
        MR_hl_field(1, ModeDecls_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_27);
    Var_36 = mercury__term_context__dummy_context_0_f_0();
    {
      PredOrFuncInfo_28 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredOrFuncInfo_28, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(0, PredOrFuncInfo_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
      MR_hl_field(0, PredOrFuncInfo_28, 2) = ((MR_Box) (TypesWithoutModes_21));
      MR_hl_field(0, PredOrFuncInfo_28, 3) = ((MR_Box) (WithType_9));
      MR_hl_field(0, PredOrFuncInfo_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, PredOrFuncInfo_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, PredOrFuncInfo_28, 6) = ((MR_Box) (TypeVarSet_12));
      MR_hl_field(0, PredOrFuncInfo_28, 7) = ((MR_Box) (EmptyInstVarSet_27));
      MR_hl_field(0, PredOrFuncInfo_28, 8) = ((MR_Box) (ExistQVars_14));
      MR_hl_field(0, PredOrFuncInfo_28, 9) = (MR_Box) ((MR_Unsigned) (Purity_15));
      MR_hl_field(0, PredOrFuncInfo_28, 10) = ((MR_Box) (Constraints_16));
      MR_hl_field(0, PredOrFuncInfo_28, 11) = ((MR_Box) (Var_36));
    }
    PredOrFuncDecl_29 = (MR_Word) ((MR_Word) (PredOrFuncInfo_28));
    {
      Decls_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Decls_4, 0) = ((MR_Box) (PredOrFuncDecl_29));
      MR_hl_field(1, Decls_4, 1) = ((MR_Box) (ModeDecls_26));
    }
  }
  return Decls_4;
}

static MR_Box MR_CALL 
recompilation__version__gather_in_typeclass_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Decls_4;

  conv0_Decls_4 = recompilation__version__split_class_method_types_and_modes_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Decls_4));
  return wrapper_arg_2;
}

static void MR_CALL 
recompilation__version__gather_in_typeclass_4_p_0(
  MR_Word Section_5,
  MR_Word ItemTypeClass_6,
  MR_Word STATE_VARIABLE_TypeClassMap_0_23,
  MR_Word * STATE_VARIABLE_TypeClassMap_24)
{
  MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 0))));
  MR_Word ClassParams_9 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 1))));
  MR_Word ClassNA_16;
  MR_Word Interface_17;
  MR_Word ItemToAdd_18;
  MR_String Var_25;
  MR_Integer Var_26;
  MR_Word Var_29;

  Var_25 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_8);
  Var_26 = mercury__list__length_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[9]), ClassParams_9);
  {
    ClassNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassNA_16, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, ClassNA_16, 1) = ((MR_Box) (Var_26));
  }
  Interface_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 4))));
  if ((Interface_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ItemToAdd_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ItemToAdd_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, ItemToAdd_18, 1) = ((MR_Box) (ItemTypeClass_6));
    }
  else
  {
    MR_Word Decls0_19 = ((MR_Word) ((MR_hl_field(1, Interface_17, (MR_Integer) 0))));
    MR_Word DeclsList_20;
    MR_Word Decls_21;
    MR_Word SplitItemTypeClass_22;
    MR_Word Var_28;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    DeclsList_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__version_scalar_common_1[11]), (MR_Word) (&recompilation__version_scalar_common_2[20]), Decls0_19);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), DeclsList_20, &Decls_21);
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Decls_21));
    }
    Var_37 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 3))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 5))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 7))));
    {
      SplitItemTypeClass_22 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SplitItemTypeClass_22, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, SplitItemTypeClass_22, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, SplitItemTypeClass_22, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, SplitItemTypeClass_22, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, SplitItemTypeClass_22, 4) = ((MR_Box) (Var_28));
      MR_hl_field(0, SplitItemTypeClass_22, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, SplitItemTypeClass_22, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, SplitItemTypeClass_22, 7) = ((MR_Box) (Var_44));
    }
    {
      ItemToAdd_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ItemToAdd_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, ItemToAdd_18, 1) = ((MR_Box) (SplitItemTypeClass_22));
    }
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (Section_5));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (ItemToAdd_18));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ClassNA_16)), ((MR_Box) (Var_29)), STATE_VARIABLE_TypeClassMap_0_23, STATE_VARIABLE_TypeClassMap_24);
}

static void MR_CALL 
recompilation__version__gather_in_mode_decl_6_p_0(
  MR_Word Section_7,
  MR_Word ItemModeDecl_8,
  MR_Word STATE_VARIABLE_PredMap_0_24,
  MR_Word * STATE_VARIABLE_PredMap_25,
  MR_Word STATE_VARIABLE_FuncMap_0_26,
  MR_Word * STATE_VARIABLE_FuncMap_27)
{
  MR_bool succeeded;
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 0))));
  MR_Word MaybePredOrFunc_12 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 1))));
  MR_Word ArgModes_13 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 2))));
  MR_Word WithInst_14 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_8, (MR_Integer) 3))));
  MR_Word Item_19 = (MR_Word) (MR_mkword(2, (MR_Word) (ItemModeDecl_8)));

  succeeded = (MaybePredOrFunc_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (WithInst_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word ModeNA_21;
    MR_String Var_28;
    MR_Integer Var_29;
    MR_Word Var_30;

    Var_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
    Var_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_13);
    {
      ModeNA_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeNA_21, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, ModeNA_21, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (Section_7));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (Item_19));
    }
    mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ModeNA_21)), ((MR_Box) (Var_30)), STATE_VARIABLE_PredMap_0_24, STATE_VARIABLE_PredMap_25);
    mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ModeNA_21)), ((MR_Box) (Var_30)), STATE_VARIABLE_FuncMap_0_26, STATE_VARIABLE_FuncMap_27);
  }
  else
  if ((MaybePredOrFunc_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_PredMap_25 = STATE_VARIABLE_PredMap_0_24;
    *STATE_VARIABLE_FuncMap_27 = STATE_VARIABLE_FuncMap_0_26;
  }
  else
  {
    MR_Word PredOrFunc_22 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_12, (MR_Integer) 0))));
    MR_Integer Arity_23;
    MR_Integer Var_34;
    MR_String Var_35;
    MR_Word ModeNA_40;

    Var_34 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_13);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_22, &Arity_23, Var_34);
    Var_35 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
    {
      ModeNA_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeNA_40, 0) = ((MR_Box) (Var_35));
      MR_hl_field(0, ModeNA_40, 1) = ((MR_Box) (Arity_23));
    }
    switch (PredOrFunc_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_38;

          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (Item_19));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ModeNA_40)), ((MR_Box) (Var_38)), STATE_VARIABLE_FuncMap_0_26, STATE_VARIABLE_FuncMap_27);
          *STATE_VARIABLE_PredMap_25 = STATE_VARIABLE_PredMap_0_24;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_36, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_36, 1) = ((MR_Box) (Item_19));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ModeNA_40)), ((MR_Box) (Var_36)), STATE_VARIABLE_PredMap_0_24, STATE_VARIABLE_PredMap_25);
          *STATE_VARIABLE_FuncMap_27 = STATE_VARIABLE_FuncMap_0_26;
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__version__gather_in_pred_decl_6_p_0(
  MR_Word Section_7,
  MR_Word ItemPredDecl_8,
  MR_Word STATE_VARIABLE_PredMap_0_42,
  MR_Word * STATE_VARIABLE_PredMap_43,
  MR_Word STATE_VARIABLE_FuncMap_0_44,
  MR_Word * STATE_VARIABLE_FuncMap_45)
{
  MR_Word PredSymName_11 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 0))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes_13 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 2))));
  MR_Word WithType_14 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 3))));
  MR_Word WithInst_15 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 4))));
  MR_Word MaybeDetism_16 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 5))));
  MR_Word Origin_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 6))));
  MR_Word TypeVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 7))));
  MR_Word InstVarSet_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 8))));
  MR_Word ExistQVars_20 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 9))));
  MR_Word Purity_21 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 10))) & (MR_Integer) 3);
  MR_Word Constraints_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 11))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 12))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, (MR_Integer) 13))));
  MR_Word PredFormArity_25;
  MR_Integer Arity0_26;
  MR_Integer Arity_27;
  MR_Word PredNA_29;
  MR_Word Types_30;
  MR_Word MaybeModes_31;
  MR_String Var_46;

  PredFormArity_25 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes_13);
  Arity0_26 = (MR_Integer) (PredFormArity_25);
  if ((WithType_14 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_12, &Arity_27, Arity0_26);
  else
    Arity_27 = Arity0_26;
  Var_46 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_11);
  {
    PredNA_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredNA_29, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, PredNA_29, 1) = ((MR_Box) (Arity_27));
  }
  parse_tree__prog_item__get_declared_types_and_maybe_modes_5_p_0(TypesAndMaybeModes_13, WithInst_15, MaybeDetism_16, &Types_30, &MaybeModes_31);
  if ((MaybeModes_31 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredItem_41 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemPredDecl_8)));

    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_59;

          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (PredItem_41));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (PredNA_29)), ((MR_Box) (Var_59)), STATE_VARIABLE_FuncMap_0_44, STATE_VARIABLE_FuncMap_45);
          *STATE_VARIABLE_PredMap_43 = STATE_VARIABLE_PredMap_0_42;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (PredItem_41));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (PredNA_29)), ((MR_Box) (Var_57)), STATE_VARIABLE_PredMap_0_42, STATE_VARIABLE_PredMap_43);
          *STATE_VARIABLE_FuncMap_45 = STATE_VARIABLE_FuncMap_0_44;
        }
        break;
    }
  }
  else
  {
    MR_Word Modes_32 = ((MR_Word) ((MR_hl_field(1, MaybeModes_31, (MR_Integer) 0))));
    MR_Word TypesWithoutModes_33;
    MR_Word EmptyInstVarSet_34;
    MR_Word ItemPredOnlyDecl_35;
    MR_Word PredOnlyItem_36;
    MR_Word MaybePredOrFunc_38;
    MR_Word ModeItemModeDecl_39;
    MR_Word ModeItem_40;

    {
      TypesWithoutModes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypesWithoutModes_33, 0) = ((MR_Box) (Types_30));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &EmptyInstVarSet_34);
    {
      ItemPredOnlyDecl_35 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemPredOnlyDecl_35, 0) = ((MR_Box) (PredSymName_11));
      MR_hl_field(0, ItemPredOnlyDecl_35, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(0, ItemPredOnlyDecl_35, 2) = ((MR_Box) (TypesWithoutModes_33));
      MR_hl_field(0, ItemPredOnlyDecl_35, 3) = ((MR_Box) (WithType_14));
      MR_hl_field(0, ItemPredOnlyDecl_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ItemPredOnlyDecl_35, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ItemPredOnlyDecl_35, 6) = ((MR_Box) (Origin_17));
      MR_hl_field(0, ItemPredOnlyDecl_35, 7) = ((MR_Box) (TypeVarSet_18));
      MR_hl_field(0, ItemPredOnlyDecl_35, 8) = ((MR_Box) (EmptyInstVarSet_34));
      MR_hl_field(0, ItemPredOnlyDecl_35, 9) = ((MR_Box) (ExistQVars_20));
      MR_hl_field(0, ItemPredOnlyDecl_35, 10) = (MR_Box) ((MR_Unsigned) (Purity_21));
      MR_hl_field(0, ItemPredOnlyDecl_35, 11) = ((MR_Box) (Constraints_22));
      MR_hl_field(0, ItemPredOnlyDecl_35, 12) = ((MR_Box) (Context_23));
      MR_hl_field(0, ItemPredOnlyDecl_35, 13) = ((MR_Box) (SeqNum_24));
    }
    PredOnlyItem_36 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemPredOnlyDecl_35)));
    if ((WithInst_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybePredOrFunc_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePredOrFunc_38, 0) = ((MR_Box) (PredOrFunc_12));
      }
    else
      MaybePredOrFunc_38 = (MR_Word) ((MR_Unsigned) 0U);
    {
      ModeItemModeDecl_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeItemModeDecl_39, 0) = ((MR_Box) (PredSymName_11));
      MR_hl_field(0, ModeItemModeDecl_39, 1) = ((MR_Box) (MaybePredOrFunc_38));
      MR_hl_field(0, ModeItemModeDecl_39, 2) = ((MR_Box) (Modes_32));
      MR_hl_field(0, ModeItemModeDecl_39, 3) = ((MR_Box) (WithInst_15));
      MR_hl_field(0, ModeItemModeDecl_39, 4) = ((MR_Box) (MaybeDetism_16));
      MR_hl_field(0, ModeItemModeDecl_39, 5) = ((MR_Box) (InstVarSet_19));
      MR_hl_field(0, ModeItemModeDecl_39, 6) = ((MR_Box) (Context_23));
      MR_hl_field(0, ModeItemModeDecl_39, 7) = ((MR_Box) (SeqNum_24));
    }
    ModeItem_40 = (MR_Word) (MR_mkword(2, (MR_Word) (ModeItemModeDecl_39)));
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_53;
          MR_Word STATE_VARIABLE_FuncMap_54_54;
          MR_Word Var_55;

          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_53, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_53, 1) = ((MR_Box) (PredOnlyItem_36));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (PredNA_29)), ((MR_Box) (Var_53)), STATE_VARIABLE_FuncMap_0_44, &STATE_VARIABLE_FuncMap_54_54);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (ModeItem_40));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (PredNA_29)), ((MR_Box) (Var_55)), STATE_VARIABLE_FuncMap_54_54, STATE_VARIABLE_FuncMap_45);
          *STATE_VARIABLE_PredMap_43 = STATE_VARIABLE_PredMap_0_42;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_49;
          MR_Word STATE_VARIABLE_PredMap_50_50;
          MR_Word Var_51;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_49, 1) = ((MR_Box) (PredOnlyItem_36));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (PredNA_29)), ((MR_Box) (Var_49)), STATE_VARIABLE_PredMap_0_42, &STATE_VARIABLE_PredMap_50_50);
          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_51, 0) = ((MR_Box) (Section_7));
            MR_hl_field(0, Var_51, 1) = ((MR_Box) (ModeItem_40));
          }
          mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (PredNA_29)), ((MR_Box) (Var_51)), STATE_VARIABLE_PredMap_50_50, STATE_VARIABLE_PredMap_43);
          *STATE_VARIABLE_FuncMap_45 = STATE_VARIABLE_FuncMap_0_44;
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__version__gather_in_mode_defn_4_p_0(
  MR_Word Section_5,
  MR_Word ItemModeDefn_6,
  MR_Word STATE_VARIABLE_ModeMap_0_16,
  MR_Word * STATE_VARIABLE_ModeMap_17)
{
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_6, (MR_Integer) 0))));
  MR_Word Params_9 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_6, (MR_Integer) 1))));
  MR_Word Item_14;
  MR_Word ModeCtorNA_15;
  MR_String Var_18;
  MR_Integer Var_19;
  MR_Word Var_20;

  {
    Item_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Item_14, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Item_14, 1) = ((MR_Box) (ItemModeDefn_6));
  }
  Var_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
  Var_19 = mercury__list__length_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[10]), Params_9);
  {
    ModeCtorNA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtorNA_15, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, ModeCtorNA_15, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (Section_5));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (Item_14));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (ModeCtorNA_15)), ((MR_Box) (Var_20)), STATE_VARIABLE_ModeMap_0_16, STATE_VARIABLE_ModeMap_17);
}

static void MR_CALL 
recompilation__version__gather_in_inst_defn_4_p_0(
  MR_Word Section_5,
  MR_Word ItemInstDefn_6,
  MR_Word STATE_VARIABLE_InstMap_0_17,
  MR_Word * STATE_VARIABLE_InstMap_18)
{
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_6, (MR_Integer) 0))));
  MR_Word Params_9 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_6, (MR_Integer) 1))));
  MR_Word Item_15;
  MR_Word InstCtorNA_16;
  MR_String Var_19;
  MR_Integer Var_20;
  MR_Word Var_21;

  {
    Item_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Item_15, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Item_15, 1) = ((MR_Box) (ItemInstDefn_6));
  }
  Var_19 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
  Var_20 = mercury__list__length_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[10]), Params_9);
  {
    InstCtorNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtorNA_16, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, InstCtorNA_16, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (Section_5));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (Item_15));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (InstCtorNA_16)), ((MR_Box) (Var_21)), STATE_VARIABLE_InstMap_0_17, STATE_VARIABLE_InstMap_18);
}

static void MR_CALL 
recompilation__version__gather_in_type_defn_6_p_0(
  MR_Word Section_7,
  MR_Word ItemTypeDefn_8,
  MR_Word STATE_VARIABLE_TypeMap_0_30,
  MR_Word * STATE_VARIABLE_TypeMap_31,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_32,
  MR_Word * STATE_VARIABLE_TypeDefnMap_33)
{
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 0))));
  MR_Word Params_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 1))));
  MR_Word Body_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 2))));
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 3))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 4))));
  MR_Word SeqNum_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_8, (MR_Integer) 5))));
  MR_Word Item_17;
  MR_Word NameItem_23;
  MR_Word BodyItem_24;
  MR_Word TypeCtorNA_29;
  MR_String Var_34;
  MR_Integer Var_35;
  MR_Word Var_36;
  MR_Word Var_38;

  {
    Item_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Item_17, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Item_17, 1) = ((MR_Box) (ItemTypeDefn_8));
  }
  switch (MR_tag((MR_Word) Body_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word NameItemTypeDefn_22;

        {
          NameItemTypeDefn_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NameItemTypeDefn_22, 0) = ((MR_Box) (SymName_11));
          MR_hl_field(0, NameItemTypeDefn_22, 1) = ((MR_Box) (Params_12));
          MR_hl_field(0, NameItemTypeDefn_22, 2) = ((MR_Box) (MR_mkword(3, &recompilation__version_scalar_common_1[15])));
          MR_hl_field(0, NameItemTypeDefn_22, 3) = ((MR_Box) (VarSet_14));
          MR_hl_field(0, NameItemTypeDefn_22, 4) = ((MR_Box) (Context_15));
          MR_hl_field(0, NameItemTypeDefn_22, 5) = ((MR_Box) (SeqNum_16));
        }
        {
          NameItem_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NameItem_23, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, NameItem_23, 1) = ((MR_Box) (NameItemTypeDefn_22));
        }
        BodyItem_24 = Item_17;
      }
      break;
    case (MR_Integer) 2:
      {
        NameItem_23 = Item_17;
        BodyItem_24 = Item_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            NameItem_23 = Item_17;
            BodyItem_24 = Item_17;
          }
          break;
        case (MR_Integer) 1:
          {
            NameItem_23 = Item_17;
            BodyItem_24 = Item_17;
          }
          break;
        case (MR_Integer) 2:
          {
            NameItem_23 = Item_17;
            BodyItem_24 = Item_17;
          }
          break;
      }
      break;
  }
  Var_34 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
  Var_35 = mercury__list__length_1_f_0((MR_Word) (&recompilation__version_scalar_common_1[9]), Params_12);
  {
    TypeCtorNA_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorNA_29, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, TypeCtorNA_29, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (Section_7));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (NameItem_23));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (TypeCtorNA_29)), ((MR_Box) (Var_36)), STATE_VARIABLE_TypeMap_0_30, STATE_VARIABLE_TypeMap_31);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (Section_7));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (BodyItem_24));
  }
  mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_2[0]), ((MR_Box) (TypeCtorNA_29)), ((MR_Box) (Var_38)), STATE_VARIABLE_TypeDefnMap_0_32, STATE_VARIABLE_TypeDefnMap_33);
}

static void MR_CALL 
recompilation__version__compute_item_name_version_map_entry_6_p_0(
  MR_Word SourceFileTime_7,
  MR_Word OldGatheredMap_8,
  MR_Word OldVersionMap_9,
  MR_Word ItemName_10,
  MR_Word CurItems_11,
  MR_Word * TimeStamp_12)
{
  MR_bool succeeded;
  MR_Word OldVersionNumber_16;
  MR_Word TypeInfo_20_20;
  MR_Word TypeCtorInfo_21_21;
  MR_Word OldItems_13;
  MR_Word SortedOldItems_14;
  MR_Word SortedCurItems_15;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Box conv0_OldItems_13;
  MR_Box conv1_OldVersionNumber_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), OldGatheredMap_8, ((MR_Box) (ItemName_10)), &conv0_OldItems_13);
  if (succeeded)
  {
    OldItems_13 = ((MR_Word) (conv0_OldItems_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_20_20 = (MR_Word) (&recompilation__version_scalar_common_2[0]);
    mercury__list__sort_2_p_0(TypeInfo_20_20, OldItems_13, &SortedOldItems_14);
    mercury__list__sort_2_p_0(TypeInfo_20_20, CurItems_11, &SortedCurItems_15);
    Var_17 = (MR_Integer) 0;
    recompilation__version__are_items_changed_3_p_0(SortedOldItems_14, SortedCurItems_15, &Var_22);
    succeeded = (Var_17 == Var_22);
    if (succeeded)
    {
      TypeCtorInfo_21_21 = (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), TypeCtorInfo_21_21, OldVersionMap_9, ((MR_Box) (ItemName_10)), &conv1_OldVersionNumber_16);
      if (succeeded)
      {
        OldVersionNumber_16 = ((MR_Word) (conv1_OldVersionNumber_16));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    *TimeStamp_12 = OldVersionNumber_16;
  else
    *TimeStamp_12 = SourceFileTime_7;
}

static void MR_CALL 
recompilation__version__compute_name_arity_version_map_entry_6_p_0(
  MR_Word SourceFileTime_7,
  MR_Word OldGatheredMap_8,
  MR_Word OldVersionMap_9,
  MR_Word NameArity_10,
  MR_Word CurItems_11,
  MR_Word * TimeStamp_12)
{
  MR_bool succeeded;
  MR_Word OldVersionNumber_16;
  MR_Word TypeInfo_20_20;
  MR_Word TypeCtorInfo_21_21;
  MR_Word OldItems_13;
  MR_Word SortedOldItems_14;
  MR_Word SortedCurItems_15;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Box conv0_OldItems_13;
  MR_Box conv1_OldVersionNumber_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), OldGatheredMap_8, ((MR_Box) (NameArity_10)), &conv0_OldItems_13);
  if (succeeded)
  {
    OldItems_13 = ((MR_Word) (conv0_OldItems_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_20_20 = (MR_Word) (&recompilation__version_scalar_common_2[0]);
    mercury__list__sort_2_p_0(TypeInfo_20_20, OldItems_13, &SortedOldItems_14);
    mercury__list__sort_2_p_0(TypeInfo_20_20, CurItems_11, &SortedCurItems_15);
    Var_17 = (MR_Integer) 0;
    recompilation__version__are_items_changed_3_p_0(SortedOldItems_14, SortedCurItems_15, &Var_22);
    succeeded = (Var_17 == Var_22);
    if (succeeded)
    {
      TypeCtorInfo_21_21 = (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), TypeCtorInfo_21_21, OldVersionMap_9, ((MR_Box) (NameArity_10)), &conv1_OldVersionNumber_16);
      if (succeeded)
      {
        OldVersionNumber_16 = ((MR_Word) (conv1_OldVersionNumber_16));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    *TimeStamp_12 = OldVersionNumber_16;
  else
    *TimeStamp_12 = SourceFileTime_7;
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
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word Section1_8 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
        MR_Word Item1_9 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
        MR_Word Section2_11;
        MR_Word Item2_12;
        MR_Word Items2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

        Section2_11 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        Item2_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
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
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Item1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ItemClause1_7 = (MR_Word) ((MR_Word) (Item1_4));
        MR_Word PorF_8 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause1_7, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, ItemClause1_7, (MR_Integer) 1))));
        MR_Word Args_10 = ((MR_Word) ((MR_hl_field(0, ItemClause1_7, (MR_Integer) 2))));
        MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(0, ItemClause1_7, (MR_Integer) 4))));
        MR_Word TypeInfo_289_289;
        MR_Word TypeInfo_290_290;
        MR_Word ItemClause2_15;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;

        succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          ItemClause2_15 = (MR_Word) ((MR_Word) (Item2_5));
          Var_225 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause2_15, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_226 = ((MR_Word) ((MR_hl_field(0, ItemClause2_15, (MR_Integer) 1))));
          Var_227 = ((MR_Word) ((MR_hl_field(0, ItemClause2_15, (MR_Integer) 2))));
          Var_228 = ((MR_Word) ((MR_hl_field(0, ItemClause2_15, (MR_Integer) 4))));
          succeeded = (PorF_8 == Var_225);
          if (succeeded)
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_9, Var_226);
            if (succeeded)
            {
              TypeInfo_289_289 = (MR_Word) (&recompilation__version_scalar_common_1[16]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_289_289, ((MR_Box) (Args_10)), ((MR_Box) (Var_227)));
              if (succeeded)
              {
                TypeInfo_290_290 = (MR_Word) (&recompilation__version_scalar_common_3[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_290_290, ((MR_Box) (Goal_12)), ((MR_Box) (Var_228)));
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
        MR_Word ItemPredDecl1_46 = (MR_Word) (MR_body((MR_Word) (Item1_4), (MR_Integer) 1));
        MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word TypesAndMaybeModes1_48 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 2))));
        MR_Word WithType1_49 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 3))));
        MR_Word Det1_51 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 5))));
        MR_Word TVarSet1_53 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 7))));
        MR_Word ExistQVars1_55 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 9))));
        MR_Word Purity_56 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 10))) & (MR_Integer) 3);
        MR_Word Constraints1_57 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 11))));
        MR_Word Name_199 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl1_46, (MR_Integer) 0))));
        MR_Word ItemPredDecl2_60;
        MR_Word TypesAndMaybeModes2_61;
        MR_Word WithType2_62;
        MR_Word Det2_64;
        MR_Word TVarSet2_66;
        MR_Word ExistQVars2_68;
        MR_Word Constraints2_69;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_241;

        succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          ItemPredDecl2_60 = (MR_Word) (MR_body((MR_Word) (Item2_5), (MR_Integer) 1));
          Var_239 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 0))));
          Var_240 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 1))) & (MR_Integer) 1);
          TypesAndMaybeModes2_61 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 2))));
          WithType2_62 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 3))));
          Det2_64 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 5))));
          TVarSet2_66 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 7))));
          ExistQVars2_68 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 9))));
          Var_241 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 10))) & (MR_Integer) 3);
          Constraints2_69 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl2_60, (MR_Integer) 11))));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_199, Var_239);
          if (succeeded)
          {
            succeeded = (PredOrFunc_47 == Var_240);
            if (succeeded)
            {
              succeeded = (Purity_56 == Var_241);
              if (succeeded)
              {
                switch (PredOrFunc_47) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[27]), ((MR_Box) (Det1_51)), ((MR_Box) (Det2_64)));
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                  succeeded = recompilation__version__pred_or_func_type_is_unchanged_10_p_0(TVarSet1_53, ExistQVars1_55, TypesAndMaybeModes1_48, WithType1_49, Constraints1_57, TVarSet2_66, ExistQVars2_68, TypesAndMaybeModes2_61, WithType2_62, Constraints2_69);
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
        MR_Word ItemModeDecl1_72 = (MR_Word) (MR_body((MR_Word) (Item1_4), (MR_Integer) 2));
        MR_Word Modes1_73 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl1_72, (MR_Integer) 2))));
        MR_Word WithInst1_74 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl1_72, (MR_Integer) 3))));
        MR_Word Det_75 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl1_72, (MR_Integer) 4))));
        MR_Word InstVarSet1_76 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl1_72, (MR_Integer) 5))));
        MR_Word Name_200 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl1_72, (MR_Integer) 0))));
        MR_Word PredOrFunc_201 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl1_72, (MR_Integer) 1))));
        MR_Word TypeInfo_321_321;
        MR_Word TypeInfo_322_322;
        MR_Word ItemModeDecl2_79;
        MR_Word Modes2_80;
        MR_Word WithInst2_81;
        MR_Word InstVarSet2_82;
        MR_Word Var_242;
        MR_Word Var_243;
        MR_Word Var_244;

        succeeded = ((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 2);
        if (succeeded)
        {
          ItemModeDecl2_79 = (MR_Word) (MR_body((MR_Word) (Item2_5), (MR_Integer) 2));
          Var_242 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl2_79, (MR_Integer) 0))));
          Var_243 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl2_79, (MR_Integer) 1))));
          Modes2_80 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl2_79, (MR_Integer) 2))));
          WithInst2_81 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl2_79, (MR_Integer) 3))));
          Var_244 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl2_79, (MR_Integer) 4))));
          InstVarSet2_82 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl2_79, (MR_Integer) 5))));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_200, Var_242);
          if (succeeded)
          {
            TypeInfo_321_321 = (MR_Word) (&recompilation__version_scalar_common_1[14]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_321_321, ((MR_Box) (PredOrFunc_201)), ((MR_Box) (Var_243)));
            if (succeeded)
            {
              TypeInfo_322_322 = (MR_Word) (&recompilation__version_scalar_common_1[27]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_322_322, ((MR_Box) (Det_75)), ((MR_Box) (Var_244)));
              if (succeeded)
                succeeded = recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(InstVarSet1_76, Modes1_73, WithInst1_74, InstVarSet2_82, Modes2_80, WithInst2_81);
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
      switch (((MR_Integer) ((MR_hl_field(3, Item1_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemForeignProc1_85 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Attrs_86 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 0))));
            MR_Word SyMname_87 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 1))));
            MR_Word Vars_88 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 3))));
            MR_Word VarSet_89 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 4))));
            MR_Word InstVarSet_90 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 5))));
            MR_Word Impl_91 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 6))));
            MR_Word PredOrFunc_202 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignProc1_85, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word TypeInfo_302_302;
            MR_Word TypeInfo_303_303;
            MR_Word TypeInfo_304_304;
            MR_Word ItemForeignProc2_94;
            MR_Word Var_245;
            MR_Word Var_246;
            MR_Word Var_247;
            MR_Word Var_248;
            MR_Word Var_249;
            MR_Word Var_250;
            MR_Word Var_251;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              ItemForeignProc2_94 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_245 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 0))));
              Var_246 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 1))));
              Var_247 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_248 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 3))));
              Var_249 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 4))));
              Var_250 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 5))));
              Var_251 = ((MR_Word) ((MR_hl_field(0, ItemForeignProc2_94, (MR_Integer) 6))));
              succeeded = parse_tree__prog_data_foreign____Unify____foreign_proc_attributes_0_0(Attrs_86, Var_245);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SyMname_87, Var_246);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_202 == Var_247);
                  if (succeeded)
                  {
                    TypeInfo_302_302 = (MR_Word) (&recompilation__version_scalar_common_1[20]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_302_302, ((MR_Box) (Vars_88)), ((MR_Box) (Var_248)));
                    if (succeeded)
                    {
                      TypeInfo_303_303 = (MR_Word) (&recompilation__version_scalar_common_1[21]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_303_303, ((MR_Box) (VarSet_89)), ((MR_Box) (Var_249)));
                      if (succeeded)
                      {
                        TypeInfo_304_304 = (MR_Word) (&recompilation__version_scalar_common_1[22]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_304_304, ((MR_Box) (InstVarSet_90)), ((MR_Box) (Var_250)));
                        if (succeeded)
                          succeeded = parse_tree__prog_data_foreign____Unify____pragma_foreign_proc_impl_0_0(Impl_91, Var_251);
                      }
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
        case (MR_Integer) 1:
          {
            MR_Word ItemForeignEnum1_97 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Lang_98 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum1_97, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor_99 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum1_97, (MR_Integer) 1))));
            MR_Word Values_100 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum1_97, (MR_Integer) 2))));
            MR_Word TypeInfo_296_296;
            MR_Word ItemForeignEnum2_103;
            MR_Word Var_252;
            MR_Word Var_253;
            MR_Word Var_254;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              ItemForeignEnum2_103 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_252 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum2_103, (MR_Integer) 0))) & (MR_Integer) 3);
              Var_253 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum2_103, (MR_Integer) 1))));
              Var_254 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum2_103, (MR_Integer) 2))));
              succeeded = (Lang_98 == Var_252);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_99, Var_253);
                if (succeeded)
                {
                  TypeInfo_296_296 = (MR_Word) (&recompilation__version_scalar_common_1[18]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_296_296, ((MR_Box) (Values_100)), ((MR_Box) (Var_254)));
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
            MR_Word Overrides_106;
            MR_Word Attrs_205;
            MR_Word ItemForeignEnum1_206 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Lang_207 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum1_206, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor_208 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum1_206, (MR_Integer) 1))));
            MR_Word TypeInfo_299_299;
            MR_Word ItemForeignEnum2_203;
            MR_Word Var_255;
            MR_Word Var_256;
            MR_Word Var_257;
            MR_Word Var_258;

            Attrs_205 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum1_206, (MR_Integer) 2))));
            Overrides_106 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum1_206, (MR_Integer) 3))));
            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ItemForeignEnum2_203 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_255 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum2_203, (MR_Integer) 0))) & (MR_Integer) 3);
              Var_256 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum2_203, (MR_Integer) 1))));
              Var_257 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum2_203, (MR_Integer) 2))));
              Var_258 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum2_203, (MR_Integer) 3))));
              succeeded = (Lang_207 == Var_255);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_208, Var_256);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data_foreign____Unify____export_enum_attributes_0_0(Attrs_205, Var_257);
                  if (succeeded)
                  {
                    TypeInfo_299_299 = (MR_Word) (&recompilation__version_scalar_common_1[19]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_299_299, ((MR_Box) (Overrides_106)), ((MR_Box) (Var_258)));
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
          {
            MR_Word DeclMarker1_113 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word A_114 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker1_113, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word B_115 = ((MR_Word) ((MR_hl_field(0, DeclMarker1_113, (MR_Integer) 1))));
            MR_Word DeclMarker2_118;
            MR_Word Var_259;
            MR_Word Var_260;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              DeclMarker2_118 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_259 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker2_118, (MR_Integer) 0))) & (MR_Integer) 3);
              Var_260 = ((MR_Word) ((MR_hl_field(0, DeclMarker2_118, (MR_Integer) 1))));
              succeeded = (A_114 == Var_259);
              if (succeeded)
                succeeded = parse_tree__prog_item____Unify____pred_pfu_name_arity_0_0(B_115, Var_260);
            }
            if (succeeded)
              *Changed_6 = (MR_Integer) 0;
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ImplMarker1_123 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word A_210 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker1_123, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word B_211 = ((MR_Word) ((MR_hl_field(0, ImplMarker1_123, (MR_Integer) 1))));
            MR_Word ImplMarker2_126;
            MR_Word Var_261;
            MR_Word Var_262;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ImplMarker2_126 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_261 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker2_126, (MR_Integer) 0))) & (MR_Integer) 7);
              Var_262 = ((MR_Word) ((MR_hl_field(0, ImplMarker2_126, (MR_Integer) 1))));
              succeeded = (A_210 == Var_261);
              if (succeeded)
                succeeded = parse_tree__prog_item____Unify____pred_pfu_name_arity_0_0(B_211, Var_262);
            }
            if (succeeded)
              *Changed_6 = (MR_Integer) 0;
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemPromiseInfo1_131 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word PromiseType_132 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromiseInfo1_131, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word UnivVars_134 = ((MR_Word) ((MR_hl_field(0, ItemPromiseInfo1_131, (MR_Integer) 3))));
            MR_Word Goal_212 = ((MR_Word) ((MR_hl_field(0, ItemPromiseInfo1_131, (MR_Integer) 1))));
            MR_Word TypeInfo_334_334;
            MR_Word ItemPromiseInfo2_137;
            MR_Word Var_263;
            MR_Word Var_264;
            MR_Word Var_265;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              ItemPromiseInfo2_137 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_263 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromiseInfo2_137, (MR_Integer) 0))) & (MR_Integer) 3);
              Var_264 = ((MR_Word) ((MR_hl_field(0, ItemPromiseInfo2_137, (MR_Integer) 1))));
              Var_265 = ((MR_Word) ((MR_hl_field(0, ItemPromiseInfo2_137, (MR_Integer) 3))));
              succeeded = (PromiseType_132 == Var_263);
              if (succeeded)
              {
                succeeded = parse_tree__prog_item____Unify____goal_0_0(Goal_212, Var_264);
                if (succeeded)
                {
                  TypeInfo_334_334 = (MR_Word) (&recompilation__version_scalar_common_1[29]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_334_334, ((MR_Box) (UnivVars_134)), ((MR_Box) (Var_265)));
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
            MR_Word ItemTypeClass1_167 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Constraints_168 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass1_167, (MR_Integer) 0))));
            MR_Word FunDeps_169 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass1_167, (MR_Integer) 1))));
            MR_Word Interface1_170 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass1_167, (MR_Integer) 4))));
            MR_Word Name_221 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass1_167, (MR_Integer) 2))));
            MR_Word Vars_222 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass1_167, (MR_Integer) 3))));
            MR_Word TypeInfo_339_339;
            MR_Word TypeInfo_340_340;
            MR_Word TypeInfo_341_341;
            MR_Word ItemTypeClass2_174;
            MR_Word Interface2_175;
            MR_Word Var_278;
            MR_Word Var_279;
            MR_Word Var_280;
            MR_Word Var_281;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              ItemTypeClass2_174 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_278 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass2_174, (MR_Integer) 0))));
              Var_279 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass2_174, (MR_Integer) 1))));
              Var_280 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass2_174, (MR_Integer) 2))));
              Var_281 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass2_174, (MR_Integer) 3))));
              Interface2_175 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass2_174, (MR_Integer) 4))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Constraints_168, Var_278);
              if (succeeded)
              {
                TypeInfo_339_339 = (MR_Word) (&recompilation__version_scalar_common_1[30]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_339_339, ((MR_Box) (FunDeps_169)), ((MR_Box) (Var_279)));
                if (succeeded)
                {
                  TypeInfo_340_340 = (MR_Word) (&recompilation__version_scalar_common_1[26]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_340_340, ((MR_Box) (Name_221)), ((MR_Box) (Var_280)));
                  if (succeeded)
                  {
                    TypeInfo_341_341 = (MR_Word) (&recompilation__version_scalar_common_1[32]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_341_341, ((MR_Box) (Vars_222)), ((MR_Box) (Var_281)));
                    if (succeeded)
                      succeeded = recompilation__version__class_interface_is_unchanged_2_p_0(Interface1_170, Interface2_175);
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
            MR_Word ItemInstance1_179 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Types_180 = ((MR_Word) ((MR_hl_field(0, ItemInstance1_179, (MR_Integer) 2))));
            MR_Word OriginalTypes_181 = ((MR_Word) ((MR_hl_field(0, ItemInstance1_179, (MR_Integer) 3))));
            MR_Word Body_182 = ((MR_Word) ((MR_hl_field(0, ItemInstance1_179, (MR_Integer) 4))));
            MR_Word Module_184 = ((MR_Word) ((MR_hl_field(0, ItemInstance1_179, (MR_Integer) 6))));
            MR_Word Name_223 = ((MR_Word) ((MR_hl_field(0, ItemInstance1_179, (MR_Integer) 1))));
            MR_Word Constraints_224 = ((MR_Word) ((MR_hl_field(0, ItemInstance1_179, (MR_Integer) 0))));
            MR_Word TypeInfo_315_315;
            MR_Word TypeInfo_316_316;
            MR_Word TypeInfo_317_317;
            MR_Word ItemInstance2_187;
            MR_Word Var_282;
            MR_Word Var_283;
            MR_Word Var_284;
            MR_Word Var_285;
            MR_Word Var_286;
            MR_Word Var_287;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (succeeded)
            {
              ItemInstance2_187 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_282 = ((MR_Word) ((MR_hl_field(0, ItemInstance2_187, (MR_Integer) 0))));
              Var_283 = ((MR_Word) ((MR_hl_field(0, ItemInstance2_187, (MR_Integer) 1))));
              Var_284 = ((MR_Word) ((MR_hl_field(0, ItemInstance2_187, (MR_Integer) 2))));
              Var_285 = ((MR_Word) ((MR_hl_field(0, ItemInstance2_187, (MR_Integer) 3))));
              Var_286 = ((MR_Word) ((MR_hl_field(0, ItemInstance2_187, (MR_Integer) 4))));
              Var_287 = ((MR_Word) ((MR_hl_field(0, ItemInstance2_187, (MR_Integer) 6))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Constraints_224, Var_282);
              if (succeeded)
              {
                TypeInfo_315_315 = (MR_Word) (&recompilation__version_scalar_common_1[25]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_315_315, ((MR_Box) (Name_223)), ((MR_Box) (Var_283)));
                if (succeeded)
                {
                  TypeInfo_316_316 = (MR_Word) (&recompilation__version_scalar_common_1[25]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_316_316, ((MR_Box) (Types_180)), ((MR_Box) (Var_284)));
                  if (succeeded)
                  {
                    TypeInfo_317_317 = (MR_Word) (&recompilation__version_scalar_common_1[26]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_317_317, ((MR_Box) (OriginalTypes_181)), ((MR_Box) (Var_285)));
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____instance_body_0_0(Body_182, Var_286);
                      if (succeeded)
                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_184, Var_287);
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
        case (MR_Integer) 8:
          {
            MR_Word ItemInitialise1_141 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word C_142 = ((MR_Word) ((MR_hl_field(0, ItemInitialise1_141, (MR_Integer) 2))));
            MR_Word A_213 = ((MR_Word) ((MR_hl_field(0, ItemInitialise1_141, (MR_Integer) 0))));
            MR_Word B_214 = ((MR_Word) ((MR_hl_field(0, ItemInitialise1_141, (MR_Integer) 1))));
            MR_Word ItemInitialise2_145;
            MR_Word Var_266;
            MR_Word Var_267;
            MR_Word Var_268;
            MR_Integer Var_344;
            MR_Integer Var_345;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (succeeded)
            {
              ItemInitialise2_145 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_266 = ((MR_Word) ((MR_hl_field(0, ItemInitialise2_145, (MR_Integer) 0))));
              Var_267 = ((MR_Word) ((MR_hl_field(0, ItemInitialise2_145, (MR_Integer) 1))));
              Var_268 = ((MR_Word) ((MR_hl_field(0, ItemInitialise2_145, (MR_Integer) 2))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(A_213, Var_266);
              if (succeeded)
              {
                Var_344 = (MR_Integer) (B_214);
                Var_345 = (MR_Integer) (Var_267);
                succeeded = (Var_344 == Var_345);
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(C_142, Var_268);
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
            MR_Word ItemFinalise1_148 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word A_215 = ((MR_Word) ((MR_hl_field(0, ItemFinalise1_148, (MR_Integer) 0))));
            MR_Word B_216 = ((MR_Word) ((MR_hl_field(0, ItemFinalise1_148, (MR_Integer) 1))));
            MR_Word C_217 = ((MR_Word) ((MR_hl_field(0, ItemFinalise1_148, (MR_Integer) 2))));
            MR_Word ItemFinalise2_151;
            MR_Word Var_269;
            MR_Word Var_270;
            MR_Word Var_271;
            MR_Integer Var_342;
            MR_Integer Var_343;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              ItemFinalise2_151 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_269 = ((MR_Word) ((MR_hl_field(0, ItemFinalise2_151, (MR_Integer) 0))));
              Var_270 = ((MR_Word) ((MR_hl_field(0, ItemFinalise2_151, (MR_Integer) 1))));
              Var_271 = ((MR_Word) ((MR_hl_field(0, ItemFinalise2_151, (MR_Integer) 2))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(A_215, Var_269);
              if (succeeded)
              {
                Var_342 = (MR_Integer) (B_216);
                Var_343 = (MR_Integer) (Var_270);
                succeeded = (Var_342 == Var_343);
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(C_217, Var_271);
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
            MR_Word ItemMutable1_154 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word D_157 = ((MR_Word) ((MR_hl_field(0, ItemMutable1_154, (MR_Integer) 5))));
            MR_Word E_158 = ((MR_Word) ((MR_hl_field(0, ItemMutable1_154, (MR_Integer) 6))));
            MR_Word F_159 = ((MR_Word) ((MR_hl_field(0, ItemMutable1_154, (MR_Integer) 7))));
            MR_String A_218 = ((MR_String) ((MR_hl_field(0, ItemMutable1_154, (MR_Integer) 0))));
            MR_Word B_219 = ((MR_Word) ((MR_hl_field(0, ItemMutable1_154, (MR_Integer) 2))));
            MR_Word C_220 = ((MR_Word) ((MR_hl_field(0, ItemMutable1_154, (MR_Integer) 4))));
            MR_Word TypeInfo_328_328;
            MR_Word TypeInfo_329_329;
            MR_Word ItemMutable2_162;
            MR_String Var_272;
            MR_Word Var_273;
            MR_Word Var_274;
            MR_Word Var_275;
            MR_Word Var_276;
            MR_Word Var_277;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 10)));
            if (succeeded)
            {
              ItemMutable2_162 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_272 = ((MR_String) ((MR_hl_field(0, ItemMutable2_162, (MR_Integer) 0))));
              Var_273 = ((MR_Word) ((MR_hl_field(0, ItemMutable2_162, (MR_Integer) 2))));
              Var_274 = ((MR_Word) ((MR_hl_field(0, ItemMutable2_162, (MR_Integer) 4))));
              Var_275 = ((MR_Word) ((MR_hl_field(0, ItemMutable2_162, (MR_Integer) 5))));
              Var_276 = ((MR_Word) ((MR_hl_field(0, ItemMutable2_162, (MR_Integer) 6))));
              Var_277 = ((MR_Word) ((MR_hl_field(0, ItemMutable2_162, (MR_Integer) 7))));
              succeeded = (strcmp(A_218, Var_272) == 0);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(B_219, Var_273);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(C_220, Var_274);
                  if (succeeded)
                  {
                    TypeInfo_328_328 = (MR_Word) (&recompilation__version_scalar_common_1[13]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_328_328, ((MR_Box) (D_157)), ((MR_Box) (Var_275)));
                    if (succeeded)
                    {
                      TypeInfo_329_329 = (MR_Word) (&recompilation__version_scalar_common_1[21]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_329_329, ((MR_Box) (E_158)), ((MR_Box) (Var_276)));
                      if (succeeded)
                        succeeded = parse_tree__prog_item____Unify____mutable_var_attributes_0_0(F_159, Var_277);
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
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeDefn1_19 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Name_21 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn1_19, (MR_Integer) 1))));
            MR_Word Defn_22 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn1_19, (MR_Integer) 3))));
            MR_Word Args_192 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn1_19, (MR_Integer) 2))));
            MR_Word TypeInfo_335_335;
            MR_Word TypeInfo_337_337;
            MR_Word ItemTypeDefn2_25;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 11)));
            if (succeeded)
            {
              ItemTypeDefn2_25 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_229 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn2_25, (MR_Integer) 1))));
              Var_230 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn2_25, (MR_Integer) 2))));
              Var_231 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn2_25, (MR_Integer) 3))));
              TypeInfo_335_335 = (MR_Word) (&recompilation__version_scalar_common_1[30]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_335_335, ((MR_Box) (Name_21)), ((MR_Box) (Var_229)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_defn_0_0(Args_192, Var_230);
                if (succeeded)
                {
                  TypeInfo_337_337 = (MR_Word) (&recompilation__version_scalar_common_1[31]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_337_337, ((MR_Box) (Defn_22)), ((MR_Box) (Var_231)));
                }
              }
            }
            if (succeeded)
              *Changed_6 = (MR_Integer) 0;
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemInstDefn1_29 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word MaybeForTypeCtor_31 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn1_29, (MR_Integer) 3))));
            MR_Word Args_193 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn1_29, (MR_Integer) 2))));
            MR_Word Name_194 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn1_29, (MR_Integer) 1))));
            MR_Word Defn_195 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn1_29, (MR_Integer) 4))));
            MR_Word TypeInfo_310_310;
            MR_Word TypeInfo_311_311;
            MR_Word TypeInfo_313_313;
            MR_Word ItemInstDefn2_34;
            MR_Word Var_232;
            MR_Word Var_233;
            MR_Word Var_234;
            MR_Word Var_235;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (succeeded)
            {
              ItemInstDefn2_34 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_232 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn2_34, (MR_Integer) 1))));
              Var_233 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn2_34, (MR_Integer) 2))));
              Var_234 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn2_34, (MR_Integer) 3))));
              Var_235 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn2_34, (MR_Integer) 4))));
              TypeInfo_310_310 = (MR_Word) (&recompilation__version_scalar_common_1[23]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_310_310, ((MR_Box) (Name_194)), ((MR_Box) (Var_232)));
              if (succeeded)
              {
                TypeInfo_311_311 = (MR_Word) (&recompilation__version_scalar_common_1[24]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_311_311, ((MR_Box) (Args_193)), ((MR_Box) (Var_233)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_item____Unify____maybe_abstract_inst_defn_0_0(MaybeForTypeCtor_31, Var_234);
                  if (succeeded)
                  {
                    TypeInfo_313_313 = (MR_Word) (&recompilation__version_scalar_common_1[22]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_313_313, ((MR_Box) (Defn_195)), ((MR_Box) (Var_235)));
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
        case (MR_Integer) 13:
          {
            MR_Word ItemModeDefn1_38 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word Args_196 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn1_38, (MR_Integer) 2))));
            MR_Word Name_197 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn1_38, (MR_Integer) 1))));
            MR_Word Defn_198 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn1_38, (MR_Integer) 3))));
            MR_Word TypeInfo_323_323;
            MR_Word TypeInfo_325_325;
            MR_Word ItemModeDefn2_42;
            MR_Word Var_236;
            MR_Word Var_237;
            MR_Word Var_238;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 13)));
            if (succeeded)
            {
              ItemModeDefn2_42 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              Var_236 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn2_42, (MR_Integer) 1))));
              Var_237 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn2_42, (MR_Integer) 2))));
              Var_238 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn2_42, (MR_Integer) 3))));
              TypeInfo_323_323 = (MR_Word) (&recompilation__version_scalar_common_1[23]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_323_323, ((MR_Box) (Name_197)), ((MR_Box) (Var_236)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_item____Unify____maybe_abstract_mode_defn_0_0(Args_196, Var_237);
                if (succeeded)
                {
                  TypeInfo_325_325 = (MR_Word) (&recompilation__version_scalar_common_1[22]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_325_325, ((MR_Box) (Defn_198)), ((MR_Box) (Var_238)));
                }
              }
            }
            if (succeeded)
              *Changed_6 = (MR_Integer) 0;
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word DeclPragma1_111 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word DeclPragma2_112;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 14)));
            if (succeeded)
            {
              DeclPragma2_112 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              recompilation__version__is_decl_pragma_changed_3_p_0(DeclPragma1_111, DeclPragma2_112, Changed_6);
            }
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word ImplPragma1_121 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word ImplPragma2_122;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 15)));
            if (succeeded)
            {
              ImplPragma2_122 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              recompilation__version__is_impl_pragma_changed_3_p_0(ImplPragma1_121, ImplPragma2_122, Changed_6);
            }
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word GenPragma1_129 = ((MR_Word) ((MR_hl_field(3, Item1_4, (MR_Integer) 1))));
            MR_Word GenPragma2_130;

            succeeded = ((((MR_tag((MR_Word) Item2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Item2_5, (MR_Integer) 0)))) == (MR_Integer) 16)));
            if (succeeded)
            {
              GenPragma2_130 = ((MR_Word) ((MR_hl_field(3, Item2_5, (MR_Integer) 1))));
              recompilation__version__is_gen_pragma_changed_3_p_0(GenPragma1_129, GenPragma2_130, Changed_6);
            }
            else
              *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 17:
          *Changed_6 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
recompilation__version__class_interface_is_unchanged_2_p_0(
  MR_Word Interface0_3,
  MR_Word Interface_4)
{
  MR_bool succeeded;

  if ((Interface0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = (Interface_4 == (MR_Word) ((MR_Unsigned) 0U));
  else
  {
    MR_Word Methods1_5 = ((MR_Word) ((MR_hl_field(1, Interface0_3, (MR_Integer) 0))));
    MR_Word Methods2_6;

    succeeded = (Interface_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Methods2_6 = ((MR_Word) ((MR_hl_field(1, Interface_4, (MR_Integer) 0))));
      succeeded = recompilation__version__class_methods_are_unchanged_2_p_0(Methods1_5, Methods2_6);
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
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
      MR_Word Decl1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Decls1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Decl2_5;
      MR_Word Decls2_6;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Decl2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        Decls2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Decl1_3)) == (MR_Integer) 1))
        {
          MR_Word TypeInfo_50_50;
          MR_Word TypeInfo_51_51;
          MR_Word TypeCtorInfo_38_79;
          MR_Word TypeCtorInfo_39_80;
          MR_Word TypeCtorInfo_40_81;
          MR_Word TypeInfo_41_82;
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
          MR_Word VarSet1_54;
          MR_Word VarSet2_55;
          MR_Word InstRenaming_57;
          MR_Word ModeTerms1_58;
          MR_Word ModeTerms2_59;
          MR_Word AllModeTerms1_64;
          MR_Word AllModeTerms2_65;
          MR_Word SubstAllModeTerms2_66;
          MR_Word Var_69;
          MR_Word Var_56;
          MR_Word Var_67;
          MR_Word Var_68;

          succeeded = ((MR_tag((MR_Word) Decl2_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            ModeInfo2_30 = (MR_Word) (MR_body((MR_Word) (Decl2_5), (MR_Integer) 1));
            Name_40 = ((MR_Word) ((MR_hl_field(0, ModeInfo1_29, (MR_Integer) 0))));
            PredOrFunc_41 = ((MR_Word) ((MR_hl_field(0, ModeInfo1_29, (MR_Integer) 1))));
            Modes1_31 = ((MR_Word) ((MR_hl_field(0, ModeInfo1_29, (MR_Integer) 2))));
            WithInst1_32 = ((MR_Word) ((MR_hl_field(0, ModeInfo1_29, (MR_Integer) 3))));
            Det_33 = ((MR_Word) ((MR_hl_field(0, ModeInfo1_29, (MR_Integer) 4))));
            InstVarSet1_34 = ((MR_Word) ((MR_hl_field(0, ModeInfo1_29, (MR_Integer) 5))));
            Var_46 = ((MR_Word) ((MR_hl_field(0, ModeInfo2_30, (MR_Integer) 0))));
            Var_47 = ((MR_Word) ((MR_hl_field(0, ModeInfo2_30, (MR_Integer) 1))));
            Modes2_36 = ((MR_Word) ((MR_hl_field(0, ModeInfo2_30, (MR_Integer) 2))));
            WithInst2_37 = ((MR_Word) ((MR_hl_field(0, ModeInfo2_30, (MR_Integer) 3))));
            Var_48 = ((MR_Word) ((MR_hl_field(0, ModeInfo2_30, (MR_Integer) 4))));
            InstVarSet2_38 = ((MR_Word) ((MR_hl_field(0, ModeInfo2_30, (MR_Integer) 5))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_40, Var_46);
            if (succeeded)
            {
              TypeInfo_50_50 = (MR_Word) (&recompilation__version_scalar_common_1[14]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (PredOrFunc_41)), ((MR_Box) (Var_47)));
              if (succeeded)
              {
                TypeInfo_51_51 = (MR_Word) (&recompilation__version_scalar_common_1[27]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (Det_33)), ((MR_Box) (Var_48)));
                if (succeeded)
                {
                  TypeCtorInfo_38_79 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
                  TypeCtorInfo_39_80 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_38_79, TypeCtorInfo_39_80, InstVarSet1_34, &VarSet1_54);
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_38_79, TypeCtorInfo_39_80, InstVarSet2_38, &VarSet2_55);
                  mercury__varset__merge_renaming_4_p_0(TypeCtorInfo_39_80, VarSet1_54, VarSet2_55, &Var_56, &InstRenaming_57);
                  TypeCtorInfo_40_81 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                  TypeInfo_41_82 = (MR_Word) (&recompilation__version_scalar_common_1[13]);
                  Var_69 = (MR_Word) (&recompilation__version_scalar_common_3[39]);
                  ModeTerms1_58 = mercury__list__map_2_f_0(TypeCtorInfo_40_81, TypeInfo_41_82, Var_69, Modes1_31);
                  ModeTerms2_59 = mercury__list__map_2_f_0(TypeCtorInfo_40_81, TypeInfo_41_82, Var_69, Modes2_36);
                  if ((WithInst1_32 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    succeeded = (WithInst2_37 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      AllModeTerms1_64 = ModeTerms1_58;
                      AllModeTerms2_65 = ModeTerms2_59;
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word Inst1_60 = ((MR_Word) ((MR_hl_field(1, WithInst1_32, (MR_Integer) 0))));
                    MR_Word Inst2_61;
                    MR_Word WithInstTerm1_62;
                    MR_Word WithInstTerm2_63;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_78;

                    succeeded = (WithInst2_37 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Inst2_61 = ((MR_Word) ((MR_hl_field(1, WithInst2_37, (MR_Integer) 0))));
                      Var_73 = (MR_Integer) 0;
                      Var_75 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_74, 0) = ((MR_Box) (Var_75));
                        MR_hl_field(0, Var_74, 1) = ((MR_Box) (Inst1_60));
                      }
                      WithInstTerm1_62 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_73, Var_74);
                      Var_76 = (MR_Integer) 0;
                      Var_78 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
                        MR_hl_field(0, Var_77, 1) = ((MR_Box) (Inst2_61));
                      }
                      WithInstTerm2_63 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_76, Var_77);
                      {
                        AllModeTerms1_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, AllModeTerms1_64, 0) = ((MR_Box) (WithInstTerm1_62));
                        MR_hl_field(1, AllModeTerms1_64, 1) = ((MR_Box) (ModeTerms1_58));
                      }
                      {
                        AllModeTerms2_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, AllModeTerms2_65, 0) = ((MR_Box) (WithInstTerm2_63));
                        MR_hl_field(1, AllModeTerms2_65, 1) = ((MR_Box) (ModeTerms2_59));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeCtorInfo_39_80, InstRenaming_57, AllModeTerms2_65, &SubstAllModeTerms2_66);
                    succeeded = mercury__term_unify__first_term_list_subsumes_second_3_p_0(TypeCtorInfo_39_80, AllModeTerms1_64, SubstAllModeTerms2_66, &Var_67);
                    if (succeeded)
                      succeeded = mercury__term_unify__first_term_list_subsumes_second_3_p_0(TypeCtorInfo_39_80, SubstAllModeTerms2_66, AllModeTerms1_64, &Var_68);
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
            Name_9 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 0))));
            PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 1))) & (MR_Integer) 1);
            TypesAndModes1_11 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 2))));
            WithType1_12 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 3))));
            Detism_14 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 5))));
            TVarSet1_15 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 6))));
            ExistQVars1_17 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 8))));
            Purity_18 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 9))) & (MR_Integer) 3);
            Constraints1_19 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo1_7, (MR_Integer) 10))));
            Var_42 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 0))));
            Var_43 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 1))) & (MR_Integer) 1);
            TypesAndModes2_21 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 2))));
            WithType2_22 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 3))));
            Var_44 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 5))));
            TVarSet2_24 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 6))));
            ExistQVars2_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 8))));
            Var_45 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 9))) & (MR_Integer) 3);
            Constraints2_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo2_8, (MR_Integer) 10))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_9, Var_42);
            if (succeeded)
            {
              succeeded = (PredOrFunc_10 == Var_43);
              if (succeeded)
              {
                TypeInfo_53_53 = (MR_Word) (&recompilation__version_scalar_common_1[27]);
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
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
  ModeTerms1_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__version_scalar_common_1[13]), (MR_Word) (&recompilation__version_scalar_common_3[38]), Modes1_8);
  ModeTerms2_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__version_scalar_common_1[13]), (MR_Word) (&recompilation__version_scalar_common_3[38]), Modes2_11);
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
    MR_Word Inst1_19 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst1_9, (MR_Integer) 0))));
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
      Inst2_20 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst2_12, (MR_Integer) 0))));
      Var_32 = (MR_Integer) 0;
      Var_34 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (Inst1_19));
      }
      WithInstTerm1_21 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_32, Var_33);
      Var_35 = (MR_Integer) 0;
      Var_37 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (Inst2_20));
      }
      WithInstTerm2_22 = parse_tree__parse_tree_to_term__mode_to_term_2_f_0(Var_35, Var_36);
      {
        AllModeTerms1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AllModeTerms1_23, 0) = ((MR_Box) (WithInstTerm1_21));
        MR_hl_field(1, AllModeTerms1_23, 1) = ((MR_Box) (ModeTerms1_17));
      }
      {
        AllModeTerms2_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AllModeTerms2_24, 0) = ((MR_Box) (WithInstTerm2_22));
        MR_hl_field(1, AllModeTerms2_24, 1) = ((MR_Box) (ModeTerms2_18));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    mercury__term_subst__apply_renaming_in_terms_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstRenaming_16, AllModeTerms2_24, &SubstAllModeTerms2_25);
    succeeded = mercury__term_unify__first_term_list_subsumes_second_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllModeTerms1_23, SubstAllModeTerms2_25, &Var_26);
    if (succeeded)
      succeeded = mercury__term_unify__first_term_list_subsumes_second_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SubstAllModeTerms2_25, AllModeTerms1_23, &Var_27);
  }
  return succeeded;
}

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(
  void * env_ptr_arg)
{
  struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s * env_ptr = (struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_3(
  void * env_ptr_arg)
{
  struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s * env_ptr = (struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__VarInItem2_52 = ((MR_Word) ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__conv1_VarInItem2_52));
  (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__SubstTerm_53 = ((MR_Word) ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__conv0_SubstTerm_53));
  recompilation__version__pred_or_func_type_is_unchanged_10_p_0_2(env_ptr);
}

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_2(
  void * env_ptr_arg)
{
  struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s * env_ptr = (struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_54;
    MR_Word TypeCtorInfo_32_60;
    MR_String VarName1_55;
    MR_String VarName2_56;

    (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__SubstTerm_53)) == (MR_Integer) 0);
    if ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
    {
      (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__VarInItem1_51 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__SubstTerm_53, (MR_Integer) 0))));
      Var_54 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__SubstTerm_53, (MR_Integer) 1))));
      TypeCtorInfo_32_60 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_60, (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0___TVarSet_29, (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__VarInItem1_51, &VarName1_55);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_60, (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0___TVarSet_29, (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__VarInItem2_52, &VarName2_56);
      (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = (strcmp(VarName1_55, VarName2_56) == 0);
      if (!((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded))
      {
        MR_String VarNum_61;
        MR_String VarNum_64;
        MR_String Var_66;
        MR_Integer Var_62;
        MR_Integer Var_65;

        (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) "V_", &VarNum_61, VarName1_55);
        if ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_61, &Var_62);
          if ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
          {
            Var_66 = (MR_String) "V_";
            (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_66, &VarNum_64, VarName2_56);
            if ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
              (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_64, &Var_65);
          }
        }
      }
      (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = !((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded);
      if ((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
        recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_4(
  void * env_ptr_arg)
{
  struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s * env_ptr = (struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__commit_0) == 0)
    {
      mercury__map__member_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__Types2ToTypes1Subst_31, &(env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__conv1_VarInItem2_52, &(env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__conv0_SubstTerm_53, recompilation__version__pred_or_func_type_is_unchanged_10_p_0_3, env_ptr);
      (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0(
  MR_Word TVarSet1_11,
  MR_Word ExistQVars1_12,
  MR_Word TypesAndMaybeModes1_13,
  MR_Word MaybeWithType1_14,
  MR_Word Constraints1_15,
  MR_Word TVarSet2_16,
  MR_Word ExistQVars2_17,
  MR_Word TypesAndMaybeModes2_18,
  MR_Word MaybeWithType2_19,
  MR_Word Constraints2_20)
{
  struct recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0_s env;

  {
    MR_Word TypeInfo_45_45;
    MR_Word TypeCtorInfo_46_46;
    MR_Word Types1_21;
    MR_Word Types2_23;
    MR_Word AllTypes1_27;
    MR_Word AllTypes2_28;
    MR_Word Renaming_30;
    MR_Word KindMap2_32;
    MR_Word RenamedKindMap2_33;
    MR_Word RenamedExistQVars2_34;
    MR_Word SubstExistQTypes2_35;
    MR_Word RenamedConstraints2_37;
    MR_Word SubstConstraints2_38;
    MR_Word SubstTypes2_49;
    MR_Word Var_50;
    MR_Word SubstExistQVars2_36;

    switch (MR_tag((MR_Word) TypesAndMaybeModes1_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Types1_21 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        Types1_21 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes1_13, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "types_and_modes");
        break;
    }
    switch (MR_tag((MR_Word) TypesAndMaybeModes2_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Types2_23 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        Types2_23 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes2_18, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "types_and_modes");
        break;
    }
    if ((MaybeWithType1_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = (MaybeWithType2_19 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
      {
        AllTypes1_27 = Types1_21;
        AllTypes2_28 = Types2_23;
        (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word WithType1_25 = ((MR_Word) ((MR_hl_field(1, MaybeWithType1_14, (MR_Integer) 0))));
      MR_Word WithType2_26;

      (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = (MaybeWithType2_19 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
      {
        WithType2_26 = ((MR_Word) ((MR_hl_field(1, MaybeWithType2_19, (MR_Integer) 0))));
        {
          AllTypes1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllTypes1_27, 0) = ((MR_Box) (WithType1_25));
          MR_hl_field(1, AllTypes1_27, 1) = ((MR_Box) (Types1_21));
        }
        {
          AllTypes2_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllTypes2_28, 0) = ((MR_Box) (WithType2_26));
          MR_hl_field(1, AllTypes2_28, 1) = ((MR_Box) (Types2_23));
        }
        (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = MR_TRUE;
      }
    }
    if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet1_11, TVarSet2_16, &(env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0___TVarSet_29, &Renaming_30);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_30, AllTypes2_28, &SubstTypes2_49);
      (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(SubstTypes2_49, AllTypes1_27, &(env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__Types2ToTypes1Subst_31);
      if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
      {
        (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(AllTypes1_27, SubstTypes2_49, &Var_50);
        if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
        {
          recompilation__version__pred_or_func_type_is_unchanged_10_p_0_4(&env);
          (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = !((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded);
          if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
          {
            TypeInfo_45_45 = (MR_Word) (&recompilation__version_scalar_common_1[9]);
            TypeCtorInfo_46_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
            mercury__map__init_1_p_0(TypeInfo_45_45, TypeCtorInfo_46_46, &KindMap2_32);
            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_30, KindMap2_32, &RenamedKindMap2_33);
            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_30, ExistQVars2_17, &RenamedExistQVars2_34);
            parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap2_33, (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__Types2ToTypes1Subst_31, RenamedExistQVars2_34, &SubstExistQTypes2_35);
            (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(SubstExistQTypes2_35, &SubstExistQVars2_36);
            if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
              (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__version_scalar_common_1[30]), ((MR_Box) (ExistQVars1_12)), ((MR_Box) (SubstExistQVars2_36)));
            else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "non-var");
              (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = MR_TRUE;
            }
            if ((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded)
            {
              parse_tree__prog_type_subst__apply_variable_renaming_to_univ_exist_constraints_3_p_0(Renaming_30, Constraints2_20, &RenamedConstraints2_37);
              parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0((env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__Types2ToTypes1Subst_31, RenamedConstraints2_37, &SubstConstraints2_38);
              (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded = parse_tree__prog_data____Unify____univ_exist_constraints_0_0(Constraints1_15, SubstConstraints2_38);
            }
          }
        }
      }
    }
    return (env).recompilation__version__pred_or_func_type_is_unchanged_10_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
recompilation__version__is_gen_pragma_changed_3_p_0(
  MR_Word GenPragma1_4,
  MR_Word GenPragma2_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenPragma1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeInfo_52_52;
        MR_Word UnusedArgs1_7 = (MR_Word) ((MR_Word) (GenPragma1_4));
        MR_Word UnusedArgs2_8;
        MR_Word A_9;
        MR_Word B_10;
        MR_Word Var_39;
        MR_Word Var_40;

        succeeded = ((MR_tag((MR_Word) GenPragma2_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          UnusedArgs2_8 = (MR_Word) ((MR_Word) (GenPragma2_5));
          A_9 = ((MR_Word) ((MR_hl_field(0, UnusedArgs1_7, (MR_Integer) 0))));
          B_10 = ((MR_Word) ((MR_hl_field(0, UnusedArgs1_7, (MR_Integer) 1))));
          Var_39 = ((MR_Word) ((MR_hl_field(0, UnusedArgs2_8, (MR_Integer) 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(0, UnusedArgs2_8, (MR_Integer) 1))));
          succeeded = parse_tree__prog_item____Unify____proc_pf_name_arity_mn_0_0(A_9, Var_39);
          if (succeeded)
          {
            TypeInfo_52_52 = (MR_Word) (&recompilation__version_scalar_common_1[46]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (B_10)), ((MR_Box) (Var_40)));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Exceptions1_15 = (MR_Word) (MR_body((MR_Word) (GenPragma1_4), (MR_Integer) 1));
        MR_Word Exceptions2_16;
        MR_Word A_33;
        MR_Word B_34;
        MR_Word Var_41;
        MR_Word Var_42;

        succeeded = ((MR_tag((MR_Word) GenPragma2_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Exceptions2_16 = (MR_Word) (MR_body((MR_Word) (GenPragma2_5), (MR_Integer) 1));
          A_33 = ((MR_Word) ((MR_hl_field(0, Exceptions1_15, (MR_Integer) 0))));
          B_34 = ((MR_Word) ((MR_hl_field(0, Exceptions1_15, (MR_Integer) 1))));
          Var_41 = ((MR_Word) ((MR_hl_field(0, Exceptions2_16, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(0, Exceptions2_16, (MR_Integer) 1))));
          succeeded = parse_tree__prog_item____Unify____proc_pf_name_arity_mn_0_0(A_33, Var_41);
          if (succeeded)
            succeeded = parse_tree__prog_data_pragma____Unify____exception_status_0_0(B_34, Var_42);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Trailing1_21 = (MR_Word) (MR_body((MR_Word) (GenPragma1_4), (MR_Integer) 2));
        MR_Word Trailing2_22;
        MR_Word A_35;
        MR_Word B_36;
        MR_Word Var_43;
        MR_Word Var_44;

        succeeded = ((MR_tag((MR_Word) GenPragma2_5)) == (MR_Integer) 2);
        if (succeeded)
        {
          Trailing2_22 = (MR_Word) (MR_body((MR_Word) (GenPragma2_5), (MR_Integer) 2));
          A_35 = ((MR_Word) ((MR_hl_field(0, Trailing1_21, (MR_Integer) 0))));
          B_36 = ((MR_Unsigned) ((MR_hl_field(0, Trailing1_21, (MR_Integer) 1))) & (MR_Integer) 3);
          Var_43 = ((MR_Word) ((MR_hl_field(0, Trailing2_22, (MR_Integer) 0))));
          Var_44 = ((MR_Unsigned) ((MR_hl_field(0, Trailing2_22, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = parse_tree__prog_item____Unify____proc_pf_name_arity_mn_0_0(A_35, Var_43);
          if (succeeded)
            succeeded = (B_36 == Var_44);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word MMTabling1_27 = (MR_Word) (MR_body((MR_Word) (GenPragma1_4), (MR_Integer) 3));
        MR_Word MMTabling2_28;
        MR_Word A_37;
        MR_Word B_38;
        MR_Word Var_45;
        MR_Word Var_46;

        succeeded = ((MR_tag((MR_Word) GenPragma2_5)) == (MR_Integer) 3);
        if (succeeded)
        {
          MMTabling2_28 = (MR_Word) (MR_body((MR_Word) (GenPragma2_5), (MR_Integer) 3));
          A_37 = ((MR_Word) ((MR_hl_field(0, MMTabling1_27, (MR_Integer) 0))));
          B_38 = ((MR_Unsigned) ((MR_hl_field(0, MMTabling1_27, (MR_Integer) 1))) & (MR_Integer) 3);
          Var_45 = ((MR_Word) ((MR_hl_field(0, MMTabling2_28, (MR_Integer) 0))));
          Var_46 = ((MR_Unsigned) ((MR_hl_field(0, MMTabling2_28, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = parse_tree__prog_item____Unify____proc_pf_name_arity_mn_0_0(A_37, Var_45);
          if (succeeded)
            succeeded = (B_38 == Var_46);
        }
      }
      break;
  }
  if (succeeded)
    *Changed_6 = (MR_Integer) 0;
  else
    *Changed_6 = (MR_Integer) 1;
}

static void MR_CALL 
recompilation__version__is_impl_pragma_changed_3_p_0(
  MR_Word ImplPragma1_4,
  MR_Word ImplPragma2_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ImplPragma1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Decl1_7 = (MR_Word) ((MR_Word) (ImplPragma1_4));
        MR_Word Decl2_8;
        MR_Word A_9;
        MR_Word B_10;
        MR_Word C_11;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        succeeded = ((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          Decl2_8 = (MR_Word) ((MR_Word) (ImplPragma2_5));
          A_9 = ((((MR_Unsigned) ((MR_hl_field(0, Decl1_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          B_10 = ((MR_Unsigned) ((MR_hl_field(0, Decl1_7, (MR_Integer) 0))) & (MR_Integer) 1);
          C_11 = ((MR_Word) ((MR_hl_field(0, Decl1_7, (MR_Integer) 1))));
          Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, Decl2_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          Var_76 = ((MR_Unsigned) ((MR_hl_field(0, Decl2_8, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_77 = ((MR_Word) ((MR_hl_field(0, Decl2_8, (MR_Integer) 1))));
          succeeded = (A_9 == Var_75);
          if (succeeded)
          {
            succeeded = (B_10 == Var_76);
            if (succeeded)
              succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(C_11, Var_77);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Code1_16 = (MR_Word) (MR_body((MR_Word) (ImplPragma1_4), (MR_Integer) 1));
        MR_Word Code2_17;
        MR_Word A_60;
        MR_Word B_61;
        MR_Word Var_78;
        MR_Word Var_79;

        succeeded = ((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Code2_17 = (MR_Word) (MR_body((MR_Word) (ImplPragma2_5), (MR_Integer) 1));
          A_60 = ((MR_Unsigned) ((MR_hl_field(0, Code1_16, (MR_Integer) 0))) & (MR_Integer) 3);
          B_61 = ((MR_Word) ((MR_hl_field(0, Code1_16, (MR_Integer) 1))));
          Var_78 = ((MR_Unsigned) ((MR_hl_field(0, Code2_17, (MR_Integer) 0))) & (MR_Integer) 3);
          Var_79 = ((MR_Word) ((MR_hl_field(0, Code2_17, (MR_Integer) 1))));
          succeeded = (A_60 == Var_78);
          if (succeeded)
            succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(B_61, Var_79);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_102_102;
        MR_Word Export1_22 = (MR_Word) (MR_body((MR_Word) (ImplPragma1_4), (MR_Integer) 2));
        MR_Word Export2_23;
        MR_String D_24;
        MR_Word E_25;
        MR_Word A_62;
        MR_Word B_63;
        MR_Word C_64;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_String Var_83;
        MR_Word Var_84;

        succeeded = ((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 2);
        if (succeeded)
        {
          Export2_23 = (MR_Word) (MR_body((MR_Word) (ImplPragma2_5), (MR_Integer) 2));
          A_62 = ((MR_Word) ((MR_hl_field(0, Export1_22, (MR_Integer) 0))));
          B_63 = ((MR_Unsigned) ((MR_hl_field(0, Export1_22, (MR_Integer) 1))) & (MR_Integer) 3);
          C_64 = ((MR_Word) ((MR_hl_field(0, Export1_22, (MR_Integer) 2))));
          D_24 = ((MR_String) ((MR_hl_field(0, Export1_22, (MR_Integer) 3))));
          E_25 = ((MR_Word) ((MR_hl_field(0, Export1_22, (MR_Integer) 4))));
          Var_80 = ((MR_Word) ((MR_hl_field(0, Export2_23, (MR_Integer) 0))));
          Var_81 = ((MR_Unsigned) ((MR_hl_field(0, Export2_23, (MR_Integer) 1))) & (MR_Integer) 3);
          Var_82 = ((MR_Word) ((MR_hl_field(0, Export2_23, (MR_Integer) 2))));
          Var_83 = ((MR_String) ((MR_hl_field(0, Export2_23, (MR_Integer) 3))));
          Var_84 = ((MR_Word) ((MR_hl_field(0, Export2_23, (MR_Integer) 4))));
          succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(A_62, Var_80);
          if (succeeded)
          {
            succeeded = (B_63 == Var_81);
            if (succeeded)
            {
              succeeded = parse_tree__prog_item____Unify____proc_pf_name_modes_0_0(C_64, Var_82);
              if (succeeded)
              {
                succeeded = (strcmp(D_24, Var_83) == 0);
                if (succeeded)
                {
                  TypeInfo_102_102 = (MR_Word) (&recompilation__version_scalar_common_1[21]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (E_25)), ((MR_Box) (Var_84)));
                }
              }
            }
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma1_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_96_96;
            MR_Word External1_30 = ((MR_Word) ((MR_hl_field(3, ImplPragma1_4, (MR_Integer) 1))));
            MR_Word External2_31;
            MR_Word A_65;
            MR_Word B_66;
            MR_Word Var_85;
            MR_Word Var_86;

            succeeded = ((((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              External2_31 = ((MR_Word) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 1))));
              A_65 = ((MR_Word) ((MR_hl_field(0, External1_30, (MR_Integer) 0))));
              B_66 = ((MR_Word) ((MR_hl_field(0, External1_30, (MR_Integer) 1))));
              Var_85 = ((MR_Word) ((MR_hl_field(0, External2_31, (MR_Integer) 0))));
              Var_86 = ((MR_Word) ((MR_hl_field(0, External2_31, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____pred_pf_name_arity_0_0(A_65, Var_85);
              if (succeeded)
              {
                TypeInfo_96_96 = (MR_Word) (&recompilation__version_scalar_common_1[43]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (B_66)), ((MR_Box) (Var_86)));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FactTable1_36 = ((MR_Word) ((MR_hl_field(3, ImplPragma1_4, (MR_Integer) 1))));
            MR_Word FactTable2_37;
            MR_Word A_67;
            MR_String B_68;
            MR_Word Var_87;
            MR_String Var_88;

            succeeded = ((((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              FactTable2_37 = ((MR_Word) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 1))));
              A_67 = ((MR_Word) ((MR_hl_field(0, FactTable1_36, (MR_Integer) 0))));
              B_68 = ((MR_String) ((MR_hl_field(0, FactTable1_36, (MR_Integer) 1))));
              Var_87 = ((MR_Word) ((MR_hl_field(0, FactTable2_37, (MR_Integer) 0))));
              Var_88 = ((MR_String) ((MR_hl_field(0, FactTable2_37, (MR_Integer) 1))));
              succeeded = parse_tree__prog_item____Unify____pred_pfu_name_arity_0_0(A_67, Var_87);
              if (succeeded)
                succeeded = (strcmp(B_68, Var_88) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_108_108;
            MR_Word Tabled1_42 = ((MR_Word) ((MR_hl_field(3, ImplPragma1_4, (MR_Integer) 1))));
            MR_Word Tabled2_43;
            MR_Word A_69;
            MR_Word B_70;
            MR_Word C_71;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;

            succeeded = ((((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Tabled2_43 = ((MR_Word) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 1))));
              A_69 = ((MR_Word) ((MR_hl_field(0, Tabled1_42, (MR_Integer) 0))));
              B_70 = ((MR_Word) ((MR_hl_field(0, Tabled1_42, (MR_Integer) 1))));
              C_71 = ((MR_Word) ((MR_hl_field(0, Tabled1_42, (MR_Integer) 2))));
              Var_89 = ((MR_Word) ((MR_hl_field(0, Tabled2_43, (MR_Integer) 0))));
              Var_90 = ((MR_Word) ((MR_hl_field(0, Tabled2_43, (MR_Integer) 1))));
              Var_91 = ((MR_Word) ((MR_hl_field(0, Tabled2_43, (MR_Integer) 2))));
              succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(A_69, Var_89);
              if (succeeded)
              {
                succeeded = parse_tree__prog_item____Unify____pred_or_proc_pfumm_name_0_0(B_70, Var_90);
                if (succeeded)
                {
                  TypeInfo_108_108 = (MR_Word) (&recompilation__version_scalar_common_1[45]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_108_108, ((MR_Box) (C_71)), ((MR_Box) (Var_91)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TailRec1_48 = ((MR_Word) ((MR_hl_field(3, ImplPragma1_4, (MR_Integer) 1))));
            MR_Word TailRec2_49;
            MR_Word A_72;
            MR_Word B_73;
            MR_Word Var_92;
            MR_Word Var_93;

            succeeded = ((((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              TailRec2_49 = ((MR_Word) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 1))));
              A_72 = ((MR_Word) ((MR_hl_field(0, TailRec1_48, (MR_Integer) 0))));
              B_73 = ((MR_Word) ((MR_hl_field(0, TailRec1_48, (MR_Integer) 1))));
              Var_92 = ((MR_Word) ((MR_hl_field(0, TailRec2_49, (MR_Integer) 0))));
              Var_93 = ((MR_Word) ((MR_hl_field(0, TailRec2_49, (MR_Integer) 1))));
              succeeded = parse_tree__prog_item____Unify____pred_or_proc_pfumm_name_0_0(A_72, Var_92);
              if (succeeded)
                succeeded = parse_tree__prog_data_pragma____Unify____require_tail_recursion_0_0(B_73, Var_93);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeInfo_103_103;
            MR_Word FeatureSet1_54 = ((MR_Word) ((MR_hl_field(3, ImplPragma1_4, (MR_Integer) 1))));
            MR_Word FeatureSet2_55;
            MR_Word A_74;
            MR_Word Var_94;

            succeeded = ((((MR_tag((MR_Word) ImplPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              FeatureSet2_55 = ((MR_Word) ((MR_hl_field(3, ImplPragma2_5, (MR_Integer) 1))));
              A_74 = ((MR_Word) ((MR_hl_field(0, FeatureSet1_54, (MR_Integer) 0))));
              Var_94 = ((MR_Word) ((MR_hl_field(0, FeatureSet2_55, (MR_Integer) 0))));
              TypeInfo_103_103 = (MR_Word) (&recompilation__version_scalar_common_1[44]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (A_74)), ((MR_Box) (Var_94)));
            }
          }
          break;
      }
      break;
  }
  if (succeeded)
    *Changed_6 = (MR_Integer) 0;
  else
    *Changed_6 = (MR_Integer) 1;
}

static void MR_CALL 
recompilation__version__is_decl_pragma_changed_3_p_0(
  MR_Word DeclPragma1_4,
  MR_Word DeclPragma2_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DeclPragma1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeInfo_164_164;
        MR_Word ObsoletePred1_7 = (MR_Word) ((MR_Word) (DeclPragma1_4));
        MR_Word ObsoletePred2_8;
        MR_Word A_9;
        MR_Word B_10;
        MR_Word Var_125;
        MR_Word Var_126;

        succeeded = ((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          ObsoletePred2_8 = (MR_Word) ((MR_Word) (DeclPragma2_5));
          A_9 = ((MR_Word) ((MR_hl_field(0, ObsoletePred1_7, (MR_Integer) 0))));
          B_10 = ((MR_Word) ((MR_hl_field(0, ObsoletePred1_7, (MR_Integer) 1))));
          Var_125 = ((MR_Word) ((MR_hl_field(0, ObsoletePred2_8, (MR_Integer) 0))));
          Var_126 = ((MR_Word) ((MR_hl_field(0, ObsoletePred2_8, (MR_Integer) 1))));
          succeeded = parse_tree__prog_item____Unify____pred_pfu_name_arity_0_0(A_9, Var_125);
          if (succeeded)
          {
            TypeInfo_164_164 = (MR_Word) (&recompilation__version_scalar_common_1[34]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_164_164, ((MR_Box) (B_10)), ((MR_Box) (Var_126)));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_166_166;
        MR_Word ObsoleteProc1_15 = (MR_Word) (MR_body((MR_Word) (DeclPragma1_4), (MR_Integer) 1));
        MR_Word ObsoleteProc2_16;
        MR_Word A_96;
        MR_Word B_97;
        MR_Word Var_127;
        MR_Word Var_128;

        succeeded = ((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          ObsoleteProc2_16 = (MR_Word) (MR_body((MR_Word) (DeclPragma2_5), (MR_Integer) 1));
          A_96 = ((MR_Word) ((MR_hl_field(0, ObsoleteProc1_15, (MR_Integer) 0))));
          B_97 = ((MR_Word) ((MR_hl_field(0, ObsoleteProc1_15, (MR_Integer) 1))));
          Var_127 = ((MR_Word) ((MR_hl_field(0, ObsoleteProc2_16, (MR_Integer) 0))));
          Var_128 = ((MR_Word) ((MR_hl_field(0, ObsoleteProc2_16, (MR_Integer) 1))));
          succeeded = parse_tree__prog_item____Unify____proc_pf_name_modes_0_0(A_96, Var_127);
          if (succeeded)
          {
            TypeInfo_166_166 = (MR_Word) (&recompilation__version_scalar_common_1[34]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_166_166, ((MR_Box) (B_97)), ((MR_Box) (Var_128)));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_162_162;
        MR_Word FormatCall1_21 = (MR_Word) (MR_body((MR_Word) (DeclPragma1_4), (MR_Integer) 2));
        MR_Word FormatCall2_22;
        MR_Word A_98;
        MR_Word B_99;
        MR_Word Var_129;
        MR_Word Var_130;

        succeeded = ((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 2);
        if (succeeded)
        {
          FormatCall2_22 = (MR_Word) (MR_body((MR_Word) (DeclPragma2_5), (MR_Integer) 2));
          A_98 = ((MR_Word) ((MR_hl_field(0, FormatCall1_21, (MR_Integer) 0))));
          B_99 = ((MR_Word) ((MR_hl_field(0, FormatCall1_21, (MR_Integer) 1))));
          Var_129 = ((MR_Word) ((MR_hl_field(0, FormatCall2_22, (MR_Integer) 0))));
          Var_130 = ((MR_Word) ((MR_hl_field(0, FormatCall2_22, (MR_Integer) 1))));
          succeeded = parse_tree__prog_data____Unify____pred_pf_name_arity_0_0(A_98, Var_129);
          if (succeeded)
          {
            TypeInfo_162_162 = (MR_Word) (&recompilation__version_scalar_common_1[33]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_162_162, ((MR_Box) (B_99)), ((MR_Box) (Var_130)));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtorInfo_123_123;
            MR_Word TypeInfo_124_124;
            MR_Word TypeSpecConstr1_27 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word TypeSpecConstr2_28;
            MR_Word ModuleName_29;
            MR_Word OoMConstraints1_30;
            MR_Word ApplyToSupers1_31;
            MR_Word OoMTypeSubsts1_32;
            MR_Word TVarSet1_33;
            MR_Word OoMConstraints2_37;
            MR_Word ApplyToSupers2_38;
            MR_Word OoMTypeSubsts2_39;
            MR_Word TVarSet2_40;
            MR_Word Constraints1_44;
            MR_Word Constraints2_45;
            MR_Word TypeSubsts1_46;
            MR_Word TypeSubsts2_47;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word Var_133;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TypeSpecConstr2_28 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              ModuleName_29 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr1_27, (MR_Integer) 0))));
              OoMConstraints1_30 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr1_27, (MR_Integer) 1))));
              ApplyToSupers1_31 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstr1_27, (MR_Integer) 2))) & (MR_Integer) 1);
              OoMTypeSubsts1_32 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr1_27, (MR_Integer) 3))));
              TVarSet1_33 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr1_27, (MR_Integer) 4))));
              Var_131 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr2_28, (MR_Integer) 0))));
              OoMConstraints2_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr2_28, (MR_Integer) 1))));
              ApplyToSupers2_38 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstr2_28, (MR_Integer) 2))) & (MR_Integer) 1);
              OoMTypeSubsts2_39 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr2_28, (MR_Integer) 3))));
              TVarSet2_40 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr2_28, (MR_Integer) 4))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_29, Var_131);
              if (succeeded)
              {
                succeeded = (ApplyToSupers1_31 == ApplyToSupers2_38);
                if (succeeded)
                {
                  TypeCtorInfo_123_123 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0);
                  Constraints1_44 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_123_123, OoMConstraints1_30);
                  Constraints2_45 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_123_123, OoMConstraints2_37);
                  Var_93 = (MR_Integer) 0;
                  recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0(TVarSet1_33, TVarSet2_40, Constraints1_44, Constraints2_45, &Var_132);
                  succeeded = (Var_93 == Var_132);
                  if (succeeded)
                  {
                    TypeInfo_124_124 = (MR_Word) (&recompilation__version_scalar_common_1[12]);
                    TypeSubsts1_46 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeInfo_124_124, OoMTypeSubsts1_32);
                    TypeSubsts2_47 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeInfo_124_124, OoMTypeSubsts2_39);
                    Var_94 = (MR_Integer) 0;
                    recompilation__version__is_any_type_subst_changed_5_p_0(TVarSet1_33, TVarSet2_40, TypeSubsts1_46, TypeSubsts2_47, &Var_133);
                    succeeded = (Var_94 == Var_133);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpec1_48 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word TypeSpec2_49;
            MR_Word PFUMM_50;
            MR_Word Name_51;
            MR_Word SpecName_52;
            MR_Word TypeSubst1_53;
            MR_Word TypeSubst2_57;
            MR_Word Var_95;
            MR_Word TVarSet1_100;
            MR_Word TVarSet2_101;
            MR_Word Var_134;
            MR_Word Var_135;
            MR_Word Var_136;
            MR_Word Var_137;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              TypeSpec2_49 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              PFUMM_50 = ((MR_Word) ((MR_hl_field(0, TypeSpec1_48, (MR_Integer) 0))));
              Name_51 = ((MR_Word) ((MR_hl_field(0, TypeSpec1_48, (MR_Integer) 1))));
              SpecName_52 = ((MR_Word) ((MR_hl_field(0, TypeSpec1_48, (MR_Integer) 2))));
              TypeSubst1_53 = ((MR_Word) ((MR_hl_field(0, TypeSpec1_48, (MR_Integer) 3))));
              TVarSet1_100 = ((MR_Word) ((MR_hl_field(0, TypeSpec1_48, (MR_Integer) 4))));
              Var_134 = ((MR_Word) ((MR_hl_field(0, TypeSpec2_49, (MR_Integer) 0))));
              Var_135 = ((MR_Word) ((MR_hl_field(0, TypeSpec2_49, (MR_Integer) 1))));
              Var_136 = ((MR_Word) ((MR_hl_field(0, TypeSpec2_49, (MR_Integer) 2))));
              TypeSubst2_57 = ((MR_Word) ((MR_hl_field(0, TypeSpec2_49, (MR_Integer) 3))));
              TVarSet2_101 = ((MR_Word) ((MR_hl_field(0, TypeSpec2_49, (MR_Integer) 4))));
              succeeded = parse_tree__prog_item____Unify____pred_func_or_unknown_maybe_modes_0_0(PFUMM_50, Var_134);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_51, Var_135);
                if (succeeded)
                {
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SpecName_52, Var_136);
                  if (succeeded)
                  {
                    Var_95 = (MR_Integer) 0;
                    recompilation__version__is_type_subst_changed_5_p_0(TVarSet1_100, TVarSet2_101, TypeSubst1_53, TypeSubst2_57, &Var_137);
                    succeeded = (Var_95 == Var_137);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_168_168;
            MR_Word TypeInfo_169_169;
            MR_Word TypeInfo_170_170;
            MR_Word OISU1_61 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word OISU2_62;
            MR_Word C_63;
            MR_Word D_64;
            MR_Word A_102;
            MR_Word B_103;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_141;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              OISU2_62 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              A_102 = ((MR_Word) ((MR_hl_field(0, OISU1_61, (MR_Integer) 0))));
              B_103 = ((MR_Word) ((MR_hl_field(0, OISU1_61, (MR_Integer) 1))));
              C_63 = ((MR_Word) ((MR_hl_field(0, OISU1_61, (MR_Integer) 2))));
              D_64 = ((MR_Word) ((MR_hl_field(0, OISU1_61, (MR_Integer) 3))));
              Var_138 = ((MR_Word) ((MR_hl_field(0, OISU2_62, (MR_Integer) 0))));
              Var_139 = ((MR_Word) ((MR_hl_field(0, OISU2_62, (MR_Integer) 1))));
              Var_140 = ((MR_Word) ((MR_hl_field(0, OISU2_62, (MR_Integer) 2))));
              Var_141 = ((MR_Word) ((MR_hl_field(0, OISU2_62, (MR_Integer) 3))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(A_102, Var_138);
              if (succeeded)
              {
                TypeInfo_168_168 = (MR_Word) (&recompilation__version_scalar_common_1[35]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_168_168, ((MR_Box) (B_103)), ((MR_Box) (Var_139)));
                if (succeeded)
                {
                  TypeInfo_169_169 = (MR_Word) (&recompilation__version_scalar_common_1[35]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_169_169, ((MR_Box) (C_63)), ((MR_Box) (Var_140)));
                  if (succeeded)
                  {
                    TypeInfo_170_170 = (MR_Word) (&recompilation__version_scalar_common_1[35]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (D_64)), ((MR_Box) (Var_141)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_184_184;
            MR_Word TypeInfo_185_185;
            MR_Word Term1_69 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word Term2_70;
            MR_Word A_104;
            MR_Word B_105;
            MR_Word C_106;
            MR_Word Var_142;
            MR_Word Var_143;
            MR_Word Var_144;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Term2_70 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              A_104 = ((MR_Word) ((MR_hl_field(0, Term1_69, (MR_Integer) 0))));
              B_105 = ((MR_Word) ((MR_hl_field(0, Term1_69, (MR_Integer) 1))));
              C_106 = ((MR_Word) ((MR_hl_field(0, Term1_69, (MR_Integer) 2))));
              Var_142 = ((MR_Word) ((MR_hl_field(0, Term2_70, (MR_Integer) 0))));
              Var_143 = ((MR_Word) ((MR_hl_field(0, Term2_70, (MR_Integer) 1))));
              Var_144 = ((MR_Word) ((MR_hl_field(0, Term2_70, (MR_Integer) 2))));
              succeeded = parse_tree__prog_item____Unify____proc_pf_name_modes_0_0(A_104, Var_142);
              if (succeeded)
              {
                TypeInfo_184_184 = (MR_Word) (&recompilation__version_scalar_common_1[39]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_184_184, ((MR_Box) (B_105)), ((MR_Box) (Var_143)));
                if (succeeded)
                {
                  TypeInfo_185_185 = (MR_Word) (&recompilation__version_scalar_common_1[40]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_185_185, ((MR_Box) (C_106)), ((MR_Box) (Var_144)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeInfo_187_187;
            MR_Word TypeInfo_188_188;
            MR_Word TypeInfo_189_189;
            MR_Word A_107;
            MR_Word B_108;
            MR_Word C_109;
            MR_Word D_110;
            MR_Word Term1_111 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word Term2_112;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_148;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Term2_112 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              A_107 = ((MR_Word) ((MR_hl_field(0, Term1_111, (MR_Integer) 0))));
              B_108 = ((MR_Word) ((MR_hl_field(0, Term1_111, (MR_Integer) 1))));
              C_109 = ((MR_Word) ((MR_hl_field(0, Term1_111, (MR_Integer) 2))));
              D_110 = ((MR_Word) ((MR_hl_field(0, Term1_111, (MR_Integer) 3))));
              Var_145 = ((MR_Word) ((MR_hl_field(0, Term2_112, (MR_Integer) 0))));
              Var_146 = ((MR_Word) ((MR_hl_field(0, Term2_112, (MR_Integer) 1))));
              Var_147 = ((MR_Word) ((MR_hl_field(0, Term2_112, (MR_Integer) 2))));
              Var_148 = ((MR_Word) ((MR_hl_field(0, Term2_112, (MR_Integer) 3))));
              succeeded = parse_tree__prog_item____Unify____proc_pf_name_modes_0_0(A_107, Var_145);
              if (succeeded)
              {
                TypeInfo_187_187 = (MR_Word) (&recompilation__version_scalar_common_1[42]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_187_187, ((MR_Box) (B_108)), ((MR_Box) (Var_146)));
                if (succeeded)
                {
                  TypeInfo_188_188 = (MR_Word) (&recompilation__version_scalar_common_1[42]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_188_188, ((MR_Box) (C_109)), ((MR_Box) (Var_147)));
                  if (succeeded)
                  {
                    TypeInfo_189_189 = (MR_Word) (&recompilation__version_scalar_common_1[40]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_189_189, ((MR_Box) (D_110)), ((MR_Box) (Var_148)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypeInfo_178_178;
            MR_Word TypeInfo_179_179;
            MR_Word TypeInfo_180_180;
            MR_Word TypeInfo_181_181;
            MR_Word TypeInfo_182_182;
            MR_Word Sharing1_79 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word Sharing2_80;
            MR_Word E_81;
            MR_Word F_82;
            MR_Word A_113;
            MR_Word B_114;
            MR_Word C_115;
            MR_Word D_116;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word Var_153;
            MR_Word Var_154;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              Sharing2_80 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              A_113 = ((MR_Word) ((MR_hl_field(0, Sharing1_79, (MR_Integer) 0))));
              B_114 = ((MR_Word) ((MR_hl_field(0, Sharing1_79, (MR_Integer) 1))));
              C_115 = ((MR_Word) ((MR_hl_field(0, Sharing1_79, (MR_Integer) 2))));
              D_116 = ((MR_Word) ((MR_hl_field(0, Sharing1_79, (MR_Integer) 3))));
              E_81 = ((MR_Word) ((MR_hl_field(0, Sharing1_79, (MR_Integer) 4))));
              F_82 = ((MR_Word) ((MR_hl_field(0, Sharing1_79, (MR_Integer) 5))));
              Var_149 = ((MR_Word) ((MR_hl_field(0, Sharing2_80, (MR_Integer) 0))));
              Var_150 = ((MR_Word) ((MR_hl_field(0, Sharing2_80, (MR_Integer) 1))));
              Var_151 = ((MR_Word) ((MR_hl_field(0, Sharing2_80, (MR_Integer) 2))));
              Var_152 = ((MR_Word) ((MR_hl_field(0, Sharing2_80, (MR_Integer) 3))));
              Var_153 = ((MR_Word) ((MR_hl_field(0, Sharing2_80, (MR_Integer) 4))));
              Var_154 = ((MR_Word) ((MR_hl_field(0, Sharing2_80, (MR_Integer) 5))));
              succeeded = parse_tree__prog_item____Unify____proc_pf_name_modes_0_0(A_113, Var_149);
              if (succeeded)
              {
                TypeInfo_178_178 = (MR_Word) (&recompilation__version_scalar_common_1[29]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_178_178, ((MR_Box) (B_114)), ((MR_Box) (Var_150)));
                if (succeeded)
                {
                  TypeInfo_179_179 = (MR_Word) (&recompilation__version_scalar_common_1[25]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_179_179, ((MR_Box) (C_115)), ((MR_Box) (Var_151)));
                  if (succeeded)
                  {
                    TypeInfo_180_180 = (MR_Word) (&recompilation__version_scalar_common_1[21]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_180_180, ((MR_Box) (D_116)), ((MR_Box) (Var_152)));
                    if (succeeded)
                    {
                      TypeInfo_181_181 = (MR_Word) (&recompilation__version_scalar_common_1[31]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_181_181, ((MR_Box) (E_81)), ((MR_Box) (Var_153)));
                      if (succeeded)
                      {
                        TypeInfo_182_182 = (MR_Word) (&recompilation__version_scalar_common_1[37]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_182_182, ((MR_Box) (F_82)), ((MR_Box) (Var_154)));
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TypeInfo_172_172;
            MR_Word TypeInfo_173_173;
            MR_Word TypeInfo_174_174;
            MR_Word TypeInfo_175_175;
            MR_Word TypeInfo_176_176;
            MR_Word Reuse1_87 = ((MR_Word) ((MR_hl_field(3, DeclPragma1_4, (MR_Integer) 1))));
            MR_Word Reuse2_88;
            MR_Word A_117;
            MR_Word B_118;
            MR_Word C_119;
            MR_Word D_120;
            MR_Word E_121;
            MR_Word F_122;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_160;

            succeeded = ((((MR_tag((MR_Word) DeclPragma2_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Reuse2_88 = ((MR_Word) ((MR_hl_field(3, DeclPragma2_5, (MR_Integer) 1))));
              A_117 = ((MR_Word) ((MR_hl_field(0, Reuse1_87, (MR_Integer) 0))));
              B_118 = ((MR_Word) ((MR_hl_field(0, Reuse1_87, (MR_Integer) 1))));
              C_119 = ((MR_Word) ((MR_hl_field(0, Reuse1_87, (MR_Integer) 2))));
              D_120 = ((MR_Word) ((MR_hl_field(0, Reuse1_87, (MR_Integer) 3))));
              E_121 = ((MR_Word) ((MR_hl_field(0, Reuse1_87, (MR_Integer) 4))));
              F_122 = ((MR_Word) ((MR_hl_field(0, Reuse1_87, (MR_Integer) 5))));
              Var_155 = ((MR_Word) ((MR_hl_field(0, Reuse2_88, (MR_Integer) 0))));
              Var_156 = ((MR_Word) ((MR_hl_field(0, Reuse2_88, (MR_Integer) 1))));
              Var_157 = ((MR_Word) ((MR_hl_field(0, Reuse2_88, (MR_Integer) 2))));
              Var_158 = ((MR_Word) ((MR_hl_field(0, Reuse2_88, (MR_Integer) 3))));
              Var_159 = ((MR_Word) ((MR_hl_field(0, Reuse2_88, (MR_Integer) 4))));
              Var_160 = ((MR_Word) ((MR_hl_field(0, Reuse2_88, (MR_Integer) 5))));
              succeeded = parse_tree__prog_item____Unify____proc_pf_name_modes_0_0(A_117, Var_155);
              if (succeeded)
              {
                TypeInfo_172_172 = (MR_Word) (&recompilation__version_scalar_common_1[29]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_172_172, ((MR_Box) (B_118)), ((MR_Box) (Var_156)));
                if (succeeded)
                {
                  TypeInfo_173_173 = (MR_Word) (&recompilation__version_scalar_common_1[25]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_173_173, ((MR_Box) (C_119)), ((MR_Box) (Var_157)));
                  if (succeeded)
                  {
                    TypeInfo_174_174 = (MR_Word) (&recompilation__version_scalar_common_1[21]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_174_174, ((MR_Box) (D_120)), ((MR_Box) (Var_158)));
                    if (succeeded)
                    {
                      TypeInfo_175_175 = (MR_Word) (&recompilation__version_scalar_common_1[31]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_175_175, ((MR_Box) (E_121)), ((MR_Box) (Var_159)));
                      if (succeeded)
                      {
                        TypeInfo_176_176 = (MR_Word) (&recompilation__version_scalar_common_1[36]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_176_176, ((MR_Box) (F_122)), ((MR_Box) (Var_160)));
                      }
                    }
                  }
                }
              }
            }
          }
          break;
      }
      break;
  }
  if (succeeded)
    *Changed_6 = (MR_Integer) 0;
  else
    *Changed_6 = (MR_Integer) 1;
}

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_25;
  MR_Word conv0_LambdaHeadVar__3_26;

  recompilation__version__IntroducedFrom__pred__is_type_subst_changed__1745__1_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_25, &conv0_LambdaHeadVar__3_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_25));
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_26));
}

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_2(
  void * env_ptr_arg)
{
  struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_4(
  void * env_ptr_arg)
{
  struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__VarInItem2_40 = ((MR_Word) ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__conv3_VarInItem2_40));
  (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__SubstTerm_41 = ((MR_Word) ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__conv2_SubstTerm_41));
  recompilation__version__is_type_subst_changed_5_p_0_3(env_ptr);
}

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_3(
  void * env_ptr_arg)
{
  struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_42;
    MR_Word TypeCtorInfo_32_48;
    MR_String VarName1_43;
    MR_String VarName2_44;

    (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__SubstTerm_41)) == (MR_Integer) 0);
    if ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
    {
      (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__VarInItem1_39 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__SubstTerm_41, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__SubstTerm_41, (MR_Integer) 1))));
      TypeCtorInfo_32_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_48, (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_21, (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__VarInItem1_39, &VarName1_43);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_48, (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_21, (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__VarInItem2_40, &VarName2_44);
      (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = (strcmp(VarName1_43, VarName2_44) == 0);
      if (!((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded))
      {
        MR_String VarNum_49;
        MR_String VarNum_52;
        MR_String Var_54;
        MR_Integer Var_50;
        MR_Integer Var_53;

        (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) "V_", &VarNum_49, VarName1_43);
        if ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_49, &Var_50);
          if ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
          {
            Var_54 = (MR_String) "V_";
            (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_54, &VarNum_52, VarName2_44);
            if ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
              (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_52, &Var_53);
          }
        }
      }
      (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = !((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded);
      if ((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
        recompilation__version__is_type_subst_changed_5_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0_5(
  void * env_ptr_arg)
{
  struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__commit_0) == 0)
    {
      mercury__map__member_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_23, &(env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__conv3_VarInItem2_40, &(env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__conv2_SubstTerm_41, recompilation__version__is_type_subst_changed_5_p_0_4, env_ptr);
      (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
recompilation__version__is_type_subst_changed_5_p_0(
  MR_Word TVarSet1_6,
  MR_Word TVarSet2_7,
  MR_Word TypeSubst1_8,
  MR_Word TypeSubst2_9,
  MR_Word * Changed_10)
{
  struct recompilation__version__is_type_subst_changed_5_p_0_env_0_s env;

  {
    MR_Word TVars1_14;
    MR_Word Types1_15;
    MR_Word TVars2_16;
    MR_Word Types2_17;
    MR_Word KindMap_18;
    MR_Word TVarTypes1_19;
    MR_Word TVarTypes2_20;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_22;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word SubstTypes2_37;
    MR_Word Var_38;

    Var_27 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TypeSubst1_8);
    mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_2[19]), Var_27, &TVars1_14, &Types1_15);
    Var_28 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TypeSubst2_9);
    mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_2[19]), Var_28, &TVars2_16, &Types2_17);
    KindMap_18 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_18, TVars1_14, &TVarTypes1_19);
    parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_18, TVars2_16, &TVarTypes2_20);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TVarTypes1_19, Types1_15);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TVarTypes2_20, Types2_17);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet1_6, TVarSet2_7, &(env).recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_21, &Var_22);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Var_22, Var_30, &SubstTypes2_37);
    (env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(SubstTypes2_37, Var_29, &(env).recompilation__version__is_type_subst_changed_5_p_0_env_0__Var_23);
    if ((env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
    {
      (env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(Var_29, SubstTypes2_37, &Var_38);
      if ((env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
      {
        recompilation__version__is_type_subst_changed_5_p_0_5(&env);
        (env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded = !((env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded);
      }
    }
    if ((env).recompilation__version__is_type_subst_changed_5_p_0_env_0__succeeded)
      *Changed_10 = (MR_Integer) 0;
    else
      *Changed_10 = (MR_Integer) 1;
  }
}

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_25;
  MR_Word conv0_LambdaHeadVar__3_26;

  recompilation__version__IntroducedFrom__pred__is_type_subst_changed__1745__1_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_25, &conv0_LambdaHeadVar__3_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_25));
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_26));
}

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_2(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_4(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__VarInItem2_48 = ((MR_Word) ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__conv3_VarInItem2_48));
  (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__SubstTerm_49 = ((MR_Word) ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__conv2_SubstTerm_49));
  recompilation__version__is_any_type_subst_changed_5_p_0_3(env_ptr);
}

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_3(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_50;
    MR_Word TypeCtorInfo_32_56;
    MR_String VarName1_51;
    MR_String VarName2_52;

    (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__SubstTerm_49)) == (MR_Integer) 0);
    if ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
    {
      (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__VarInItem1_47 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__SubstTerm_49, (MR_Integer) 0))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__SubstTerm_49, (MR_Integer) 1))));
      TypeCtorInfo_32_56 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_56, (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_34, (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__VarInItem1_47, &VarName1_51);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_56, (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_34, (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__VarInItem2_48, &VarName2_52);
      (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = (strcmp(VarName1_51, VarName2_52) == 0);
      if (!((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded))
      {
        MR_String VarNum_57;
        MR_String VarNum_60;
        MR_String Var_62;
        MR_Integer Var_58;
        MR_Integer Var_61;

        (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) "V_", &VarNum_57, VarName1_51);
        if ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_57, &Var_58);
          if ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
          {
            Var_62 = (MR_String) "V_";
            (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_62, &VarNum_60, VarName2_52);
            if ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
              (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_60, &Var_61);
          }
        }
      }
      (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = !((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded);
      if ((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
        recompilation__version__is_any_type_subst_changed_5_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0_5(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__commit_0) == 0)
    {
      mercury__map__member_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_36, &(env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__conv3_VarInItem2_48, &(env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__conv2_SubstTerm_49, recompilation__version__is_any_type_subst_changed_5_p_0_4, env_ptr);
      (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
recompilation__version__is_any_type_subst_changed_5_p_0(
  MR_Word TVarSet1_1,
  MR_Word TVarSet2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  struct recompilation__version__is_any_type_subst_changed_5_p_0_env_0_s env;

  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Integer) 0;
      else
        *HeadVar__5_5 = (MR_Integer) 1;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Integer) 1;
      else
      {
        MR_Word TypeSubst2_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word TypeSubsts2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word TVars1_27;
        MR_Word Types1_28;
        MR_Word TVars2_29;
        MR_Word Types2_30;
        MR_Word KindMap_31;
        MR_Word TVarTypes1_32;
        MR_Word TVarTypes2_33;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_35;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word SubstTypes2_45;
        MR_Word Var_46;

        Var_37 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), Var_25);
        mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_2[18]), Var_37, &TVars1_27, &Types1_28);
        Var_38 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TypeSubst2_20);
        mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_2[18]), Var_38, &TVars2_29, &Types2_30);
        KindMap_31 = mercury__map__init_0_f_0((MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
        parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_31, TVars1_27, &TVarTypes1_32);
        parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_31, TVars2_29, &TVarTypes2_33);
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TVarTypes1_32, Types1_28);
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TVarTypes2_33, Types2_30);
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet1_1, TVarSet2_2, &(env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_34, &Var_35);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Var_35, Var_40, &SubstTypes2_45);
        (env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(SubstTypes2_45, Var_39, &(env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__Var_36);
        if ((env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
        {
          (env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(Var_39, SubstTypes2_45, &Var_46);
          if ((env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
          {
            recompilation__version__is_any_type_subst_changed_5_p_0_5(&env);
            (env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded = !((env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded);
          }
        }
        if ((env).recompilation__version__is_any_type_subst_changed_5_p_0_env_0__succeeded)
        {
          MR_Word next_value_of_HeadVar__3_3 = Var_24;
          MR_Word next_value_of_HeadVar__4_4 = TypeSubsts2_21;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        else
          *HeadVar__5_5 = (MR_Integer) 1;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_29;

  recompilation__version__IntroducedFrom__pred__is_var_or_ground_constraint_changed__1704__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_29);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
}

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_2(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_4(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__VarInItem2_44 = ((MR_Word) ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__conv2_VarInItem2_44));
  (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__SubstTerm_45 = ((MR_Word) ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__conv1_SubstTerm_45));
  recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_3(env_ptr);
}

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_3(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_46;
    MR_Word TypeCtorInfo_32_52;
    MR_String VarName1_47;
    MR_String VarName2_48;

    (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__SubstTerm_45)) == (MR_Integer) 0);
    if ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
    {
      (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__VarInItem1_43 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__SubstTerm_45, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__SubstTerm_45, (MR_Integer) 1))));
      TypeCtorInfo_32_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_52, (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_35, (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__VarInItem1_43, &VarName1_47);
      mercury__varset__lookup_name_3_p_0(TypeCtorInfo_32_52, (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_35, (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__VarInItem2_44, &VarName2_48);
      (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = (strcmp(VarName1_47, VarName2_48) == 0);
      if (!((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded))
      {
        MR_String VarNum_53;
        MR_String VarNum_56;
        MR_String Var_58;
        MR_Integer Var_54;
        MR_Integer Var_57;

        (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) "V_", &VarNum_53, VarName1_47);
        if ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
        {
          (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_53, &Var_54);
          if ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
          {
            Var_58 = (MR_String) "V_";
            (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_58, &VarNum_56, VarName2_48);
            if ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
              (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(VarNum_56, &Var_57);
          }
        }
      }
      (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = !((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded);
      if ((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
        recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_5(
  void * env_ptr_arg)
{
  struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s * env_ptr = (struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__commit_0) == 0)
    {
      mercury__map__member_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_37, &(env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__conv2_VarInItem2_44, &(env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__conv1_SubstTerm_45, recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_4, env_ptr);
      (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0(
  MR_Word TVarSet1_1,
  MR_Word TVarSet2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  struct recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0_s env;

  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Integer) 0;
      else
        *HeadVar__5_5 = (MR_Integer) 1;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Integer) 1;
      else
      {
        MR_Word Constraint2_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Constraints2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word ClassName1_26 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
        MR_Word Args1_27 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
        MR_Word ClassName2_29 = ((MR_Word) ((MR_hl_field(0, Constraint2_20, (MR_Integer) 0))));
        MR_Word Args2_30 = ((MR_Word) ((MR_hl_field(0, Constraint2_20, (MR_Integer) 1))));
        MR_Word ArgTypes1_33;
        MR_Word ArgTypes2_34;
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 2))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Constraint2_20, (MR_Integer) 2))));
        MR_Word Var_36;
        MR_Word SubstTypes2_41;
        MR_Word Var_42;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_2[17]), Args1_27, &ArgTypes1_33);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__version_scalar_common_2[17]), Args2_30, &ArgTypes2_34);
        (env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName1_26, ClassName2_29);
        if ((env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
        {
          parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet1_1, TVarSet2_2, &(env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_35, &Var_36);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Var_36, ArgTypes2_34, &SubstTypes2_41);
          (env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(SubstTypes2_41, ArgTypes1_33, &(env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__Var_37);
          if ((env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
          {
            (env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(ArgTypes1_33, SubstTypes2_41, &Var_42);
            if ((env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
            {
              recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_5(&env);
              (env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded = !((env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded);
            }
          }
        }
        if ((env).recompilation__version__is_any_var_or_ground_constraint_changed_5_p_0_env_0__succeeded)
        {
          MR_Word next_value_of_HeadVar__3_3 = Var_24;
          MR_Word next_value_of_HeadVar__4_4 = Constraints2_21;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        else
          *HeadVar__5_5 = (MR_Integer) 1;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__version__parse_module_item_version_numbers_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_26;

  recompilation__version__IntroducedFrom__pred__parse_module_item_version_numbers__2032__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_26));
}

static void MR_CALL 
recompilation__version__parse_module_item_version_numbers_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_4;

  recompilation__version__parse_item_type_version_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_4));
}

void MR_CALL 
recompilation__version__parse_module_item_version_numbers_2_p_0(
  MR_Word VersionNumbersTerm_3,
  MR_Word * Result_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) VersionNumbersTerm_3)) == (MR_Integer) 0);
  MR_Word VersionNumbersTermList_7;
  MR_Word Result0_8;
  MR_Word VersionNumbersTermList0_5;
  MR_Word Var_20;
  MR_String Var_21;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, VersionNumbersTerm_3, (MR_Integer) 0))));
    VersionNumbersTermList0_5 = ((MR_Word) ((MR_hl_field(0, VersionNumbersTerm_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      succeeded = (strcmp(Var_21, (MR_String) "{}") == 0);
    }
  }
  if (succeeded)
    VersionNumbersTermList_7 = VersionNumbersTermList0_5;
  else
    {
      VersionNumbersTermList_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VersionNumbersTermList_7, 0) = ((MR_Box) (VersionNumbersTerm_3));
      MR_hl_field(1, VersionNumbersTermList_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0), (MR_Word) (&recompilation__version_scalar_common_2[15]), VersionNumbersTermList_7, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 0))
    *Result_4 = (MR_Word) (Result0_8);
  else
  {
    MR_Word NamedFields_9 = ((MR_Word) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));
    MR_Word ModuleItemVersionNumbers0_17;
    MR_Word ModuleItemVersionNumbers_18;
    MR_Box conv2_ModuleItemVersionNumbers_18;

    ModuleItemVersionNumbers0_17 = recompilation__item_types__init_module_item_version_numbers_0_f_0();
    mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0), (MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0), (MR_Word) (&recompilation__version_scalar_common_2[16]), NamedFields_9, ((MR_Box) (ModuleItemVersionNumbers0_17)), &conv2_ModuleItemVersionNumbers_18);
    ModuleItemVersionNumbers_18 = ((MR_Word) (conv2_ModuleItemVersionNumbers_18));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleItemVersionNumbers_18));
    }
  }
}

MR_Integer MR_CALL 
recompilation__version__module_item_version_numbers_version_number_0_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_bool MR_CALL 
recompilation__version__module_item_version_numbers_to_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_47;

  succeeded = recompilation__version__IntroducedFrom__pred__module_item_version_numbers_to_string__1914__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_47);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_47));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
recompilation__version__module_item_version_numbers_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_5;

  conv0_Str_5 = recompilation__version__recomp_item_name_version_number_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_5));
  return wrapper_arg_2;
}

MR_String MR_CALL 
recompilation__version__module_item_version_numbers_to_string_1_f_0(
  MR_Word ModuleItemVersionNumbers_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_Word TypeNameMap_5 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 0))));
  MR_Word TypeDefnMap_6 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 1))));
  MR_Word InstMap_7 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 2))));
  MR_Word ModeMap_8 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 3))));
  MR_Word ClassMap_9 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 4))));
  MR_Word InstanceMap_10 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 5))));
  MR_Word PredMap_11 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 6))));
  MR_Word FuncMap_12 = ((MR_Word) ((MR_hl_field(0, ModuleItemVersionNumbers_3, (MR_Integer) 7))));
  MR_Word ItemTypeMaybeStrs_13;
  MR_Word ItemTypeStrs_14;
  MR_String ItemTypesStr_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_52;

  Var_16 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 0, TypeNameMap_5);
  Var_19 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 1, TypeDefnMap_6);
  Var_22 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 2, InstMap_7);
  Var_25 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 3, ModeMap_8);
  Var_28 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 6, PredMap_11);
  Var_31 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 7, FuncMap_12);
  Var_34 = recompilation__version__item_type_and_versions_to_string_na_2_f_0((MR_Integer) 4, ClassMap_9);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), InstanceMap_10);
  if (succeeded)
    Var_37 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VersionsAL_54;
    MR_Word ItemVersionStrs_55;
    MR_String ItemVersionsStr_56;
    MR_String Str_57;
    MR_String Var_67;
    MR_String Var_69;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), InstanceMap_10, &VersionsAL_54);
    ItemVersionStrs_55 = mercury__list__map_2_f_0((MR_Word) (&recompilation__version_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__version_scalar_common_2[13]), VersionsAL_54);
    ItemVersionsStr_56 = mercury__string__join_list_2_f_0((MR_String) ",\n", ItemVersionStrs_55);
    Var_67 = mercury__string__f_43_43_2_f_0(ItemVersionsStr_56, (MR_String) "\n\t)");
    Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "(\n", Var_67);
    Str_57 = mercury__string__f_43_43_2_f_0((MR_String) "instance", Var_69);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Str_57));
    }
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  {
    ItemTypeMaybeStrs_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ItemTypeMaybeStrs_13, 0) = ((MR_Box) (Var_16));
    MR_hl_field(1, ItemTypeMaybeStrs_13, 1) = ((MR_Box) (Var_18));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&recompilation__version_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__version_scalar_common_2[14]), ItemTypeMaybeStrs_13, &ItemTypeStrs_14);
  ItemTypesStr_15 = mercury__string__join_list_2_f_0((MR_String) ",\n", ItemTypeStrs_14);
  Var_52 = mercury__string__f_43_43_2_f_0(ItemTypesStr_15, (MR_String) "\n}");
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_52);
  return Str_4;
}

static MR_Box MR_CALL 
recompilation__version__item_type_and_versions_to_string_na_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_5;

  conv0_Str_5 = recompilation__version__name_arity_version_number_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_5));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
recompilation__version__item_type_and_versions_to_string_na_2_f_0(
  MR_Word ItemType_4,
  MR_Word VersionMap_5)
{
  MR_bool succeeded;
  MR_Word MaybeStr_6;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VersionMap_5);
  if (succeeded)
    MaybeStr_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String ItemTypeStr_7;
    MR_Word VersionsAL_8;
    MR_Word ItemVersionStrs_9;
    MR_String ItemVersionsStr_10;
    MR_String Str_11;
    MR_String Var_29;
    MR_String Var_31;
    MR_String Var_32;

    recompilation__item_types__string_to_recomp_item_type_2_p_1(&ItemTypeStr_7, ItemType_4);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VersionMap_5, &VersionsAL_8);
    ItemVersionStrs_9 = mercury__list__map_2_f_0((MR_Word) (&recompilation__version_scalar_common_2[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__version_scalar_common_2[12]), VersionsAL_8);
    ItemVersionsStr_10 = mercury__string__join_list_2_f_0((MR_String) ",\n", ItemVersionStrs_9);
    Var_29 = mercury__string__f_43_43_2_f_0(ItemVersionsStr_10, (MR_String) "\n\t)");
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "(\n", Var_29);
    Var_32 = mercury__string__f_43_43_2_f_0(ItemTypeStr_7, Var_31);
    Str_11 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_32);
    {
      MaybeStr_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeStr_6, 0) = ((MR_Box) (Str_11));
    }
  }
  return MaybeStr_6;
}

void MR_CALL 
recompilation__version__compute_version_numbers_int2_4_p_0(
  MR_Word MaybeOldParseTreeInt2_5,
  MR_Word CurFileTime_6,
  MR_Word CurParseTreeInt2_7,
  MR_Word * NewVersionNumbers_8)
{
  MR_bool succeeded;
  MR_Word CurGatherResults_9;
  MR_Word MaybeOldVersionNumbersGatherResults_13;
  MR_Word OldParseTreeInt2_10;
  MR_Word OldVersionNumbers_11;
  MR_Word Var_14;

  recompilation__version__gather_items_in_parse_tree_int2_2_p_0(CurParseTreeInt2_7, &CurGatherResults_9);
  succeeded = (MaybeOldParseTreeInt2_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    OldParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(1, MaybeOldParseTreeInt2_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, OldParseTreeInt2_10, (MR_Integer) 2))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      OldVersionNumbers_11 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word OldGatherResults_12;
    MR_Tuple Var_15;

    recompilation__version__gather_items_in_parse_tree_int2_2_p_0(OldParseTreeInt2_10, &OldGatherResults_12);
    {
      Var_15 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (OldVersionNumbers_11));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (OldGatherResults_12));
    }
    {
      MaybeOldVersionNumbersGatherResults_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeOldVersionNumbersGatherResults_13, 0) = ((MR_Box) (Var_15));
    }
  }
  else
    MaybeOldVersionNumbersGatherResults_13 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__version__update_version_numbers_4_p_0(MaybeOldVersionNumbersGatherResults_13, CurFileTime_6, CurGatherResults_9, NewVersionNumbers_8);
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_TypeMap_31;
  MR_Word conv14_STATE_VARIABLE_TypeDefnMap_33;

  recompilation__version__gather_in_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_TypeMap_31, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_TypeDefnMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_TypeMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_TypeDefnMap_33));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_TypeDefnMap_17;

  recompilation__version__gather_in_type_repn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_TypeDefnMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_TypeDefnMap_17));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_InstanceMap_20;

  recompilation__version__gather_in_instance_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_InstanceMap_20);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_InstanceMap_20));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_TypeClassMap_24;

  recompilation__version__gather_in_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_TypeClassMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_TypeClassMap_24));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModeMap_17;

  recompilation__version__gather_in_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModeMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModeMap_17));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InstMap_18;

  recompilation__version__gather_in_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_InstMap_18);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_InstMap_18));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeMap_31;
  MR_Word conv0_STATE_VARIABLE_TypeDefnMap_33;

  recompilation__version__gather_in_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMap_31, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_TypeDefnMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_33));
}

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int2__492__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int2__491__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int2_2_p_0(
  MR_Word ParseTreeInt2_3,
  MR_Word * GatheredItems_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorCheckedMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_3, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_3, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_3, (MR_Integer) 9))));
  MR_Word IntTypeClasses_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_3, (MR_Integer) 10))));
  MR_Word IntInstances_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_3, (MR_Integer) 11))));
  MR_Word IntTypeRepnMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_3, (MR_Integer) 12))));
  MR_Word IntTypeDefns_24;
  MR_Word ImpTypeDefns_25;
  MR_Word IntInstDefns_27;
  MR_Word ImpInstDefns_28;
  MR_Word IntModeDefns_29;
  MR_Word ImpModeDefns_30;
  MR_Word PredMap0_31;
  MR_Word FuncMap0_32;
  MR_Word STATE_VARIABLE_TypeNameMap_33_33;
  MR_Word STATE_VARIABLE_TypeDefnMap_34_34;
  MR_Word STATE_VARIABLE_InstMap_35_35;
  MR_Word STATE_VARIABLE_ModeMap_36_36;
  MR_Word STATE_VARIABLE_ClassMap_37_37;
  MR_Word STATE_VARIABLE_InstanceMap_38_38;
  MR_Word Var_39;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_TypeNameMap_48_48;
  MR_Word STATE_VARIABLE_TypeDefnMap_49_49;
  MR_Word STATE_VARIABLE_InstMap_52_52;
  MR_Word STATE_VARIABLE_ModeMap_55_55;
  MR_Word STATE_VARIABLE_ClassMap_58_58;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_InstanceMap_62_62;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_TypeDefnMap_66_66;
  MR_Word STATE_VARIABLE_TypeNameMap_69_69;
  MR_Word STATE_VARIABLE_TypeDefnMap_70_70;
  MR_Word _ImpForeignEnums_26;
  MR_Box conv3_STATE_VARIABLE_TypeNameMap_48_48;
  MR_Box conv2_STATE_VARIABLE_TypeDefnMap_49_49;
  MR_Box conv5_STATE_VARIABLE_InstMap_52_52;
  MR_Box conv7_STATE_VARIABLE_ModeMap_55_55;
  MR_Box conv9_STATE_VARIABLE_ClassMap_58_58;
  MR_Box conv11_STATE_VARIABLE_InstanceMap_62_62;
  MR_Box conv13_STATE_VARIABLE_TypeDefnMap_66_66;
  MR_Box conv17_STATE_VARIABLE_TypeNameMap_69_69;
  MR_Box conv16_STATE_VARIABLE_TypeDefnMap_70_70;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_TypeNameMap_33_33);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_TypeDefnMap_34_34);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_InstMap_35_35);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_ModeMap_36_36);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_ClassMap_37_37);
  mercury__map__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_InstanceMap_38_38);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_12, &IntTypeDefns_24, &ImpTypeDefns_25, &_ImpForeignEnums_26);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_13, &IntInstDefns_27, &ImpInstDefns_28);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_14, &IntModeDefns_29, &ImpModeDefns_30);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&recompilation__version_scalar_common_8[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (ImpInstDefns_28));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140recompilation.version.gather_items_in_parse_tree_int2\'/2", (MR_String) "ImpInstDefns != []");
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&recompilation__version_scalar_common_8[1]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int2_2_p_0_2));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (ImpModeDefns_30));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140recompilation.version.gather_items_in_parse_tree_int2\'/2", (MR_String) "ImpModeDefns != []");
  mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[31]), IntTypeDefns_24, ((MR_Box) (STATE_VARIABLE_TypeNameMap_33_33)), &conv3_STATE_VARIABLE_TypeNameMap_48_48, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_34_34)), &conv2_STATE_VARIABLE_TypeDefnMap_49_49);
  STATE_VARIABLE_TypeNameMap_48_48 = ((MR_Word) (conv3_STATE_VARIABLE_TypeNameMap_48_48));
  STATE_VARIABLE_TypeDefnMap_49_49 = ((MR_Word) (conv2_STATE_VARIABLE_TypeDefnMap_49_49));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[32]), IntInstDefns_27, ((MR_Box) (STATE_VARIABLE_InstMap_35_35)), &conv5_STATE_VARIABLE_InstMap_52_52);
  STATE_VARIABLE_InstMap_52_52 = ((MR_Word) (conv5_STATE_VARIABLE_InstMap_52_52));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[4]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[33]), IntModeDefns_29, ((MR_Box) (STATE_VARIABLE_ModeMap_36_36)), &conv7_STATE_VARIABLE_ModeMap_55_55);
  STATE_VARIABLE_ModeMap_55_55 = ((MR_Word) (conv7_STATE_VARIABLE_ModeMap_55_55));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[34]), IntTypeClasses_15, ((MR_Box) (STATE_VARIABLE_ClassMap_37_37)), &conv9_STATE_VARIABLE_ClassMap_58_58);
  STATE_VARIABLE_ClassMap_58_58 = ((MR_Word) (conv9_STATE_VARIABLE_ClassMap_58_58));
  Var_61 = (MR_Word) (IntInstances_16);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&recompilation__version_scalar_common_3[35]), Var_61, ((MR_Box) (STATE_VARIABLE_InstanceMap_38_38)), &conv11_STATE_VARIABLE_InstanceMap_62_62);
  STATE_VARIABLE_InstanceMap_62_62 = ((MR_Word) (conv11_STATE_VARIABLE_InstanceMap_62_62));
  Var_65 = parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0(IntTypeRepnMap_17);
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[8]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[36]), Var_65, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_49_49)), &conv13_STATE_VARIABLE_TypeDefnMap_66_66);
  STATE_VARIABLE_TypeDefnMap_66_66 = ((MR_Word) (conv13_STATE_VARIABLE_TypeDefnMap_66_66));
  mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[37]), ImpTypeDefns_25, ((MR_Box) (STATE_VARIABLE_TypeNameMap_48_48)), &conv17_STATE_VARIABLE_TypeNameMap_69_69, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_66_66)), &conv16_STATE_VARIABLE_TypeDefnMap_70_70);
  STATE_VARIABLE_TypeNameMap_69_69 = ((MR_Word) (conv17_STATE_VARIABLE_TypeNameMap_69_69));
  STATE_VARIABLE_TypeDefnMap_70_70 = ((MR_Word) (conv16_STATE_VARIABLE_TypeDefnMap_70_70));
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &PredMap0_31);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &FuncMap0_32);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *GatheredItems_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_TypeNameMap_69_69));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefnMap_70_70));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InstMap_52_52));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_ModeMap_55_55));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_ClassMap_58_58));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_InstanceMap_62_62));
    MR_hl_field(0, base, 6) = ((MR_Box) (PredMap0_31));
    MR_hl_field(0, base, 7) = ((MR_Box) (FuncMap0_32));
  }
}

void MR_CALL 
recompilation__version__compute_version_numbers_int1_4_p_0(
  MR_Word MaybeOldParseTreeInt1_5,
  MR_Word CurFileTime_6,
  MR_Word CurParseTreeInt1_7,
  MR_Word * NewVersionNumbers_8)
{
  MR_bool succeeded;
  MR_Word CurGatherResults_9;
  MR_Word MaybeOldVersionNumbersGatherResults_13;
  MR_Word OldParseTreeInt1_10;
  MR_Word OldVersionNumbers_11;
  MR_Word Var_14;

  recompilation__version__gather_items_in_parse_tree_int1_2_p_0(CurParseTreeInt1_7, &CurGatherResults_9);
  succeeded = (MaybeOldParseTreeInt1_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    OldParseTreeInt1_10 = ((MR_Word) ((MR_hl_field(1, MaybeOldParseTreeInt1_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, OldParseTreeInt1_10, (MR_Integer) 2))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      OldVersionNumbers_11 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word OldGatherResults_12;
    MR_Tuple Var_15;

    recompilation__version__gather_items_in_parse_tree_int1_2_p_0(OldParseTreeInt1_10, &OldGatherResults_12);
    {
      Var_15 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (OldVersionNumbers_11));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (OldGatherResults_12));
    }
    {
      MaybeOldVersionNumbersGatherResults_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeOldVersionNumbersGatherResults_13, 0) = ((MR_Box) (Var_15));
    }
  }
  else
    MaybeOldVersionNumbersGatherResults_13 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__version__update_version_numbers_4_p_0(MaybeOldVersionNumbersGatherResults_13, CurFileTime_6, CurGatherResults_9, NewVersionNumbers_8);
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv34_STATE_VARIABLE_PredMap_21;
  MR_Word conv33_STATE_VARIABLE_FuncMap_23;
  MR_Word conv32_STATE_VARIABLE_TypeClassMap_25;

  recompilation__version__apply_decl_pragma_record_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_PredMap_21, ((MR_Word) (wrapper_arg_4)), &conv33_STATE_VARIABLE_FuncMap_23, ((MR_Word) (wrapper_arg_6)), &conv32_STATE_VARIABLE_TypeClassMap_25);
  *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_PredMap_21));
  *wrapper_arg_5 = ((MR_Box) (conv33_STATE_VARIABLE_FuncMap_23));
  *wrapper_arg_7 = ((MR_Box) (conv32_STATE_VARIABLE_TypeClassMap_25));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv30_STATE_VARIABLE_TypeClassMap_24;

  recompilation__version__gather_in_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_TypeClassMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_TypeClassMap_24));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_STATE_VARIABLE_TypeMap_31;
  MR_Word conv26_STATE_VARIABLE_TypeDefnMap_33;

  recompilation__version__gather_in_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_STATE_VARIABLE_TypeMap_31, ((MR_Word) (wrapper_arg_4)), &conv26_STATE_VARIABLE_TypeDefnMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_TypeMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv26_STATE_VARIABLE_TypeDefnMap_33));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_TypeDefnMap_17;

  recompilation__version__gather_in_type_repn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_TypeDefnMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_TypeDefnMap_17));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_DeclPragmas_13;

  recompilation__version__gather_in_decl_marker_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_DeclPragmas_13);
  *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_DeclPragmas_13));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_DeclPragmas_13;

  recompilation__version__gather_in_decl_pragma_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_DeclPragmas_13);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_DeclPragmas_13));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_PredMap_25;
  MR_Word conv16_STATE_VARIABLE_FuncMap_27;

  recompilation__version__gather_in_mode_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_PredMap_25, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_FuncMap_27);
  *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_PredMap_25));
  *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_FuncMap_27));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_PredMap_43;
  MR_Word conv12_STATE_VARIABLE_FuncMap_45;

  recompilation__version__gather_in_pred_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_PredMap_43, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_FuncMap_45);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_PredMap_43));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_FuncMap_45));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_InstanceMap_20;

  recompilation__version__gather_in_instance_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_InstanceMap_20);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_InstanceMap_20));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_TypeClassMap_24;

  recompilation__version__gather_in_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_TypeClassMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_TypeClassMap_24));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModeMap_17;

  recompilation__version__gather_in_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModeMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModeMap_17));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InstMap_18;

  recompilation__version__gather_in_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_InstMap_18);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_InstMap_18));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeMap_31;
  MR_Word conv0_STATE_VARIABLE_TypeDefnMap_33;

  recompilation__version__gather_in_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMap_31, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_TypeDefnMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_33));
}

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int1__430__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__version__IntroducedFrom__pred__gather_items_in_parse_tree_int1__429__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int1_2_p_0(
  MR_Word ParseTreeInt1_3,
  MR_Word * GatheredItems_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorCheckedMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 9))));
  MR_Word IntTypeClasses_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 10))));
  MR_Word IntInstances_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 11))));
  MR_Word IntPredDecls_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 12))));
  MR_Word IntModeDecls_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 13))));
  MR_Word IntDeclPragmas_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 14))));
  MR_Word IntDeclMarkers_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 15))));
  MR_Word IntTypeRepnMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 17))));
  MR_Word ImpTypeClasses_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_3, (MR_Integer) 18))));
  MR_Word IntTypeDefns_33;
  MR_Word ImpTypeDefns_34;
  MR_Word IntInstDefns_36;
  MR_Word ImpInstDefns_37;
  MR_Word IntModeDefns_38;
  MR_Word ImpModeDefns_39;
  MR_Word STATE_VARIABLE_TypeNameMap_40_40;
  MR_Word STATE_VARIABLE_TypeDefnMap_41_41;
  MR_Word STATE_VARIABLE_InstMap_42_42;
  MR_Word STATE_VARIABLE_ModeMap_43_43;
  MR_Word STATE_VARIABLE_ClassMap_44_44;
  MR_Word STATE_VARIABLE_InstanceMap_45_45;
  MR_Word STATE_VARIABLE_PredMap_46_46;
  MR_Word STATE_VARIABLE_FuncMap_47_47;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_48_48;
  MR_Word Var_49;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_TypeNameMap_58_58;
  MR_Word STATE_VARIABLE_TypeDefnMap_59_59;
  MR_Word STATE_VARIABLE_InstMap_62_62;
  MR_Word STATE_VARIABLE_ModeMap_65_65;
  MR_Word STATE_VARIABLE_ClassMap_68_68;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_InstanceMap_72_72;
  MR_Word STATE_VARIABLE_PredMap_75_75;
  MR_Word STATE_VARIABLE_FuncMap_76_76;
  MR_Word STATE_VARIABLE_PredMap_79_79;
  MR_Word STATE_VARIABLE_FuncMap_80_80;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_83_83;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_86_86;
  MR_Word Var_89;
  MR_Word STATE_VARIABLE_TypeDefnMap_90_90;
  MR_Word STATE_VARIABLE_TypeNameMap_93_93;
  MR_Word STATE_VARIABLE_TypeDefnMap_94_94;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_ClassMap_98_98;
  MR_Word STATE_VARIABLE_PredMap_101_101;
  MR_Word STATE_VARIABLE_FuncMap_102_102;
  MR_Word STATE_VARIABLE_ClassMap_103_103;
  MR_Word _ImpForeignEnums_35;
  MR_Box conv3_STATE_VARIABLE_TypeNameMap_58_58;
  MR_Box conv2_STATE_VARIABLE_TypeDefnMap_59_59;
  MR_Box conv5_STATE_VARIABLE_InstMap_62_62;
  MR_Box conv7_STATE_VARIABLE_ModeMap_65_65;
  MR_Box conv9_STATE_VARIABLE_ClassMap_68_68;
  MR_Box conv11_STATE_VARIABLE_InstanceMap_72_72;
  MR_Box conv15_STATE_VARIABLE_PredMap_75_75;
  MR_Box conv14_STATE_VARIABLE_FuncMap_76_76;
  MR_Box conv19_STATE_VARIABLE_PredMap_79_79;
  MR_Box conv18_STATE_VARIABLE_FuncMap_80_80;
  MR_Box conv21_STATE_VARIABLE_DeclPragmaRecords_83_83;
  MR_Box conv23_STATE_VARIABLE_DeclPragmaRecords_86_86;
  MR_Box conv25_STATE_VARIABLE_TypeDefnMap_90_90;
  MR_Box conv29_STATE_VARIABLE_TypeNameMap_93_93;
  MR_Box conv28_STATE_VARIABLE_TypeDefnMap_94_94;
  MR_Box conv31_STATE_VARIABLE_ClassMap_98_98;
  MR_Box conv37_STATE_VARIABLE_PredMap_101_101;
  MR_Box conv36_STATE_VARIABLE_FuncMap_102_102;
  MR_Box conv35_STATE_VARIABLE_ClassMap_103_103;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_TypeNameMap_40_40);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_TypeDefnMap_41_41);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_InstMap_42_42);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_ModeMap_43_43);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_ClassMap_44_44);
  mercury__map__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_InstanceMap_45_45);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_PredMap_46_46);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_FuncMap_47_47);
  STATE_VARIABLE_DeclPragmaRecords_48_48 = mercury__cord__init_0_f_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0));
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_12, &IntTypeDefns_33, &ImpTypeDefns_34, &_ImpForeignEnums_35);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_13, &IntInstDefns_36, &ImpInstDefns_37);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_14, &IntModeDefns_38, &ImpModeDefns_39);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&recompilation__version_scalar_common_8[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (ImpInstDefns_37));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140recompilation.version.gather_items_in_parse_tree_int1\'/2", (MR_String) "ImpInstDefns != []");
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&recompilation__version_scalar_common_8[1]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (recompilation__version__gather_items_in_parse_tree_int1_2_p_0_2));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (ImpModeDefns_39));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140recompilation.version.gather_items_in_parse_tree_int1\'/2", (MR_String) "ImpModeDefns != []");
  mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[19]), IntTypeDefns_33, ((MR_Box) (STATE_VARIABLE_TypeNameMap_40_40)), &conv3_STATE_VARIABLE_TypeNameMap_58_58, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_41_41)), &conv2_STATE_VARIABLE_TypeDefnMap_59_59);
  STATE_VARIABLE_TypeNameMap_58_58 = ((MR_Word) (conv3_STATE_VARIABLE_TypeNameMap_58_58));
  STATE_VARIABLE_TypeDefnMap_59_59 = ((MR_Word) (conv2_STATE_VARIABLE_TypeDefnMap_59_59));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[20]), IntInstDefns_36, ((MR_Box) (STATE_VARIABLE_InstMap_42_42)), &conv5_STATE_VARIABLE_InstMap_62_62);
  STATE_VARIABLE_InstMap_62_62 = ((MR_Word) (conv5_STATE_VARIABLE_InstMap_62_62));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[4]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[21]), IntModeDefns_38, ((MR_Box) (STATE_VARIABLE_ModeMap_43_43)), &conv7_STATE_VARIABLE_ModeMap_65_65);
  STATE_VARIABLE_ModeMap_65_65 = ((MR_Word) (conv7_STATE_VARIABLE_ModeMap_65_65));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[22]), IntTypeClasses_15, ((MR_Box) (STATE_VARIABLE_ClassMap_44_44)), &conv9_STATE_VARIABLE_ClassMap_68_68);
  STATE_VARIABLE_ClassMap_68_68 = ((MR_Word) (conv9_STATE_VARIABLE_ClassMap_68_68));
  Var_71 = (MR_Word) (IntInstances_16);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&recompilation__version_scalar_common_3[23]), Var_71, ((MR_Box) (STATE_VARIABLE_InstanceMap_45_45)), &conv11_STATE_VARIABLE_InstanceMap_72_72);
  STATE_VARIABLE_InstanceMap_72_72 = ((MR_Word) (conv11_STATE_VARIABLE_InstanceMap_72_72));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[24]), IntPredDecls_17, ((MR_Box) (STATE_VARIABLE_PredMap_46_46)), &conv15_STATE_VARIABLE_PredMap_75_75, ((MR_Box) (STATE_VARIABLE_FuncMap_47_47)), &conv14_STATE_VARIABLE_FuncMap_76_76);
  STATE_VARIABLE_PredMap_75_75 = ((MR_Word) (conv15_STATE_VARIABLE_PredMap_75_75));
  STATE_VARIABLE_FuncMap_76_76 = ((MR_Word) (conv14_STATE_VARIABLE_FuncMap_76_76));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[25]), IntModeDecls_18, ((MR_Box) (STATE_VARIABLE_PredMap_75_75)), &conv19_STATE_VARIABLE_PredMap_79_79, ((MR_Box) (STATE_VARIABLE_FuncMap_76_76)), &conv18_STATE_VARIABLE_FuncMap_80_80);
  STATE_VARIABLE_PredMap_79_79 = ((MR_Word) (conv19_STATE_VARIABLE_PredMap_79_79));
  STATE_VARIABLE_FuncMap_80_80 = ((MR_Word) (conv18_STATE_VARIABLE_FuncMap_80_80));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_3[26]), IntDeclPragmas_19, ((MR_Box) (STATE_VARIABLE_DeclPragmaRecords_48_48)), &conv21_STATE_VARIABLE_DeclPragmaRecords_83_83);
  STATE_VARIABLE_DeclPragmaRecords_83_83 = ((MR_Word) (conv21_STATE_VARIABLE_DeclPragmaRecords_83_83));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_3[27]), IntDeclMarkers_20, ((MR_Box) (STATE_VARIABLE_DeclPragmaRecords_83_83)), &conv23_STATE_VARIABLE_DeclPragmaRecords_86_86);
  STATE_VARIABLE_DeclPragmaRecords_86_86 = ((MR_Word) (conv23_STATE_VARIABLE_DeclPragmaRecords_86_86));
  Var_89 = parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0(IntTypeRepnMap_22);
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[8]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[28]), Var_89, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_59_59)), &conv25_STATE_VARIABLE_TypeDefnMap_90_90);
  STATE_VARIABLE_TypeDefnMap_90_90 = ((MR_Word) (conv25_STATE_VARIABLE_TypeDefnMap_90_90));
  mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[29]), ImpTypeDefns_34, ((MR_Box) (STATE_VARIABLE_TypeNameMap_58_58)), &conv29_STATE_VARIABLE_TypeNameMap_93_93, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_90_90)), &conv28_STATE_VARIABLE_TypeDefnMap_94_94);
  STATE_VARIABLE_TypeNameMap_93_93 = ((MR_Word) (conv29_STATE_VARIABLE_TypeNameMap_93_93));
  STATE_VARIABLE_TypeDefnMap_94_94 = ((MR_Word) (conv28_STATE_VARIABLE_TypeDefnMap_94_94));
  Var_97 = (MR_Word) (ImpTypeClasses_23);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[30]), Var_97, ((MR_Box) (STATE_VARIABLE_ClassMap_68_68)), &conv31_STATE_VARIABLE_ClassMap_98_98);
  STATE_VARIABLE_ClassMap_98_98 = ((MR_Word) (conv31_STATE_VARIABLE_ClassMap_98_98));
  mercury__cord__foldl3_8_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[11]), STATE_VARIABLE_DeclPragmaRecords_86_86, ((MR_Box) (STATE_VARIABLE_PredMap_79_79)), &conv37_STATE_VARIABLE_PredMap_101_101, ((MR_Box) (STATE_VARIABLE_FuncMap_80_80)), &conv36_STATE_VARIABLE_FuncMap_102_102, ((MR_Box) (STATE_VARIABLE_ClassMap_98_98)), &conv35_STATE_VARIABLE_ClassMap_103_103);
  STATE_VARIABLE_PredMap_101_101 = ((MR_Word) (conv37_STATE_VARIABLE_PredMap_101_101));
  STATE_VARIABLE_FuncMap_102_102 = ((MR_Word) (conv36_STATE_VARIABLE_FuncMap_102_102));
  STATE_VARIABLE_ClassMap_103_103 = ((MR_Word) (conv35_STATE_VARIABLE_ClassMap_103_103));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *GatheredItems_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_TypeNameMap_93_93));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefnMap_94_94));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InstMap_62_62));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_ModeMap_65_65));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_ClassMap_103_103));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_InstanceMap_72_72));
    MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_PredMap_101_101));
    MR_hl_field(0, base, 7) = ((MR_Box) (STATE_VARIABLE_FuncMap_102_102));
  }
}

void MR_CALL 
recompilation__version__compute_version_numbers_int0_4_p_0(
  MR_Word MaybeOldParseTreeInt0_5,
  MR_Word CurFileTime_6,
  MR_Word CurParseTreeInt0_7,
  MR_Word * NewVersionNumbers_8)
{
  MR_bool succeeded;
  MR_Word CurGatherResults_9;
  MR_Word MaybeOldVersionNumbersGatherResults_13;
  MR_Word OldParseTreeInt0_10;
  MR_Word OldVersionNumbers_11;
  MR_Word Var_14;

  recompilation__version__gather_items_in_parse_tree_int0_2_p_0(CurParseTreeInt0_7, &CurGatherResults_9);
  succeeded = (MaybeOldParseTreeInt0_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    OldParseTreeInt0_10 = ((MR_Word) ((MR_hl_field(1, MaybeOldParseTreeInt0_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, OldParseTreeInt0_10, (MR_Integer) 2))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      OldVersionNumbers_11 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word OldGatherResults_12;
    MR_Tuple Var_15;

    recompilation__version__gather_items_in_parse_tree_int0_2_p_0(OldParseTreeInt0_10, &OldGatherResults_12);
    {
      Var_15 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (OldVersionNumbers_11));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (OldGatherResults_12));
    }
    {
      MaybeOldVersionNumbersGatherResults_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeOldVersionNumbersGatherResults_13, 0) = ((MR_Box) (Var_15));
    }
  }
  else
    MaybeOldVersionNumbersGatherResults_13 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__version__update_version_numbers_4_p_0(MaybeOldVersionNumbersGatherResults_13, CurFileTime_6, CurGatherResults_9, NewVersionNumbers_8);
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv50_STATE_VARIABLE_PredMap_21;
  MR_Word conv49_STATE_VARIABLE_FuncMap_23;
  MR_Word conv48_STATE_VARIABLE_TypeClassMap_25;

  recompilation__version__apply_decl_pragma_record_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv50_STATE_VARIABLE_PredMap_21, ((MR_Word) (wrapper_arg_4)), &conv49_STATE_VARIABLE_FuncMap_23, ((MR_Word) (wrapper_arg_6)), &conv48_STATE_VARIABLE_TypeClassMap_25);
  *wrapper_arg_3 = ((MR_Box) (conv50_STATE_VARIABLE_PredMap_21));
  *wrapper_arg_5 = ((MR_Box) (conv49_STATE_VARIABLE_FuncMap_23));
  *wrapper_arg_7 = ((MR_Box) (conv48_STATE_VARIABLE_TypeClassMap_25));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv46_STATE_VARIABLE_DeclPragmas_13;

  recompilation__version__gather_in_decl_marker_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv46_STATE_VARIABLE_DeclPragmas_13);
  *wrapper_arg_3 = ((MR_Box) (conv46_STATE_VARIABLE_DeclPragmas_13));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv44_STATE_VARIABLE_DeclPragmas_13;

  recompilation__version__gather_in_decl_pragma_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_STATE_VARIABLE_DeclPragmas_13);
  *wrapper_arg_3 = ((MR_Box) (conv44_STATE_VARIABLE_DeclPragmas_13));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv41_STATE_VARIABLE_PredMap_25;
  MR_Word conv40_STATE_VARIABLE_FuncMap_27;

  recompilation__version__gather_in_mode_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv41_STATE_VARIABLE_PredMap_25, ((MR_Word) (wrapper_arg_4)), &conv40_STATE_VARIABLE_FuncMap_27);
  *wrapper_arg_3 = ((MR_Box) (conv41_STATE_VARIABLE_PredMap_25));
  *wrapper_arg_5 = ((MR_Box) (conv40_STATE_VARIABLE_FuncMap_27));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv37_STATE_VARIABLE_PredMap_43;
  MR_Word conv36_STATE_VARIABLE_FuncMap_45;

  recompilation__version__gather_in_pred_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv37_STATE_VARIABLE_PredMap_43, ((MR_Word) (wrapper_arg_4)), &conv36_STATE_VARIABLE_FuncMap_45);
  *wrapper_arg_3 = ((MR_Box) (conv37_STATE_VARIABLE_PredMap_43));
  *wrapper_arg_5 = ((MR_Box) (conv36_STATE_VARIABLE_FuncMap_45));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv34_STATE_VARIABLE_InstanceMap_20;

  recompilation__version__gather_in_instance_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_InstanceMap_20);
  *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_InstanceMap_20));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_STATE_VARIABLE_TypeClassMap_24;

  recompilation__version__gather_in_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_STATE_VARIABLE_TypeClassMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv32_STATE_VARIABLE_TypeClassMap_24));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv30_STATE_VARIABLE_ModeMap_17;

  recompilation__version__gather_in_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_ModeMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_ModeMap_17));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv28_STATE_VARIABLE_InstMap_18;

  recompilation__version__gather_in_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv28_STATE_VARIABLE_InstMap_18);
  *wrapper_arg_3 = ((MR_Box) (conv28_STATE_VARIABLE_InstMap_18));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv25_STATE_VARIABLE_TypeMap_31;
  MR_Word conv24_STATE_VARIABLE_TypeDefnMap_33;

  recompilation__version__gather_in_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_STATE_VARIABLE_TypeMap_31, ((MR_Word) (wrapper_arg_4)), &conv24_STATE_VARIABLE_TypeDefnMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv25_STATE_VARIABLE_TypeMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv24_STATE_VARIABLE_TypeDefnMap_33));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_DeclPragmas_13;

  recompilation__version__gather_in_decl_marker_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_DeclPragmas_13);
  *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_DeclPragmas_13));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_DeclPragmas_13;

  recompilation__version__gather_in_decl_pragma_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_DeclPragmas_13);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_DeclPragmas_13));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_PredMap_25;
  MR_Word conv16_STATE_VARIABLE_FuncMap_27;

  recompilation__version__gather_in_mode_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_PredMap_25, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_FuncMap_27);
  *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_PredMap_25));
  *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_FuncMap_27));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_PredMap_43;
  MR_Word conv12_STATE_VARIABLE_FuncMap_45;

  recompilation__version__gather_in_pred_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_PredMap_43, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_FuncMap_45);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_PredMap_43));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_FuncMap_45));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_InstanceMap_20;

  recompilation__version__gather_in_instance_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_InstanceMap_20);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_InstanceMap_20));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_TypeClassMap_24;

  recompilation__version__gather_in_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_TypeClassMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_TypeClassMap_24));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModeMap_17;

  recompilation__version__gather_in_mode_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModeMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModeMap_17));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InstMap_18;

  recompilation__version__gather_in_inst_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_InstMap_18);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_InstMap_18));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeMap_31;
  MR_Word conv0_STATE_VARIABLE_TypeDefnMap_33;

  recompilation__version__gather_in_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMap_31, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_TypeDefnMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_33));
}

static void MR_CALL 
recompilation__version__gather_items_in_parse_tree_int0_2_p_0(
  MR_Word ParseTreeInt0_3,
  MR_Word * GatheredItems_4)
{
  MR_Word TypeCtorCheckedMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 9))));
  MR_Word IntTypeClasses_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 10))));
  MR_Word IntInstances_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 11))));
  MR_Word IntPredDecls_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 12))));
  MR_Word IntModeDecls_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 13))));
  MR_Word IntDeclPragmas_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 14))));
  MR_Word IntDeclMarkers_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 15))));
  MR_Word ImpTypeClasses_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 17))));
  MR_Word ImpInstances_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 18))));
  MR_Word ImpPredDecls_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 19))));
  MR_Word ImpModeDecls_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 20))));
  MR_Word ImpDeclPragmas_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 21))));
  MR_Word ImpDeclMarkers_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_3, (MR_Integer) 22))));
  MR_Word IntTypeDefns_38;
  MR_Word ImpTypeDefns_39;
  MR_Word IntInstDefns_41;
  MR_Word ImpInstDefns_42;
  MR_Word IntModeDefns_43;
  MR_Word ImpModeDefns_44;
  MR_Word STATE_VARIABLE_TypeNameMap_45_45;
  MR_Word STATE_VARIABLE_TypeDefnMap_46_46;
  MR_Word STATE_VARIABLE_InstMap_47_47;
  MR_Word STATE_VARIABLE_ModeMap_48_48;
  MR_Word STATE_VARIABLE_ClassMap_49_49;
  MR_Word STATE_VARIABLE_InstanceMap_50_50;
  MR_Word STATE_VARIABLE_PredMap_51_51;
  MR_Word STATE_VARIABLE_FuncMap_52_52;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_53_53;
  MR_Word STATE_VARIABLE_TypeNameMap_55_55;
  MR_Word STATE_VARIABLE_TypeDefnMap_56_56;
  MR_Word STATE_VARIABLE_InstMap_59_59;
  MR_Word STATE_VARIABLE_ModeMap_62_62;
  MR_Word STATE_VARIABLE_ClassMap_65_65;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_InstanceMap_69_69;
  MR_Word STATE_VARIABLE_PredMap_72_72;
  MR_Word STATE_VARIABLE_FuncMap_73_73;
  MR_Word STATE_VARIABLE_PredMap_76_76;
  MR_Word STATE_VARIABLE_FuncMap_77_77;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_80_80;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_83_83;
  MR_Word STATE_VARIABLE_TypeNameMap_86_86;
  MR_Word STATE_VARIABLE_TypeDefnMap_87_87;
  MR_Word STATE_VARIABLE_InstMap_90_90;
  MR_Word STATE_VARIABLE_ModeMap_93_93;
  MR_Word STATE_VARIABLE_ClassMap_96_96;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_InstanceMap_100_100;
  MR_Word STATE_VARIABLE_PredMap_103_103;
  MR_Word STATE_VARIABLE_FuncMap_104_104;
  MR_Word STATE_VARIABLE_PredMap_107_107;
  MR_Word STATE_VARIABLE_FuncMap_108_108;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_111_111;
  MR_Word STATE_VARIABLE_DeclPragmaRecords_114_114;
  MR_Word STATE_VARIABLE_PredMap_117_117;
  MR_Word STATE_VARIABLE_FuncMap_118_118;
  MR_Word STATE_VARIABLE_ClassMap_119_119;
  MR_Word _ImpForeignEnums_40;
  MR_Box conv3_STATE_VARIABLE_TypeNameMap_55_55;
  MR_Box conv2_STATE_VARIABLE_TypeDefnMap_56_56;
  MR_Box conv5_STATE_VARIABLE_InstMap_59_59;
  MR_Box conv7_STATE_VARIABLE_ModeMap_62_62;
  MR_Box conv9_STATE_VARIABLE_ClassMap_65_65;
  MR_Box conv11_STATE_VARIABLE_InstanceMap_69_69;
  MR_Box conv15_STATE_VARIABLE_PredMap_72_72;
  MR_Box conv14_STATE_VARIABLE_FuncMap_73_73;
  MR_Box conv19_STATE_VARIABLE_PredMap_76_76;
  MR_Box conv18_STATE_VARIABLE_FuncMap_77_77;
  MR_Box conv21_STATE_VARIABLE_DeclPragmaRecords_80_80;
  MR_Box conv23_STATE_VARIABLE_DeclPragmaRecords_83_83;
  MR_Box conv27_STATE_VARIABLE_TypeNameMap_86_86;
  MR_Box conv26_STATE_VARIABLE_TypeDefnMap_87_87;
  MR_Box conv29_STATE_VARIABLE_InstMap_90_90;
  MR_Box conv31_STATE_VARIABLE_ModeMap_93_93;
  MR_Box conv33_STATE_VARIABLE_ClassMap_96_96;
  MR_Box conv35_STATE_VARIABLE_InstanceMap_100_100;
  MR_Box conv39_STATE_VARIABLE_PredMap_103_103;
  MR_Box conv38_STATE_VARIABLE_FuncMap_104_104;
  MR_Box conv43_STATE_VARIABLE_PredMap_107_107;
  MR_Box conv42_STATE_VARIABLE_FuncMap_108_108;
  MR_Box conv45_STATE_VARIABLE_DeclPragmaRecords_111_111;
  MR_Box conv47_STATE_VARIABLE_DeclPragmaRecords_114_114;
  MR_Box conv53_STATE_VARIABLE_PredMap_117_117;
  MR_Box conv52_STATE_VARIABLE_FuncMap_118_118;
  MR_Box conv51_STATE_VARIABLE_ClassMap_119_119;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_TypeNameMap_45_45);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_TypeDefnMap_46_46);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_InstMap_47_47);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_ModeMap_48_48);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_ClassMap_49_49);
  mercury__map__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_InstanceMap_50_50);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_PredMap_51_51);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), &STATE_VARIABLE_FuncMap_52_52);
  STATE_VARIABLE_DeclPragmaRecords_53_53 = mercury__cord__init_0_f_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0));
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_12, &IntTypeDefns_38, &ImpTypeDefns_39, &_ImpForeignEnums_40);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_13, &IntInstDefns_41, &ImpInstDefns_42);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_14, &IntModeDefns_43, &ImpModeDefns_44);
  mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[1]), IntTypeDefns_38, ((MR_Box) (STATE_VARIABLE_TypeNameMap_45_45)), &conv3_STATE_VARIABLE_TypeNameMap_55_55, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_46_46)), &conv2_STATE_VARIABLE_TypeDefnMap_56_56);
  STATE_VARIABLE_TypeNameMap_55_55 = ((MR_Word) (conv3_STATE_VARIABLE_TypeNameMap_55_55));
  STATE_VARIABLE_TypeDefnMap_56_56 = ((MR_Word) (conv2_STATE_VARIABLE_TypeDefnMap_56_56));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[2]), IntInstDefns_41, ((MR_Box) (STATE_VARIABLE_InstMap_47_47)), &conv5_STATE_VARIABLE_InstMap_59_59);
  STATE_VARIABLE_InstMap_59_59 = ((MR_Word) (conv5_STATE_VARIABLE_InstMap_59_59));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[4]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[3]), IntModeDefns_43, ((MR_Box) (STATE_VARIABLE_ModeMap_48_48)), &conv7_STATE_VARIABLE_ModeMap_62_62);
  STATE_VARIABLE_ModeMap_62_62 = ((MR_Word) (conv7_STATE_VARIABLE_ModeMap_62_62));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[4]), IntTypeClasses_15, ((MR_Box) (STATE_VARIABLE_ClassMap_49_49)), &conv9_STATE_VARIABLE_ClassMap_65_65);
  STATE_VARIABLE_ClassMap_65_65 = ((MR_Word) (conv9_STATE_VARIABLE_ClassMap_65_65));
  Var_68 = (MR_Word) (IntInstances_16);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&recompilation__version_scalar_common_3[5]), Var_68, ((MR_Box) (STATE_VARIABLE_InstanceMap_50_50)), &conv11_STATE_VARIABLE_InstanceMap_69_69);
  STATE_VARIABLE_InstanceMap_69_69 = ((MR_Word) (conv11_STATE_VARIABLE_InstanceMap_69_69));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[6]), IntPredDecls_17, ((MR_Box) (STATE_VARIABLE_PredMap_51_51)), &conv15_STATE_VARIABLE_PredMap_72_72, ((MR_Box) (STATE_VARIABLE_FuncMap_52_52)), &conv14_STATE_VARIABLE_FuncMap_73_73);
  STATE_VARIABLE_PredMap_72_72 = ((MR_Word) (conv15_STATE_VARIABLE_PredMap_72_72));
  STATE_VARIABLE_FuncMap_73_73 = ((MR_Word) (conv14_STATE_VARIABLE_FuncMap_73_73));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[7]), IntModeDecls_18, ((MR_Box) (STATE_VARIABLE_PredMap_72_72)), &conv19_STATE_VARIABLE_PredMap_76_76, ((MR_Box) (STATE_VARIABLE_FuncMap_73_73)), &conv18_STATE_VARIABLE_FuncMap_77_77);
  STATE_VARIABLE_PredMap_76_76 = ((MR_Word) (conv19_STATE_VARIABLE_PredMap_76_76));
  STATE_VARIABLE_FuncMap_77_77 = ((MR_Word) (conv18_STATE_VARIABLE_FuncMap_77_77));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_3[8]), IntDeclPragmas_19, ((MR_Box) (STATE_VARIABLE_DeclPragmaRecords_53_53)), &conv21_STATE_VARIABLE_DeclPragmaRecords_80_80);
  STATE_VARIABLE_DeclPragmaRecords_80_80 = ((MR_Word) (conv21_STATE_VARIABLE_DeclPragmaRecords_80_80));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_3[9]), IntDeclMarkers_20, ((MR_Box) (STATE_VARIABLE_DeclPragmaRecords_80_80)), &conv23_STATE_VARIABLE_DeclPragmaRecords_83_83);
  STATE_VARIABLE_DeclPragmaRecords_83_83 = ((MR_Word) (conv23_STATE_VARIABLE_DeclPragmaRecords_83_83));
  mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__version_scalar_common_1[2]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[10]), ImpTypeDefns_39, ((MR_Box) (STATE_VARIABLE_TypeNameMap_55_55)), &conv27_STATE_VARIABLE_TypeNameMap_86_86, ((MR_Box) (STATE_VARIABLE_TypeDefnMap_56_56)), &conv26_STATE_VARIABLE_TypeDefnMap_87_87);
  STATE_VARIABLE_TypeNameMap_86_86 = ((MR_Word) (conv27_STATE_VARIABLE_TypeNameMap_86_86));
  STATE_VARIABLE_TypeDefnMap_87_87 = ((MR_Word) (conv26_STATE_VARIABLE_TypeDefnMap_87_87));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[3]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[11]), ImpInstDefns_42, ((MR_Box) (STATE_VARIABLE_InstMap_59_59)), &conv29_STATE_VARIABLE_InstMap_90_90);
  STATE_VARIABLE_InstMap_90_90 = ((MR_Word) (conv29_STATE_VARIABLE_InstMap_90_90));
  mercury__list__foldl_4_p_0((MR_Word) (&recompilation__version_scalar_common_1[4]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[12]), ImpModeDefns_44, ((MR_Box) (STATE_VARIABLE_ModeMap_62_62)), &conv31_STATE_VARIABLE_ModeMap_93_93);
  STATE_VARIABLE_ModeMap_93_93 = ((MR_Word) (conv31_STATE_VARIABLE_ModeMap_93_93));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[13]), ImpTypeClasses_22, ((MR_Box) (STATE_VARIABLE_ClassMap_65_65)), &conv33_STATE_VARIABLE_ClassMap_96_96);
  STATE_VARIABLE_ClassMap_96_96 = ((MR_Word) (conv33_STATE_VARIABLE_ClassMap_96_96));
  Var_99 = (MR_Word) (ImpInstances_23);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&recompilation__version_scalar_common_2[2]), (MR_Word) (&recompilation__version_scalar_common_3[14]), Var_99, ((MR_Box) (STATE_VARIABLE_InstanceMap_69_69)), &conv35_STATE_VARIABLE_InstanceMap_100_100);
  STATE_VARIABLE_InstanceMap_100_100 = ((MR_Word) (conv35_STATE_VARIABLE_InstanceMap_100_100));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[15]), ImpPredDecls_24, ((MR_Box) (STATE_VARIABLE_PredMap_76_76)), &conv39_STATE_VARIABLE_PredMap_103_103, ((MR_Box) (STATE_VARIABLE_FuncMap_77_77)), &conv38_STATE_VARIABLE_FuncMap_104_104);
  STATE_VARIABLE_PredMap_103_103 = ((MR_Word) (conv39_STATE_VARIABLE_PredMap_103_103));
  STATE_VARIABLE_FuncMap_104_104 = ((MR_Word) (conv38_STATE_VARIABLE_FuncMap_104_104));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_3[16]), ImpModeDecls_25, ((MR_Box) (STATE_VARIABLE_PredMap_103_103)), &conv43_STATE_VARIABLE_PredMap_107_107, ((MR_Box) (STATE_VARIABLE_FuncMap_104_104)), &conv42_STATE_VARIABLE_FuncMap_108_108);
  STATE_VARIABLE_PredMap_107_107 = ((MR_Word) (conv43_STATE_VARIABLE_PredMap_107_107));
  STATE_VARIABLE_FuncMap_108_108 = ((MR_Word) (conv42_STATE_VARIABLE_FuncMap_108_108));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_3[17]), ImpDeclPragmas_26, ((MR_Box) (STATE_VARIABLE_DeclPragmaRecords_83_83)), &conv45_STATE_VARIABLE_DeclPragmaRecords_111_111);
  STATE_VARIABLE_DeclPragmaRecords_111_111 = ((MR_Word) (conv45_STATE_VARIABLE_DeclPragmaRecords_111_111));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&recompilation__version_scalar_common_1[5]), (MR_Word) (&recompilation__version_scalar_common_3[18]), ImpDeclMarkers_27, ((MR_Box) (STATE_VARIABLE_DeclPragmaRecords_111_111)), &conv47_STATE_VARIABLE_DeclPragmaRecords_114_114);
  STATE_VARIABLE_DeclPragmaRecords_114_114 = ((MR_Word) (conv47_STATE_VARIABLE_DeclPragmaRecords_114_114));
  mercury__cord__foldl3_8_p_0((MR_Word) (&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[1]), (MR_Word) (&recompilation__version_scalar_common_2[10]), STATE_VARIABLE_DeclPragmaRecords_114_114, ((MR_Box) (STATE_VARIABLE_PredMap_107_107)), &conv53_STATE_VARIABLE_PredMap_117_117, ((MR_Box) (STATE_VARIABLE_FuncMap_108_108)), &conv52_STATE_VARIABLE_FuncMap_118_118, ((MR_Box) (STATE_VARIABLE_ClassMap_96_96)), &conv51_STATE_VARIABLE_ClassMap_119_119);
  STATE_VARIABLE_PredMap_117_117 = ((MR_Word) (conv53_STATE_VARIABLE_PredMap_117_117));
  STATE_VARIABLE_FuncMap_118_118 = ((MR_Word) (conv52_STATE_VARIABLE_FuncMap_118_118));
  STATE_VARIABLE_ClassMap_119_119 = ((MR_Word) (conv51_STATE_VARIABLE_ClassMap_119_119));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *GatheredItems_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_TypeNameMap_86_86));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefnMap_87_87));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InstMap_90_90));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_ModeMap_93_93));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_ClassMap_119_119));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_InstanceMap_100_100));
    MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_PredMap_117_117));
    MR_hl_field(0, base, 7) = ((MR_Box) (STATE_VARIABLE_FuncMap_118_118));
  }
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv7_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv6_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_TimeStamp_12;

  recompilation__version__compute_item_name_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv5_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TimeStamp_12;

  recompilation__version__compute_name_arity_version_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_TimeStamp_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_TimeStamp_12));
}

static void MR_CALL 
recompilation__version__update_version_numbers_4_p_0(
  MR_Word MaybeOldVersionNumbersGatherResults_5,
  MR_Word CurSourceFileTime_6,
  MR_Word CurGatheredItems_7,
  MR_Word * NewVersionNumbers_8)
{
  MR_Word OldVersionNumbers_9;
  MR_Word OldGatheredItems_10;
  MR_Word OldTypeMap_32;
  MR_Word OldTBodyMap_33;
  MR_Word OldInstMap_34;
  MR_Word OldModeMap_35;
  MR_Word OldClassMap_36;
  MR_Word OldInstanceMap_37;
  MR_Word OldPredMap_38;
  MR_Word OldFuncMap_39;
  MR_Word CurTypeMap_40;
  MR_Word CurTBodyMap_41;
  MR_Word CurInstMap_42;
  MR_Word CurModeMap_43;
  MR_Word CurClassMap_44;
  MR_Word CurInstanceMap_45;
  MR_Word CurPredMap_46;
  MR_Word CurFuncMap_47;
  MR_Word OldTypeVMap_48;
  MR_Word OldTBodyVMap_49;
  MR_Word OldInstVMap_50;
  MR_Word OldModeVMap_51;
  MR_Word OldClassVMap_52;
  MR_Word OldInstanceVMap_53;
  MR_Word OldPredVMap_54;
  MR_Word OldFuncVMap_55;
  MR_Word NewTypeVMap_56;
  MR_Word NewTBodyVMap_57;
  MR_Word NewInstVMap_58;
  MR_Word NewModeVMap_59;
  MR_Word NewClassVMap_60;
  MR_Word NewInstanceVMap_61;
  MR_Word NewPredVMap_62;
  MR_Word NewFuncVMap_63;
  MR_Word Var_64;
  MR_Word Var_68;
  MR_Word Var_72;
  MR_Word Var_76;
  MR_Word Var_80;
  MR_Word Var_84;
  MR_Word Var_88;
  MR_Word Var_92;

  if ((MaybeOldVersionNumbersGatherResults_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
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

    Var_12 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_13 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_14 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_16 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_17 = mercury__map__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
    {
      OldVersionNumbers_9 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldVersionNumbers_9, 0) = ((MR_Box) (Var_12));
      MR_hl_field(0, OldVersionNumbers_9, 1) = ((MR_Box) (Var_13));
      MR_hl_field(0, OldVersionNumbers_9, 2) = ((MR_Box) (Var_14));
      MR_hl_field(0, OldVersionNumbers_9, 3) = ((MR_Box) (Var_15));
      MR_hl_field(0, OldVersionNumbers_9, 4) = ((MR_Box) (Var_16));
      MR_hl_field(0, OldVersionNumbers_9, 5) = ((MR_Box) (Var_17));
      MR_hl_field(0, OldVersionNumbers_9, 6) = ((MR_Box) (Var_18));
      MR_hl_field(0, OldVersionNumbers_9, 7) = ((MR_Box) (Var_19));
    }
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_21 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_22 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_23 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_24 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_26 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    Var_27 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]));
    {
      OldGatheredItems_10 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldGatheredItems_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, OldGatheredItems_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(0, OldGatheredItems_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(0, OldGatheredItems_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(0, OldGatheredItems_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(0, OldGatheredItems_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(0, OldGatheredItems_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(0, OldGatheredItems_10, 7) = ((MR_Box) (Var_27));
    }
  }
  else
  {
    MR_Tuple Var_11 = ((MR_Tuple) ((MR_hl_field(1, MaybeOldVersionNumbersGatherResults_5, (MR_Integer) 0))));

    OldVersionNumbers_9 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    OldGatheredItems_10 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
  }
  OldTypeMap_32 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 0))));
  OldTBodyMap_33 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 1))));
  OldInstMap_34 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 2))));
  OldModeMap_35 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 3))));
  OldClassMap_36 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 4))));
  OldInstanceMap_37 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 5))));
  OldPredMap_38 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 6))));
  OldFuncMap_39 = ((MR_Word) ((MR_hl_field(0, OldGatheredItems_10, (MR_Integer) 7))));
  CurTypeMap_40 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 0))));
  CurTBodyMap_41 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 1))));
  CurInstMap_42 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 2))));
  CurModeMap_43 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 3))));
  CurClassMap_44 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 4))));
  CurInstanceMap_45 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 5))));
  CurPredMap_46 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 6))));
  CurFuncMap_47 = ((MR_Word) ((MR_hl_field(0, CurGatheredItems_7, (MR_Integer) 7))));
  OldTypeVMap_48 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 0))));
  OldTBodyVMap_49 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 1))));
  OldInstVMap_50 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 2))));
  OldModeVMap_51 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 3))));
  OldClassVMap_52 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 4))));
  OldInstanceVMap_53 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 5))));
  OldPredVMap_54 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 6))));
  OldFuncVMap_55 = ((MR_Word) ((MR_hl_field(0, OldVersionNumbers_9, (MR_Integer) 7))));
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_1));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_64, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_64, 4) = ((MR_Box) (OldTypeMap_32));
    MR_hl_field(0, Var_64, 5) = ((MR_Box) (OldTypeVMap_48));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_64, CurTypeMap_40, &NewTypeVMap_56);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_2));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) (OldTBodyMap_33));
    MR_hl_field(0, Var_68, 5) = ((MR_Box) (OldTBodyVMap_49));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_68, CurTBodyMap_41, &NewTBodyVMap_57);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_3));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_72, 4) = ((MR_Box) (OldInstMap_34));
    MR_hl_field(0, Var_72, 5) = ((MR_Box) (OldInstVMap_50));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_72, CurInstMap_42, &NewInstVMap_58);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_4));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_76, 4) = ((MR_Box) (OldModeMap_35));
    MR_hl_field(0, Var_76, 5) = ((MR_Box) (OldModeVMap_51));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_76, CurModeMap_43, &NewModeVMap_59);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_5));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (OldClassMap_36));
    MR_hl_field(0, Var_80, 5) = ((MR_Box) (OldClassVMap_52));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_80, CurClassMap_44, &NewClassVMap_60);
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[1]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_6));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_84, 4) = ((MR_Box) (OldInstanceMap_37));
    MR_hl_field(0, Var_84, 5) = ((MR_Box) (OldInstanceVMap_53));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_84, CurInstanceMap_45, &NewInstanceVMap_61);
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_7));
    MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_88, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_88, 4) = ((MR_Box) (OldPredMap_38));
    MR_hl_field(0, Var_88, 5) = ((MR_Box) (OldPredVMap_54));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_88, CurPredMap_46, &NewPredVMap_62);
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[0]));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (recompilation__version__update_version_numbers_4_p_0_8));
    MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (CurSourceFileTime_6));
    MR_hl_field(0, Var_92, 4) = ((MR_Box) (OldFuncMap_39));
    MR_hl_field(0, Var_92, 5) = ((MR_Box) (OldFuncVMap_55));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__version_scalar_common_1[1]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_92, CurFuncMap_47, &NewFuncVMap_63);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *NewVersionNumbers_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NewTypeVMap_56));
    MR_hl_field(0, base, 1) = ((MR_Box) (NewTBodyVMap_57));
    MR_hl_field(0, base, 2) = ((MR_Box) (NewInstVMap_58));
    MR_hl_field(0, base, 3) = ((MR_Box) (NewModeVMap_59));
    MR_hl_field(0, base, 4) = ((MR_Box) (NewClassVMap_60));
    MR_hl_field(0, base, 5) = ((MR_Box) (NewInstanceVMap_61));
    MR_hl_field(0, base, 6) = ((MR_Box) (NewPredVMap_62));
    MR_hl_field(0, base, 7) = ((MR_Box) (NewFuncVMap_63));
  }
}

static MR_bool MR_CALL 
recompilation__version____Unify____decl_pragma_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__version____Unify____decl_pragma_record_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____decl_pragma_record_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__version____Compare____decl_pragma_record_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_in_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__version____Unify____gathered_item_multi_map_in_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_in_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__version____Compare____gathered_item_multi_map_in_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_multi_map_na_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__version____Unify____gathered_item_multi_map_na_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____gathered_item_multi_map_na_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__version____Compare____gathered_item_multi_map_na_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__version____Unify____gathered_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__version____Compare____gathered_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__version____Unify____item_version_numbers_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__version____Compare____item_version_numbers_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__version____Unify____maybe_pred_or_func_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__version____Compare____maybe_pred_or_func_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__recompilation__version__init(void)
{
}

void mercury__recompilation__version__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_decl_pragma_record_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_item_multi_map_in_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_item_multi_map_na_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_items_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0);
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
