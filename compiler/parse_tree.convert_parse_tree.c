/*
** Automatically generated from `convert_parse_tree.m'
** by the Mercury compiler,
** version rotd-2026-07-23
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


// :- module parse_tree.convert_parse_tree.
// :- implementation.

/*
INIT mercury__parse_tree__convert_parse_tree__init
ENDINIT
*/

#include "parse_tree.convert_parse_tree.mih"


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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_type_inst_mode_defns.mih"
#include "parse_tree.convert_import_use.mih"
#include "parse_tree.convert_include.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_foreign_enum.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.type_inst_mode_map.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_int_0_0[12];

static const MR_ConstString parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_parse_tree_int_0_0[12];

static const MR_DuArgLocn parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_parse_tree_int_0_0[12];

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_int_0_0;

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_int_0_0[1];

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_parse_tree_int_0[1];

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_int_0[1];

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_int_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_avail_use_info_0;

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_opt_0_0[6];

static const MR_ConstString parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_parse_tree_opt_0_0[6];

static const MR_DuArgLocn parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_parse_tree_opt_0_0[6];

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_opt_0_0;

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_opt_0_0[1];

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_parse_tree_opt_0[1];

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_opt_0[1];

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_opt_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0;

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_compilation_unit_0_0[3];

static const MR_ConstString parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_raw_compilation_unit_0_0[3];

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_compilation_unit_0_0;

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_compilation_unit_0_0[1];

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_raw_compilation_unit_0[1];

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_compilation_unit_0[1];

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_compilation_unit_0[1];

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_item_block_0_0[6];

static const MR_DuArgLocn parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_raw_item_block_0_0[6];

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_item_block_0_0;

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_item_block_0_0[1];

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_raw_item_block_0[1];

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_item_block_0[1];

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_item_block_0[1];

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1331__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__1026__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__796__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__610__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__364__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__195__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_84);

static void MR_CALL 
parse_tree__convert_parse_tree__restrict_to_int_import_map_entry_7_p_0(
  MR_String Extension_8,
  MR_Word ModuleName_9,
  MR_Word SectionImportAndOrUse_10,
  MR_Word STATE_VARIABLE_IntImportMap_0_17,
  MR_Word * STATE_VARIABLE_IntImportMap_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__convert_parse_tree__restrict_to_section_use_map_entry_7_p_0(
  MR_String Extension_8,
  MR_Word ModuleName_9,
  MR_Word SectionImportAndOrUse_10,
  MR_Word STATE_VARIABLE_SectionUseMap_0_16,
  MR_Word * STATE_VARIABLE_SectionUseMap_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(
  MR_String Extension_7,
  MR_String Decl_8,
  MR_Word MaybeSection_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(
  MR_Word ItemFIM_6,
  MR_Word STATE_VARIABLE_FIMSpecMap_0_21,
  MR_Word * STATE_VARIABLE_FIMSpecMap_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(
  MR_Word IntFIMSpecMap_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_21,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_22,
  MR_Word STATE_VARIABLE_WarnSpecs_0_23,
  MR_Word * STATE_VARIABLE_WarnSpecs_24);

static void MR_CALL 
parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(
  MR_Word Clause0_3,
  MR_Word * Clause_4);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntAvails_0_4,
  MR_Word * STATE_VARIABLE_IntAvails_5,
  MR_Word STATE_VARIABLE_IntFIMSpecMap_0_6,
  MR_Word * STATE_VARIABLE_IntFIMSpecMap_7,
  MR_Word STATE_VARIABLE_RevIntTypeDefns_0_8,
  MR_Word * STATE_VARIABLE_RevIntTypeDefns_9,
  MR_Word STATE_VARIABLE_RevIntInstDefns_0_10,
  MR_Word * STATE_VARIABLE_RevIntInstDefns_11,
  MR_Word STATE_VARIABLE_RevIntModeDefns_0_12,
  MR_Word * STATE_VARIABLE_RevIntModeDefns_13,
  MR_Word STATE_VARIABLE_RevIntTypeClasses_0_14,
  MR_Word * STATE_VARIABLE_RevIntTypeClasses_15,
  MR_Word STATE_VARIABLE_RevIntInstances_0_16,
  MR_Word * STATE_VARIABLE_RevIntInstances_17,
  MR_Word STATE_VARIABLE_RevIntPredDecls_0_18,
  MR_Word * STATE_VARIABLE_RevIntPredDecls_19,
  MR_Word STATE_VARIABLE_RevIntModeDecls_0_20,
  MR_Word * STATE_VARIABLE_RevIntModeDecls_21,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_23,
  MR_Word STATE_VARIABLE_RevIntDeclMarkers_0_24,
  MR_Word * STATE_VARIABLE_RevIntDeclMarkers_25,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_26,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_27,
  MR_Word STATE_VARIABLE_RevIntImplMarkers_0_28,
  MR_Word * STATE_VARIABLE_RevIntImplMarkers_29,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_30,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_31,
  MR_Word STATE_VARIABLE_RevIntPromises_0_32,
  MR_Word * STATE_VARIABLE_RevIntPromises_33,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_34,
  MR_Word * STATE_VARIABLE_RevIntInitialises_35,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_36,
  MR_Word * STATE_VARIABLE_RevIntFinalises_37,
  MR_Word STATE_VARIABLE_RevIntMutables_0_38,
  MR_Word * STATE_VARIABLE_RevIntMutables_39,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_40,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_41,
  MR_Word STATE_VARIABLE_IntSelfFIMLangs_0_42,
  MR_Word * STATE_VARIABLE_IntSelfFIMLangs_43,
  MR_Word STATE_VARIABLE_ImpIncls_0_44,
  MR_Word * STATE_VARIABLE_ImpIncls_45,
  MR_Word STATE_VARIABLE_ImpAvails_0_46,
  MR_Word * STATE_VARIABLE_ImpAvails_47,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_48,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_49,
  MR_Word STATE_VARIABLE_RevImpTypeDefns_0_50,
  MR_Word * STATE_VARIABLE_RevImpTypeDefns_51,
  MR_Word STATE_VARIABLE_RevImpInstDefns_0_52,
  MR_Word * STATE_VARIABLE_RevImpInstDefns_53,
  MR_Word STATE_VARIABLE_RevImpModeDefns_0_54,
  MR_Word * STATE_VARIABLE_RevImpModeDefns_55,
  MR_Word STATE_VARIABLE_RevImpTypeClasses_0_56,
  MR_Word * STATE_VARIABLE_RevImpTypeClasses_57,
  MR_Word STATE_VARIABLE_RevImpInstances_0_58,
  MR_Word * STATE_VARIABLE_RevImpInstances_59,
  MR_Word STATE_VARIABLE_RevImpPredDecls_0_60,
  MR_Word * STATE_VARIABLE_RevImpPredDecls_61,
  MR_Word STATE_VARIABLE_RevImpModeDecls_0_62,
  MR_Word * STATE_VARIABLE_RevImpModeDecls_63,
  MR_Word STATE_VARIABLE_RevImpClauses_0_64,
  MR_Word * STATE_VARIABLE_RevImpClauses_65,
  MR_Word STATE_VARIABLE_RevImpForeignProcs_0_66,
  MR_Word * STATE_VARIABLE_RevImpForeignProcs_67,
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_68,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_69,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_70,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_71,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_72,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_73,
  MR_Word STATE_VARIABLE_RevImpDeclMarkers_0_74,
  MR_Word * STATE_VARIABLE_RevImpDeclMarkers_75,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_76,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_77,
  MR_Word STATE_VARIABLE_RevImpImplMarkers_0_78,
  MR_Word * STATE_VARIABLE_RevImpImplMarkers_79,
  MR_Word STATE_VARIABLE_RevImpPromises_0_80,
  MR_Word * STATE_VARIABLE_RevImpPromises_81,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_82,
  MR_Word * STATE_VARIABLE_RevImpInitialises_83,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_84,
  MR_Word * STATE_VARIABLE_RevImpFinalises_85,
  MR_Word STATE_VARIABLE_RevImpMutables_0_86,
  MR_Word * STATE_VARIABLE_RevImpMutables_87,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_88,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_89,
  MR_Word STATE_VARIABLE_ImpSelfFIMLangs_0_90,
  MR_Word * STATE_VARIABLE_ImpSelfFIMLangs_91,
  MR_Word STATE_VARIABLE_ErrSpecs_0_92,
  MR_Word * STATE_VARIABLE_ErrSpecs_93,
  MR_Word STATE_VARIABLE_WarnSpecs_0_94,
  MR_Word * STATE_VARIABLE_WarnSpecs_95);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_45_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefns_3,
  MR_Word STATE_VARIABLE_RevInstDefns_0_4,
  MR_Word * STATE_VARIABLE_RevInstDefns_5,
  MR_Word STATE_VARIABLE_RevModeDefns_0_6,
  MR_Word * STATE_VARIABLE_RevModeDefns_7,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_8,
  MR_Word * STATE_VARIABLE_RevTypeClasses_9,
  MR_Word STATE_VARIABLE_RevInstances_0_10,
  MR_Word * STATE_VARIABLE_RevInstances_11,
  MR_Word STATE_VARIABLE_RevPredDecls_0_12,
  MR_Word * STATE_VARIABLE_RevPredDecls_13,
  MR_Word STATE_VARIABLE_RevModeDecls_0_14,
  MR_Word * STATE_VARIABLE_RevModeDecls_15,
  MR_Word STATE_VARIABLE_RevClauses_0_16,
  MR_Word * STATE_VARIABLE_RevClauses_17,
  MR_Word STATE_VARIABLE_RevForeignProcs_0_18,
  MR_Word * STATE_VARIABLE_RevForeignProcs_19,
  MR_Word STATE_VARIABLE_RevForeignEnums_0_20,
  MR_Word * STATE_VARIABLE_RevForeignEnums_21,
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_22,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_23,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_25,
  MR_Word STATE_VARIABLE_RevDeclMarkers_0_26,
  MR_Word * STATE_VARIABLE_RevDeclMarkers_27,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_28,
  MR_Word * STATE_VARIABLE_RevImplPragmas_29,
  MR_Word STATE_VARIABLE_RevImplMarkers_0_30,
  MR_Word * STATE_VARIABLE_RevImplMarkers_31,
  MR_Word STATE_VARIABLE_RevPromises_0_32,
  MR_Word * STATE_VARIABLE_RevPromises_33,
  MR_Word STATE_VARIABLE_RevInitialises_0_34,
  MR_Word * STATE_VARIABLE_RevInitialises_35,
  MR_Word STATE_VARIABLE_RevFinalises_0_36,
  MR_Word * STATE_VARIABLE_RevFinalises_37,
  MR_Word STATE_VARIABLE_RevMutables_0_38,
  MR_Word * STATE_VARIABLE_RevMutables_39,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_40,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_41,
  MR_Word STATE_VARIABLE_SelfFIMLangs_0_42,
  MR_Word * STATE_VARIABLE_SelfFIMLangs_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_39_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefns_3,
  MR_Word STATE_VARIABLE_RevInstDefns_0_4,
  MR_Word * STATE_VARIABLE_RevInstDefns_5,
  MR_Word STATE_VARIABLE_RevModeDefns_0_6,
  MR_Word * STATE_VARIABLE_RevModeDefns_7,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_8,
  MR_Word * STATE_VARIABLE_RevTypeClasses_9,
  MR_Word STATE_VARIABLE_RevInstances_0_10,
  MR_Word * STATE_VARIABLE_RevInstances_11,
  MR_Word STATE_VARIABLE_RevPredDecls_0_12,
  MR_Word * STATE_VARIABLE_RevPredDecls_13,
  MR_Word STATE_VARIABLE_RevModeDecls_0_14,
  MR_Word * STATE_VARIABLE_RevModeDecls_15,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_16,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_17,
  MR_Word STATE_VARIABLE_RevDeclMarkers_0_18,
  MR_Word * STATE_VARIABLE_RevDeclMarkers_19,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_20,
  MR_Word * STATE_VARIABLE_RevImplPragmas_21,
  MR_Word STATE_VARIABLE_RevImplMarkers_0_22,
  MR_Word * STATE_VARIABLE_RevImplMarkers_23,
  MR_Word STATE_VARIABLE_BadClausePreds_0_24,
  MR_Word * STATE_VARIABLE_BadClausePreds_25,
  MR_Word STATE_VARIABLE_RevPromises_0_26,
  MR_Word * STATE_VARIABLE_RevPromises_27,
  MR_Word STATE_VARIABLE_RevInitialises_0_28,
  MR_Word * STATE_VARIABLE_RevInitialises_29,
  MR_Word STATE_VARIABLE_RevFinalises_0_30,
  MR_Word * STATE_VARIABLE_RevFinalises_31,
  MR_Word STATE_VARIABLE_RevMutables_0_32,
  MR_Word * STATE_VARIABLE_RevMutables_33,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_34,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_35,
  MR_Word STATE_VARIABLE_SelfFIMLangs_0_36,
  MR_Word * STATE_VARIABLE_SelfFIMLangs_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
parse_tree__convert_parse_tree__report_forbidden_item_in_src_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromiseInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(
  MR_Word DetailsSolver_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(
  MR_Word IntInstances0_4,
  MR_Word * IntInstances_5,
  MR_Word * ImpInstances_6);

static void MR_CALL 
parse_tree__convert_parse_tree__split_concrete_int_instances_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInstanceCord_0_2,
  MR_Word * STATE_VARIABLE_IntInstanceCord_3,
  MR_Word STATE_VARIABLE_ImpInstanceCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInstanceCord_5);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_trans_opt_items_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TermInfos_0_2,
  MR_Word * STATE_VARIABLE_TermInfos_3,
  MR_Word STATE_VARIABLE_Term2Infos_0_4,
  MR_Word * STATE_VARIABLE_Term2Infos_5,
  MR_Word STATE_VARIABLE_Exceptions_0_6,
  MR_Word * STATE_VARIABLE_Exceptions_7,
  MR_Word STATE_VARIABLE_Trailings_0_8,
  MR_Word * STATE_VARIABLE_Trailings_9,
  MR_Word STATE_VARIABLE_MMTablings_0_10,
  MR_Word * STATE_VARIABLE_MMTablings_11,
  MR_Word STATE_VARIABLE_Sharings_0_12,
  MR_Word * STATE_VARIABLE_Sharings_13,
  MR_Word STATE_VARIABLE_Reuses_0_14,
  MR_Word * STATE_VARIABLE_Reuses_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_plain_opt_items_47_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnums_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnums_5,
  MR_Word STATE_VARIABLE_InstDefns_0_6,
  MR_Word * STATE_VARIABLE_InstDefns_7,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9,
  MR_Word STATE_VARIABLE_TypeClasses_0_10,
  MR_Word * STATE_VARIABLE_TypeClasses_11,
  MR_Word STATE_VARIABLE_Instances_0_12,
  MR_Word * STATE_VARIABLE_Instances_13,
  MR_Word STATE_VARIABLE_PredDecls_0_14,
  MR_Word * STATE_VARIABLE_PredDecls_15,
  MR_Word STATE_VARIABLE_RevModeDecls_0_16,
  MR_Word * STATE_VARIABLE_RevModeDecls_17,
  MR_Word STATE_VARIABLE_RevClauses_0_18,
  MR_Word * STATE_VARIABLE_RevClauses_19,
  MR_Word STATE_VARIABLE_RevForeignProcs_0_20,
  MR_Word * STATE_VARIABLE_RevForeignProcs_21,
  MR_Word STATE_VARIABLE_Promises_0_22,
  MR_Word * STATE_VARIABLE_Promises_23,
  MR_Word STATE_VARIABLE_DeclMarkers_0_24,
  MR_Word * STATE_VARIABLE_DeclMarkers_25,
  MR_Word STATE_VARIABLE_ImplMarkers_0_26,
  MR_Word * STATE_VARIABLE_ImplMarkers_27,
  MR_Word STATE_VARIABLE_TypeSpecs_0_28,
  MR_Word * STATE_VARIABLE_TypeSpecs_29,
  MR_Word STATE_VARIABLE_UnusedArgs_0_30,
  MR_Word * STATE_VARIABLE_UnusedArgs_31,
  MR_Word STATE_VARIABLE_TermInfos_0_32,
  MR_Word * STATE_VARIABLE_TermInfos_33,
  MR_Word STATE_VARIABLE_Term2Infos_0_34,
  MR_Word * STATE_VARIABLE_Term2Infos_35,
  MR_Word STATE_VARIABLE_Exceptions_0_36,
  MR_Word * STATE_VARIABLE_Exceptions_37,
  MR_Word STATE_VARIABLE_Trailings_0_38,
  MR_Word * STATE_VARIABLE_Trailings_39,
  MR_Word STATE_VARIABLE_MMTablings_0_40,
  MR_Word * STATE_VARIABLE_MMTablings_41,
  MR_Word STATE_VARIABLE_Sharings_0_42,
  MR_Word * STATE_VARIABLE_Sharings_43,
  MR_Word STATE_VARIABLE_Reuses_0_44,
  MR_Word * STATE_VARIABLE_Reuses_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_TypeRepns_0_12,
  MR_Word * STATE_VARIABLE_TypeRepns_13,
  MR_Word STATE_VARIABLE_ErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_ErrSpecs_15);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_TypeRepns_0_12,
  MR_Word * STATE_VARIABLE_TypeRepns_13,
  MR_Word STATE_VARIABLE_ErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_ErrSpecs_15);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnums_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnums_5,
  MR_Word STATE_VARIABLE_TypeClasses_0_6,
  MR_Word * STATE_VARIABLE_TypeClasses_7,
  MR_Word STATE_VARIABLE_ErrSpecs_0_8,
  MR_Word * STATE_VARIABLE_ErrSpecs_9);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int1_items_int_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_PredDecls_0_12,
  MR_Word * STATE_VARIABLE_PredDecls_13,
  MR_Word STATE_VARIABLE_ModeDecls_0_14,
  MR_Word * STATE_VARIABLE_ModeDecls_15,
  MR_Word STATE_VARIABLE_ForeignEnums_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnums_17,
  MR_Word STATE_VARIABLE_DeclPragmas_0_18,
  MR_Word * STATE_VARIABLE_DeclPragmas_19,
  MR_Word STATE_VARIABLE_DeclMarkers_0_20,
  MR_Word * STATE_VARIABLE_DeclMarkers_21,
  MR_Word STATE_VARIABLE_Promises_0_22,
  MR_Word * STATE_VARIABLE_Promises_23,
  MR_Word STATE_VARIABLE_TypeRepns_0_24,
  MR_Word * STATE_VARIABLE_TypeRepns_25,
  MR_Word STATE_VARIABLE_ErrSpecs_0_26,
  MR_Word * STATE_VARIABLE_ErrSpecs_27);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_25_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_PredDecls_0_12,
  MR_Word * STATE_VARIABLE_PredDecls_13,
  MR_Word STATE_VARIABLE_RevModeDecls_0_14,
  MR_Word * STATE_VARIABLE_RevModeDecls_15,
  MR_Word STATE_VARIABLE_ForeignEnums_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnums_17,
  MR_Word STATE_VARIABLE_DeclPragmas_0_18,
  MR_Word * STATE_VARIABLE_DeclPragmas_19,
  MR_Word STATE_VARIABLE_DeclMarkers_0_20,
  MR_Word * STATE_VARIABLE_DeclMarkers_21,
  MR_Word STATE_VARIABLE_Promises_0_22,
  MR_Word * STATE_VARIABLE_Promises_23,
  MR_Word STATE_VARIABLE_ErrSpecs_0_24,
  MR_Word * STATE_VARIABLE_ErrSpecs_25);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____parse_tree_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____parse_tree_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____parse_tree_opt_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____parse_tree_opt_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____raw_compilation_unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____raw_compilation_unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____raw_item_block_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____raw_item_block_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[18][3];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[151][2];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[4][5];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[2][10];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[3][4];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][7];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_8[2][6];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_9[1][8];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_10[1][9];




static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_7[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_7[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_8[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_8[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_int_39_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_9[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_9[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[151][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in its implementation section."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "version number information."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an implementation section."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .int3 file must not have"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[28])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[30])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .int0 file may not contain"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "concrete instance declarations."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .int file may not contain"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in its interface section."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "concrete instance declarations"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "concrete typeclass declarations."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[53])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[46])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not list any functional dependencies."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A typeclass declaration in a .int3 file"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or any functional dependencies"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not list any superclasses"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[56])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A .opt file may not contain"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragma for"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the implementation section is"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "redundant,"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragma for the same module/language combination"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because there is a"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pragma in the interface section is here."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[90])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[102]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[106]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clauses,"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as this one for"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[115]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed in module interfaces."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[121]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [...]"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[127]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with its abstract version, which omits"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[129]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "replacing it in the interface section"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[131]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to the implementation section,"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[133]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "then move this declaration"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "If you intend to export this instance,"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[137]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "file may not contain"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "any"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in its"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[143]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A Mercury source file"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not contain"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[138])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[149]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 223U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "implementation")) },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".int"))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".int2"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".int3"))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_8[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_10[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0) }
};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_int_0_0[12] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_version_numbers_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_include_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_include_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_ConstString parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_parse_tree_int_0_0[12] = {
  (MR_String) "pti_module_name",
  (MR_String) "pti_int_file_kind",
  (MR_String) "pti_module_name_context",
  (MR_String) "pti_maybe_version_numbers",
  (MR_String) "pti_int_includes",
  (MR_String) "pti_imp_includes",
  (MR_String) "pti_int_avails",
  (MR_String) "pti_imp_avails",
  (MR_String) "pti_int_fims",
  (MR_String) "pti_imp_fims",
  (MR_String) "pti_int_items",
  (MR_String) "pti_imp_items"
};

static const MR_DuArgLocn parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_parse_tree_int_0_0[12] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_int_0_0 = {
  (MR_String) "parse_tree_int",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_int_0_0,
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_parse_tree_int_0_0,
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_parse_tree_int_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_int_0_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_int_0_0 };

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_parse_tree_int_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_int_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_int_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_int_0_0 };

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_int_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__convert_parse_tree____Unify____parse_tree_int_0_0_10001)),
  ((MR_Box) (parse_tree__convert_parse_tree____Compare____parse_tree_int_0_0_10001)),
  (MR_String) "parse_tree.convert_parse_tree",
  (MR_String) "parse_tree_int",
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_int_0 },
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_parse_tree_int_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_int_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_avail_use_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0) }
};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_opt_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_avail_use_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_ConstString parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_parse_tree_opt_0_0[6] = {
  (MR_String) "pto_module_name",
  (MR_String) "pto_opt_file_kind",
  (MR_String) "pto_module_name_context",
  (MR_String) "pto_uses",
  (MR_String) "pto_fims",
  (MR_String) "pto_items"
};

static const MR_DuArgLocn parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_parse_tree_opt_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_opt_0_0 = {
  (MR_String) "parse_tree_opt",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_opt_0_0,
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_parse_tree_opt_0_0,
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_parse_tree_opt_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_opt_0_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_opt_0_0 };

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_parse_tree_opt_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_opt_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_opt_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_opt_0_0 };

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_opt_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__convert_parse_tree____Unify____parse_tree_opt_0_0_10001)),
  ((MR_Box) (parse_tree__convert_parse_tree____Compare____parse_tree_opt_0_0_10001)),
  (MR_String) "parse_tree.convert_parse_tree",
  (MR_String) "parse_tree_opt",
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_opt_0 },
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_parse_tree_opt_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_opt_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0) }
};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_compilation_unit_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0)
};

static const MR_ConstString parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_raw_compilation_unit_0_0[3] = {
  (MR_String) "rcu_module_name",
  (MR_String) "rcu_module_name_context",
  (MR_String) "rcu_raw_item_blocks"
};

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_compilation_unit_0_0 = {
  (MR_String) "raw_compilation_unit",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_compilation_unit_0_0,
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_names_raw_compilation_unit_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_compilation_unit_0_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_compilation_unit_0_0 };

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_raw_compilation_unit_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_compilation_unit_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_compilation_unit_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_compilation_unit_0_0 };

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_compilation_unit_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_compilation_unit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__convert_parse_tree____Unify____raw_compilation_unit_0_0_10001)),
  ((MR_Box) (parse_tree__convert_parse_tree____Compare____raw_compilation_unit_0_0_10001)),
  (MR_String) "parse_tree.convert_parse_tree",
  (MR_String) "raw_compilation_unit",
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_compilation_unit_0 },
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_raw_compilation_unit_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_compilation_unit_0,

};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_item_block_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_include_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_DuArgLocn parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_raw_item_block_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_item_block_0_0 = {
  (MR_String) "item_block",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_item_block_0_0,
  NULL,
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_locns_raw_item_block_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_item_block_0_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_item_block_0_0 };

static const MR_DuPtagLayout parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_raw_item_block_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_item_block_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_item_block_0[1] = { &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_item_block_0_0 };

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_item_block_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__convert_parse_tree____Unify____raw_item_block_0_0_10001)),
  ((MR_Box) (parse_tree__convert_parse_tree____Compare____raw_item_block_0_0_10001)),
  (MR_String) "parse_tree.convert_parse_tree",
  (MR_String) "raw_item_block",
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_item_block_0 },
  { parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_ptag_ordered_raw_item_block_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_item_block_0,

};

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1331__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded = (OptFileKind_9 == HeadVar__2_41);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__1026__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded = (OptFileKind_9 == HeadVar__2_66);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__796__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded = (IntFileKind_12 == HeadVar__2_77);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__610__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded = (IntFileKind_12 == HeadVar__2_65);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__364__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_73)
{
  MR_bool succeeded = (IntFileKind_12 == HeadVar__2_73);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__195__1_2_p_0(
  MR_Word IntFileKind_12,
  MR_Word HeadVar__2_84)
{
  MR_bool succeeded = (IntFileKind_12 == HeadVar__2_84);

  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree____Compare____raw_item_block_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_29 < Var_30);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_29 > Var_30);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____raw_item_block_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree____Compare____raw_compilation_unit_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[13]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____raw_compilation_unit_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[13]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree____Compare____parse_tree_opt_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_29 < Var_30);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_29 > Var_30);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____parse_tree_opt_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree____Compare____parse_tree_int_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_53 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_54 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_53 < Var_54);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_53 > Var_54);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_parse_tree____Compare____maybe_version_numbers_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
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

MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____parse_tree_int_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__prog_parse_tree____Unify____maybe_version_numbers_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_32_32 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_37_37 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_38_38 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_39_39 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
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
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_parse_tree__restrict_to_int_import_map_entry_7_p_0(
  MR_String Extension_8,
  MR_Word ModuleName_9,
  MR_Word SectionImportAndOrUse_10,
  MR_Word STATE_VARIABLE_IntImportMap_0_17,
  MR_Word * STATE_VARIABLE_IntImportMap_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  switch (MR_tag((MR_Word) SectionImportAndOrUse_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, SectionImportAndOrUse_10, 0))));
        MR_Word IntImport_14;

        {
          IntImport_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IntImport_14, 0) = ((MR_Box) (Context_13));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (IntImport_14)), STATE_VARIABLE_IntImportMap_0_17, STATE_VARIABLE_IntImportMap_18);
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_42 = ((MR_Word) ((MR_hl_field(1, SectionImportAndOrUse_10, 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "use_module", (MR_Word) ((MR_Unsigned) 0U), Context_42, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_36 = ((MR_Word) ((MR_hl_field(2, SectionImportAndOrUse_10, 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_3[1])), Context_36, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_37 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, 1))));

            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "use_module", (MR_Word) ((MR_Unsigned) 0U), Context_37, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
            *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_15 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, 1))));
            MR_Word ImpContext_16 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, 2))));
            MR_Word STATE_VARIABLE_Specs_3_31;

            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "use_module", (MR_Word) ((MR_Unsigned) 0U), IntContext_15, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_3_31);
            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_3[1])), ImpContext_16, STATE_VARIABLE_Specs_3_31, STATE_VARIABLE_Specs_20);
            *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__restrict_to_section_use_map_entry_7_p_0(
  MR_String Extension_8,
  MR_Word ModuleName_9,
  MR_Word SectionImportAndOrUse_10,
  MR_Word STATE_VARIABLE_SectionUseMap_0_16,
  MR_Word * STATE_VARIABLE_SectionUseMap_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  switch (MR_tag((MR_Word) SectionImportAndOrUse_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, SectionImportAndOrUse_10, 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) ((MR_Unsigned) 0U), Context_31, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        *STATE_VARIABLE_SectionUseMap_17 = STATE_VARIABLE_SectionUseMap_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_24 = ((MR_Word) ((MR_hl_field(1, SectionImportAndOrUse_10, 0))));
        MR_Word SectionUse_28;

        {
          SectionUse_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SectionUse_28, 0) = ((MR_Box) (Context_24));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (SectionUse_28)), STATE_VARIABLE_SectionUseMap_0_16, STATE_VARIABLE_SectionUseMap_17);
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(2, SectionImportAndOrUse_10, 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) ((MR_Unsigned) 0U), Context_13, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        *STATE_VARIABLE_SectionUseMap_17 = STATE_VARIABLE_SectionUseMap_0_16;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SectionUse_15;
            MR_Word Context_25 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, 1))));

            {
              SectionUse_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SectionUse_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, SectionUse_15, 1) = ((MR_Box) (Context_25));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (SectionUse_15)), STATE_VARIABLE_SectionUseMap_0_16, STATE_VARIABLE_SectionUseMap_17);
            *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_34 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, 2))));

            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) ((MR_Unsigned) 0U), Context_34, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
            *STATE_VARIABLE_SectionUseMap_17 = STATE_VARIABLE_SectionUseMap_0_16;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(
  MR_String Extension_7,
  MR_String Decl_8,
  MR_Word MaybeSection_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word Pieces_12;
  MR_Word Spec_14;

  if ((MaybeSection_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;

    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (Extension_7));
    }
    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (Decl_8));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[28])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[141])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[140])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[139])));
      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_19));
    }
  }
  else
  {
    MR_String Section_13 = ((MR_String) ((MR_hl_field(1, MaybeSection_9, 0))));
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;

    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (Extension_7));
    }
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (Decl_8));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (Section_13));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[144])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[142])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[17])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[141])));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[140])));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[139])));
      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_37));
    }
  }
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_forbidden_avail\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(
  MR_Word ItemFIM_6,
  MR_Word STATE_VARIABLE_FIMSpecMap_0_21,
  MR_Word * STATE_VARIABLE_FIMSpecMap_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word Lang_9 = ((MR_Unsigned) ((MR_hl_field(0, ItemFIM_6, 0))) & (MR_Integer) 3);
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ItemFIM_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, ItemFIM_6, 2))));
  MR_Word FIMSpec_13;
  MR_Word PrevContext_14;
  MR_Box conv0_PrevContext_14;

  {
    FIMSpec_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_13, 0) = (MR_Box) ((MR_Unsigned) (Lang_9));
    MR_hl_field(0, FIMSpec_13, 1) = ((MR_Box) (ModuleName_10));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_FIMSpecMap_0_21, ((MR_Box) (FIMSpec_13)), &conv0_PrevContext_14);
  if (succeeded)
  {
    PrevContext_14 = ((MR_Word) (conv0_PrevContext_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MainPieces_15;
    MR_Word MainMsg_16;
    MR_Word PrevMsg_18;
    MR_Word Spec_20;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_String Var_57;
    MR_Word Var_82;
    MR_Word Var_83;

    Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[97])));
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (ModuleName_10));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_44 = parse_tree__error_spec__color_as_subject_1_f_0(Var_45);
    Var_57 = libs__globals__foreign_language_string_1_f_0(Lang_9);
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[101])));
    }
    Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[100])), Var_53);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_48);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[99])), Var_43);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_35);
    MainPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[95])), Var_29);
    {
      MainMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_16, 0) = ((MR_Box) (Context_11));
      MR_hl_field(0, MainMsg_16, 1) = ((MR_Box) (MainPieces_15));
    }
    {
      PrevMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrevMsg_18, 0) = ((MR_Box) (PrevContext_14));
      MR_hl_field(0, PrevMsg_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[107])));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (PrevMsg_18));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (MainMsg_16));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
    }
    {
      Spec_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_foreign_import_module\'/5"));
      MR_hl_field(2, Spec_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_3[0])));
      MR_hl_field(2, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(2, Spec_20, 3) = ((MR_Box) (Var_82));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
    *STATE_VARIABLE_FIMSpecMap_22 = STATE_VARIABLE_FIMSpecMap_0_21;
  }
  else
  {
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (FIMSpec_13)), ((MR_Box) (Context_11)), STATE_VARIABLE_FIMSpecMap_0_21, STATE_VARIABLE_FIMSpecMap_22);
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(
  MR_Word IntFIMSpecMap_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_21,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_22,
  MR_Word STATE_VARIABLE_WarnSpecs_0_23,
  MR_Word * STATE_VARIABLE_WarnSpecs_24)
{
  MR_Word Lang_11 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_8, 0))) & (MR_Integer) 3);
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, FIMSpec_8, 1))));
  MR_Word ImpContext_13;
  MR_Word IntContext_14;
  MR_Word ImpPieces_15;
  MR_Word ImpMsg_17;
  MR_Word IntMsg_18;
  MR_Word Spec_20;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Box conv0_ImpContext_13;
  MR_Box conv1_IntContext_14;

  mercury__map__det_remove_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (FIMSpec_8)), &conv0_ImpContext_13, STATE_VARIABLE_ImpFIMSpecMap_0_21, STATE_VARIABLE_ImpFIMSpecMap_22);
  ImpContext_13 = ((MR_Word) (conv0_ImpContext_13));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_7, ((MR_Box) (FIMSpec_8)), &conv1_IntContext_14);
  IntContext_14 = ((MR_Word) (conv1_IntContext_14));
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ModuleName_12));
  }
  Var_42 = libs__globals__foreign_language_string_1_f_0(Lang_11);
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[79])));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[77])));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[76])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[29])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[75])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[81])));
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[88])));
  ImpPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_47);
  {
    ImpMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpMsg_17, 0) = ((MR_Box) (ImpContext_13));
    MR_hl_field(0, ImpMsg_17, 1) = ((MR_Box) (ImpPieces_15));
  }
  {
    IntMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntMsg_18, 0) = ((MR_Box) (IntContext_14));
    MR_hl_field(0, IntMsg_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[93])));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (IntMsg_18));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (ImpMsg_17));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
  }
  {
    Spec_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_int_imp_fim\'/6"));
    MR_hl_field(2, Spec_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_3[0])));
    MR_hl_field(2, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(2, Spec_20, 3) = ((MR_Box) (Var_82));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_WarnSpecs_24 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_23));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(
  MR_Word Clause0_3,
  MR_Word * Clause_4)
{
  MR_Word VarSet0_5 = ((MR_Word) ((MR_hl_field(0, Clause0_3, 3))));
  MR_Word VarSet_6;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  mercury__varset__undo_default_names_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_5, &VarSet_6);
  Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Clause0_3, 0))) & (MR_Integer) 1);
  Var_14 = ((MR_Word) ((MR_hl_field(0, Clause0_3, 1))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, Clause0_3, 2))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, Clause0_3, 4))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, Clause0_3, 5))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, Clause0_3, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Clause_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_6));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_19));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ImpFIMSpecMap_22;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_24;

  parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ImpFIMSpecMap_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_WarnSpecs_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ImpFIMSpecMap_22));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_24));
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word * STATE_VARIABLE_ErrSpecs_128,
  MR_Word * STATE_VARIABLE_WarnSpecs_129)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, RawCompUnit_7, 0))));
  MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(0, RawCompUnit_7, 1))));
  MR_Word ItemBlocks_13 = ((MR_Word) ((MR_hl_field(0, RawCompUnit_7, 2))));
  MR_Word IntFIMSpecMap0_14;
  MR_Word ImpFIMSpecMap0_15;
  MR_Word IntImplicitAvailNeeds0_16;
  MR_Word ImpImplicitAvailNeeds0_17;
  MR_Word IntIncls_18;
  MR_Word IntAvails_19;
  MR_Word IntFIMSpecMap_20;
  MR_Word RevIntTypeDefns_21;
  MR_Word RevIntInstDefns_22;
  MR_Word RevIntModeDefns_23;
  MR_Word RevIntTypeClasses_24;
  MR_Word RevIntInstances0_25;
  MR_Word RevIntPredDecls_26;
  MR_Word RevIntModeDecls_27;
  MR_Word RevIntDeclPragmas_28;
  MR_Word RevIntDeclMarkers_29;
  MR_Word RevIntImplPragmas_30;
  MR_Word RevIntImplMarkers_31;
  MR_Word IntBadClausePreds_32;
  MR_Word RevIntPromises_33;
  MR_Word RevIntInitialises_34;
  MR_Word RevIntFinalises_35;
  MR_Word RevIntMutables_36;
  MR_Word IntImplicitAvailNeeds_37;
  MR_Word IntSelfFIMLangs_38;
  MR_Word ImpIncls_39;
  MR_Word ImpAvails_40;
  MR_Word ImpFIMSpecMap1_41;
  MR_Word RevImpTypeDefns_42;
  MR_Word RevImpInstDefns_43;
  MR_Word RevImpModeDefns_44;
  MR_Word RevImpTypeClasses_45;
  MR_Word RevImpInstances0_46;
  MR_Word RevImpPredDecls_47;
  MR_Word RevImpModeDecls_48;
  MR_Word RevImpClauses_49;
  MR_Word RevImpForeignProcs_50;
  MR_Word RevImpForeignEnums_51;
  MR_Word RevImpForeignExportEnums_52;
  MR_Word RevImpDeclPragmas_53;
  MR_Word RevImpDeclMarkers_54;
  MR_Word RevImpImplPragmas_55;
  MR_Word RevImpImplMarkers_56;
  MR_Word RevImpPromises_57;
  MR_Word RevImpInitialises0_58;
  MR_Word RevImpFinalises0_59;
  MR_Word RevImpMutables0_60;
  MR_Word ImpImplicitAvailNeeds_61;
  MR_Word ImpSelfFIMLangs_62;
  MR_Word InclMap_63;
  MR_Word IntTypeDefns_64;
  MR_Word IntInstDefns_65;
  MR_Word IntModeDefns_66;
  MR_Word IntTypeClasses_67;
  MR_Word IntInstances0_68;
  MR_Word IntPredDecls_69;
  MR_Word IntModeDecls_70;
  MR_Word IntDeclPragmas_71;
  MR_Word IntDeclMarkers_72;
  MR_Word IntImplPragmas_73;
  MR_Word IntImplMarkers_74;
  MR_Word IntPromises_75;
  MR_Word IntInitialises_76;
  MR_Word IntFinalises_77;
  MR_Word IntMutables_78;
  MR_Word ImpTypeDefns_79;
  MR_Word ImpInstDefns_80;
  MR_Word ImpModeDefns_81;
  MR_Word ImpTypeClasses_82;
  MR_Word ImpInstances0_83;
  MR_Word ImpPredDecls_84;
  MR_Word ImpModeDecls_85;
  MR_Word ImpClauses_86;
  MR_Word ImpForeignProcs_87;
  MR_Word ImpForeignEnums_88;
  MR_Word ImpForeignExportEnums_89;
  MR_Word ImpDeclPragmas_90;
  MR_Word ImpDeclMarkers_91;
  MR_Word ImpImplPragmas0_92;
  MR_Word ImpImplMarkers0_93;
  MR_Word ImpPromises_94;
  MR_Word ImpInitialises0_95;
  MR_Word ImpFinalises0_96;
  MR_Word ImpMutables0_97;
  MR_Word IntInstances_98;
  MR_Word ImpInstances_99;
  MR_Word IntTypeDefnMap_101;
  MR_Word ImpTypeDefnMap_102;
  MR_Word ImpForeignEnumMap_103;
  MR_Word TypeCtorCheckedMap_104;
  MR_Word TypeErrSpecs_105;
  MR_Word TypeWarnSpecs_106;
  MR_Word IntInstDefnMap_107;
  MR_Word ImpInstDefnMap_108;
  MR_Word InstCtorCheckedMap_109;
  MR_Word InstErrSpecs_110;
  MR_Word InstWarnSpecs_111;
  MR_Word IntModeDefnMap_112;
  MR_Word ImpModeDefnMap_113;
  MR_Word ModeCtorCheckedMap_114;
  MR_Word InstModeErrSpecs_115;
  MR_Word InstModeWarnSpecs_116;
  MR_Word ImpImplPragmas_117;
  MR_Word ImpImplMarkers_118;
  MR_Word ImpInitialises_119;
  MR_Word ImpFinalises_120;
  MR_Word ImpMutables_121;
  MR_Word WarnUnsortedImportBlocks_122;
  MR_Word SectionImportUseMap_123;
  MR_Word ImportUseMap0_124;
  MR_Word ImportUseMap_125;
  MR_Word IntImpFIMSpecs_126;
  MR_Word ImpFIMSpecMap_127;
  MR_Word Var_143;
  MR_Word Var_148;
  MR_Word Var_170;
  MR_Word STATE_VARIABLE_ErrSpecs_1_172;
  MR_Word STATE_VARIABLE_WarnSpecs_1_174;
  MR_Word STATE_VARIABLE_WarnSpecs_2_184;
  MR_Word Var_185;
  MR_Word Var_186;
  MR_Word Var_187;
  MR_Box conv3_ImpFIMSpecMap_127;
  MR_Box conv2_STATE_VARIABLE_WarnSpecs_129;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &IntFIMSpecMap0_14);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &ImpFIMSpecMap0_15);
  IntImplicitAvailNeeds0_16 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
  ImpImplicitAvailNeeds0_17 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
  Var_143 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0));
  Var_148 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  Var_170 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0(ItemBlocks_13, (MR_Word) ((MR_Unsigned) 0U), &IntIncls_18, (MR_Word) ((MR_Unsigned) 0U), &IntAvails_19, IntFIMSpecMap0_14, &IntFIMSpecMap_20, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefns_21, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstDefns_22, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDefns_23, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeClasses_24, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstances0_25, (MR_Word) ((MR_Unsigned) 0U), &RevIntPredDecls_26, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_27, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclPragmas_28, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclMarkers_29, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplPragmas_30, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplMarkers_31, Var_143, &IntBadClausePreds_32, (MR_Word) ((MR_Unsigned) 0U), &RevIntPromises_33, (MR_Word) ((MR_Unsigned) 0U), &RevIntInitialises_34, (MR_Word) ((MR_Unsigned) 0U), &RevIntFinalises_35, (MR_Word) ((MR_Unsigned) 0U), &RevIntMutables_36, IntImplicitAvailNeeds0_16, &IntImplicitAvailNeeds_37, Var_148, &IntSelfFIMLangs_38, (MR_Word) ((MR_Unsigned) 0U), &ImpIncls_39, (MR_Word) ((MR_Unsigned) 0U), &ImpAvails_40, ImpFIMSpecMap0_15, &ImpFIMSpecMap1_41, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefns_42, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstDefns_43, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDefns_44, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeClasses_45, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstances0_46, (MR_Word) ((MR_Unsigned) 0U), &RevImpPredDecls_47, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_48, (MR_Word) ((MR_Unsigned) 0U), &RevImpClauses_49, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignProcs_50, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignEnums_51, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignExportEnums_52, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclPragmas_53, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclMarkers_54, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplPragmas_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplMarkers_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpPromises_57, (MR_Word) ((MR_Unsigned) 0U), &RevImpInitialises0_58, (MR_Word) ((MR_Unsigned) 0U), &RevImpFinalises0_59, (MR_Word) ((MR_Unsigned) 0U), &RevImpMutables0_60, ImpImplicitAvailNeeds0_17, &ImpImplicitAvailNeeds_61, Var_170, &ImpSelfFIMLangs_62, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ErrSpecs_1_172, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_WarnSpecs_1_174);
  parse_tree__convert_include__classify_include_modules_5_p_0(IntIncls_18, ImpIncls_39, &InclMap_63, STATE_VARIABLE_ErrSpecs_1_172, STATE_VARIABLE_ErrSpecs_128);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), RevIntTypeDefns_21, &IntTypeDefns_64);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), RevIntInstDefns_22, &IntInstDefns_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), RevIntModeDefns_23, &IntModeDefns_66);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevIntTypeClasses_24, &IntTypeClasses_67);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevIntInstances0_25, &IntInstances0_68);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevIntPredDecls_26, &IntPredDecls_69);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_27, &IntModeDecls_70);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevIntDeclPragmas_28, &IntDeclPragmas_71);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), RevIntDeclMarkers_29, &IntDeclMarkers_72);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), RevIntImplPragmas_30, &IntImplPragmas_73);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), RevIntImplMarkers_31, &IntImplMarkers_74);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevIntPromises_33, &IntPromises_75);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevIntInitialises_34, &IntInitialises_76);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevIntFinalises_35, &IntFinalises_77);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevIntMutables_36, &IntMutables_78);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), RevImpTypeDefns_42, &ImpTypeDefns_79);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), RevImpInstDefns_43, &ImpInstDefns_80);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), RevImpModeDefns_44, &ImpModeDefns_81);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevImpTypeClasses_45, &ImpTypeClasses_82);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevImpInstances0_46, &ImpInstances0_83);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevImpPredDecls_47, &ImpPredDecls_84);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_48, &ImpModeDecls_85);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevImpClauses_49, &ImpClauses_86);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), RevImpForeignProcs_50, &ImpForeignProcs_87);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), RevImpForeignEnums_51, &ImpForeignEnums_88);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), RevImpForeignExportEnums_52, &ImpForeignExportEnums_89);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevImpDeclPragmas_53, &ImpDeclPragmas_90);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), RevImpDeclMarkers_54, &ImpDeclMarkers_91);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), RevImpImplPragmas_55, &ImpImplPragmas0_92);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), RevImpImplMarkers_56, &ImpImplMarkers0_93);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevImpPromises_57, &ImpPromises_94);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevImpInitialises0_58, &ImpInitialises0_95);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevImpFinalises0_59, &ImpFinalises0_96);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevImpMutables0_60, &ImpMutables0_97);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), InclMap_63);
  if (succeeded)
  {
    IntInstances_98 = IntInstances0_68;
    ImpInstances_99 = ImpInstances0_83;
  }
  else
  {
    MR_Word MovedImpInstances_100;

    parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(IntInstances0_68, &IntInstances_98, &MovedImpInstances_100);
    ImpInstances_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MovedImpInstances_100, ImpInstances0_83);
  }
  IntTypeDefnMap_101 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_64);
  ImpTypeDefnMap_102 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_79);
  ImpForeignEnumMap_103 = parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_88);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 1, IntTypeDefnMap_101, ImpTypeDefnMap_102, ImpForeignEnumMap_103, &TypeCtorCheckedMap_104, (MR_Word) ((MR_Unsigned) 0U), &TypeErrSpecs_105, (MR_Word) ((MR_Unsigned) 0U), &TypeWarnSpecs_106);
  IntInstDefnMap_107 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_65);
  ImpInstDefnMap_108 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_80);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_8_p_0((MR_Integer) 1, IntInstDefnMap_107, ImpInstDefnMap_108, &InstCtorCheckedMap_109, (MR_Word) ((MR_Unsigned) 0U), &InstErrSpecs_110, (MR_Word) ((MR_Unsigned) 0U), &InstWarnSpecs_111);
  IntModeDefnMap_112 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_66);
  ImpModeDefnMap_113 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_81);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_8_p_0((MR_Integer) 1, IntModeDefnMap_112, ImpModeDefnMap_113, &ModeCtorCheckedMap_114, InstErrSpecs_110, &InstModeErrSpecs_115, InstWarnSpecs_111, &InstModeWarnSpecs_116);
  ImpImplPragmas_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), IntImplPragmas_73, ImpImplPragmas0_92);
  ImpImplMarkers_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), IntImplMarkers_74, ImpImplMarkers0_93);
  ImpInitialises_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), IntInitialises_76, ImpInitialises0_95);
  ImpFinalises_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), IntFinalises_77, ImpFinalises0_96);
  ImpMutables_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), IntMutables_78, ImpMutables0_97);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 238, &WarnUnsortedImportBlocks_122);
  parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0(WarnUnsortedImportBlocks_122, ModuleName_11, IntAvails_19, ImpAvails_40, &SectionImportUseMap_123, STATE_VARIABLE_WarnSpecs_1_174, &STATE_VARIABLE_WarnSpecs_2_184);
  parse_tree__convert_import_use__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_123, &ImportUseMap0_124);
  parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(Globals_6, IntImplicitAvailNeeds_37, ImpImplicitAvailNeeds_61, ImportUseMap0_124, &ImportUseMap_125);
  Var_185 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_20);
  Var_186 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap1_41);
  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_185, Var_186, &IntImpFIMSpecs_126);
  {
    Var_187 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_187, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_10[0]));
    MR_hl_field(0, Var_187, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1));
    MR_hl_field(0, Var_187, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_187, 3) = ((MR_Box) (IntFIMSpecMap_20));
  }
  mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), Var_187, IntImpFIMSpecs_126, ((MR_Box) (ImpFIMSpecMap1_41)), &conv3_ImpFIMSpecMap_127, ((MR_Box) (STATE_VARIABLE_WarnSpecs_2_184)), &conv2_STATE_VARIABLE_WarnSpecs_129);
  ImpFIMSpecMap_127 = ((MR_Word) (conv3_ImpFIMSpecMap_127));
  *STATE_VARIABLE_WarnSpecs_129 = ((MR_Word) (conv2_STATE_VARIABLE_WarnSpecs_129));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_63));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_125));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_127));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_38));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_62));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_104));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_109));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_114));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeErrSpecs_105));
    MR_hl_field(0, base, 12) = ((MR_Box) (TypeWarnSpecs_106));
    MR_hl_field(0, base, 13) = ((MR_Box) (InstModeErrSpecs_115));
    MR_hl_field(0, base, 14) = ((MR_Box) (InstModeWarnSpecs_116));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntTypeClasses_67));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntInstances_98));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntPredDecls_69));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntModeDecls_70));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntDeclPragmas_71));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntDeclMarkers_72));
    MR_hl_field(0, base, 21) = ((MR_Box) (IntPromises_75));
    MR_hl_field(0, base, 22) = ((MR_Box) (IntBadClausePreds_32));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpTypeClasses_82));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpInstances_99));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpPredDecls_84));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpModeDecls_85));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpClauses_86));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpForeignProcs_87));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpForeignExportEnums_89));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpDeclPragmas_90));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpDeclMarkers_91));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpImplPragmas_117));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpImplMarkers_118));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpPromises_94));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpInitialises_119));
    MR_hl_field(0, base, 36) = ((MR_Box) (ImpFinalises_120));
    MR_hl_field(0, base, 37) = ((MR_Box) (ImpMutables_121));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_FIMSpecMap_22;
  MR_Word conv4_STATE_VARIABLE_Specs_24;

  parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_FIMSpecMap_22, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_24);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_FIMSpecMap_22));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FIMSpecMap_22;
  MR_Word conv0_STATE_VARIABLE_Specs_24;

  parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FIMSpecMap_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FIMSpecMap_22));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntAvails_0_4,
  MR_Word * STATE_VARIABLE_IntAvails_5,
  MR_Word STATE_VARIABLE_IntFIMSpecMap_0_6,
  MR_Word * STATE_VARIABLE_IntFIMSpecMap_7,
  MR_Word STATE_VARIABLE_RevIntTypeDefns_0_8,
  MR_Word * STATE_VARIABLE_RevIntTypeDefns_9,
  MR_Word STATE_VARIABLE_RevIntInstDefns_0_10,
  MR_Word * STATE_VARIABLE_RevIntInstDefns_11,
  MR_Word STATE_VARIABLE_RevIntModeDefns_0_12,
  MR_Word * STATE_VARIABLE_RevIntModeDefns_13,
  MR_Word STATE_VARIABLE_RevIntTypeClasses_0_14,
  MR_Word * STATE_VARIABLE_RevIntTypeClasses_15,
  MR_Word STATE_VARIABLE_RevIntInstances_0_16,
  MR_Word * STATE_VARIABLE_RevIntInstances_17,
  MR_Word STATE_VARIABLE_RevIntPredDecls_0_18,
  MR_Word * STATE_VARIABLE_RevIntPredDecls_19,
  MR_Word STATE_VARIABLE_RevIntModeDecls_0_20,
  MR_Word * STATE_VARIABLE_RevIntModeDecls_21,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_23,
  MR_Word STATE_VARIABLE_RevIntDeclMarkers_0_24,
  MR_Word * STATE_VARIABLE_RevIntDeclMarkers_25,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_26,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_27,
  MR_Word STATE_VARIABLE_RevIntImplMarkers_0_28,
  MR_Word * STATE_VARIABLE_RevIntImplMarkers_29,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_30,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_31,
  MR_Word STATE_VARIABLE_RevIntPromises_0_32,
  MR_Word * STATE_VARIABLE_RevIntPromises_33,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_34,
  MR_Word * STATE_VARIABLE_RevIntInitialises_35,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_36,
  MR_Word * STATE_VARIABLE_RevIntFinalises_37,
  MR_Word STATE_VARIABLE_RevIntMutables_0_38,
  MR_Word * STATE_VARIABLE_RevIntMutables_39,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_40,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_41,
  MR_Word STATE_VARIABLE_IntSelfFIMLangs_0_42,
  MR_Word * STATE_VARIABLE_IntSelfFIMLangs_43,
  MR_Word STATE_VARIABLE_ImpIncls_0_44,
  MR_Word * STATE_VARIABLE_ImpIncls_45,
  MR_Word STATE_VARIABLE_ImpAvails_0_46,
  MR_Word * STATE_VARIABLE_ImpAvails_47,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_48,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_49,
  MR_Word STATE_VARIABLE_RevImpTypeDefns_0_50,
  MR_Word * STATE_VARIABLE_RevImpTypeDefns_51,
  MR_Word STATE_VARIABLE_RevImpInstDefns_0_52,
  MR_Word * STATE_VARIABLE_RevImpInstDefns_53,
  MR_Word STATE_VARIABLE_RevImpModeDefns_0_54,
  MR_Word * STATE_VARIABLE_RevImpModeDefns_55,
  MR_Word STATE_VARIABLE_RevImpTypeClasses_0_56,
  MR_Word * STATE_VARIABLE_RevImpTypeClasses_57,
  MR_Word STATE_VARIABLE_RevImpInstances_0_58,
  MR_Word * STATE_VARIABLE_RevImpInstances_59,
  MR_Word STATE_VARIABLE_RevImpPredDecls_0_60,
  MR_Word * STATE_VARIABLE_RevImpPredDecls_61,
  MR_Word STATE_VARIABLE_RevImpModeDecls_0_62,
  MR_Word * STATE_VARIABLE_RevImpModeDecls_63,
  MR_Word STATE_VARIABLE_RevImpClauses_0_64,
  MR_Word * STATE_VARIABLE_RevImpClauses_65,
  MR_Word STATE_VARIABLE_RevImpForeignProcs_0_66,
  MR_Word * STATE_VARIABLE_RevImpForeignProcs_67,
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_68,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_69,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_70,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_71,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_72,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_73,
  MR_Word STATE_VARIABLE_RevImpDeclMarkers_0_74,
  MR_Word * STATE_VARIABLE_RevImpDeclMarkers_75,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_76,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_77,
  MR_Word STATE_VARIABLE_RevImpImplMarkers_0_78,
  MR_Word * STATE_VARIABLE_RevImpImplMarkers_79,
  MR_Word STATE_VARIABLE_RevImpPromises_0_80,
  MR_Word * STATE_VARIABLE_RevImpPromises_81,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_82,
  MR_Word * STATE_VARIABLE_RevImpInitialises_83,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_84,
  MR_Word * STATE_VARIABLE_RevImpFinalises_85,
  MR_Word STATE_VARIABLE_RevImpMutables_0_86,
  MR_Word * STATE_VARIABLE_RevImpMutables_87,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_88,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_89,
  MR_Word STATE_VARIABLE_ImpSelfFIMLangs_0_90,
  MR_Word * STATE_VARIABLE_ImpSelfFIMLangs_91,
  MR_Word STATE_VARIABLE_ErrSpecs_0_92,
  MR_Word * STATE_VARIABLE_ErrSpecs_93,
  MR_Word STATE_VARIABLE_WarnSpecs_0_94,
  MR_Word * STATE_VARIABLE_WarnSpecs_95)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_95 = STATE_VARIABLE_WarnSpecs_0_94;
      *STATE_VARIABLE_ErrSpecs_93 = STATE_VARIABLE_ErrSpecs_0_92;
      *STATE_VARIABLE_ImpSelfFIMLangs_91 = STATE_VARIABLE_ImpSelfFIMLangs_0_90;
      *STATE_VARIABLE_ImpImplicitAvailNeeds_89 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_88;
      *STATE_VARIABLE_RevImpMutables_87 = STATE_VARIABLE_RevImpMutables_0_86;
      *STATE_VARIABLE_RevImpFinalises_85 = STATE_VARIABLE_RevImpFinalises_0_84;
      *STATE_VARIABLE_RevImpInitialises_83 = STATE_VARIABLE_RevImpInitialises_0_82;
      *STATE_VARIABLE_RevImpPromises_81 = STATE_VARIABLE_RevImpPromises_0_80;
      *STATE_VARIABLE_RevImpImplMarkers_79 = STATE_VARIABLE_RevImpImplMarkers_0_78;
      *STATE_VARIABLE_RevImpImplPragmas_77 = STATE_VARIABLE_RevImpImplPragmas_0_76;
      *STATE_VARIABLE_RevImpDeclMarkers_75 = STATE_VARIABLE_RevImpDeclMarkers_0_74;
      *STATE_VARIABLE_RevImpDeclPragmas_73 = STATE_VARIABLE_RevImpDeclPragmas_0_72;
      *STATE_VARIABLE_RevImpForeignExportEnums_71 = STATE_VARIABLE_RevImpForeignExportEnums_0_70;
      *STATE_VARIABLE_RevImpForeignEnums_69 = STATE_VARIABLE_RevImpForeignEnums_0_68;
      *STATE_VARIABLE_RevImpForeignProcs_67 = STATE_VARIABLE_RevImpForeignProcs_0_66;
      *STATE_VARIABLE_RevImpClauses_65 = STATE_VARIABLE_RevImpClauses_0_64;
      *STATE_VARIABLE_RevImpModeDecls_63 = STATE_VARIABLE_RevImpModeDecls_0_62;
      *STATE_VARIABLE_RevImpPredDecls_61 = STATE_VARIABLE_RevImpPredDecls_0_60;
      *STATE_VARIABLE_RevImpInstances_59 = STATE_VARIABLE_RevImpInstances_0_58;
      *STATE_VARIABLE_RevImpTypeClasses_57 = STATE_VARIABLE_RevImpTypeClasses_0_56;
      *STATE_VARIABLE_RevImpModeDefns_55 = STATE_VARIABLE_RevImpModeDefns_0_54;
      *STATE_VARIABLE_RevImpInstDefns_53 = STATE_VARIABLE_RevImpInstDefns_0_52;
      *STATE_VARIABLE_RevImpTypeDefns_51 = STATE_VARIABLE_RevImpTypeDefns_0_50;
      *STATE_VARIABLE_ImpFIMSpecMap_49 = STATE_VARIABLE_ImpFIMSpecMap_0_48;
      *STATE_VARIABLE_ImpAvails_47 = STATE_VARIABLE_ImpAvails_0_46;
      *STATE_VARIABLE_ImpIncls_45 = STATE_VARIABLE_ImpIncls_0_44;
      *STATE_VARIABLE_IntSelfFIMLangs_43 = STATE_VARIABLE_IntSelfFIMLangs_0_42;
      *STATE_VARIABLE_IntImplicitAvailNeeds_41 = STATE_VARIABLE_IntImplicitAvailNeeds_0_40;
      *STATE_VARIABLE_RevIntMutables_39 = STATE_VARIABLE_RevIntMutables_0_38;
      *STATE_VARIABLE_RevIntFinalises_37 = STATE_VARIABLE_RevIntFinalises_0_36;
      *STATE_VARIABLE_RevIntInitialises_35 = STATE_VARIABLE_RevIntInitialises_0_34;
      *STATE_VARIABLE_RevIntPromises_33 = STATE_VARIABLE_RevIntPromises_0_32;
      *STATE_VARIABLE_IntBadClausePreds_31 = STATE_VARIABLE_IntBadClausePreds_0_30;
      *STATE_VARIABLE_RevIntImplMarkers_29 = STATE_VARIABLE_RevIntImplMarkers_0_28;
      *STATE_VARIABLE_RevIntImplPragmas_27 = STATE_VARIABLE_RevIntImplPragmas_0_26;
      *STATE_VARIABLE_RevIntDeclMarkers_25 = STATE_VARIABLE_RevIntDeclMarkers_0_24;
      *STATE_VARIABLE_RevIntDeclPragmas_23 = STATE_VARIABLE_RevIntDeclPragmas_0_22;
      *STATE_VARIABLE_RevIntModeDecls_21 = STATE_VARIABLE_RevIntModeDecls_0_20;
      *STATE_VARIABLE_RevIntPredDecls_19 = STATE_VARIABLE_RevIntPredDecls_0_18;
      *STATE_VARIABLE_RevIntInstances_17 = STATE_VARIABLE_RevIntInstances_0_16;
      *STATE_VARIABLE_RevIntTypeClasses_15 = STATE_VARIABLE_RevIntTypeClasses_0_14;
      *STATE_VARIABLE_RevIntModeDefns_13 = STATE_VARIABLE_RevIntModeDefns_0_12;
      *STATE_VARIABLE_RevIntInstDefns_11 = STATE_VARIABLE_RevIntInstDefns_0_10;
      *STATE_VARIABLE_RevIntTypeDefns_9 = STATE_VARIABLE_RevIntTypeDefns_0_8;
      *STATE_VARIABLE_IntFIMSpecMap_7 = STATE_VARIABLE_IntFIMSpecMap_0_6;
      *STATE_VARIABLE_IntAvails_5 = STATE_VARIABLE_IntAvails_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word ItemBlock_237 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ItemBlocks_238 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Section_287 = ((MR_Unsigned) ((MR_hl_field(0, ItemBlock_237, 1))) & (MR_Integer) 1);
      MR_Word Incls_288 = ((MR_Word) ((MR_hl_field(0, ItemBlock_237, 2))));
      MR_Word Avails_289 = ((MR_Word) ((MR_hl_field(0, ItemBlock_237, 3))));
      MR_Word FIMs_290 = ((MR_Word) ((MR_hl_field(0, ItemBlock_237, 4))));
      MR_Word Items_291 = ((MR_Word) ((MR_hl_field(0, ItemBlock_237, 5))));
      MR_Word STATE_VARIABLE_IntIncls_1_386;
      MR_Word STATE_VARIABLE_IntAvails_1_387;
      MR_Word STATE_VARIABLE_IntFIMSpecMap_1_389;
      MR_Word STATE_VARIABLE_WarnSpecs_1_390;
      MR_Word STATE_VARIABLE_RevIntTypeDefns_1_391;
      MR_Word STATE_VARIABLE_RevIntInstDefns_1_392;
      MR_Word STATE_VARIABLE_RevIntModeDefns_1_393;
      MR_Word STATE_VARIABLE_RevIntTypeClasses_1_394;
      MR_Word STATE_VARIABLE_RevIntInstances_1_395;
      MR_Word STATE_VARIABLE_RevIntPredDecls_1_396;
      MR_Word STATE_VARIABLE_RevIntModeDecls_1_397;
      MR_Word STATE_VARIABLE_RevIntDeclPragmas_1_398;
      MR_Word STATE_VARIABLE_RevIntDeclMarkers_1_399;
      MR_Word STATE_VARIABLE_RevIntImplPragmas_1_400;
      MR_Word STATE_VARIABLE_RevIntImplMarkers_1_401;
      MR_Word STATE_VARIABLE_IntBadClausePreds_1_402;
      MR_Word STATE_VARIABLE_RevIntPromises_1_403;
      MR_Word STATE_VARIABLE_RevIntInitialises_1_404;
      MR_Word STATE_VARIABLE_RevIntFinalises_1_405;
      MR_Word STATE_VARIABLE_RevIntMutables_1_406;
      MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_1_407;
      MR_Word STATE_VARIABLE_IntSelfFIMLangs_1_408;
      MR_Word STATE_VARIABLE_ErrSpecs_1_409;
      MR_Word STATE_VARIABLE_ImpIncls_1_410;
      MR_Word STATE_VARIABLE_ImpAvails_1_411;
      MR_Word STATE_VARIABLE_ImpFIMSpecMap_1_413;
      MR_Word STATE_VARIABLE_RevImpTypeDefns_1_415;
      MR_Word STATE_VARIABLE_RevImpInstDefns_1_416;
      MR_Word STATE_VARIABLE_RevImpModeDefns_1_417;
      MR_Word STATE_VARIABLE_RevImpTypeClasses_1_418;
      MR_Word STATE_VARIABLE_RevImpInstances_1_419;
      MR_Word STATE_VARIABLE_RevImpPredDecls_1_420;
      MR_Word STATE_VARIABLE_RevImpModeDecls_1_421;
      MR_Word STATE_VARIABLE_RevImpClauses_1_422;
      MR_Word STATE_VARIABLE_RevImpForeignProcs_1_423;
      MR_Word STATE_VARIABLE_RevImpForeignEnums_1_424;
      MR_Word STATE_VARIABLE_RevImpForeignExportEnums_1_425;
      MR_Word STATE_VARIABLE_RevImpDeclPragmas_1_426;
      MR_Word STATE_VARIABLE_RevImpDeclMarkers_1_427;
      MR_Word STATE_VARIABLE_RevImpImplPragmas_1_428;
      MR_Word STATE_VARIABLE_RevImpImplMarkers_1_429;
      MR_Word STATE_VARIABLE_RevImpPromises_1_430;
      MR_Word STATE_VARIABLE_RevImpInitialises_1_431;
      MR_Word STATE_VARIABLE_RevImpFinalises_1_432;
      MR_Word STATE_VARIABLE_RevImpMutables_1_433;
      MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_1_434;
      MR_Word STATE_VARIABLE_ImpSelfFIMLangs_1_435;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntAvails_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInstDefns_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevIntModeDefns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInstances_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPredDecls_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevIntModeDecls_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevIntDeclMarkers_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevIntImplMarkers_0_28;
      MR_Word next_value_of_STATE_VARIABLE_IntBadClausePreds_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPromises_0_32;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInitialises_0_34;
      MR_Word next_value_of_STATE_VARIABLE_RevIntFinalises_0_36;
      MR_Word next_value_of_STATE_VARIABLE_RevIntMutables_0_38;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_40;
      MR_Word next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_42;
      MR_Word next_value_of_STATE_VARIABLE_ImpIncls_0_44;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvails_0_46;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstances_0_58;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62;
      MR_Word next_value_of_STATE_VARIABLE_RevImpClauses_0_64;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignProcs_0_66;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_68;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_70;
      MR_Word next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_72;
      MR_Word next_value_of_STATE_VARIABLE_RevImpDeclMarkers_0_74;
      MR_Word next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_76;
      MR_Word next_value_of_STATE_VARIABLE_RevImpImplMarkers_0_78;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPromises_0_80;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInitialises_0_82;
      MR_Word next_value_of_STATE_VARIABLE_RevImpFinalises_0_84;
      MR_Word next_value_of_STATE_VARIABLE_RevImpMutables_0_86;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_88;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_90;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_92;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_94;

      switch (Section_287) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Box conv3_STATE_VARIABLE_ImpFIMSpecMap_1_413;
            MR_Box conv2_STATE_VARIABLE_WarnSpecs_1_390;

            STATE_VARIABLE_ImpIncls_1_410 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpIncls_0_44, Incls_288);
            STATE_VARIABLE_ImpAvails_1_411 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvails_0_46, Avails_289);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[16]), FIMs_290, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecMap_0_48)), &conv3_STATE_VARIABLE_ImpFIMSpecMap_1_413, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_94)), &conv2_STATE_VARIABLE_WarnSpecs_1_390);
            STATE_VARIABLE_ImpFIMSpecMap_1_413 = ((MR_Word) (conv3_STATE_VARIABLE_ImpFIMSpecMap_1_413));
            STATE_VARIABLE_WarnSpecs_1_390 = ((MR_Word) (conv2_STATE_VARIABLE_WarnSpecs_1_390));
            parse_tree__convert_parse_tree__classify_src_items_imp_45_p_0(Items_291, STATE_VARIABLE_RevImpTypeDefns_0_50, &STATE_VARIABLE_RevImpTypeDefns_1_415, STATE_VARIABLE_RevImpInstDefns_0_52, &STATE_VARIABLE_RevImpInstDefns_1_416, STATE_VARIABLE_RevImpModeDefns_0_54, &STATE_VARIABLE_RevImpModeDefns_1_417, STATE_VARIABLE_RevImpTypeClasses_0_56, &STATE_VARIABLE_RevImpTypeClasses_1_418, STATE_VARIABLE_RevImpInstances_0_58, &STATE_VARIABLE_RevImpInstances_1_419, STATE_VARIABLE_RevImpPredDecls_0_60, &STATE_VARIABLE_RevImpPredDecls_1_420, STATE_VARIABLE_RevImpModeDecls_0_62, &STATE_VARIABLE_RevImpModeDecls_1_421, STATE_VARIABLE_RevImpClauses_0_64, &STATE_VARIABLE_RevImpClauses_1_422, STATE_VARIABLE_RevImpForeignProcs_0_66, &STATE_VARIABLE_RevImpForeignProcs_1_423, STATE_VARIABLE_RevImpForeignEnums_0_68, &STATE_VARIABLE_RevImpForeignEnums_1_424, STATE_VARIABLE_RevImpForeignExportEnums_0_70, &STATE_VARIABLE_RevImpForeignExportEnums_1_425, STATE_VARIABLE_RevImpDeclPragmas_0_72, &STATE_VARIABLE_RevImpDeclPragmas_1_426, STATE_VARIABLE_RevImpDeclMarkers_0_74, &STATE_VARIABLE_RevImpDeclMarkers_1_427, STATE_VARIABLE_RevImpImplPragmas_0_76, &STATE_VARIABLE_RevImpImplPragmas_1_428, STATE_VARIABLE_RevImpImplMarkers_0_78, &STATE_VARIABLE_RevImpImplMarkers_1_429, STATE_VARIABLE_RevImpPromises_0_80, &STATE_VARIABLE_RevImpPromises_1_430, STATE_VARIABLE_RevImpInitialises_0_82, &STATE_VARIABLE_RevImpInitialises_1_431, STATE_VARIABLE_RevImpFinalises_0_84, &STATE_VARIABLE_RevImpFinalises_1_432, STATE_VARIABLE_RevImpMutables_0_86, &STATE_VARIABLE_RevImpMutables_1_433, STATE_VARIABLE_ImpImplicitAvailNeeds_0_88, &STATE_VARIABLE_ImpImplicitAvailNeeds_1_434, STATE_VARIABLE_ImpSelfFIMLangs_0_90, &STATE_VARIABLE_ImpSelfFIMLangs_1_435, STATE_VARIABLE_ErrSpecs_0_92, &STATE_VARIABLE_ErrSpecs_1_409);
            STATE_VARIABLE_IntIncls_1_386 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntAvails_1_387 = STATE_VARIABLE_IntAvails_0_4;
            STATE_VARIABLE_IntFIMSpecMap_1_389 = STATE_VARIABLE_IntFIMSpecMap_0_6;
            STATE_VARIABLE_RevIntTypeDefns_1_391 = STATE_VARIABLE_RevIntTypeDefns_0_8;
            STATE_VARIABLE_RevIntInstDefns_1_392 = STATE_VARIABLE_RevIntInstDefns_0_10;
            STATE_VARIABLE_RevIntModeDefns_1_393 = STATE_VARIABLE_RevIntModeDefns_0_12;
            STATE_VARIABLE_RevIntTypeClasses_1_394 = STATE_VARIABLE_RevIntTypeClasses_0_14;
            STATE_VARIABLE_RevIntInstances_1_395 = STATE_VARIABLE_RevIntInstances_0_16;
            STATE_VARIABLE_RevIntPredDecls_1_396 = STATE_VARIABLE_RevIntPredDecls_0_18;
            STATE_VARIABLE_RevIntModeDecls_1_397 = STATE_VARIABLE_RevIntModeDecls_0_20;
            STATE_VARIABLE_RevIntDeclPragmas_1_398 = STATE_VARIABLE_RevIntDeclPragmas_0_22;
            STATE_VARIABLE_RevIntDeclMarkers_1_399 = STATE_VARIABLE_RevIntDeclMarkers_0_24;
            STATE_VARIABLE_RevIntImplPragmas_1_400 = STATE_VARIABLE_RevIntImplPragmas_0_26;
            STATE_VARIABLE_RevIntImplMarkers_1_401 = STATE_VARIABLE_RevIntImplMarkers_0_28;
            STATE_VARIABLE_IntBadClausePreds_1_402 = STATE_VARIABLE_IntBadClausePreds_0_30;
            STATE_VARIABLE_RevIntPromises_1_403 = STATE_VARIABLE_RevIntPromises_0_32;
            STATE_VARIABLE_RevIntInitialises_1_404 = STATE_VARIABLE_RevIntInitialises_0_34;
            STATE_VARIABLE_RevIntFinalises_1_405 = STATE_VARIABLE_RevIntFinalises_0_36;
            STATE_VARIABLE_RevIntMutables_1_406 = STATE_VARIABLE_RevIntMutables_0_38;
            STATE_VARIABLE_IntImplicitAvailNeeds_1_407 = STATE_VARIABLE_IntImplicitAvailNeeds_0_40;
            STATE_VARIABLE_IntSelfFIMLangs_1_408 = STATE_VARIABLE_IntSelfFIMLangs_0_42;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box conv7_STATE_VARIABLE_IntFIMSpecMap_1_389;
            MR_Box conv6_STATE_VARIABLE_WarnSpecs_1_390;

            STATE_VARIABLE_IntIncls_1_386 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Incls_288);
            STATE_VARIABLE_IntAvails_1_387 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvails_0_4, Avails_289);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[17]), FIMs_290, ((MR_Box) (STATE_VARIABLE_IntFIMSpecMap_0_6)), &conv7_STATE_VARIABLE_IntFIMSpecMap_1_389, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_94)), &conv6_STATE_VARIABLE_WarnSpecs_1_390);
            STATE_VARIABLE_IntFIMSpecMap_1_389 = ((MR_Word) (conv7_STATE_VARIABLE_IntFIMSpecMap_1_389));
            STATE_VARIABLE_WarnSpecs_1_390 = ((MR_Word) (conv6_STATE_VARIABLE_WarnSpecs_1_390));
            parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(Items_291, STATE_VARIABLE_RevIntTypeDefns_0_8, &STATE_VARIABLE_RevIntTypeDefns_1_391, STATE_VARIABLE_RevIntInstDefns_0_10, &STATE_VARIABLE_RevIntInstDefns_1_392, STATE_VARIABLE_RevIntModeDefns_0_12, &STATE_VARIABLE_RevIntModeDefns_1_393, STATE_VARIABLE_RevIntTypeClasses_0_14, &STATE_VARIABLE_RevIntTypeClasses_1_394, STATE_VARIABLE_RevIntInstances_0_16, &STATE_VARIABLE_RevIntInstances_1_395, STATE_VARIABLE_RevIntPredDecls_0_18, &STATE_VARIABLE_RevIntPredDecls_1_396, STATE_VARIABLE_RevIntModeDecls_0_20, &STATE_VARIABLE_RevIntModeDecls_1_397, STATE_VARIABLE_RevIntDeclPragmas_0_22, &STATE_VARIABLE_RevIntDeclPragmas_1_398, STATE_VARIABLE_RevIntDeclMarkers_0_24, &STATE_VARIABLE_RevIntDeclMarkers_1_399, STATE_VARIABLE_RevIntImplPragmas_0_26, &STATE_VARIABLE_RevIntImplPragmas_1_400, STATE_VARIABLE_RevIntImplMarkers_0_28, &STATE_VARIABLE_RevIntImplMarkers_1_401, STATE_VARIABLE_IntBadClausePreds_0_30, &STATE_VARIABLE_IntBadClausePreds_1_402, STATE_VARIABLE_RevIntPromises_0_32, &STATE_VARIABLE_RevIntPromises_1_403, STATE_VARIABLE_RevIntInitialises_0_34, &STATE_VARIABLE_RevIntInitialises_1_404, STATE_VARIABLE_RevIntFinalises_0_36, &STATE_VARIABLE_RevIntFinalises_1_405, STATE_VARIABLE_RevIntMutables_0_38, &STATE_VARIABLE_RevIntMutables_1_406, STATE_VARIABLE_IntImplicitAvailNeeds_0_40, &STATE_VARIABLE_IntImplicitAvailNeeds_1_407, STATE_VARIABLE_IntSelfFIMLangs_0_42, &STATE_VARIABLE_IntSelfFIMLangs_1_408, STATE_VARIABLE_ErrSpecs_0_92, &STATE_VARIABLE_ErrSpecs_1_409);
            STATE_VARIABLE_ImpIncls_1_410 = STATE_VARIABLE_ImpIncls_0_44;
            STATE_VARIABLE_ImpAvails_1_411 = STATE_VARIABLE_ImpAvails_0_46;
            STATE_VARIABLE_ImpFIMSpecMap_1_413 = STATE_VARIABLE_ImpFIMSpecMap_0_48;
            STATE_VARIABLE_RevImpTypeDefns_1_415 = STATE_VARIABLE_RevImpTypeDefns_0_50;
            STATE_VARIABLE_RevImpInstDefns_1_416 = STATE_VARIABLE_RevImpInstDefns_0_52;
            STATE_VARIABLE_RevImpModeDefns_1_417 = STATE_VARIABLE_RevImpModeDefns_0_54;
            STATE_VARIABLE_RevImpTypeClasses_1_418 = STATE_VARIABLE_RevImpTypeClasses_0_56;
            STATE_VARIABLE_RevImpInstances_1_419 = STATE_VARIABLE_RevImpInstances_0_58;
            STATE_VARIABLE_RevImpPredDecls_1_420 = STATE_VARIABLE_RevImpPredDecls_0_60;
            STATE_VARIABLE_RevImpModeDecls_1_421 = STATE_VARIABLE_RevImpModeDecls_0_62;
            STATE_VARIABLE_RevImpClauses_1_422 = STATE_VARIABLE_RevImpClauses_0_64;
            STATE_VARIABLE_RevImpForeignProcs_1_423 = STATE_VARIABLE_RevImpForeignProcs_0_66;
            STATE_VARIABLE_RevImpForeignEnums_1_424 = STATE_VARIABLE_RevImpForeignEnums_0_68;
            STATE_VARIABLE_RevImpForeignExportEnums_1_425 = STATE_VARIABLE_RevImpForeignExportEnums_0_70;
            STATE_VARIABLE_RevImpDeclPragmas_1_426 = STATE_VARIABLE_RevImpDeclPragmas_0_72;
            STATE_VARIABLE_RevImpDeclMarkers_1_427 = STATE_VARIABLE_RevImpDeclMarkers_0_74;
            STATE_VARIABLE_RevImpImplPragmas_1_428 = STATE_VARIABLE_RevImpImplPragmas_0_76;
            STATE_VARIABLE_RevImpImplMarkers_1_429 = STATE_VARIABLE_RevImpImplMarkers_0_78;
            STATE_VARIABLE_RevImpPromises_1_430 = STATE_VARIABLE_RevImpPromises_0_80;
            STATE_VARIABLE_RevImpInitialises_1_431 = STATE_VARIABLE_RevImpInitialises_0_82;
            STATE_VARIABLE_RevImpFinalises_1_432 = STATE_VARIABLE_RevImpFinalises_0_84;
            STATE_VARIABLE_RevImpMutables_1_433 = STATE_VARIABLE_RevImpMutables_0_86;
            STATE_VARIABLE_ImpImplicitAvailNeeds_1_434 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_88;
            STATE_VARIABLE_ImpSelfFIMLangs_1_435 = STATE_VARIABLE_ImpSelfFIMLangs_0_90;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_238;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_1_386;
      next_value_of_STATE_VARIABLE_IntAvails_0_4 = STATE_VARIABLE_IntAvails_1_387;
      next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_6 = STATE_VARIABLE_IntFIMSpecMap_1_389;
      next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_8 = STATE_VARIABLE_RevIntTypeDefns_1_391;
      next_value_of_STATE_VARIABLE_RevIntInstDefns_0_10 = STATE_VARIABLE_RevIntInstDefns_1_392;
      next_value_of_STATE_VARIABLE_RevIntModeDefns_0_12 = STATE_VARIABLE_RevIntModeDefns_1_393;
      next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_14 = STATE_VARIABLE_RevIntTypeClasses_1_394;
      next_value_of_STATE_VARIABLE_RevIntInstances_0_16 = STATE_VARIABLE_RevIntInstances_1_395;
      next_value_of_STATE_VARIABLE_RevIntPredDecls_0_18 = STATE_VARIABLE_RevIntPredDecls_1_396;
      next_value_of_STATE_VARIABLE_RevIntModeDecls_0_20 = STATE_VARIABLE_RevIntModeDecls_1_397;
      next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_22 = STATE_VARIABLE_RevIntDeclPragmas_1_398;
      next_value_of_STATE_VARIABLE_RevIntDeclMarkers_0_24 = STATE_VARIABLE_RevIntDeclMarkers_1_399;
      next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26 = STATE_VARIABLE_RevIntImplPragmas_1_400;
      next_value_of_STATE_VARIABLE_RevIntImplMarkers_0_28 = STATE_VARIABLE_RevIntImplMarkers_1_401;
      next_value_of_STATE_VARIABLE_IntBadClausePreds_0_30 = STATE_VARIABLE_IntBadClausePreds_1_402;
      next_value_of_STATE_VARIABLE_RevIntPromises_0_32 = STATE_VARIABLE_RevIntPromises_1_403;
      next_value_of_STATE_VARIABLE_RevIntInitialises_0_34 = STATE_VARIABLE_RevIntInitialises_1_404;
      next_value_of_STATE_VARIABLE_RevIntFinalises_0_36 = STATE_VARIABLE_RevIntFinalises_1_405;
      next_value_of_STATE_VARIABLE_RevIntMutables_0_38 = STATE_VARIABLE_RevIntMutables_1_406;
      next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_40 = STATE_VARIABLE_IntImplicitAvailNeeds_1_407;
      next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_42 = STATE_VARIABLE_IntSelfFIMLangs_1_408;
      next_value_of_STATE_VARIABLE_ImpIncls_0_44 = STATE_VARIABLE_ImpIncls_1_410;
      next_value_of_STATE_VARIABLE_ImpAvails_0_46 = STATE_VARIABLE_ImpAvails_1_411;
      next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48 = STATE_VARIABLE_ImpFIMSpecMap_1_413;
      next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50 = STATE_VARIABLE_RevImpTypeDefns_1_415;
      next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52 = STATE_VARIABLE_RevImpInstDefns_1_416;
      next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54 = STATE_VARIABLE_RevImpModeDefns_1_417;
      next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56 = STATE_VARIABLE_RevImpTypeClasses_1_418;
      next_value_of_STATE_VARIABLE_RevImpInstances_0_58 = STATE_VARIABLE_RevImpInstances_1_419;
      next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60 = STATE_VARIABLE_RevImpPredDecls_1_420;
      next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62 = STATE_VARIABLE_RevImpModeDecls_1_421;
      next_value_of_STATE_VARIABLE_RevImpClauses_0_64 = STATE_VARIABLE_RevImpClauses_1_422;
      next_value_of_STATE_VARIABLE_RevImpForeignProcs_0_66 = STATE_VARIABLE_RevImpForeignProcs_1_423;
      next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_68 = STATE_VARIABLE_RevImpForeignEnums_1_424;
      next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_70 = STATE_VARIABLE_RevImpForeignExportEnums_1_425;
      next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_72 = STATE_VARIABLE_RevImpDeclPragmas_1_426;
      next_value_of_STATE_VARIABLE_RevImpDeclMarkers_0_74 = STATE_VARIABLE_RevImpDeclMarkers_1_427;
      next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_76 = STATE_VARIABLE_RevImpImplPragmas_1_428;
      next_value_of_STATE_VARIABLE_RevImpImplMarkers_0_78 = STATE_VARIABLE_RevImpImplMarkers_1_429;
      next_value_of_STATE_VARIABLE_RevImpPromises_0_80 = STATE_VARIABLE_RevImpPromises_1_430;
      next_value_of_STATE_VARIABLE_RevImpInitialises_0_82 = STATE_VARIABLE_RevImpInitialises_1_431;
      next_value_of_STATE_VARIABLE_RevImpFinalises_0_84 = STATE_VARIABLE_RevImpFinalises_1_432;
      next_value_of_STATE_VARIABLE_RevImpMutables_0_86 = STATE_VARIABLE_RevImpMutables_1_433;
      next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_88 = STATE_VARIABLE_ImpImplicitAvailNeeds_1_434;
      next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_90 = STATE_VARIABLE_ImpSelfFIMLangs_1_435;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_92 = STATE_VARIABLE_ErrSpecs_1_409;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_94 = STATE_VARIABLE_WarnSpecs_1_390;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntAvails_0_4 = next_value_of_STATE_VARIABLE_IntAvails_0_4;
      STATE_VARIABLE_IntFIMSpecMap_0_6 = next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_6;
      STATE_VARIABLE_RevIntTypeDefns_0_8 = next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_8;
      STATE_VARIABLE_RevIntInstDefns_0_10 = next_value_of_STATE_VARIABLE_RevIntInstDefns_0_10;
      STATE_VARIABLE_RevIntModeDefns_0_12 = next_value_of_STATE_VARIABLE_RevIntModeDefns_0_12;
      STATE_VARIABLE_RevIntTypeClasses_0_14 = next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_14;
      STATE_VARIABLE_RevIntInstances_0_16 = next_value_of_STATE_VARIABLE_RevIntInstances_0_16;
      STATE_VARIABLE_RevIntPredDecls_0_18 = next_value_of_STATE_VARIABLE_RevIntPredDecls_0_18;
      STATE_VARIABLE_RevIntModeDecls_0_20 = next_value_of_STATE_VARIABLE_RevIntModeDecls_0_20;
      STATE_VARIABLE_RevIntDeclPragmas_0_22 = next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_22;
      STATE_VARIABLE_RevIntDeclMarkers_0_24 = next_value_of_STATE_VARIABLE_RevIntDeclMarkers_0_24;
      STATE_VARIABLE_RevIntImplPragmas_0_26 = next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26;
      STATE_VARIABLE_RevIntImplMarkers_0_28 = next_value_of_STATE_VARIABLE_RevIntImplMarkers_0_28;
      STATE_VARIABLE_IntBadClausePreds_0_30 = next_value_of_STATE_VARIABLE_IntBadClausePreds_0_30;
      STATE_VARIABLE_RevIntPromises_0_32 = next_value_of_STATE_VARIABLE_RevIntPromises_0_32;
      STATE_VARIABLE_RevIntInitialises_0_34 = next_value_of_STATE_VARIABLE_RevIntInitialises_0_34;
      STATE_VARIABLE_RevIntFinalises_0_36 = next_value_of_STATE_VARIABLE_RevIntFinalises_0_36;
      STATE_VARIABLE_RevIntMutables_0_38 = next_value_of_STATE_VARIABLE_RevIntMutables_0_38;
      STATE_VARIABLE_IntImplicitAvailNeeds_0_40 = next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_40;
      STATE_VARIABLE_IntSelfFIMLangs_0_42 = next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_42;
      STATE_VARIABLE_ImpIncls_0_44 = next_value_of_STATE_VARIABLE_ImpIncls_0_44;
      STATE_VARIABLE_ImpAvails_0_46 = next_value_of_STATE_VARIABLE_ImpAvails_0_46;
      STATE_VARIABLE_ImpFIMSpecMap_0_48 = next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48;
      STATE_VARIABLE_RevImpTypeDefns_0_50 = next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50;
      STATE_VARIABLE_RevImpInstDefns_0_52 = next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52;
      STATE_VARIABLE_RevImpModeDefns_0_54 = next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54;
      STATE_VARIABLE_RevImpTypeClasses_0_56 = next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56;
      STATE_VARIABLE_RevImpInstances_0_58 = next_value_of_STATE_VARIABLE_RevImpInstances_0_58;
      STATE_VARIABLE_RevImpPredDecls_0_60 = next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60;
      STATE_VARIABLE_RevImpModeDecls_0_62 = next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62;
      STATE_VARIABLE_RevImpClauses_0_64 = next_value_of_STATE_VARIABLE_RevImpClauses_0_64;
      STATE_VARIABLE_RevImpForeignProcs_0_66 = next_value_of_STATE_VARIABLE_RevImpForeignProcs_0_66;
      STATE_VARIABLE_RevImpForeignEnums_0_68 = next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_68;
      STATE_VARIABLE_RevImpForeignExportEnums_0_70 = next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_70;
      STATE_VARIABLE_RevImpDeclPragmas_0_72 = next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_72;
      STATE_VARIABLE_RevImpDeclMarkers_0_74 = next_value_of_STATE_VARIABLE_RevImpDeclMarkers_0_74;
      STATE_VARIABLE_RevImpImplPragmas_0_76 = next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_76;
      STATE_VARIABLE_RevImpImplMarkers_0_78 = next_value_of_STATE_VARIABLE_RevImpImplMarkers_0_78;
      STATE_VARIABLE_RevImpPromises_0_80 = next_value_of_STATE_VARIABLE_RevImpPromises_0_80;
      STATE_VARIABLE_RevImpInitialises_0_82 = next_value_of_STATE_VARIABLE_RevImpInitialises_0_82;
      STATE_VARIABLE_RevImpFinalises_0_84 = next_value_of_STATE_VARIABLE_RevImpFinalises_0_84;
      STATE_VARIABLE_RevImpMutables_0_86 = next_value_of_STATE_VARIABLE_RevImpMutables_0_86;
      STATE_VARIABLE_ImpImplicitAvailNeeds_0_88 = next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_88;
      STATE_VARIABLE_ImpSelfFIMLangs_0_90 = next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_90;
      STATE_VARIABLE_ErrSpecs_0_92 = next_value_of_STATE_VARIABLE_ErrSpecs_0_92;
      STATE_VARIABLE_WarnSpecs_0_94 = next_value_of_STATE_VARIABLE_WarnSpecs_0_94;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_45_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefns_3,
  MR_Word STATE_VARIABLE_RevInstDefns_0_4,
  MR_Word * STATE_VARIABLE_RevInstDefns_5,
  MR_Word STATE_VARIABLE_RevModeDefns_0_6,
  MR_Word * STATE_VARIABLE_RevModeDefns_7,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_8,
  MR_Word * STATE_VARIABLE_RevTypeClasses_9,
  MR_Word STATE_VARIABLE_RevInstances_0_10,
  MR_Word * STATE_VARIABLE_RevInstances_11,
  MR_Word STATE_VARIABLE_RevPredDecls_0_12,
  MR_Word * STATE_VARIABLE_RevPredDecls_13,
  MR_Word STATE_VARIABLE_RevModeDecls_0_14,
  MR_Word * STATE_VARIABLE_RevModeDecls_15,
  MR_Word STATE_VARIABLE_RevClauses_0_16,
  MR_Word * STATE_VARIABLE_RevClauses_17,
  MR_Word STATE_VARIABLE_RevForeignProcs_0_18,
  MR_Word * STATE_VARIABLE_RevForeignProcs_19,
  MR_Word STATE_VARIABLE_RevForeignEnums_0_20,
  MR_Word * STATE_VARIABLE_RevForeignEnums_21,
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_22,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_23,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_25,
  MR_Word STATE_VARIABLE_RevDeclMarkers_0_26,
  MR_Word * STATE_VARIABLE_RevDeclMarkers_27,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_28,
  MR_Word * STATE_VARIABLE_RevImplPragmas_29,
  MR_Word STATE_VARIABLE_RevImplMarkers_0_30,
  MR_Word * STATE_VARIABLE_RevImplMarkers_31,
  MR_Word STATE_VARIABLE_RevPromises_0_32,
  MR_Word * STATE_VARIABLE_RevPromises_33,
  MR_Word STATE_VARIABLE_RevInitialises_0_34,
  MR_Word * STATE_VARIABLE_RevInitialises_35,
  MR_Word STATE_VARIABLE_RevFinalises_0_36,
  MR_Word * STATE_VARIABLE_RevFinalises_37,
  MR_Word STATE_VARIABLE_RevMutables_0_38,
  MR_Word * STATE_VARIABLE_RevMutables_39,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_40,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_41,
  MR_Word STATE_VARIABLE_SelfFIMLangs_0_42,
  MR_Word * STATE_VARIABLE_SelfFIMLangs_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      *STATE_VARIABLE_SelfFIMLangs_43 = STATE_VARIABLE_SelfFIMLangs_0_42;
      *STATE_VARIABLE_ImplicitAvailNeeds_41 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
      *STATE_VARIABLE_RevMutables_39 = STATE_VARIABLE_RevMutables_0_38;
      *STATE_VARIABLE_RevFinalises_37 = STATE_VARIABLE_RevFinalises_0_36;
      *STATE_VARIABLE_RevInitialises_35 = STATE_VARIABLE_RevInitialises_0_34;
      *STATE_VARIABLE_RevPromises_33 = STATE_VARIABLE_RevPromises_0_32;
      *STATE_VARIABLE_RevImplMarkers_31 = STATE_VARIABLE_RevImplMarkers_0_30;
      *STATE_VARIABLE_RevImplPragmas_29 = STATE_VARIABLE_RevImplPragmas_0_28;
      *STATE_VARIABLE_RevDeclMarkers_27 = STATE_VARIABLE_RevDeclMarkers_0_26;
      *STATE_VARIABLE_RevDeclPragmas_25 = STATE_VARIABLE_RevDeclPragmas_0_24;
      *STATE_VARIABLE_RevForeignExportEnums_23 = STATE_VARIABLE_RevForeignExportEnums_0_22;
      *STATE_VARIABLE_RevForeignEnums_21 = STATE_VARIABLE_RevForeignEnums_0_20;
      *STATE_VARIABLE_RevForeignProcs_19 = STATE_VARIABLE_RevForeignProcs_0_18;
      *STATE_VARIABLE_RevClauses_17 = STATE_VARIABLE_RevClauses_0_16;
      *STATE_VARIABLE_RevModeDecls_15 = STATE_VARIABLE_RevModeDecls_0_14;
      *STATE_VARIABLE_RevPredDecls_13 = STATE_VARIABLE_RevPredDecls_0_12;
      *STATE_VARIABLE_RevInstances_11 = STATE_VARIABLE_RevInstances_0_10;
      *STATE_VARIABLE_RevTypeClasses_9 = STATE_VARIABLE_RevTypeClasses_0_8;
      *STATE_VARIABLE_RevModeDefns_7 = STATE_VARIABLE_RevModeDefns_0_6;
      *STATE_VARIABLE_RevInstDefns_5 = STATE_VARIABLE_RevInstDefns_0_4;
      *STATE_VARIABLE_RevTypeDefns_3 = STATE_VARIABLE_RevTypeDefns_0_2;
    }
    else
    {
      MR_Word Item_112 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_113 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevTypeDefns_1_258;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_1_259;
      MR_Word STATE_VARIABLE_SelfFIMLangs_1_261;
      MR_Word STATE_VARIABLE_RevInstDefns_1_262;
      MR_Word STATE_VARIABLE_RevModeDefns_1_263;
      MR_Word STATE_VARIABLE_RevTypeClasses_1_264;
      MR_Word STATE_VARIABLE_RevInstances_1_266;
      MR_Word STATE_VARIABLE_RevPredDecls_1_267;
      MR_Word STATE_VARIABLE_RevModeDecls_1_268;
      MR_Word STATE_VARIABLE_RevClauses_1_270;
      MR_Word STATE_VARIABLE_RevForeignProcs_1_273;
      MR_Word STATE_VARIABLE_RevForeignEnums_1_275;
      MR_Word STATE_VARIABLE_RevForeignExportEnums_1_276;
      MR_Word STATE_VARIABLE_RevDeclPragmas_1_277;
      MR_Word STATE_VARIABLE_RevDeclMarkers_1_278;
      MR_Word STATE_VARIABLE_RevImplPragmas_1_279;
      MR_Word STATE_VARIABLE_RevImplMarkers_1_286;
      MR_Word STATE_VARIABLE_Specs_1_287;
      MR_Word STATE_VARIABLE_RevPromises_1_289;
      MR_Word STATE_VARIABLE_RevInitialises_1_290;
      MR_Word STATE_VARIABLE_RevFinalises_1_291;
      MR_Word STATE_VARIABLE_RevMutables_1_295;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevInstances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignProcs_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignEnums_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclMarkers_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevImplMarkers_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevPromises_0_32;
      MR_Word next_value_of_STATE_VARIABLE_RevInitialises_0_34;
      MR_Word next_value_of_STATE_VARIABLE_RevFinalises_0_36;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40;
      MR_Word next_value_of_STATE_VARIABLE_SelfFIMLangs_0_42;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_44;

      switch (MR_tag((MR_Word) Item_112)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_158 = (MR_Word) ((MR_Word) (Item_112));

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(ItemClauseInfo_158, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_1_259);
            {
              STATE_VARIABLE_RevClauses_1_270 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_1_270, 0) = ((MR_Box) (ItemClauseInfo_158));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_1_270, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_16));
            }
            STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
            STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
            STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
            STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
            STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
            STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
            STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
            STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
            STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
            STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
            STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
            STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDeclInfo_156 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevPredDecls_1_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_1_267, 0) = ((MR_Box) (ItemPredDeclInfo_156));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_1_267, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_12));
            }
            STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
            STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
            STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
            STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
            STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
            STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
            STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
            STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
            STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
            STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
            STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
            STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDeclInfo_157 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_1_268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_268, 0) = ((MR_Box) (ItemModeDeclInfo_157));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_268, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
            STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
            STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
            STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
            STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
            STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
            STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
            STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
            STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
            STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
            STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
            STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_112, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignProcInfo_159 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));
                MR_Word Attrs_160 = ((MR_Word) ((MR_hl_field(0, ItemForeignProcInfo_159, 0))));
                MR_Word Var_271;

                Var_271 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_160);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_271)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                {
                  STATE_VARIABLE_RevForeignProcs_1_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_1_273, 0) = ((MR_Box) (ItemForeignProcInfo_159));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_1_273, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_18));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnumInfo_169 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));
                MR_Word Lang_170 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnumInfo_169, 0))) & (MR_Integer) 3);

                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_170)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                {
                  STATE_VARIABLE_RevForeignEnums_1_275 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignEnums_1_275, 0) = ((MR_Box) (ItemForeignEnumInfo_169));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignEnums_1_275, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignEnums_0_20));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemFEEInfo_175 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevForeignExportEnums_1_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignExportEnums_1_276, 0) = ((MR_Box) (ItemFEEInfo_175));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignExportEnums_1_276, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignExportEnums_0_22));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_177 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevDeclMarkers_1_278 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_278, 0) = ((MR_Box) (ItemDeclMarker_177));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_278, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_26));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemImplMarker_207 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevImplMarkers_1_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_286, 0) = ((MR_Box) (ItemImplMarker_207));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_286, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_30));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromiseInfo_209 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_209, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_1_259);
                {
                  STATE_VARIABLE_RevPromises_1_289 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_1_289, 0) = ((MR_Box) (ItemPromiseInfo_209));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_1_289, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_32));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeclassInfo_154 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_1_264 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_1_264, 0) = ((MR_Box) (ItemTypeclassInfo_154));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_1_264, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_8));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstanceInfo_155 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_155, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_1_259);
                {
                  STATE_VARIABLE_RevInstances_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_1_266, 0) = ((MR_Box) (ItemInstanceInfo_155));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_1_266, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_10));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemInitialiseInfo_210 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevInitialises_1_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_1_290, 0) = ((MR_Box) (ItemInitialiseInfo_210));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_1_290, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_34));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemFinaliseInfo_211 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevFinalises_1_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_1_291, 0) = ((MR_Box) (ItemFinaliseInfo_211));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_1_291, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_36));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemMutableInfo_212 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));
                MR_Word Var_292;

                Var_292 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_292, STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(ItemMutableInfo_212, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_1_259);
                {
                  STATE_VARIABLE_RevMutables_1_295 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_1_295, 0) = ((MR_Box) (ItemMutableInfo_212));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_1_295, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_38));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_136 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));
                MR_Word TypeDefn_139;

                {
                  STATE_VARIABLE_RevTypeDefns_1_258 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_1_258, 0) = ((MR_Box) (ItemTypeDefnInfo_136));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_1_258, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefns_0_2));
                }
                TypeDefn_139 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_136, 2))));
                switch (MR_tag((MR_Word) TypeDefn_139)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                      STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                      STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word DetailsSolver_147 = (MR_Word) (MR_body((MR_Word) (TypeDefn_139), (MR_Integer) 2));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_147, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_1_259);
                      STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_139, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word DetailsForeign_148 = ((MR_Word) ((MR_hl_field(3, TypeDefn_139, 1))));
                          MR_Word ForeignType_149 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_148, 0))));
                          MR_Word Var_260;

                          Var_260 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_149);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_260)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefnInfo_152 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevInstDefns_1_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_1_262, 0) = ((MR_Box) (ItemInstDefnInfo_152));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_1_262, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_4));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefnInfo_153 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevModeDefns_1_263 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_1_263, 0) = ((MR_Box) (ItemModeDefnInfo_153));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_1_263, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_6));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_176 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_1_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_1_277, 0) = ((MR_Box) (ItemDeclPragma_176));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_1_277, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_24));
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word ItemImplPragma_178 = ((MR_Word) ((MR_hl_field(3, Item_112, 1))));

                {
                  STATE_VARIABLE_RevImplPragmas_1_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_1_279, 0) = ((MR_Box) (ItemImplPragma_178));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_1_279, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_28));
                }
                switch (MR_tag((MR_Word) ItemImplPragma_178)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_183 = (MR_Word) ((MR_Word) (ItemImplPragma_178));
                      MR_Word Lang_345 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_183, 0))) >> 1)) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_345)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                      STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FCInfo_179 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_178), (MR_Integer) 1));
                      MR_Word Lang_319 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_179, 0))) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_319)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                      STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPEInfo_188 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_178), (MR_Integer) 2));
                      MR_Word Lang_320 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_188, 1))) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_320)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_1_261);
                      STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ItemImplPragma_178, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word TableInfo_195 = ((MR_Word) ((MR_hl_field(3, ItemImplPragma_178, 1))));
                          MR_Word MaybeAttributes_198 = ((MR_Word) ((MR_hl_field(0, TableInfo_195, 2))));
                          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_4_282;
                          MR_Word Var_323 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, 0))) >> 4)) & (MR_Integer) 1);
                          MR_Word Var_324 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, 0))) >> 3)) & (MR_Integer) 1);
                          MR_Word Var_325 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, 0))) >> 2)) & (MR_Integer) 1);
                          MR_Word Var_326 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, 0))) >> 1)) & (MR_Integer) 1);
                          MR_Word Var_327 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, 0))) & (MR_Integer) 1);
                          MR_Word Var_322 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, 0))) >> 5)) & (MR_Integer) 1);

                          {
                            STATE_VARIABLE_ImplicitAvailNeeds_4_282 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_4_282, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 6)) | (((((MR_Unsigned) (Var_322) << 5)) | (((((MR_Unsigned) (Var_323) << 4)) | (((((MR_Unsigned) (Var_324) << 3)) | (((((MR_Unsigned) (Var_325) << 2)) | (((((MR_Unsigned) (Var_326) << 1)) | (MR_Unsigned) (Var_327)))))))))))));
                          }
                          if ((MaybeAttributes_198 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_4_282;
                          else
                          {
                            MR_Word Attributes_201 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_198, 0))));
                            MR_Word StatsAttr_202 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_201, 2))) >> 2)) & (MR_Integer) 1);

                            switch (StatsAttr_202) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_4_282;
                                break;
                              case (MR_Integer) 1:
                                {
                                  STATE_VARIABLE_ImplicitAvailNeeds_1_259 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_1_259, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((((MR_Unsigned) (Var_323) << 4)) | (((((MR_Unsigned) (Var_324) << 3)) | (((((MR_Unsigned) (Var_325) << 2)) | (((((MR_Unsigned) (Var_326) << 1)) | (MR_Unsigned) (Var_327)))))))))))));
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_Specs_1_287 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 16:
              {
                parse_tree__convert_parse_tree__report_forbidden_item_in_src_3_p_0(Item_112, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_1_287);
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
              }
              break;
            case (MR_Integer) 17:
              {
                parse_tree__convert_parse_tree__report_forbidden_item_in_src_3_p_0(Item_112, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_1_287);
                STATE_VARIABLE_RevTypeDefns_1_258 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_262 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_263 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_264 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_266 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_267 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_268 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_1_270 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_1_273 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_1_275 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_1_276 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_1_277 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_1_278 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_1_279 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_1_286 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_1_289 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_1_290 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_1_291 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_1_295 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_1_259 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_1_261 = STATE_VARIABLE_SelfFIMLangs_0_42;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_113;
      next_value_of_STATE_VARIABLE_RevTypeDefns_0_2 = STATE_VARIABLE_RevTypeDefns_1_258;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_4 = STATE_VARIABLE_RevInstDefns_1_262;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_6 = STATE_VARIABLE_RevModeDefns_1_263;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_8 = STATE_VARIABLE_RevTypeClasses_1_264;
      next_value_of_STATE_VARIABLE_RevInstances_0_10 = STATE_VARIABLE_RevInstances_1_266;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_12 = STATE_VARIABLE_RevPredDecls_1_267;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_1_268;
      next_value_of_STATE_VARIABLE_RevClauses_0_16 = STATE_VARIABLE_RevClauses_1_270;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_18 = STATE_VARIABLE_RevForeignProcs_1_273;
      next_value_of_STATE_VARIABLE_RevForeignEnums_0_20 = STATE_VARIABLE_RevForeignEnums_1_275;
      next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_22 = STATE_VARIABLE_RevForeignExportEnums_1_276;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_24 = STATE_VARIABLE_RevDeclPragmas_1_277;
      next_value_of_STATE_VARIABLE_RevDeclMarkers_0_26 = STATE_VARIABLE_RevDeclMarkers_1_278;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_28 = STATE_VARIABLE_RevImplPragmas_1_279;
      next_value_of_STATE_VARIABLE_RevImplMarkers_0_30 = STATE_VARIABLE_RevImplMarkers_1_286;
      next_value_of_STATE_VARIABLE_RevPromises_0_32 = STATE_VARIABLE_RevPromises_1_289;
      next_value_of_STATE_VARIABLE_RevInitialises_0_34 = STATE_VARIABLE_RevInitialises_1_290;
      next_value_of_STATE_VARIABLE_RevFinalises_0_36 = STATE_VARIABLE_RevFinalises_1_291;
      next_value_of_STATE_VARIABLE_RevMutables_0_38 = STATE_VARIABLE_RevMutables_1_295;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40 = STATE_VARIABLE_ImplicitAvailNeeds_1_259;
      next_value_of_STATE_VARIABLE_SelfFIMLangs_0_42 = STATE_VARIABLE_SelfFIMLangs_1_261;
      next_value_of_STATE_VARIABLE_Specs_0_44 = STATE_VARIABLE_Specs_1_287;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTypeDefns_0_2 = next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      STATE_VARIABLE_RevInstDefns_0_4 = next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      STATE_VARIABLE_RevModeDefns_0_6 = next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      STATE_VARIABLE_RevTypeClasses_0_8 = next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      STATE_VARIABLE_RevInstances_0_10 = next_value_of_STATE_VARIABLE_RevInstances_0_10;
      STATE_VARIABLE_RevPredDecls_0_12 = next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      STATE_VARIABLE_RevModeDecls_0_14 = next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      STATE_VARIABLE_RevClauses_0_16 = next_value_of_STATE_VARIABLE_RevClauses_0_16;
      STATE_VARIABLE_RevForeignProcs_0_18 = next_value_of_STATE_VARIABLE_RevForeignProcs_0_18;
      STATE_VARIABLE_RevForeignEnums_0_20 = next_value_of_STATE_VARIABLE_RevForeignEnums_0_20;
      STATE_VARIABLE_RevForeignExportEnums_0_22 = next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_22;
      STATE_VARIABLE_RevDeclPragmas_0_24 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_24;
      STATE_VARIABLE_RevDeclMarkers_0_26 = next_value_of_STATE_VARIABLE_RevDeclMarkers_0_26;
      STATE_VARIABLE_RevImplPragmas_0_28 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_28;
      STATE_VARIABLE_RevImplMarkers_0_30 = next_value_of_STATE_VARIABLE_RevImplMarkers_0_30;
      STATE_VARIABLE_RevPromises_0_32 = next_value_of_STATE_VARIABLE_RevPromises_0_32;
      STATE_VARIABLE_RevInitialises_0_34 = next_value_of_STATE_VARIABLE_RevInitialises_0_34;
      STATE_VARIABLE_RevFinalises_0_36 = next_value_of_STATE_VARIABLE_RevFinalises_0_36;
      STATE_VARIABLE_RevMutables_0_38 = next_value_of_STATE_VARIABLE_RevMutables_0_38;
      STATE_VARIABLE_ImplicitAvailNeeds_0_40 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40;
      STATE_VARIABLE_SelfFIMLangs_0_42 = next_value_of_STATE_VARIABLE_SelfFIMLangs_0_42;
      STATE_VARIABLE_Specs_0_44 = next_value_of_STATE_VARIABLE_Specs_0_44;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_39_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefns_3,
  MR_Word STATE_VARIABLE_RevInstDefns_0_4,
  MR_Word * STATE_VARIABLE_RevInstDefns_5,
  MR_Word STATE_VARIABLE_RevModeDefns_0_6,
  MR_Word * STATE_VARIABLE_RevModeDefns_7,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_8,
  MR_Word * STATE_VARIABLE_RevTypeClasses_9,
  MR_Word STATE_VARIABLE_RevInstances_0_10,
  MR_Word * STATE_VARIABLE_RevInstances_11,
  MR_Word STATE_VARIABLE_RevPredDecls_0_12,
  MR_Word * STATE_VARIABLE_RevPredDecls_13,
  MR_Word STATE_VARIABLE_RevModeDecls_0_14,
  MR_Word * STATE_VARIABLE_RevModeDecls_15,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_16,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_17,
  MR_Word STATE_VARIABLE_RevDeclMarkers_0_18,
  MR_Word * STATE_VARIABLE_RevDeclMarkers_19,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_20,
  MR_Word * STATE_VARIABLE_RevImplPragmas_21,
  MR_Word STATE_VARIABLE_RevImplMarkers_0_22,
  MR_Word * STATE_VARIABLE_RevImplMarkers_23,
  MR_Word STATE_VARIABLE_BadClausePreds_0_24,
  MR_Word * STATE_VARIABLE_BadClausePreds_25,
  MR_Word STATE_VARIABLE_RevPromises_0_26,
  MR_Word * STATE_VARIABLE_RevPromises_27,
  MR_Word STATE_VARIABLE_RevInitialises_0_28,
  MR_Word * STATE_VARIABLE_RevInitialises_29,
  MR_Word STATE_VARIABLE_RevFinalises_0_30,
  MR_Word * STATE_VARIABLE_RevFinalises_31,
  MR_Word STATE_VARIABLE_RevMutables_0_32,
  MR_Word * STATE_VARIABLE_RevMutables_33,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_34,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_35,
  MR_Word STATE_VARIABLE_SelfFIMLangs_0_36,
  MR_Word * STATE_VARIABLE_SelfFIMLangs_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
      *STATE_VARIABLE_SelfFIMLangs_37 = STATE_VARIABLE_SelfFIMLangs_0_36;
      *STATE_VARIABLE_ImplicitAvailNeeds_35 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
      *STATE_VARIABLE_RevMutables_33 = STATE_VARIABLE_RevMutables_0_32;
      *STATE_VARIABLE_RevFinalises_31 = STATE_VARIABLE_RevFinalises_0_30;
      *STATE_VARIABLE_RevInitialises_29 = STATE_VARIABLE_RevInitialises_0_28;
      *STATE_VARIABLE_RevPromises_27 = STATE_VARIABLE_RevPromises_0_26;
      *STATE_VARIABLE_BadClausePreds_25 = STATE_VARIABLE_BadClausePreds_0_24;
      *STATE_VARIABLE_RevImplMarkers_23 = STATE_VARIABLE_RevImplMarkers_0_22;
      *STATE_VARIABLE_RevImplPragmas_21 = STATE_VARIABLE_RevImplPragmas_0_20;
      *STATE_VARIABLE_RevDeclMarkers_19 = STATE_VARIABLE_RevDeclMarkers_0_18;
      *STATE_VARIABLE_RevDeclPragmas_17 = STATE_VARIABLE_RevDeclPragmas_0_16;
      *STATE_VARIABLE_RevModeDecls_15 = STATE_VARIABLE_RevModeDecls_0_14;
      *STATE_VARIABLE_RevPredDecls_13 = STATE_VARIABLE_RevPredDecls_0_12;
      *STATE_VARIABLE_RevInstances_11 = STATE_VARIABLE_RevInstances_0_10;
      *STATE_VARIABLE_RevTypeClasses_9 = STATE_VARIABLE_RevTypeClasses_0_8;
      *STATE_VARIABLE_RevModeDefns_7 = STATE_VARIABLE_RevModeDefns_0_6;
      *STATE_VARIABLE_RevInstDefns_5 = STATE_VARIABLE_RevInstDefns_0_4;
      *STATE_VARIABLE_RevTypeDefns_3 = STATE_VARIABLE_RevTypeDefns_0_2;
    }
    else
    {
      MR_Word Item_97 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_98 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevTypeDefns_1_234;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_1_235;
      MR_Word STATE_VARIABLE_SelfFIMLangs_1_237;
      MR_Word STATE_VARIABLE_RevInstDefns_1_238;
      MR_Word STATE_VARIABLE_RevModeDefns_1_239;
      MR_Word STATE_VARIABLE_RevTypeClasses_1_240;
      MR_Word STATE_VARIABLE_Specs_1_294;
      MR_Word STATE_VARIABLE_RevInstances_1_295;
      MR_Word STATE_VARIABLE_RevPredDecls_1_296;
      MR_Word STATE_VARIABLE_RevModeDecls_1_297;
      MR_Word STATE_VARIABLE_BadClausePreds_1_334;
      MR_Word STATE_VARIABLE_RevDeclPragmas_1_338;
      MR_Word STATE_VARIABLE_RevDeclMarkers_1_339;
      MR_Word STATE_VARIABLE_RevImplPragmas_1_341;
      MR_Word STATE_VARIABLE_RevImplMarkers_1_348;
      MR_Word STATE_VARIABLE_RevPromises_1_351;
      MR_Word STATE_VARIABLE_RevInitialises_1_354;
      MR_Word STATE_VARIABLE_RevFinalises_1_356;
      MR_Word STATE_VARIABLE_RevMutables_1_358;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevInstances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclMarkers_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevImplMarkers_0_22;
      MR_Word next_value_of_STATE_VARIABLE_BadClausePreds_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevPromises_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevInitialises_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevFinalises_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_32;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_34;
      MR_Word next_value_of_STATE_VARIABLE_SelfFIMLangs_0_36;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_38;

      switch (MR_tag((MR_Word) Item_97)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_146 = (MR_Word) ((MR_Word) (Item_97));
            MR_Word PredOrFunc_147 = ((MR_Unsigned) ((MR_hl_field(0, ItemClauseInfo_146, 0))) & (MR_Integer) 1);
            MR_Word PredSymName_148 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_146, 1))));
            MR_Word ArgTerms_149 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_146, 2))));
            MR_Word Context_152 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_146, 5))));
            MR_Word PredFormArity_154;
            MR_Word UserArity_155;
            MR_Word PredPfNameArity_156;
            MR_Word Pieces_157;
            MR_Word Var_302;
            MR_Word Var_303;
            MR_Word Var_308;
            MR_Word Var_309;
            MR_Word Var_312;
            MR_Word Var_313;
            MR_Word Var_321;
            MR_Word Var_322;
            MR_Word Spec_379;

            PredFormArity_154 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[7]), ArgTerms_149);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_147, &UserArity_155, PredFormArity_154);
            {
              PredPfNameArity_156 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredPfNameArity_156, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_147));
              MR_hl_field(0, PredPfNameArity_156, 1) = ((MR_Box) (PredSymName_148));
              MR_hl_field(0, PredPfNameArity_156, 2) = ((MR_Box) (UserArity_155));
            }
            Var_303 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[111])));
            {
              Var_313 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_313, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(3, Var_313, 1) = ((MR_Box) (PredPfNameArity_156));
            }
            {
              Var_312 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_312, 0) = ((MR_Box) (Var_313));
              MR_hl_field(1, Var_312, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[116])));
            }
            {
              Var_309 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_309, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[112])));
              MR_hl_field(1, Var_309, 1) = ((MR_Box) (Var_312));
            }
            Var_322 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[118])));
            Var_321 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_322, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])));
            Var_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_309, Var_321);
            Var_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_303, Var_308);
            Pieces_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[109])), Var_302);
            {
              Spec_379 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_379, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
              MR_hl_field(0, Spec_379, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_379, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_379, 3) = ((MR_Box) (Context_152));
              MR_hl_field(0, Spec_379, 4) = ((MR_Box) (Pieces_157));
            }
            {
              STATE_VARIABLE_Specs_1_294 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_294, 0) = ((MR_Box) (Spec_379));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_294, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
            }
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_156)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_1_334);
            STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
            STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
            STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
            STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDeclInfo_144 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevPredDecls_1_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_1_296, 0) = ((MR_Box) (ItemPredDeclInfo_144));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_1_296, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_12));
            }
            STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
            STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
            STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
            STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
            STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDeclInfo_145 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_1_297 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_297, 0) = ((MR_Box) (ItemModeDeclInfo_145));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_297, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
            STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
            STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
            STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
            STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_97, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignProcInfo_158 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));
                MR_Word SymName_160;
                MR_Word Vars_161;
                MR_Integer Arity_167;
                MR_Word Var_336;
                MR_Word PredOrFunc_380;
                MR_Word UserArity_381;
                MR_Word PredPfNameArity_382;

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                SymName_160 = ((MR_Word) ((MR_hl_field(0, ItemForeignProcInfo_158, 1))));
                PredOrFunc_380 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignProcInfo_158, 2))) & (MR_Integer) 1);
                Vars_161 = ((MR_Word) ((MR_hl_field(0, ItemForeignProcInfo_158, 3))));
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars_161, &Arity_167);
                Var_336 = (MR_Word) (Arity_167);
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_380, &UserArity_381, Var_336);
                {
                  PredPfNameArity_382 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredPfNameArity_382, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_380));
                  MR_hl_field(0, PredPfNameArity_382, 1) = ((MR_Box) (SymName_160));
                  MR_hl_field(0, PredPfNameArity_382, 2) = ((MR_Box) (UserArity_381));
                }
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_382)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_1_334);
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_169 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                {
                  STATE_VARIABLE_RevDeclMarkers_1_339 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_339, 0) = ((MR_Box) (ItemDeclMarker_169));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_339, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_18));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemImplMarker_187 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                {
                  STATE_VARIABLE_RevImplMarkers_1_348 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_348, 0) = ((MR_Box) (ItemImplMarker_187));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_348, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_22));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromiseInfo_189 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_189, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_1_235);
                {
                  STATE_VARIABLE_RevPromises_1_351 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_1_351, 0) = ((MR_Box) (ItemPromiseInfo_189));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_1_351, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_26));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeclassInfo_136 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_1_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_1_240, 0) = ((MR_Box) (ItemTypeclassInfo_136));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_1_240, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_8));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstanceInfo_137 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));
                MR_Word InstanceBody_138 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_137, 4))));

                if ((InstanceBody_138 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                  STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
                }
                else
                {
                  MR_Word InstanceMethods_139 = ((MR_Word) ((MR_hl_field(1, InstanceBody_138, 0))));
                  MR_Word AlwaysPieces_140;
                  MR_Word Msg_142;
                  MR_Word Spec_143;
                  MR_Word Var_247;
                  MR_Word Var_248;
                  MR_Word Var_282;
                  MR_Word Var_283;
                  MR_Word Var_284;
                  MR_Word Var_292;
                  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_1_235;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[15]), InstanceMethods_139, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_34)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_1_235);
                  STATE_VARIABLE_ImplicitAvailNeeds_1_235 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_1_235));
                  Var_248 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[122])));
                  Var_247 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_248, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])));
                  AlwaysPieces_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[120])), Var_247);
                  Var_282 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_137, 7))));
                  {
                    Var_284 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_284, 0) = ((MR_Box) (AlwaysPieces_140));
                  }
                  {
                    Var_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_283, 0) = ((MR_Box) (Var_284));
                    MR_hl_field(1, Var_283, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[150])));
                  }
                  {
                    Msg_142 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Msg_142, 0) = ((MR_Box) (Var_282));
                    MR_hl_field(2, Msg_142, 1) = ((MR_Box) (Var_283));
                  }
                  {
                    Var_292 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_292, 0) = ((MR_Box) (Msg_142));
                    MR_hl_field(1, Var_292, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_143 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Spec_143, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
                    MR_hl_field(2, Spec_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, Spec_143, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                    MR_hl_field(2, Spec_143, 3) = ((MR_Box) (Var_292));
                  }
                  {
                    STATE_VARIABLE_Specs_1_294 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_1_294, 0) = ((MR_Box) (Spec_143));
                    MR_hl_field(1, STATE_VARIABLE_Specs_1_294, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                  }
                }
                {
                  STATE_VARIABLE_RevInstances_1_295 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_1_295, 0) = ((MR_Box) (ItemInstanceInfo_137));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_1_295, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_10));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemInitialiseInfo_192 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                {
                  STATE_VARIABLE_RevInitialises_1_354 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_1_354, 0) = ((MR_Box) (ItemInitialiseInfo_192));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_1_354, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_28));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemFinaliseInfo_193 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                {
                  STATE_VARIABLE_RevFinalises_1_356 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_1_356, 0) = ((MR_Box) (ItemFinaliseInfo_193));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_1_356, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_30));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemMutableInfo_194 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                {
                  STATE_VARIABLE_RevMutables_1_358 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_1_358, 0) = ((MR_Box) (ItemMutableInfo_194));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_1_358, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_32));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_118 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));
                MR_Word TypeDefn_121;

                {
                  STATE_VARIABLE_RevTypeDefns_1_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_1_234, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_1_234, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefns_0_2));
                }
                TypeDefn_121 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_118, 2))));
                switch (MR_tag((MR_Word) TypeDefn_121)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                      STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                      STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word DetailsSolver_129 = (MR_Word) (MR_body((MR_Word) (TypeDefn_121), (MR_Integer) 2));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_129, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_1_235);
                      STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_121, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word DetailsForeign_130 = ((MR_Word) ((MR_hl_field(3, TypeDefn_121, 1))));
                          MR_Word ForeignType_131 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_130, 0))));
                          MR_Word Var_236;

                          Var_236 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_131);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_236)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_1_237);
                          STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefnInfo_134 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                {
                  STATE_VARIABLE_RevInstDefns_1_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_1_238, 0) = ((MR_Box) (ItemInstDefnInfo_134));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_1_238, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_4));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefnInfo_135 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                {
                  STATE_VARIABLE_RevModeDefns_1_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_1_239, 0) = ((MR_Box) (ItemModeDefnInfo_135));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_1_239, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_6));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_168 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_1_338 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_1_338, 0) = ((MR_Box) (ItemDeclPragma_168));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_1_338, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_16));
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_1_294 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word ItemImplPragma_170 = ((MR_Word) ((MR_hl_field(3, Item_97, 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                {
                  STATE_VARIABLE_RevImplPragmas_1_341 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_1_341, 0) = ((MR_Box) (ItemImplPragma_170));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_1_341, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_20));
                }
                switch (MR_tag((MR_Word) ItemImplPragma_170)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ItemImplPragma_170, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ExternalProc_171 = ((MR_Word) ((MR_hl_field(3, ItemImplPragma_170, 1))));
                          MR_Word PredPfNameArity_383 = ((MR_Word) ((MR_hl_field(0, ExternalProc_171, 0))));

                          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_383)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_1_334);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word FactTable_175 = ((MR_Word) ((MR_hl_field(3, ItemImplPragma_170, 1))));
                          MR_Word PredSpec_176 = ((MR_Word) ((MR_hl_field(0, FactTable_175, 0))));
                          MR_Word PFU_180 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_176, 0))) & (MR_Integer) 3);
                          MR_Word UserArity_387 = ((MR_Word) ((MR_hl_field(0, PredSpec_176, 2))));
                          MR_Word SymName_389 = ((MR_Word) ((MR_hl_field(0, PredSpec_176, 1))));

                          switch (PFU_180) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                MR_Word PredPfNameArity_385;

                                {
                                  PredPfNameArity_385 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, PredPfNameArity_385, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                                  MR_hl_field(0, PredPfNameArity_385, 1) = ((MR_Box) (SymName_389));
                                  MR_hl_field(0, PredPfNameArity_385, 2) = ((MR_Box) (UserArity_387));
                                }
                                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_385)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_1_334);
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                MR_Word PredPfNameArity_384;

                                {
                                  PredPfNameArity_384 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, PredPfNameArity_384, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                  MR_hl_field(0, PredPfNameArity_384, 1) = ((MR_Box) (SymName_389));
                                  MR_hl_field(0, PredPfNameArity_384, 2) = ((MR_Box) (UserArity_387));
                                }
                                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_384)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_1_334);
                              }
                              break;
                            case (MR_Integer) 2:
                              STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 3:
                        STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 16:
              {
                parse_tree__convert_parse_tree__report_forbidden_item_in_src_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 17:
              {
                parse_tree__convert_parse_tree__report_forbidden_item_in_src_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_1_294);
                STATE_VARIABLE_RevTypeDefns_1_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_1_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_1_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_1_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_1_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_1_296 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_297 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_1_338 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_1_339 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_1_341 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_1_348 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_1_334 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_1_351 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_1_354 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_1_356 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_1_358 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_1_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_1_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_98;
      next_value_of_STATE_VARIABLE_RevTypeDefns_0_2 = STATE_VARIABLE_RevTypeDefns_1_234;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_4 = STATE_VARIABLE_RevInstDefns_1_238;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_6 = STATE_VARIABLE_RevModeDefns_1_239;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_8 = STATE_VARIABLE_RevTypeClasses_1_240;
      next_value_of_STATE_VARIABLE_RevInstances_0_10 = STATE_VARIABLE_RevInstances_1_295;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_12 = STATE_VARIABLE_RevPredDecls_1_296;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_1_297;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16 = STATE_VARIABLE_RevDeclPragmas_1_338;
      next_value_of_STATE_VARIABLE_RevDeclMarkers_0_18 = STATE_VARIABLE_RevDeclMarkers_1_339;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_20 = STATE_VARIABLE_RevImplPragmas_1_341;
      next_value_of_STATE_VARIABLE_RevImplMarkers_0_22 = STATE_VARIABLE_RevImplMarkers_1_348;
      next_value_of_STATE_VARIABLE_BadClausePreds_0_24 = STATE_VARIABLE_BadClausePreds_1_334;
      next_value_of_STATE_VARIABLE_RevPromises_0_26 = STATE_VARIABLE_RevPromises_1_351;
      next_value_of_STATE_VARIABLE_RevInitialises_0_28 = STATE_VARIABLE_RevInitialises_1_354;
      next_value_of_STATE_VARIABLE_RevFinalises_0_30 = STATE_VARIABLE_RevFinalises_1_356;
      next_value_of_STATE_VARIABLE_RevMutables_0_32 = STATE_VARIABLE_RevMutables_1_358;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_34 = STATE_VARIABLE_ImplicitAvailNeeds_1_235;
      next_value_of_STATE_VARIABLE_SelfFIMLangs_0_36 = STATE_VARIABLE_SelfFIMLangs_1_237;
      next_value_of_STATE_VARIABLE_Specs_0_38 = STATE_VARIABLE_Specs_1_294;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTypeDefns_0_2 = next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      STATE_VARIABLE_RevInstDefns_0_4 = next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      STATE_VARIABLE_RevModeDefns_0_6 = next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      STATE_VARIABLE_RevTypeClasses_0_8 = next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      STATE_VARIABLE_RevInstances_0_10 = next_value_of_STATE_VARIABLE_RevInstances_0_10;
      STATE_VARIABLE_RevPredDecls_0_12 = next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      STATE_VARIABLE_RevModeDecls_0_14 = next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      STATE_VARIABLE_RevDeclPragmas_0_16 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16;
      STATE_VARIABLE_RevDeclMarkers_0_18 = next_value_of_STATE_VARIABLE_RevDeclMarkers_0_18;
      STATE_VARIABLE_RevImplPragmas_0_20 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_20;
      STATE_VARIABLE_RevImplMarkers_0_22 = next_value_of_STATE_VARIABLE_RevImplMarkers_0_22;
      STATE_VARIABLE_BadClausePreds_0_24 = next_value_of_STATE_VARIABLE_BadClausePreds_0_24;
      STATE_VARIABLE_RevPromises_0_26 = next_value_of_STATE_VARIABLE_RevPromises_0_26;
      STATE_VARIABLE_RevInitialises_0_28 = next_value_of_STATE_VARIABLE_RevInitialises_0_28;
      STATE_VARIABLE_RevFinalises_0_30 = next_value_of_STATE_VARIABLE_RevFinalises_0_30;
      STATE_VARIABLE_RevMutables_0_32 = next_value_of_STATE_VARIABLE_RevMutables_0_32;
      STATE_VARIABLE_ImplicitAvailNeeds_0_34 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_34;
      STATE_VARIABLE_SelfFIMLangs_0_36 = next_value_of_STATE_VARIABLE_SelfFIMLangs_0_36;
      STATE_VARIABLE_Specs_0_38 = next_value_of_STATE_VARIABLE_Specs_0_38;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__report_forbidden_item_in_src_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  MR_Word Pieces_6;
  MR_Word Context_7;
  MR_Word Spec_8;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;

  Var_23 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_4);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[101])));
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[148])), Var_22);
  Var_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_17);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])));
  Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[146])), Var_15);
  Context_7 = parse_tree__prog_item__get_item_context_1_f_0(Item_4);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_forbidden_item_in_src\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_23;
  MR_Word Var_24;

  Var_8 = parse_tree__prog_item__get_item_context_1_f_0(Item_4);
  Var_9 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_4);
  Var_17 = parse_tree__error_spec__color_as_subject_1_f_0(Var_9);
  Var_24 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[118])));
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[14])));
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[114])), Var_23);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_18);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[109])), Var_16);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Var_8));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_7 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromiseInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(0, ItemPromiseInfo_4, 1))));

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(
  MR_Word DetailsSolver_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  MR_Word SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_4, 0))));
  MR_Word MutableItems_11 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_6, 3))));
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_13;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[14]), MutableItems_11, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(
  MR_Word IntInstances0_4,
  MR_Word * IntInstances_5,
  MR_Word * ImpInstances_6)
{
  MR_Word IntInstanceCord_7;
  MR_Word ImpInstanceCord_8;
  MR_Word Var_9;
  MR_Word Var_10;

  Var_9 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
  Var_10 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
  parse_tree__convert_parse_tree__split_concrete_int_instances_acc_5_p_0(IntInstances0_4, Var_9, &IntInstanceCord_7, Var_10, &ImpInstanceCord_8);
  *IntInstances_5 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstanceCord_7);
  *ImpInstances_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstanceCord_8);
}

static void MR_CALL 
parse_tree__convert_parse_tree__split_concrete_int_instances_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInstanceCord_0_2,
  MR_Word * STATE_VARIABLE_IntInstanceCord_3,
  MR_Word STATE_VARIABLE_ImpInstanceCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInstanceCord_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpInstanceCord_5 = STATE_VARIABLE_ImpInstanceCord_0_4;
      *STATE_VARIABLE_IntInstanceCord_3 = STATE_VARIABLE_IntInstanceCord_0_2;
    }
    else
    {
      MR_Word IntInstance_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word IntInstances_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Body_16 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 4))));
      MR_Word STATE_VARIABLE_IntInstanceCord_1_24;
      MR_Word STATE_VARIABLE_ImpInstanceCord_1_25;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 0))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 2))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 3))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 5))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 6))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 7))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, 8))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInstanceCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4;

      if ((Body_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (IntInstance_12)), STATE_VARIABLE_IntInstanceCord_0_2, &STATE_VARIABLE_IntInstanceCord_1_24);
        STATE_VARIABLE_ImpInstanceCord_1_25 = STATE_VARIABLE_ImpInstanceCord_0_4;
      }
      else
      {
        MR_Word AbstractIntInstance_18;

        {
          AbstractIntInstance_18 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AbstractIntInstance_18, 0) = ((MR_Box) (Var_26));
          MR_hl_field(0, AbstractIntInstance_18, 1) = ((MR_Box) (Var_27));
          MR_hl_field(0, AbstractIntInstance_18, 2) = ((MR_Box) (Var_28));
          MR_hl_field(0, AbstractIntInstance_18, 3) = ((MR_Box) (Var_29));
          MR_hl_field(0, AbstractIntInstance_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, AbstractIntInstance_18, 5) = ((MR_Box) (Var_30));
          MR_hl_field(0, AbstractIntInstance_18, 6) = ((MR_Box) (Var_31));
          MR_hl_field(0, AbstractIntInstance_18, 7) = ((MR_Box) (Var_32));
          MR_hl_field(0, AbstractIntInstance_18, 8) = ((MR_Box) (Var_33));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractIntInstance_18)), STATE_VARIABLE_IntInstanceCord_0_2, &STATE_VARIABLE_IntInstanceCord_1_24);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (IntInstance_12)), STATE_VARIABLE_ImpInstanceCord_0_4, &STATE_VARIABLE_ImpInstanceCord_1_25);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = IntInstances_13;
      next_value_of_STATE_VARIABLE_IntInstanceCord_0_2 = STATE_VARIABLE_IntInstanceCord_1_24;
      next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4 = STATE_VARIABLE_ImpInstanceCord_1_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInstanceCord_0_2 = next_value_of_STATE_VARIABLE_IntInstanceCord_0_2;
      STATE_VARIABLE_ImpInstanceCord_0_4 = next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1331__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(
  MR_Word ParseTreeOpt_5,
  MR_Word * ParseTreeTransOpt_6,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 0))));
  MR_Word OptFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeOpt_5, 1))) & (MR_Integer) 1);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 2))));
  MR_Word Uses_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 3))));
  MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 4))));
  MR_Word Items_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 5))));
  MR_Word TermInfos0_22;
  MR_Word Term2Infos0_23;
  MR_Word Exceptions0_24;
  MR_Word Trailings0_25;
  MR_Word MMTablings0_26;
  MR_Word Sharings0_27;
  MR_Word Reuses0_28;
  MR_Word TermInfos_29;
  MR_Word Term2Infos_30;
  MR_Word Exceptions_31;
  MR_Word Trailings_32;
  MR_Word MMTablings_33;
  MR_Word Sharings_34;
  MR_Word Reuses_35;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_Specs_1_59;
  MR_Word STATE_VARIABLE_Specs_2_75;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (OptFileKind_9));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4", (MR_String) "trying to convert non-ofk_trans_opt parse_tree_opt to parse_tree_trans_opt");
  if ((Uses_11 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_1_59 = STATE_VARIABLE_Specs_0_36;
  else
  {
    MR_Word FirstUse_14 = ((MR_Word) ((MR_hl_field(1, Uses_11, 0))));
    MR_Word UseSpec_17;
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, FirstUse_14, 1))));

    {
      UseSpec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UseSpec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4"));
      MR_hl_field(0, UseSpec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, UseSpec_17, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, UseSpec_17, 3) = ((MR_Box) (Var_58));
      MR_hl_field(0, UseSpec_17, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[39])));
    }
    {
      STATE_VARIABLE_Specs_1_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_59, 0) = ((MR_Box) (UseSpec_17));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
    }
  }
  if ((FIMs_12 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_2_75 = STATE_VARIABLE_Specs_1_59;
  else
  {
    MR_Word FirstFIM_18 = ((MR_Word) ((MR_hl_field(1, FIMs_12, 0))));
    MR_Word FIMSpec_21;
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, FirstFIM_18, 2))));

    {
      FIMSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FIMSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4"));
      MR_hl_field(0, FIMSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, FIMSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, FIMSpec_21, 3) = ((MR_Box) (Var_74));
      MR_hl_field(0, FIMSpec_21, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[40])));
    }
    {
      STATE_VARIABLE_Specs_2_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_2_75, 0) = ((MR_Box) (FIMSpec_21));
      MR_hl_field(1, STATE_VARIABLE_Specs_2_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_59));
    }
  }
  parse_tree__convert_parse_tree__classify_trans_opt_items_17_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_22, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_23, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_24, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_25, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_26, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_27, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_28, STATE_VARIABLE_Specs_2_75, STATE_VARIABLE_Specs_37);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), TermInfos0_22, &TermInfos_29);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos0_23, &Term2Infos_30);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions0_24, &Exceptions_31);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Trailings0_25, &Trailings_32);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings0_26, &MMTablings_33);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings0_27, &Sharings_34);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses0_28, &Reuses_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeTransOpt_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (TermInfos_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Term2Infos_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Exceptions_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Trailings_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (MMTablings_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (Sharings_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Reuses_35));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_trans_opt_items_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TermInfos_0_2,
  MR_Word * STATE_VARIABLE_TermInfos_3,
  MR_Word STATE_VARIABLE_Term2Infos_0_4,
  MR_Word * STATE_VARIABLE_Term2Infos_5,
  MR_Word STATE_VARIABLE_Exceptions_0_6,
  MR_Word * STATE_VARIABLE_Exceptions_7,
  MR_Word STATE_VARIABLE_Trailings_0_8,
  MR_Word * STATE_VARIABLE_Trailings_9,
  MR_Word STATE_VARIABLE_MMTablings_0_10,
  MR_Word * STATE_VARIABLE_MMTablings_11,
  MR_Word STATE_VARIABLE_Sharings_0_12,
  MR_Word * STATE_VARIABLE_Sharings_13,
  MR_Word STATE_VARIABLE_Reuses_0_14,
  MR_Word * STATE_VARIABLE_Reuses_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      *STATE_VARIABLE_Reuses_15 = STATE_VARIABLE_Reuses_0_14;
      *STATE_VARIABLE_Sharings_13 = STATE_VARIABLE_Sharings_0_12;
      *STATE_VARIABLE_MMTablings_11 = STATE_VARIABLE_MMTablings_0_10;
      *STATE_VARIABLE_Trailings_9 = STATE_VARIABLE_Trailings_0_8;
      *STATE_VARIABLE_Exceptions_7 = STATE_VARIABLE_Exceptions_0_6;
      *STATE_VARIABLE_Term2Infos_5 = STATE_VARIABLE_Term2Infos_0_4;
      *STATE_VARIABLE_TermInfos_3 = STATE_VARIABLE_TermInfos_0_2;
    }
    else
    {
      MR_Word Item_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TermInfos_1_105;
      MR_Word STATE_VARIABLE_Term2Infos_1_106;
      MR_Word STATE_VARIABLE_Sharings_1_107;
      MR_Word STATE_VARIABLE_Reuses_1_108;
      MR_Word STATE_VARIABLE_Specs_1_125;
      MR_Word STATE_VARIABLE_Exceptions_1_126;
      MR_Word STATE_VARIABLE_Trailings_1_127;
      MR_Word STATE_VARIABLE_MMTablings_1_128;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TermInfos_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Term2Infos_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Exceptions_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Trailings_0_8;
      MR_Word next_value_of_STATE_VARIABLE_MMTablings_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Sharings_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Reuses_0_14;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_16;

      switch (MR_tag((MR_Word) Item_42)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_161;
            MR_Word Pieces_177;
            MR_Word Spec_178;

            Var_151 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_42);
            Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
            Pieces_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])), Var_150);
            Var_161 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
            {
              Spec_178 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_178, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
              MR_hl_field(0, Spec_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_178, 3) = ((MR_Box) (Var_161));
              MR_hl_field(0, Spec_178, 4) = ((MR_Box) (Pieces_177));
            }
            {
              STATE_VARIABLE_Specs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 0) = ((MR_Box) (Spec_178));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
            }
            STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
            STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
            STATE_VARIABLE_Exceptions_1_126 = STATE_VARIABLE_Exceptions_0_6;
            STATE_VARIABLE_Trailings_1_127 = STATE_VARIABLE_Trailings_0_8;
            STATE_VARIABLE_MMTablings_1_128 = STATE_VARIABLE_MMTablings_0_10;
            STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
            STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_42, 0))))) {
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
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 15:
            case (MR_Integer) 17:
              {
                MR_Word Var_150;
                MR_Word Var_151;
                MR_Word Var_161;
                MR_Word Pieces_177;
                MR_Word Spec_178;

                Var_151 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_42);
                Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                Pieces_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])), Var_150);
                Var_161 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                {
                  Spec_178 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_178, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                  MR_hl_field(0, Spec_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_178, 3) = ((MR_Box) (Var_161));
                  MR_hl_field(0, Spec_178, 4) = ((MR_Box) (Pieces_177));
                }
                {
                  STATE_VARIABLE_Specs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 0) = ((MR_Box) (Spec_178));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                }
                STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Exceptions_1_126 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_1_127 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_1_128 = STATE_VARIABLE_MMTablings_0_10;
                STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word DeclPragma_52 = ((MR_Word) ((MR_hl_field(3, Item_42, 1))));

                switch (MR_tag((MR_Word) DeclPragma_52)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Pieces_63;
                      MR_Word Spec_64;
                      MR_Word Var_113;
                      MR_Word Var_114;
                      MR_Word Var_124;

                      Var_114 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_42);
                      Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                      Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])), Var_113);
                      Var_124 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Var_124));
                        MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
                      }
                      {
                        STATE_VARIABLE_Specs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 0) = ((MR_Box) (Spec_64));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                      }
                      STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                      STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                      STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                      STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_52, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          MR_Word Pieces_63;
                          MR_Word Spec_64;
                          MR_Word Var_113;
                          MR_Word Var_114;
                          MR_Word Var_124;

                          Var_114 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_42);
                          Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                          Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])), Var_113);
                          Var_124 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                          {
                            Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                            MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                            MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Var_124));
                            MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
                          }
                          {
                            STATE_VARIABLE_Specs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 0) = ((MR_Box) (Spec_64));
                            MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                          }
                          STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Term_53 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, 1))));

                          {
                            STATE_VARIABLE_TermInfos_1_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_1_105, 0) = ((MR_Box) (Term_53));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_1_105, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_2));
                          }
                          STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Term2_54 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, 1))));

                          {
                            STATE_VARIABLE_Term2Infos_1_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_1_106, 0) = ((MR_Box) (Term2_54));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_1_106, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_4));
                          }
                          STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Sharing_55 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, 1))));

                          {
                            STATE_VARIABLE_Sharings_1_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_1_107, 0) = ((MR_Box) (Sharing_55));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_1_107, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_12));
                          }
                          STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Reuse_56 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, 1))));

                          {
                            STATE_VARIABLE_Reuses_1_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_1_108, 0) = ((MR_Box) (Reuse_56));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_1_108, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_14));
                          }
                          STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_Exceptions_1_126 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_1_127 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_1_128 = STATE_VARIABLE_MMTablings_0_10;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word GenPragma_65 = ((MR_Word) ((MR_hl_field(3, Item_42, 1))));

                switch (MR_tag((MR_Word) GenPragma_65)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_133;
                      MR_Word Var_134;
                      MR_Word Var_144;
                      MR_Word Pieces_171;
                      MR_Word Spec_172;

                      Var_134 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_42);
                      Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                      Pieces_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])), Var_133);
                      Var_144 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_172 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_172, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(0, Spec_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_172, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_172, 3) = ((MR_Box) (Var_144));
                        MR_hl_field(0, Spec_172, 4) = ((MR_Box) (Pieces_171));
                      }
                      {
                        STATE_VARIABLE_Specs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 0) = ((MR_Box) (Spec_172));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                      }
                      STATE_VARIABLE_Exceptions_1_126 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_Trailings_1_127 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_MMTablings_1_128 = STATE_VARIABLE_MMTablings_0_10;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_66 = (MR_Word) (MR_body((MR_Word) (GenPragma_65), (MR_Integer) 1));

                      {
                        STATE_VARIABLE_Exceptions_1_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_1_126, 0) = ((MR_Box) (Exception_66));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_1_126, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_6));
                      }
                      STATE_VARIABLE_Trailings_1_127 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_MMTablings_1_128 = STATE_VARIABLE_MMTablings_0_10;
                      STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_67 = (MR_Word) (MR_body((MR_Word) (GenPragma_65), (MR_Integer) 2));

                      {
                        STATE_VARIABLE_Trailings_1_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_1_127, 0) = ((MR_Box) (Trailing_67));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_1_127, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_8));
                      }
                      STATE_VARIABLE_Exceptions_1_126 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_MMTablings_1_128 = STATE_VARIABLE_MMTablings_0_10;
                      STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_68 = (MR_Word) (MR_body((MR_Word) (GenPragma_65), (MR_Integer) 3));

                      {
                        STATE_VARIABLE_MMTablings_1_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_1_128, 0) = ((MR_Box) (MMTabling_68));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_1_128, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_10));
                      }
                      STATE_VARIABLE_Exceptions_1_126 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_Trailings_1_127 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_Specs_1_125 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                }
                STATE_VARIABLE_TermInfos_1_105 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_1_106 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Sharings_1_107 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_1_108 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_43;
      next_value_of_STATE_VARIABLE_TermInfos_0_2 = STATE_VARIABLE_TermInfos_1_105;
      next_value_of_STATE_VARIABLE_Term2Infos_0_4 = STATE_VARIABLE_Term2Infos_1_106;
      next_value_of_STATE_VARIABLE_Exceptions_0_6 = STATE_VARIABLE_Exceptions_1_126;
      next_value_of_STATE_VARIABLE_Trailings_0_8 = STATE_VARIABLE_Trailings_1_127;
      next_value_of_STATE_VARIABLE_MMTablings_0_10 = STATE_VARIABLE_MMTablings_1_128;
      next_value_of_STATE_VARIABLE_Sharings_0_12 = STATE_VARIABLE_Sharings_1_107;
      next_value_of_STATE_VARIABLE_Reuses_0_14 = STATE_VARIABLE_Reuses_1_108;
      next_value_of_STATE_VARIABLE_Specs_0_16 = STATE_VARIABLE_Specs_1_125;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TermInfos_0_2 = next_value_of_STATE_VARIABLE_TermInfos_0_2;
      STATE_VARIABLE_Term2Infos_0_4 = next_value_of_STATE_VARIABLE_Term2Infos_0_4;
      STATE_VARIABLE_Exceptions_0_6 = next_value_of_STATE_VARIABLE_Exceptions_0_6;
      STATE_VARIABLE_Trailings_0_8 = next_value_of_STATE_VARIABLE_Trailings_0_8;
      STATE_VARIABLE_MMTablings_0_10 = next_value_of_STATE_VARIABLE_MMTablings_0_10;
      STATE_VARIABLE_Sharings_0_12 = next_value_of_STATE_VARIABLE_Sharings_0_12;
      STATE_VARIABLE_Reuses_0_14 = next_value_of_STATE_VARIABLE_Reuses_0_14;
      STATE_VARIABLE_Specs_0_16 = next_value_of_STATE_VARIABLE_Specs_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Clause_4;

  parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Clause_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Clause_4));
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__1026__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(
  MR_Word ParseTreeOpt_5,
  MR_Word * ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 0))));
  MR_Word OptFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeOpt_5, 1))) & (MR_Integer) 1);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 2))));
  MR_Word Uses_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 3))));
  MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 4))));
  MR_Word Items_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, 5))));
  MR_Word UseMap_14;
  MR_Word FIMSpecs_15;
  MR_Word TypeDefns0_16;
  MR_Word ForeignEnums0_17;
  MR_Word InstDefns0_18;
  MR_Word ModeDefns0_19;
  MR_Word TypeClasses0_20;
  MR_Word Instances0_21;
  MR_Word PredDecls0_22;
  MR_Word RevModeDecls_23;
  MR_Word RevClauses0_24;
  MR_Word RevForeignProcs_25;
  MR_Word Promises0_26;
  MR_Word DeclMarkers0_27;
  MR_Word ImplMarkers0_28;
  MR_Word TypeSpecs0_29;
  MR_Word UnusedArgs0_30;
  MR_Word TermInfos0_31;
  MR_Word Term2Infos0_32;
  MR_Word Exceptions0_33;
  MR_Word Trailings0_34;
  MR_Word MMTablings0_35;
  MR_Word Sharings0_36;
  MR_Word Reuses0_37;
  MR_Word TypeDefns_38;
  MR_Word ForeignEnums_39;
  MR_Word InstDefns_40;
  MR_Word ModeDefns_41;
  MR_Word TypeClasses_42;
  MR_Word Instances_43;
  MR_Word PredDecls_44;
  MR_Word ModeDecls_45;
  MR_Word Clauses0_46;
  MR_Word ForeignProcs_47;
  MR_Word Promises_48;
  MR_Word DeclMarkers_49;
  MR_Word ImplMarkers_50;
  MR_Word TypeSpecs_51;
  MR_Word UnusedArgs_52;
  MR_Word TermInfos_53;
  MR_Word Term2Infos_54;
  MR_Word Exceptions_55;
  MR_Word Trailings_56;
  MR_Word MMTablings_57;
  MR_Word Sharings_58;
  MR_Word Reuses_59;
  MR_Word Clauses_60;
  MR_Word Var_63;
  MR_Word Var_69;
  MR_Word Var_70;

  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (OptFileKind_9));
    MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_plain_opt\'/4", (MR_String) "trying to convert non-ofk_plain_opt parse_tree_opt to parse_tree_plain_opt");
  Var_69 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(Uses_11, Var_69, &UseMap_14);
  Var_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[12]), FIMs_12);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_70, &FIMSpecs_15);
  parse_tree__convert_parse_tree__classify_plain_opt_items_47_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TypeDefns0_16, (MR_Word) ((MR_Unsigned) 0U), &ForeignEnums0_17, (MR_Word) ((MR_Unsigned) 0U), &InstDefns0_18, (MR_Word) ((MR_Unsigned) 0U), &ModeDefns0_19, (MR_Word) ((MR_Unsigned) 0U), &TypeClasses0_20, (MR_Word) ((MR_Unsigned) 0U), &Instances0_21, (MR_Word) ((MR_Unsigned) 0U), &PredDecls0_22, (MR_Word) ((MR_Unsigned) 0U), &RevModeDecls_23, (MR_Word) ((MR_Unsigned) 0U), &RevClauses0_24, (MR_Word) ((MR_Unsigned) 0U), &RevForeignProcs_25, (MR_Word) ((MR_Unsigned) 0U), &Promises0_26, (MR_Word) ((MR_Unsigned) 0U), &DeclMarkers0_27, (MR_Word) ((MR_Unsigned) 0U), &ImplMarkers0_28, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs0_29, (MR_Word) ((MR_Unsigned) 0U), &UnusedArgs0_30, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_31, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_32, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_33, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_34, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_35, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_36, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_37, STATE_VARIABLE_Specs_0_61, STATE_VARIABLE_Specs_62);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), TypeDefns0_16, &TypeDefns_38);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnums0_17, &ForeignEnums_39);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), InstDefns0_18, &InstDefns_40);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), ModeDefns0_19, &ModeDefns_41);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), TypeClasses0_20, &TypeClasses_42);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), Instances0_21, &Instances_43);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDecls0_22, &PredDecls_44);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevModeDecls_23, &ModeDecls_45);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevClauses0_24, &Clauses0_46);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), RevForeignProcs_25, &ForeignProcs_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), Promises0_26, &Promises_48);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkers0_27, &DeclMarkers_49);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkers0_28, &ImplMarkers_50);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecs0_29, &TypeSpecs_51);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), UnusedArgs0_30, &UnusedArgs_52);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), TermInfos0_31, &TermInfos_53);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos0_32, &Term2Infos_54);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions0_33, &Exceptions_55);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Trailings0_34, &Trailings_56);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings0_35, &MMTablings_57);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings0_36, &Sharings_58);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses0_37, &Reuses_59);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[13]), Clauses0_46, &Clauses_60);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (UseMap_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (FIMSpecs_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeDefns_38));
    MR_hl_field(0, base, 5) = ((MR_Box) (ForeignEnums_39));
    MR_hl_field(0, base, 6) = ((MR_Box) (InstDefns_40));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeDefns_41));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClasses_42));
    MR_hl_field(0, base, 9) = ((MR_Box) (Instances_43));
    MR_hl_field(0, base, 10) = ((MR_Box) (PredDecls_44));
    MR_hl_field(0, base, 11) = ((MR_Box) (ModeDecls_45));
    MR_hl_field(0, base, 12) = ((MR_Box) (Clauses_60));
    MR_hl_field(0, base, 13) = ((MR_Box) (ForeignProcs_47));
    MR_hl_field(0, base, 14) = ((MR_Box) (Promises_48));
    MR_hl_field(0, base, 15) = ((MR_Box) (DeclMarkers_49));
    MR_hl_field(0, base, 16) = ((MR_Box) (ImplMarkers_50));
    MR_hl_field(0, base, 17) = ((MR_Box) (TypeSpecs_51));
    MR_hl_field(0, base, 18) = ((MR_Box) (UnusedArgs_52));
    MR_hl_field(0, base, 19) = ((MR_Box) (TermInfos_53));
    MR_hl_field(0, base, 20) = ((MR_Box) (Term2Infos_54));
    MR_hl_field(0, base, 21) = ((MR_Box) (Exceptions_55));
    MR_hl_field(0, base, 22) = ((MR_Box) (Trailings_56));
    MR_hl_field(0, base, 23) = ((MR_Box) (MMTablings_57));
    MR_hl_field(0, base, 24) = ((MR_Box) (Sharings_58));
    MR_hl_field(0, base, 25) = ((MR_Box) (Reuses_59));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Word Use_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Uses_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Use_7, 0))));
      MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Use_7, 1))));
      MR_Word STATE_VARIABLE_UseMap_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (Context_11)), HeadVar__2_2, &STATE_VARIABLE_UseMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Uses_8;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_UseMap_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_plain_opt_items_47_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnums_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnums_5,
  MR_Word STATE_VARIABLE_InstDefns_0_6,
  MR_Word * STATE_VARIABLE_InstDefns_7,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9,
  MR_Word STATE_VARIABLE_TypeClasses_0_10,
  MR_Word * STATE_VARIABLE_TypeClasses_11,
  MR_Word STATE_VARIABLE_Instances_0_12,
  MR_Word * STATE_VARIABLE_Instances_13,
  MR_Word STATE_VARIABLE_PredDecls_0_14,
  MR_Word * STATE_VARIABLE_PredDecls_15,
  MR_Word STATE_VARIABLE_RevModeDecls_0_16,
  MR_Word * STATE_VARIABLE_RevModeDecls_17,
  MR_Word STATE_VARIABLE_RevClauses_0_18,
  MR_Word * STATE_VARIABLE_RevClauses_19,
  MR_Word STATE_VARIABLE_RevForeignProcs_0_20,
  MR_Word * STATE_VARIABLE_RevForeignProcs_21,
  MR_Word STATE_VARIABLE_Promises_0_22,
  MR_Word * STATE_VARIABLE_Promises_23,
  MR_Word STATE_VARIABLE_DeclMarkers_0_24,
  MR_Word * STATE_VARIABLE_DeclMarkers_25,
  MR_Word STATE_VARIABLE_ImplMarkers_0_26,
  MR_Word * STATE_VARIABLE_ImplMarkers_27,
  MR_Word STATE_VARIABLE_TypeSpecs_0_28,
  MR_Word * STATE_VARIABLE_TypeSpecs_29,
  MR_Word STATE_VARIABLE_UnusedArgs_0_30,
  MR_Word * STATE_VARIABLE_UnusedArgs_31,
  MR_Word STATE_VARIABLE_TermInfos_0_32,
  MR_Word * STATE_VARIABLE_TermInfos_33,
  MR_Word STATE_VARIABLE_Term2Infos_0_34,
  MR_Word * STATE_VARIABLE_Term2Infos_35,
  MR_Word STATE_VARIABLE_Exceptions_0_36,
  MR_Word * STATE_VARIABLE_Exceptions_37,
  MR_Word STATE_VARIABLE_Trailings_0_38,
  MR_Word * STATE_VARIABLE_Trailings_39,
  MR_Word STATE_VARIABLE_MMTablings_0_40,
  MR_Word * STATE_VARIABLE_MMTablings_41,
  MR_Word STATE_VARIABLE_Sharings_0_42,
  MR_Word * STATE_VARIABLE_Sharings_43,
  MR_Word STATE_VARIABLE_Reuses_0_44,
  MR_Word * STATE_VARIABLE_Reuses_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
      *STATE_VARIABLE_Reuses_45 = STATE_VARIABLE_Reuses_0_44;
      *STATE_VARIABLE_Sharings_43 = STATE_VARIABLE_Sharings_0_42;
      *STATE_VARIABLE_MMTablings_41 = STATE_VARIABLE_MMTablings_0_40;
      *STATE_VARIABLE_Trailings_39 = STATE_VARIABLE_Trailings_0_38;
      *STATE_VARIABLE_Exceptions_37 = STATE_VARIABLE_Exceptions_0_36;
      *STATE_VARIABLE_Term2Infos_35 = STATE_VARIABLE_Term2Infos_0_34;
      *STATE_VARIABLE_TermInfos_33 = STATE_VARIABLE_TermInfos_0_32;
      *STATE_VARIABLE_UnusedArgs_31 = STATE_VARIABLE_UnusedArgs_0_30;
      *STATE_VARIABLE_TypeSpecs_29 = STATE_VARIABLE_TypeSpecs_0_28;
      *STATE_VARIABLE_ImplMarkers_27 = STATE_VARIABLE_ImplMarkers_0_26;
      *STATE_VARIABLE_DeclMarkers_25 = STATE_VARIABLE_DeclMarkers_0_24;
      *STATE_VARIABLE_Promises_23 = STATE_VARIABLE_Promises_0_22;
      *STATE_VARIABLE_RevForeignProcs_21 = STATE_VARIABLE_RevForeignProcs_0_20;
      *STATE_VARIABLE_RevClauses_19 = STATE_VARIABLE_RevClauses_0_18;
      *STATE_VARIABLE_RevModeDecls_17 = STATE_VARIABLE_RevModeDecls_0_16;
      *STATE_VARIABLE_PredDecls_15 = STATE_VARIABLE_PredDecls_0_14;
      *STATE_VARIABLE_Instances_13 = STATE_VARIABLE_Instances_0_12;
      *STATE_VARIABLE_TypeClasses_11 = STATE_VARIABLE_TypeClasses_0_10;
      *STATE_VARIABLE_ModeDefns_9 = STATE_VARIABLE_ModeDefns_0_8;
      *STATE_VARIABLE_InstDefns_7 = STATE_VARIABLE_InstDefns_0_6;
      *STATE_VARIABLE_ForeignEnums_5 = STATE_VARIABLE_ForeignEnums_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_117 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_118 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_234;
      MR_Word STATE_VARIABLE_ForeignEnums_1_235;
      MR_Word STATE_VARIABLE_InstDefns_1_236;
      MR_Word STATE_VARIABLE_ModeDefns_1_237;
      MR_Word STATE_VARIABLE_TypeClasses_1_238;
      MR_Word STATE_VARIABLE_Instances_1_239;
      MR_Word STATE_VARIABLE_PredDecls_1_240;
      MR_Word STATE_VARIABLE_RevModeDecls_1_241;
      MR_Word STATE_VARIABLE_RevClauses_1_242;
      MR_Word STATE_VARIABLE_RevForeignProcs_1_243;
      MR_Word STATE_VARIABLE_Promises_1_244;
      MR_Word STATE_VARIABLE_TypeSpecs_1_245;
      MR_Word STATE_VARIABLE_TermInfos_1_246;
      MR_Word STATE_VARIABLE_Term2Infos_1_247;
      MR_Word STATE_VARIABLE_Sharings_1_248;
      MR_Word STATE_VARIABLE_Reuses_1_249;
      MR_Word STATE_VARIABLE_Specs_1_266;
      MR_Word STATE_VARIABLE_DeclMarkers_1_269;
      MR_Word STATE_VARIABLE_ImplMarkers_1_307;
      MR_Word STATE_VARIABLE_UnusedArgs_1_326;
      MR_Word STATE_VARIABLE_Exceptions_1_327;
      MR_Word STATE_VARIABLE_Trailings_1_328;
      MR_Word STATE_VARIABLE_MMTablings_1_329;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_4;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_12;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignProcs_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_22;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkers_0_24;
      MR_Word next_value_of_STATE_VARIABLE_ImplMarkers_0_26;
      MR_Word next_value_of_STATE_VARIABLE_TypeSpecs_0_28;
      MR_Word next_value_of_STATE_VARIABLE_UnusedArgs_0_30;
      MR_Word next_value_of_STATE_VARIABLE_TermInfos_0_32;
      MR_Word next_value_of_STATE_VARIABLE_Term2Infos_0_34;
      MR_Word next_value_of_STATE_VARIABLE_Exceptions_0_36;
      MR_Word next_value_of_STATE_VARIABLE_Trailings_0_38;
      MR_Word next_value_of_STATE_VARIABLE_MMTablings_0_40;
      MR_Word next_value_of_STATE_VARIABLE_Sharings_0_42;
      MR_Word next_value_of_STATE_VARIABLE_Reuses_0_44;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_46;

      switch (MR_tag((MR_Word) Item_117)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_150 = (MR_Word) ((MR_Word) (Item_117));

            {
              STATE_VARIABLE_RevClauses_1_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_1_242, 0) = ((MR_Box) (ItemClause_150));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_1_242, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_18));
            }
            STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
            STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
            STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
            STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
            STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
            STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
            STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
            STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
            STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
            STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
            STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
            STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl_148 = (MR_Word) (MR_body((MR_Word) (Item_117), (MR_Integer) 1));

            {
              STATE_VARIABLE_PredDecls_1_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_1_240, 0) = ((MR_Box) (ItemPredDecl_148));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_1_240, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_14));
            }
            STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
            STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
            STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
            STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
            STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
            STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
            STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
            STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
            STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
            STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
            STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
            STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_149 = (MR_Word) (MR_body((MR_Word) (Item_117), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_1_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_241, 0) = ((MR_Box) (ItemModeDecl_149));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_241, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_16));
            }
            STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
            STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
            STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
            STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
            STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
            STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
            STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
            STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
            STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
            STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
            STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
            STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_117, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignProc_151 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_RevForeignProcs_1_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_1_243, 0) = ((MR_Box) (ItemForeignProc_151));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_1_243, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_20));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_143 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_ForeignEnums_1_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_235, 0) = ((MR_Box) (ItemForeignEnum_143));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_235, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 17:
              {
                MR_Word Var_334;
                MR_Word Var_335;
                MR_Word Var_345;
                MR_Word Pieces_400;
                MR_Word Spec_401;

                Var_335 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_117);
                Var_334 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_335, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                Pieces_400 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[73])), Var_334);
                Var_345 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                {
                  Spec_401 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_401, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                  MR_hl_field(0, Spec_401, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_401, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_401, 3) = ((MR_Box) (Var_345));
                  MR_hl_field(0, Spec_401, 4) = ((MR_Box) (Pieces_400));
                }
                {
                  STATE_VARIABLE_Specs_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 0) = ((MR_Box) (Spec_401));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word DeclMarker_166 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));
                MR_Word Marker_167 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker_166, 0))) & (MR_Integer) 3);
                MR_Word SymNameArityMaybePF_168 = ((MR_Word) ((MR_hl_field(0, DeclMarker_166, 1))));

                switch (Marker_167) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_275;
                      MR_Word Var_276;
                      MR_Word Var_286;
                      MR_Word Pieces_370;
                      MR_Word Spec_371;

                      Var_276 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_117);
                      Var_275 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_276, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                      Pieces_370 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[73])), Var_275);
                      Var_286 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                      {
                        Spec_371 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_371, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                        MR_hl_field(0, Spec_371, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_371, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_371, 3) = ((MR_Box) (Var_286));
                        MR_hl_field(0, Spec_371, 4) = ((MR_Box) (Pieces_370));
                      }
                      {
                        STATE_VARIABLE_Specs_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 0) = ((MR_Box) (Spec_371));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                      }
                      STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 0:
                    {
                      MR_Word PFU_171 = ((MR_Unsigned) ((MR_hl_field(0, SymNameArityMaybePF_168, 0))) & (MR_Integer) 3);
                      MR_Word Var_270;

                      switch (PFU_171) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47", (MR_String) "PFU = pfu_unknown");
                            return;
                          }
                          break;
                      }
                      Var_270 = (MR_Word) (DeclMarker_166);
                      {
                        STATE_VARIABLE_DeclMarkers_1_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_DeclMarkers_1_269, 0) = ((MR_Box) (Var_270));
                        MR_hl_field(1, STATE_VARIABLE_DeclMarkers_1_269, 1) = ((MR_Box) (STATE_VARIABLE_DeclMarkers_0_24));
                      }
                      STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ImplMarker_177 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));
                MR_Word Marker_392 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker_177, 0))) & (MR_Integer) 15);
                MR_Word SymNameArityMaybePF_393 = ((MR_Word) ((MR_hl_field(0, ImplMarker_177, 1))));

                switch (Marker_392) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 4:
                  case (MR_Integer) 8:
                    {
                      MR_Word Var_313;
                      MR_Word Var_314;
                      MR_Word Var_324;
                      MR_Word Pieces_382;
                      MR_Word Spec_383;

                      Var_314 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_117);
                      Var_313 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_314, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                      Pieces_382 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[73])), Var_313);
                      Var_324 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                      {
                        Spec_383 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_383, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                        MR_hl_field(0, Spec_383, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_383, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_383, 3) = ((MR_Box) (Var_324));
                        MR_hl_field(0, Spec_383, 4) = ((MR_Box) (Pieces_382));
                      }
                      {
                        STATE_VARIABLE_Specs_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 0) = ((MR_Box) (Spec_383));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                      }
                      STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 3:
                  case (MR_Integer) 1:
                  case (MR_Integer) 7:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_308;
                      MR_Word PFU_378 = ((MR_Unsigned) ((MR_hl_field(0, SymNameArityMaybePF_393, 0))) & (MR_Integer) 3);

                      switch (PFU_378) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47", (MR_String) "PFU = pfu_unknown");
                            return;
                          }
                          break;
                      }
                      Var_308 = (MR_Word) (ImplMarker_177);
                      {
                        STATE_VARIABLE_ImplMarkers_1_307 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_ImplMarkers_1_307, 0) = ((MR_Box) (Var_308));
                        MR_hl_field(1, STATE_VARIABLE_ImplMarkers_1_307, 1) = ((MR_Box) (STATE_VARIABLE_ImplMarkers_0_26));
                      }
                      STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_152 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_Promises_1_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Promises_1_244, 0) = ((MR_Box) (ItemPromise_152));
                  MR_hl_field(1, STATE_VARIABLE_Promises_1_244, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_146 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_TypeClasses_1_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_238, 0) = ((MR_Box) (ItemTypeClass_146));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_238, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_10));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_147 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_Instances_1_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Instances_1_239, 0) = ((MR_Box) (ItemInstance_147));
                  MR_hl_field(1, STATE_VARIABLE_Instances_1_239, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_12));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_142 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_234, 0) = ((MR_Box) (ItemTypeDefn_142));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_234, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_144 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_InstDefns_1_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_236, 0) = ((MR_Box) (ItemInstDefn_144));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_236, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_145 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                {
                  STATE_VARIABLE_ModeDefns_1_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_237, 0) = ((MR_Box) (ItemModeDefn_145));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_237, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_8));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word DeclPragma_153 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                switch (MR_tag((MR_Word) DeclPragma_153)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Pieces_164;
                      MR_Word Spec_165;
                      MR_Word Var_254;
                      MR_Word Var_255;
                      MR_Word Var_265;

                      Var_255 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_117);
                      Var_254 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_255, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                      Pieces_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[73])), Var_254);
                      Var_265 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                      {
                        Spec_165 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_165, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                        MR_hl_field(0, Spec_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_165, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_165, 3) = ((MR_Box) (Var_265));
                        MR_hl_field(0, Spec_165, 4) = ((MR_Box) (Pieces_164));
                      }
                      {
                        STATE_VARIABLE_Specs_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 0) = ((MR_Box) (Spec_165));
                        MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                      }
                      STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                      STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                      STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                      STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                      STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_153, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        {
                          MR_Word Pieces_164;
                          MR_Word Spec_165;
                          MR_Word Var_254;
                          MR_Word Var_255;
                          MR_Word Var_265;

                          Var_255 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_117);
                          Var_254 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_255, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                          Pieces_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[73])), Var_254);
                          Var_265 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                          {
                            Spec_165 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Spec_165, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                            MR_hl_field(0, Spec_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, Spec_165, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                            MR_hl_field(0, Spec_165, 3) = ((MR_Box) (Var_265));
                            MR_hl_field(0, Spec_165, 4) = ((MR_Box) (Pieces_164));
                          }
                          {
                            STATE_VARIABLE_Specs_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 0) = ((MR_Box) (Spec_165));
                            MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                          }
                          STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word TypeSpec_154 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, 1))));

                          {
                            STATE_VARIABLE_TypeSpecs_1_245 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_TypeSpecs_1_245, 0) = ((MR_Box) (TypeSpec_154));
                            MR_hl_field(1, STATE_VARIABLE_TypeSpecs_1_245, 1) = ((MR_Box) (STATE_VARIABLE_TypeSpecs_0_28));
                          }
                          STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Term_155 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, 1))));

                          {
                            STATE_VARIABLE_TermInfos_1_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_1_246, 0) = ((MR_Box) (Term_155));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_1_246, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_32));
                          }
                          STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Term2_156 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, 1))));

                          {
                            STATE_VARIABLE_Term2Infos_1_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_1_247, 0) = ((MR_Box) (Term2_156));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_1_247, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_34));
                          }
                          STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Sharing_157 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, 1))));

                          {
                            STATE_VARIABLE_Sharings_1_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_1_248, 0) = ((MR_Box) (Sharing_157));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_1_248, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_42));
                          }
                          STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Reuse_158 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, 1))));

                          {
                            STATE_VARIABLE_Reuses_1_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_1_249, 0) = ((MR_Box) (Reuse_158));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_1_249, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_44));
                          }
                          STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word Var_292;
                MR_Word Var_293;
                MR_Word Var_303;
                MR_Word Pieces_376;
                MR_Word Spec_377;

                Var_293 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_117);
                Var_292 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_293, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                Pieces_376 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[73])), Var_292);
                Var_303 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                {
                  Spec_377 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_377, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                  MR_hl_field(0, Spec_377, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_377, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_377, 3) = ((MR_Box) (Var_303));
                  MR_hl_field(0, Spec_377, 4) = ((MR_Box) (Pieces_376));
                }
                {
                  STATE_VARIABLE_Specs_1_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 0) = ((MR_Box) (Spec_377));
                  MR_hl_field(1, STATE_VARIABLE_Specs_1_266, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word GenPragma_179 = ((MR_Word) ((MR_hl_field(3, Item_117, 1))));

                switch (MR_tag((MR_Word) GenPragma_179)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word UnusedArgs_133 = (MR_Word) ((MR_Word) (GenPragma_179));

                      {
                        STATE_VARIABLE_UnusedArgs_1_326 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_UnusedArgs_1_326, 0) = ((MR_Box) (UnusedArgs_133));
                        MR_hl_field(1, STATE_VARIABLE_UnusedArgs_1_326, 1) = ((MR_Box) (STATE_VARIABLE_UnusedArgs_0_30));
                      }
                      STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                      STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                      STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_180 = (MR_Word) (MR_body((MR_Word) (GenPragma_179), (MR_Integer) 1));

                      {
                        STATE_VARIABLE_Exceptions_1_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_1_327, 0) = ((MR_Box) (Exception_180));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_1_327, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_36));
                      }
                      STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                      STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                      STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_181 = (MR_Word) (MR_body((MR_Word) (GenPragma_179), (MR_Integer) 2));

                      {
                        STATE_VARIABLE_Trailings_1_328 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_1_328, 0) = ((MR_Box) (Trailing_181));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_1_328, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_38));
                      }
                      STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                      STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                      STATE_VARIABLE_MMTablings_1_329 = STATE_VARIABLE_MMTablings_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_182 = (MR_Word) (MR_body((MR_Word) (GenPragma_179), (MR_Integer) 3));

                      {
                        STATE_VARIABLE_MMTablings_1_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_1_329, 0) = ((MR_Box) (MMTabling_182));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_1_329, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_40));
                      }
                      STATE_VARIABLE_UnusedArgs_1_326 = STATE_VARIABLE_UnusedArgs_0_30;
                      STATE_VARIABLE_Exceptions_1_327 = STATE_VARIABLE_Exceptions_0_36;
                      STATE_VARIABLE_Trailings_1_328 = STATE_VARIABLE_Trailings_0_38;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_1_234 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_235 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_1_236 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_1_237 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_1_238 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_1_239 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_1_240 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_1_241 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_1_242 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_1_243 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_1_244 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_1_269 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_1_307 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_1_245 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_TermInfos_1_246 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_1_247 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Sharings_1_248 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_1_249 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_1_266 = STATE_VARIABLE_Specs_0_46;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_118;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_234;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_1_235;
      next_value_of_STATE_VARIABLE_InstDefns_0_6 = STATE_VARIABLE_InstDefns_1_236;
      next_value_of_STATE_VARIABLE_ModeDefns_0_8 = STATE_VARIABLE_ModeDefns_1_237;
      next_value_of_STATE_VARIABLE_TypeClasses_0_10 = STATE_VARIABLE_TypeClasses_1_238;
      next_value_of_STATE_VARIABLE_Instances_0_12 = STATE_VARIABLE_Instances_1_239;
      next_value_of_STATE_VARIABLE_PredDecls_0_14 = STATE_VARIABLE_PredDecls_1_240;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_16 = STATE_VARIABLE_RevModeDecls_1_241;
      next_value_of_STATE_VARIABLE_RevClauses_0_18 = STATE_VARIABLE_RevClauses_1_242;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_20 = STATE_VARIABLE_RevForeignProcs_1_243;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_1_244;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_24 = STATE_VARIABLE_DeclMarkers_1_269;
      next_value_of_STATE_VARIABLE_ImplMarkers_0_26 = STATE_VARIABLE_ImplMarkers_1_307;
      next_value_of_STATE_VARIABLE_TypeSpecs_0_28 = STATE_VARIABLE_TypeSpecs_1_245;
      next_value_of_STATE_VARIABLE_UnusedArgs_0_30 = STATE_VARIABLE_UnusedArgs_1_326;
      next_value_of_STATE_VARIABLE_TermInfos_0_32 = STATE_VARIABLE_TermInfos_1_246;
      next_value_of_STATE_VARIABLE_Term2Infos_0_34 = STATE_VARIABLE_Term2Infos_1_247;
      next_value_of_STATE_VARIABLE_Exceptions_0_36 = STATE_VARIABLE_Exceptions_1_327;
      next_value_of_STATE_VARIABLE_Trailings_0_38 = STATE_VARIABLE_Trailings_1_328;
      next_value_of_STATE_VARIABLE_MMTablings_0_40 = STATE_VARIABLE_MMTablings_1_329;
      next_value_of_STATE_VARIABLE_Sharings_0_42 = STATE_VARIABLE_Sharings_1_248;
      next_value_of_STATE_VARIABLE_Reuses_0_44 = STATE_VARIABLE_Reuses_1_249;
      next_value_of_STATE_VARIABLE_Specs_0_46 = STATE_VARIABLE_Specs_1_266;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_ForeignEnums_0_4 = next_value_of_STATE_VARIABLE_ForeignEnums_0_4;
      STATE_VARIABLE_InstDefns_0_6 = next_value_of_STATE_VARIABLE_InstDefns_0_6;
      STATE_VARIABLE_ModeDefns_0_8 = next_value_of_STATE_VARIABLE_ModeDefns_0_8;
      STATE_VARIABLE_TypeClasses_0_10 = next_value_of_STATE_VARIABLE_TypeClasses_0_10;
      STATE_VARIABLE_Instances_0_12 = next_value_of_STATE_VARIABLE_Instances_0_12;
      STATE_VARIABLE_PredDecls_0_14 = next_value_of_STATE_VARIABLE_PredDecls_0_14;
      STATE_VARIABLE_RevModeDecls_0_16 = next_value_of_STATE_VARIABLE_RevModeDecls_0_16;
      STATE_VARIABLE_RevClauses_0_18 = next_value_of_STATE_VARIABLE_RevClauses_0_18;
      STATE_VARIABLE_RevForeignProcs_0_20 = next_value_of_STATE_VARIABLE_RevForeignProcs_0_20;
      STATE_VARIABLE_Promises_0_22 = next_value_of_STATE_VARIABLE_Promises_0_22;
      STATE_VARIABLE_DeclMarkers_0_24 = next_value_of_STATE_VARIABLE_DeclMarkers_0_24;
      STATE_VARIABLE_ImplMarkers_0_26 = next_value_of_STATE_VARIABLE_ImplMarkers_0_26;
      STATE_VARIABLE_TypeSpecs_0_28 = next_value_of_STATE_VARIABLE_TypeSpecs_0_28;
      STATE_VARIABLE_UnusedArgs_0_30 = next_value_of_STATE_VARIABLE_UnusedArgs_0_30;
      STATE_VARIABLE_TermInfos_0_32 = next_value_of_STATE_VARIABLE_TermInfos_0_32;
      STATE_VARIABLE_Term2Infos_0_34 = next_value_of_STATE_VARIABLE_Term2Infos_0_34;
      STATE_VARIABLE_Exceptions_0_36 = next_value_of_STATE_VARIABLE_Exceptions_0_36;
      STATE_VARIABLE_Trailings_0_38 = next_value_of_STATE_VARIABLE_Trailings_0_38;
      STATE_VARIABLE_MMTablings_0_40 = next_value_of_STATE_VARIABLE_MMTablings_0_40;
      STATE_VARIABLE_Sharings_0_42 = next_value_of_STATE_VARIABLE_Sharings_0_42;
      STATE_VARIABLE_Reuses_0_44 = next_value_of_STATE_VARIABLE_Reuses_0_44;
      STATE_VARIABLE_Specs_0_46 = next_value_of_STATE_VARIABLE_Specs_0_46;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_IntImportMap_18;
  MR_Word conv2_STATE_VARIABLE_Specs_20;

  parse_tree__convert_parse_tree__restrict_to_int_import_map_entry_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_IntImportMap_18, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_20);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportMap_18));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__convert_include__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__796__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0(
  MR_Word ParseTreeInt_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_70,
  MR_Word * STATE_VARIABLE_ErrSpecs_71,
  MR_Word STATE_VARIABLE_WarnSpecs_0_72,
  MR_Word * STATE_VARIABLE_WarnSpecs_73)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 0))));
  MR_Word IntFileKind_12 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_7, 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 2))));
  MR_Word MaybeVersionNumbers_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 3))));
  MR_Word IntIncls_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 4))));
  MR_Word ImpIncls_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 5))));
  MR_Word IntAvails_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 6))));
  MR_Word ImpAvails_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 7))));
  MR_Word IntFIMs_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 8))));
  MR_Word ImpFIMs_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 9))));
  MR_Word IntItems_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 10))));
  MR_Word ImpItems_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 11))));
  MR_Word InclMap_26;
  MR_Word InclErrSpecs_27;
  MR_Word IntInclMap_28;
  MR_Word SectionImportUseMap_29;
  MR_Word ImportWarnSpecs_30;
  MR_Word IntImportMap_31;
  MR_Word RestrictErrSpecs_32;
  MR_Word IntTypeDefns0_37;
  MR_Word IntInstDefns0_38;
  MR_Word IntModeDefns0_39;
  MR_Word IntTypeClasses0_40;
  MR_Word IntInstances0_41;
  MR_Word IntTypeRepns0_42;
  MR_Word ClassifyErrSpecs_43;
  MR_Word IntTypeDefnMap_44;
  MR_Word IntInstDefnMap_45;
  MR_Word IntModeDefnMap_46;
  MR_Word IntTypeClasses_47;
  MR_Word IntInstances_48;
  MR_Word IntTypeRepnMap_49;
  MR_Word ImpTypeDefnMap_50;
  MR_Word ImpForeignEnumMap_51;
  MR_Word IntTypeCheckedMap_52;
  MR_Word ImpInstDefnMap_53;
  MR_Word IntInstCheckedMap_54;
  MR_Word ImpModeDefnMap_55;
  MR_Word IntModeCheckedMap_56;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_ErrSpecs_1_89;
  MR_Word Var_93;
  MR_Word STATE_VARIABLE_ErrSpecs_2_94;
  MR_Word STATE_VARIABLE_WarnSpecs_1_97;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_ErrSpecs_3_102;
  MR_Word STATE_VARIABLE_ErrSpecs_4_118;
  MR_Word STATE_VARIABLE_ErrSpecs_5_126;
  MR_Word STATE_VARIABLE_ErrSpecs_6_128;
  MR_Word STATE_VARIABLE_WarnSpecs_2_129;
  MR_Word STATE_VARIABLE_ErrSpecs_7_131;
  MR_Word STATE_VARIABLE_WarnSpecs_3_132;
  MR_Word STATE_VARIABLE_ErrSpecs_8_134;
  MR_Word STATE_VARIABLE_ImpContexts_2_137;
  MR_Word STATE_VARIABLE_ImpContexts_3_139;
  MR_Word STATE_VARIABLE_ImpContexts_4_141;
  MR_Word STATE_VARIABLE_ImpContexts_5_143;
  MR_Word STATE_VARIABLE_ImpContexts_6_145;
  MR_Box conv1_IntInclMap_28;
  MR_Box conv5_IntImportMap_31;
  MR_Box conv4_RestrictErrSpecs_32;

  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_6_p_0_1));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (IntFileKind_12));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) ((MR_Integer) 3));
  }
  mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/6", (MR_String) "trying to convert non-ifk_int3 parse_tree_int to parse_tree_int3");
  if ((MaybeVersionNumbers_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ErrSpecs_1_89 = STATE_VARIABLE_ErrSpecs_0_70;
  else
  {
    MR_Word VNSpec_25;

    {
      VNSpec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VNSpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/6"));
      MR_hl_field(0, VNSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, VNSpec_25, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, VNSpec_25, 3) = ((MR_Box) (ModuleNameContext_13));
      MR_hl_field(0, VNSpec_25, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[26])));
    }
    {
      STATE_VARIABLE_ErrSpecs_1_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_89, 0) = ((MR_Box) (VNSpec_25));
      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_89, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_70));
    }
  }
  parse_tree__convert_include__classify_include_modules_5_p_0(IntIncls_15, (MR_Word) ((MR_Unsigned) 0U), &InclMap_26, (MR_Word) ((MR_Unsigned) 0U), &InclErrSpecs_27);
  Var_93 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[11]), InclMap_26, ((MR_Box) (Var_93)), &conv1_IntInclMap_28);
  IntInclMap_28 = ((MR_Word) (conv1_IntInclMap_28));
  STATE_VARIABLE_ErrSpecs_2_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InclErrSpecs_27, STATE_VARIABLE_ErrSpecs_1_89);
  parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0((MR_Integer) 0, ModuleName_11, IntAvails_17, ImpAvails_18, &SectionImportUseMap_29, (MR_Word) ((MR_Unsigned) 0U), &ImportWarnSpecs_30);
  STATE_VARIABLE_WarnSpecs_1_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ImportWarnSpecs_30, STATE_VARIABLE_WarnSpecs_0_72);
  Var_99 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[2]), SectionImportUseMap_29, ((MR_Box) (Var_99)), &conv5_IntImportMap_31, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RestrictErrSpecs_32);
  IntImportMap_31 = ((MR_Word) (conv5_IntImportMap_31));
  RestrictErrSpecs_32 = ((MR_Word) (conv4_RestrictErrSpecs_32));
  STATE_VARIABLE_ErrSpecs_3_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), RestrictErrSpecs_32, STATE_VARIABLE_ErrSpecs_2_94);
  if ((IntFIMs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ErrSpecs_4_118 = STATE_VARIABLE_ErrSpecs_3_102;
  else
  {
    MR_Word FirstIntFIM_33 = ((MR_Word) ((MR_hl_field(1, IntFIMs_19, 0))));
    MR_Word IntFIMSpec_36;
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, FirstIntFIM_33, 2))));

    {
      IntFIMSpec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntFIMSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/6"));
      MR_hl_field(0, IntFIMSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, IntFIMSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, IntFIMSpec_36, 3) = ((MR_Box) (Var_117));
      MR_hl_field(0, IntFIMSpec_36, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])));
    }
    {
      STATE_VARIABLE_ErrSpecs_4_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_4_118, 0) = ((MR_Box) (IntFIMSpec_36));
      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_4_118, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_3_102));
    }
  }
  parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(IntItems_21, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_37, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_38, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_39, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_40, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_41, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_42, (MR_Word) ((MR_Unsigned) 0U), &ClassifyErrSpecs_43);
  STATE_VARIABLE_ErrSpecs_5_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyErrSpecs_43, STATE_VARIABLE_ErrSpecs_4_118);
  IntTypeDefnMap_44 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_37);
  IntInstDefnMap_45 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_38);
  IntModeDefnMap_46 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_39);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), IntTypeClasses0_40, &IntTypeClasses_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_41, &IntInstances_48);
  IntTypeRepnMap_49 = parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_42);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), &ImpTypeDefnMap_50);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), &ImpForeignEnumMap_51);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, IntTypeDefnMap_44, ImpTypeDefnMap_50, ImpForeignEnumMap_51, &IntTypeCheckedMap_52, STATE_VARIABLE_ErrSpecs_5_126, &STATE_VARIABLE_ErrSpecs_6_128, STATE_VARIABLE_WarnSpecs_1_97, &STATE_VARIABLE_WarnSpecs_2_129);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_53);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_8_p_0((MR_Integer) 0, IntInstDefnMap_45, ImpInstDefnMap_53, &IntInstCheckedMap_54, STATE_VARIABLE_ErrSpecs_6_128, &STATE_VARIABLE_ErrSpecs_7_131, STATE_VARIABLE_WarnSpecs_2_129, &STATE_VARIABLE_WarnSpecs_3_132);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_55);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_8_p_0((MR_Integer) 0, IntModeDefnMap_46, ImpModeDefnMap_55, &IntModeCheckedMap_56, STATE_VARIABLE_ErrSpecs_7_131, &STATE_VARIABLE_ErrSpecs_8_134, STATE_VARIABLE_WarnSpecs_3_132, STATE_VARIABLE_WarnSpecs_73);
  if ((ImpIncls_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_2_137 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadIncl_58 = ((MR_Word) ((MR_hl_field(1, ImpIncls_16, 0))));
    MR_Word Var_138 = ((MR_Word) ((MR_hl_field(0, HeadIncl_58, 1))));

    {
      STATE_VARIABLE_ImpContexts_2_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_2_137, 0) = ((MR_Box) (Var_138));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_2_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((ImpAvails_18 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_3_139 = STATE_VARIABLE_ImpContexts_2_137;
  else
  {
    MR_Word HeadAvail_60 = ((MR_Word) ((MR_hl_field(1, ImpAvails_18, 0))));
    MR_Word Var_140;

    Var_140 = parse_tree__item_util__get_avail_context_1_f_0(HeadAvail_60);
    {
      STATE_VARIABLE_ImpContexts_3_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_3_139, 0) = ((MR_Box) (Var_140));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_3_139, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_2_137));
    }
  }
  if ((ImpFIMs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_4_141 = STATE_VARIABLE_ImpContexts_3_139;
  else
  {
    MR_Word HeadFIM_62 = ((MR_Word) ((MR_hl_field(1, ImpFIMs_20, 0))));
    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(0, HeadFIM_62, 2))));

    {
      STATE_VARIABLE_ImpContexts_4_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_4_141, 0) = ((MR_Box) (Var_142));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_4_141, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_3_139));
    }
  }
  if ((ImpItems_22 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_5_143 = STATE_VARIABLE_ImpContexts_4_141;
  else
  {
    MR_Word HeadImpItem_64 = ((MR_Word) ((MR_hl_field(1, ImpItems_22, 0))));
    MR_Word Var_144;

    Var_144 = parse_tree__prog_item__get_item_context_1_f_0(HeadImpItem_64);
    {
      STATE_VARIABLE_ImpContexts_5_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_5_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_5_143, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_4_141));
    }
  }
  mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_ImpContexts_5_143, &STATE_VARIABLE_ImpContexts_6_145);
  if ((STATE_VARIABLE_ImpContexts_6_145 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ErrSpecs_71 = STATE_VARIABLE_ErrSpecs_8_134;
  else
  {
    MR_Word FirstImpContext_66 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ImpContexts_6_145, 0))));
    MR_Word ImpItemSpec_69;

    {
      ImpItemSpec_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpItemSpec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/6"));
      MR_hl_field(0, ImpItemSpec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ImpItemSpec_69, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, ImpItemSpec_69, 3) = ((MR_Box) (FirstImpContext_66));
      MR_hl_field(0, ImpItemSpec_69, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[35])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrSpecs_71 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ImpItemSpec_69));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_8_134));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt3_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (IntInclMap_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntImportMap_31));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntTypeCheckedMap_52));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntInstCheckedMap_54));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntModeCheckedMap_56));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeClasses_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstances_48));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntTypeRepnMap_49));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_TypeRepns_0_12,
  MR_Word * STATE_VARIABLE_TypeRepns_13,
  MR_Word STATE_VARIABLE_ErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_ErrSpecs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_15 = STATE_VARIABLE_ErrSpecs_0_14;
      *STATE_VARIABLE_TypeRepns_13 = STATE_VARIABLE_TypeRepns_0_12;
      *STATE_VARIABLE_Instances_11 = STATE_VARIABLE_Instances_0_10;
      *STATE_VARIABLE_TypeClasses_9 = STATE_VARIABLE_TypeClasses_0_8;
      *STATE_VARIABLE_ModeDefns_7 = STATE_VARIABLE_ModeDefns_0_6;
      *STATE_VARIABLE_InstDefns_5 = STATE_VARIABLE_InstDefns_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_107;
      MR_Word STATE_VARIABLE_InstDefns_1_108;
      MR_Word STATE_VARIABLE_ModeDefns_1_109;
      MR_Word STATE_VARIABLE_TypeClasses_1_113;
      MR_Word STATE_VARIABLE_ErrSpecs_1_125;
      MR_Word STATE_VARIABLE_Instances_1_160;
      MR_Word STATE_VARIABLE_TypeRepns_1_173;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_14;

      switch (MR_tag((MR_Word) Item_37)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word Var_189;
            MR_Word Pieces_212;
            MR_Word Spec_213;

            Var_179 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_37);
            Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
            Pieces_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[60])), Var_178);
            Var_189 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_213 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_213, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
              MR_hl_field(0, Spec_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_213, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_213, 3) = ((MR_Box) (Var_189));
              MR_hl_field(0, Spec_213, 4) = ((MR_Box) (Pieces_212));
            }
            {
              STATE_VARIABLE_ErrSpecs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 0) = ((MR_Box) (Spec_213));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
            }
            STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_37, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
              {
                MR_Word Var_178;
                MR_Word Var_179;
                MR_Word Var_189;
                MR_Word Pieces_212;
                MR_Word Spec_213;

                Var_179 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_37);
                Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
                Pieces_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[60])), Var_178);
                Var_189 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_213 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_213, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                  MR_hl_field(0, Spec_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_213, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_213, 3) = ((MR_Box) (Var_189));
                  MR_hl_field(0, Spec_213, 4) = ((MR_Box) (Pieces_212));
                }
                {
                  STATE_VARIABLE_ErrSpecs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 0) = ((MR_Box) (Spec_213));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                }
                STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));
                MR_Word ClassName_50 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 0))));
                MR_Word Params_51 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 1))));
                MR_Word Supers_52 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 2))));
                MR_Word Fundeps_53 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 3))));
                MR_Word Interface_54 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 4))));
                MR_Word TVarSet_55 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 5))));
                MR_Word Context_56 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 6))));
                MR_Word SeqNum_57 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, 7))));

                if ((Interface_54 == (MR_Word) ((MR_Unsigned) 0U)))
                  if ((Supers_52 == (MR_Word) ((MR_Unsigned) 0U)))
                    if ((Fundeps_53 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word ItemAbstractTypeClass_58;

                      {
                        ItemAbstractTypeClass_58 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, ItemAbstractTypeClass_58, 0) = ((MR_Box) (ClassName_50));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 1) = ((MR_Box) (Params_51));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 5) = ((MR_Box) (TVarSet_55));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 6) = ((MR_Box) (Context_56));
                        MR_hl_field(0, ItemAbstractTypeClass_58, 7) = ((MR_Box) (SeqNum_57));
                      }
                      {
                        STATE_VARIABLE_TypeClasses_1_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_113, 0) = ((MR_Box) (ItemAbstractTypeClass_58));
                        MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_113, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                      }
                      STATE_VARIABLE_ErrSpecs_1_125 = STATE_VARIABLE_ErrSpecs_0_14;
                    }
                    else
                    {
                      MR_Word Spec_62;

                      {
                        Spec_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_62, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                        MR_hl_field(0, Spec_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_62, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_62, 3) = ((MR_Box) (Context_56));
                        MR_hl_field(0, Spec_62, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[65])));
                      }
                      {
                        STATE_VARIABLE_ErrSpecs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 0) = ((MR_Box) (Spec_62));
                        MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                      }
                      STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                    }
                  else
                  {
                    MR_Word FunDepPieces_65;
                    MR_Word Var_136;
                    MR_Word Pieces_198;
                    MR_Word Spec_199;

                    if ((Fundeps_53 == (MR_Word) ((MR_Unsigned) 0U)))
                      FunDepPieces_65 = (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[67]));
                    else
                      FunDepPieces_65 = (MR_Word) ((MR_Unsigned) 0U);
                    Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunDepPieces_65, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                    Pieces_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[70])), Var_136);
                    {
                      Spec_199 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Spec_199, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                      MR_hl_field(0, Spec_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, Spec_199, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                      MR_hl_field(0, Spec_199, 3) = ((MR_Box) (Context_56));
                      MR_hl_field(0, Spec_199, 4) = ((MR_Box) (Pieces_198));
                    }
                    {
                      STATE_VARIABLE_ErrSpecs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 0) = ((MR_Box) (Spec_199));
                      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                    }
                    STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                  }
                else
                {
                  MR_Word Spec_201;

                  {
                    Spec_201 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_201, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                    MR_hl_field(0, Spec_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_201, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_201, 3) = ((MR_Box) (Context_56));
                    MR_hl_field(0, Spec_201, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[71])));
                  }
                  {
                    STATE_VARIABLE_ErrSpecs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 0) = ((MR_Box) (Spec_201));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                  }
                  STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                }
                STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_69 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));
                MR_Word Types_70 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 1))));
                MR_Word OrigTypes_71 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 2))));
                MR_Word Constraints_72 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 3))));
                MR_Word Body_73 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 4))));
                MR_Word Module_74 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 6))));
                MR_Word ClassName_206 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 0))));
                MR_Word TVarSet_207 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 5))));
                MR_Word Context_208 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 7))));
                MR_Word SeqNum_209 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, 8))));

                if ((Body_73 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ItemAbstractInstance_75;

                  {
                    ItemAbstractInstance_75 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ItemAbstractInstance_75, 0) = ((MR_Box) (ClassName_206));
                    MR_hl_field(0, ItemAbstractInstance_75, 1) = ((MR_Box) (Types_70));
                    MR_hl_field(0, ItemAbstractInstance_75, 2) = ((MR_Box) (OrigTypes_71));
                    MR_hl_field(0, ItemAbstractInstance_75, 3) = ((MR_Box) (Constraints_72));
                    MR_hl_field(0, ItemAbstractInstance_75, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, ItemAbstractInstance_75, 5) = ((MR_Box) (TVarSet_207));
                    MR_hl_field(0, ItemAbstractInstance_75, 6) = ((MR_Box) (Module_74));
                    MR_hl_field(0, ItemAbstractInstance_75, 7) = ((MR_Box) (Context_208));
                    MR_hl_field(0, ItemAbstractInstance_75, 8) = ((MR_Box) (SeqNum_209));
                  }
                  {
                    STATE_VARIABLE_Instances_1_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_160, 0) = ((MR_Box) (ItemAbstractInstance_75));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_160, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_ErrSpecs_1_125 = STATE_VARIABLE_ErrSpecs_0_14;
                }
                else
                {
                  MR_Word Spec_203;

                  {
                    Spec_203 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_203, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                    MR_hl_field(0, Spec_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_203, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_203, 3) = ((MR_Box) (Context_208));
                    MR_hl_field(0, Spec_203, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[61])));
                  }
                  {
                    STATE_VARIABLE_ErrSpecs_1_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 0) = ((MR_Box) (Spec_203));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_125, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                  }
                  STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_107, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_107, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_125 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_47 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_InstDefns_1_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_108, 0) = ((MR_Box) (ItemInstDefn_47));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_108, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_125 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_48 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_ModeDefns_1_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_109, 0) = ((MR_Box) (ItemModeDefn_48));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_109, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_173 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_125 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepn_77 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_TypeRepns_1_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_1_173, 0) = ((MR_Box) (ItemTypeRepn_77));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_1_173, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_1_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_ErrSpecs_1_125 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_107;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_1_108;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_1_109;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_1_113;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_1_160;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_1_173;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_14 = STATE_VARIABLE_ErrSpecs_1_125;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_TypeRepns_0_12 = next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      STATE_VARIABLE_ErrSpecs_0_14 = next_value_of_STATE_VARIABLE_ErrSpecs_0_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_SectionUseMap_17;
  MR_Word conv2_STATE_VARIABLE_Specs_19;

  parse_tree__convert_parse_tree__restrict_to_section_use_map_entry_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_SectionUseMap_17, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_SectionUseMap_17));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_19));
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__convert_include__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__610__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0(
  MR_Word ParseTreeInt_7,
  MR_Word * ParseTreeInt2_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_58,
  MR_Word * STATE_VARIABLE_ErrSpecs_59,
  MR_Word STATE_VARIABLE_WarnSpecs_0_60,
  MR_Word * STATE_VARIABLE_WarnSpecs_61)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 0))));
  MR_Word IntFileKind_12 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_7, 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 2))));
  MR_Word MaybeVersionNumbers_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 3))));
  MR_Word IntIncls_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 4))));
  MR_Word ImpIncls_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 5))));
  MR_Word IntAvails_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 6))));
  MR_Word ImpAvails_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 7))));
  MR_Word IntFIMs_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 8))));
  MR_Word ImpFIMs_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 9))));
  MR_Word IntItems_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 10))));
  MR_Word ImpItems_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 11))));
  MR_Word InclMap_27;
  MR_Word InclErrSpecs_28;
  MR_Word IntInclMap_29;
  MR_Word SectionImportUseMap_30;
  MR_Word ImportWarnSpecs_31;
  MR_Word SectionUseMap_32;
  MR_Word RestrictErrSpecs_33;
  MR_Word IntFIMSpecs_34;
  MR_Word ImpFIMSpecs_35;
  MR_Word IntTypeDefns0_36;
  MR_Word IntInstDefns0_37;
  MR_Word IntModeDefns0_38;
  MR_Word IntTypeClasses0_39;
  MR_Word IntInstances0_40;
  MR_Word IntTypeRepns0_41;
  MR_Word ClassifyIntErrSpecs_42;
  MR_Word IntTypeDefnMap_43;
  MR_Word IntInstDefnMap_44;
  MR_Word IntModeDefnMap_45;
  MR_Word IntTypeClasses_46;
  MR_Word IntInstances_47;
  MR_Word IntTypeRepnMap_48;
  MR_Word ImpTypeDefns0_49;
  MR_Word ClassifyImpErrSpecs_50;
  MR_Word ImpTypeDefnMap_51;
  MR_Word ImpForeignEnumMap_52;
  MR_Word IntTypeCheckedMap_53;
  MR_Word ImpInstDefnMap_54;
  MR_Word IntInstCheckedMap_55;
  MR_Word ImpModeDefnMap_56;
  MR_Word IntModeCheckedMap_57;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_ErrSpecs_1_84;
  MR_Word Var_88;
  MR_Word STATE_VARIABLE_ErrSpecs_2_89;
  MR_Word STATE_VARIABLE_WarnSpecs_1_92;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_ErrSpecs_3_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word STATE_VARIABLE_ErrSpecs_4_109;
  MR_Word STATE_VARIABLE_ErrSpecs_5_112;
  MR_Word STATE_VARIABLE_ErrSpecs_6_114;
  MR_Word STATE_VARIABLE_WarnSpecs_2_115;
  MR_Word STATE_VARIABLE_ErrSpecs_7_117;
  MR_Word STATE_VARIABLE_WarnSpecs_3_118;
  MR_Box conv1_IntInclMap_29;
  MR_Box conv5_SectionUseMap_32;
  MR_Box conv4_RestrictErrSpecs_33;

  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_6_p_0_1));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (IntFileKind_12));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Integer) 2));
  }
  mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/6", (MR_String) "trying to convert non-ifk_int2 parse_tree_int to parse_tree_int2");
  if ((ImpIncls_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ErrSpecs_1_84 = STATE_VARIABLE_ErrSpecs_0_58;
  else
  {
    MR_Word FirstImpIncl_23 = ((MR_Word) ((MR_hl_field(1, ImpIncls_16, 0))));
    MR_Word ImpInclSpec_26;
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, FirstImpIncl_23, 1))));

    {
      ImpInclSpec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpInclSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/6"));
      MR_hl_field(0, ImpInclSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ImpInclSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, ImpInclSpec_26, 3) = ((MR_Box) (Var_83));
      MR_hl_field(0, ImpInclSpec_26, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[22])));
    }
    {
      STATE_VARIABLE_ErrSpecs_1_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_84, 0) = ((MR_Box) (ImpInclSpec_26));
      MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_84, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_58));
    }
  }
  parse_tree__convert_include__classify_include_modules_5_p_0(IntIncls_15, (MR_Word) ((MR_Unsigned) 0U), &InclMap_27, (MR_Word) ((MR_Unsigned) 0U), &InclErrSpecs_28);
  Var_88 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[8]), InclMap_27, ((MR_Box) (Var_88)), &conv1_IntInclMap_29);
  IntInclMap_29 = ((MR_Word) (conv1_IntInclMap_29));
  STATE_VARIABLE_ErrSpecs_2_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InclErrSpecs_28, STATE_VARIABLE_ErrSpecs_1_84);
  parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0((MR_Integer) 0, ModuleName_11, IntAvails_17, ImpAvails_18, &SectionImportUseMap_30, (MR_Word) ((MR_Unsigned) 0U), &ImportWarnSpecs_31);
  STATE_VARIABLE_WarnSpecs_1_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ImportWarnSpecs_31, STATE_VARIABLE_WarnSpecs_0_60);
  Var_94 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[1]), SectionImportUseMap_30, ((MR_Box) (Var_94)), &conv5_SectionUseMap_32, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RestrictErrSpecs_33);
  SectionUseMap_32 = ((MR_Word) (conv5_SectionUseMap_32));
  RestrictErrSpecs_33 = ((MR_Word) (conv4_RestrictErrSpecs_33));
  STATE_VARIABLE_ErrSpecs_3_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), RestrictErrSpecs_33, STATE_VARIABLE_ErrSpecs_2_89);
  Var_98 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[9]), IntFIMs_19);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_98, &IntFIMSpecs_34);
  Var_100 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[10]), ImpFIMs_20);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_100, &ImpFIMSpecs_35);
  parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(IntItems_21, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_36, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_37, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_38, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_39, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_40, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_41, (MR_Word) ((MR_Unsigned) 0U), &ClassifyIntErrSpecs_42);
  STATE_VARIABLE_ErrSpecs_4_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyIntErrSpecs_42, STATE_VARIABLE_ErrSpecs_3_97);
  IntTypeDefnMap_43 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_36);
  IntInstDefnMap_44 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_37);
  IntModeDefnMap_45 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_38);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_39, &IntTypeClasses_46);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_40, &IntInstances_47);
  IntTypeRepnMap_48 = parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_41);
  parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(ImpItems_22, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_49, (MR_Word) ((MR_Unsigned) 0U), &ClassifyImpErrSpecs_50);
  STATE_VARIABLE_ErrSpecs_5_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyImpErrSpecs_50, STATE_VARIABLE_ErrSpecs_4_109);
  ImpTypeDefnMap_51 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_49);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), &ImpForeignEnumMap_52);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, IntTypeDefnMap_43, ImpTypeDefnMap_51, ImpForeignEnumMap_52, &IntTypeCheckedMap_53, STATE_VARIABLE_ErrSpecs_5_112, &STATE_VARIABLE_ErrSpecs_6_114, STATE_VARIABLE_WarnSpecs_1_92, &STATE_VARIABLE_WarnSpecs_2_115);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_54);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_8_p_0((MR_Integer) 0, IntInstDefnMap_44, ImpInstDefnMap_54, &IntInstCheckedMap_55, STATE_VARIABLE_ErrSpecs_6_114, &STATE_VARIABLE_ErrSpecs_7_117, STATE_VARIABLE_WarnSpecs_2_115, &STATE_VARIABLE_WarnSpecs_3_118);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_56);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_8_p_0((MR_Integer) 0, IntModeDefnMap_45, ImpModeDefnMap_56, &IntModeCheckedMap_57, STATE_VARIABLE_ErrSpecs_7_117, STATE_VARIABLE_ErrSpecs_59, STATE_VARIABLE_WarnSpecs_3_118, STATE_VARIABLE_WarnSpecs_61);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt2_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntInclMap_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionUseMap_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_35));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeCheckedMap_53));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstCheckedMap_55));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntModeCheckedMap_57));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_46));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_47));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntTypeRepnMap_48));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_43;
      MR_Word STATE_VARIABLE_ErrSpecs_1_60;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Pieces_37;
            MR_Word Spec_38;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_59;

            Var_49 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_12);
            Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[16])));
            Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[58])), Var_48);
            Var_59 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
            {
              Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
              MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Var_59));
              MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
            }
            {
              STATE_VARIABLE_ErrSpecs_1_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_60, 0) = ((MR_Box) (Spec_38));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_60, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4));
            }
            STATE_VARIABLE_TypeDefns_1_43 = STATE_VARIABLE_TypeDefns_0_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_12, 0))))) {
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
            case (MR_Integer) 10:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
            case (MR_Integer) 17:
              {
                MR_Word Pieces_37;
                MR_Word Spec_38;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_59;

                Var_49 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_12);
                Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[16])));
                Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[58])), Var_48);
                Var_59 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
                {
                  Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
                  MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Var_59));
                  MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
                }
                {
                  STATE_VARIABLE_ErrSpecs_1_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_60, 0) = ((MR_Box) (Spec_38));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_60, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_43 = STATE_VARIABLE_TypeDefns_0_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_16 = ((MR_Word) ((MR_hl_field(3, Item_12, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_43, 0) = ((MR_Box) (ItemTypeDefn_16));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_43, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ErrSpecs_1_60 = STATE_VARIABLE_ErrSpecs_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_43;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_60;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_TypeRepns_0_12,
  MR_Word * STATE_VARIABLE_TypeRepns_13,
  MR_Word STATE_VARIABLE_ErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_ErrSpecs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_15 = STATE_VARIABLE_ErrSpecs_0_14;
      *STATE_VARIABLE_TypeRepns_13 = STATE_VARIABLE_TypeRepns_0_12;
      *STATE_VARIABLE_Instances_11 = STATE_VARIABLE_Instances_0_10;
      *STATE_VARIABLE_TypeClasses_9 = STATE_VARIABLE_TypeClasses_0_8;
      *STATE_VARIABLE_ModeDefns_7 = STATE_VARIABLE_ModeDefns_0_6;
      *STATE_VARIABLE_InstDefns_5 = STATE_VARIABLE_InstDefns_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_94;
      MR_Word STATE_VARIABLE_InstDefns_1_95;
      MR_Word STATE_VARIABLE_ModeDefns_1_96;
      MR_Word STATE_VARIABLE_TypeClasses_1_97;
      MR_Word STATE_VARIABLE_Instances_1_99;
      MR_Word STATE_VARIABLE_ErrSpecs_1_114;
      MR_Word STATE_VARIABLE_TypeRepns_1_115;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_14;

      switch (MR_tag((MR_Word) Item_37)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_131;
            MR_Word Pieces_140;
            MR_Word Spec_141;

            Var_121 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_37);
            Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
            Pieces_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[58])), Var_120);
            Var_131 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
              MR_hl_field(0, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_141, 3) = ((MR_Box) (Var_131));
              MR_hl_field(0, Spec_141, 4) = ((MR_Box) (Pieces_140));
            }
            {
              STATE_VARIABLE_ErrSpecs_1_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_114, 0) = ((MR_Box) (Spec_141));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_114, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
            }
            STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_37, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
              {
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_131;
                MR_Word Pieces_140;
                MR_Word Spec_141;

                Var_121 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_37);
                Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
                Pieces_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[58])), Var_120);
                Var_131 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
                  MR_hl_field(0, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_141, 3) = ((MR_Box) (Var_131));
                  MR_hl_field(0, Spec_141, 4) = ((MR_Box) (Pieces_140));
                }
                {
                  STATE_VARIABLE_ErrSpecs_1_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_114, 0) = ((MR_Box) (Spec_141));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_114, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                }
                STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_TypeClasses_1_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_97, 0) = ((MR_Box) (ItemTypeClass_49));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_97, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_114 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_50 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));
                MR_Word ClassName_51 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 0))));
                MR_Word Types_52 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 1))));
                MR_Word OrigTypes_53 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 2))));
                MR_Word Constraints_54 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 3))));
                MR_Word Body_55 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 4))));
                MR_Word TVarSet_56 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 5))));
                MR_Word Module_57 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 6))));
                MR_Word Context_58 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 7))));
                MR_Word SeqNum_59 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, 8))));

                if ((Body_55 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ItemAbstractInstance_60;

                  {
                    ItemAbstractInstance_60 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ItemAbstractInstance_60, 0) = ((MR_Box) (ClassName_51));
                    MR_hl_field(0, ItemAbstractInstance_60, 1) = ((MR_Box) (Types_52));
                    MR_hl_field(0, ItemAbstractInstance_60, 2) = ((MR_Box) (OrigTypes_53));
                    MR_hl_field(0, ItemAbstractInstance_60, 3) = ((MR_Box) (Constraints_54));
                    MR_hl_field(0, ItemAbstractInstance_60, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, ItemAbstractInstance_60, 5) = ((MR_Box) (TVarSet_56));
                    MR_hl_field(0, ItemAbstractInstance_60, 6) = ((MR_Box) (Module_57));
                    MR_hl_field(0, ItemAbstractInstance_60, 7) = ((MR_Box) (Context_58));
                    MR_hl_field(0, ItemAbstractInstance_60, 8) = ((MR_Box) (SeqNum_59));
                  }
                  {
                    STATE_VARIABLE_Instances_1_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_99, 0) = ((MR_Box) (ItemAbstractInstance_60));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_99, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_ErrSpecs_1_114 = STATE_VARIABLE_ErrSpecs_0_14;
                }
                else
                {
                  MR_Word Spec_63;

                  {
                    Spec_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
                    MR_hl_field(0, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_63, 3) = ((MR_Box) (Context_58));
                    MR_hl_field(0, Spec_63, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[59])));
                  }
                  {
                    STATE_VARIABLE_ErrSpecs_1_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_114, 0) = ((MR_Box) (Spec_63));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_114, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_14));
                  }
                  STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_94, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_94, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_114 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_47 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_InstDefns_1_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_95, 0) = ((MR_Box) (ItemInstDefn_47));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_95, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_114 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_48 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_ModeDefns_1_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_96, 0) = ((MR_Box) (ItemModeDefn_48));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_96, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_1_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_ErrSpecs_1_114 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepn_64 = ((MR_Word) ((MR_hl_field(3, Item_37, 1))));

                {
                  STATE_VARIABLE_TypeRepns_1_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_1_115, 0) = ((MR_Box) (ItemTypeRepn_64));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_1_115, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_1_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_ErrSpecs_1_114 = STATE_VARIABLE_ErrSpecs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_94;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_1_95;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_1_96;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_1_97;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_1_99;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_1_115;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_14 = STATE_VARIABLE_ErrSpecs_1_114;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_TypeRepns_0_12 = next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      STATE_VARIABLE_ErrSpecs_0_14 = next_value_of_STATE_VARIABLE_ErrSpecs_0_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SectionUseMap_17;
  MR_Word conv0_STATE_VARIABLE_Specs_19;

  parse_tree__convert_parse_tree__restrict_to_section_use_map_entry_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SectionUseMap_17, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SectionUseMap_17));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__364__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0(
  MR_Word ParseTreeInt_7,
  MR_Word * ParseTreeInt1_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_66,
  MR_Word * STATE_VARIABLE_ErrSpecs_67,
  MR_Word STATE_VARIABLE_WarnSpecs_0_68,
  MR_Word * STATE_VARIABLE_WarnSpecs_69)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 0))));
  MR_Word IntFileKind_12 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_7, 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 2))));
  MR_Word MaybeVersionNumbers_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 3))));
  MR_Word IntIncls_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 4))));
  MR_Word ImpIncls_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 5))));
  MR_Word IntAvails_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 6))));
  MR_Word ImpAvails_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 7))));
  MR_Word IntFIMs_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 8))));
  MR_Word ImpFIMs_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 9))));
  MR_Word IntItems_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 10))));
  MR_Word ImpItems_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 11))));
  MR_Word InclMap_23;
  MR_Word InclErrSpecs_24;
  MR_Word SectionImportUseMap_25;
  MR_Word ImportWarnSpecs_26;
  MR_Word SectionUseMap_27;
  MR_Word RestrictErrSpecs_28;
  MR_Word IntFIMSpecs_29;
  MR_Word ImpFIMSpecs_30;
  MR_Word IntTypeDefns_31;
  MR_Word IntInstDefns_32;
  MR_Word IntModeDefns_33;
  MR_Word IntTypeClasses0_34;
  MR_Word IntInstances0_35;
  MR_Word IntPredDecls0_36;
  MR_Word RevIntModeDecls_37;
  MR_Word IntDeclPragmas0_39;
  MR_Word IntDeclMarkers_40;
  MR_Word IntPromises0_41;
  MR_Word IntTypeRepns_42;
  MR_Word ClassifyIntErrSpecs_43;
  MR_Word IntTypeDefnMap_44;
  MR_Word IntInstDefnMap_45;
  MR_Word IntModeDefnMap_46;
  MR_Word IntTypeClasses_47;
  MR_Word IntInstances_48;
  MR_Word IntPredDecls_49;
  MR_Word IntModeDecls_50;
  MR_Word IntDeclPragmas_51;
  MR_Word IntPromises_52;
  MR_Word IntTypeRepnMap_53;
  MR_Word ImpTypeDefns0_54;
  MR_Word ImpForeignEnums0_55;
  MR_Word ImpTypeClasses0_56;
  MR_Word ClassifyImpErrSpecs_57;
  MR_Word ImpTypeDefnMap_58;
  MR_Word ImpForeignEnumMap_59;
  MR_Word ImpTypeClasses_60;
  MR_Word IntTypeCheckedMap_61;
  MR_Word ImpInstDefnMap_62;
  MR_Word IntInstCheckedMap_63;
  MR_Word ImpModeDefnMap_64;
  MR_Word IntModeCheckedMap_65;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_ErrSpecs_1_75;
  MR_Word STATE_VARIABLE_WarnSpecs_1_78;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_ErrSpecs_2_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_ErrSpecs_3_101;
  MR_Word STATE_VARIABLE_ErrSpecs_4_106;
  MR_Word STATE_VARIABLE_ErrSpecs_5_108;
  MR_Word STATE_VARIABLE_WarnSpecs_2_109;
  MR_Word STATE_VARIABLE_ErrSpecs_6_111;
  MR_Word STATE_VARIABLE_WarnSpecs_3_112;
  MR_Box conv3_SectionUseMap_27;
  MR_Box conv2_RestrictErrSpecs_28;
  MR_Word _IntForeignEnums_38;

  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_6_p_0_1));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (IntFileKind_12));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/6", (MR_String) "trying to convert non-ifk_int1 parse_tree_int to parse_tree_int1");
  parse_tree__convert_include__classify_include_modules_5_p_0(IntIncls_15, ImpIncls_16, &InclMap_23, (MR_Word) ((MR_Unsigned) 0U), &InclErrSpecs_24);
  STATE_VARIABLE_ErrSpecs_1_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InclErrSpecs_24, STATE_VARIABLE_ErrSpecs_0_66);
  parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0((MR_Integer) 0, ModuleName_11, IntAvails_17, ImpAvails_18, &SectionImportUseMap_25, (MR_Word) ((MR_Unsigned) 0U), &ImportWarnSpecs_26);
  STATE_VARIABLE_WarnSpecs_1_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ImportWarnSpecs_26, STATE_VARIABLE_WarnSpecs_0_68);
  Var_80 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[0]), SectionImportUseMap_25, ((MR_Box) (Var_80)), &conv3_SectionUseMap_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RestrictErrSpecs_28);
  SectionUseMap_27 = ((MR_Word) (conv3_SectionUseMap_27));
  RestrictErrSpecs_28 = ((MR_Word) (conv2_RestrictErrSpecs_28));
  STATE_VARIABLE_ErrSpecs_2_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), RestrictErrSpecs_28, STATE_VARIABLE_ErrSpecs_1_75);
  Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), IntFIMs_19);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_84, &IntFIMSpecs_29);
  Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[7]), ImpFIMs_20);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_86, &ImpFIMSpecs_30);
  parse_tree__convert_parse_tree__classify_int1_items_int_27_p_0(IntItems_21, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_32, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_33, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_35, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_37, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_38, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_39, (MR_Word) ((MR_Unsigned) 0U), &IntDeclMarkers_40, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_41, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns_42, (MR_Word) ((MR_Unsigned) 0U), &ClassifyIntErrSpecs_43);
  STATE_VARIABLE_ErrSpecs_3_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyIntErrSpecs_43, STATE_VARIABLE_ErrSpecs_2_83);
  IntTypeDefnMap_44 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_31);
  IntInstDefnMap_45 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_32);
  IntModeDefnMap_46 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_33);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_34, &IntTypeClasses_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_35, &IntInstances_48);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_36, &IntPredDecls_49);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_37, &IntModeDecls_50);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntDeclPragmas0_39, &IntDeclPragmas_51);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_41, &IntPromises_52);
  IntTypeRepnMap_53 = parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns_42);
  parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(ImpItems_22, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_54, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums0_55, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_56, (MR_Word) ((MR_Unsigned) 0U), &ClassifyImpErrSpecs_57);
  STATE_VARIABLE_ErrSpecs_4_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyImpErrSpecs_57, STATE_VARIABLE_ErrSpecs_3_101);
  ImpTypeDefnMap_58 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_54);
  ImpForeignEnumMap_59 = parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums0_55);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), ImpTypeClasses0_56, &ImpTypeClasses_60);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, IntTypeDefnMap_44, ImpTypeDefnMap_58, ImpForeignEnumMap_59, &IntTypeCheckedMap_61, STATE_VARIABLE_ErrSpecs_4_106, &STATE_VARIABLE_ErrSpecs_5_108, STATE_VARIABLE_WarnSpecs_1_78, &STATE_VARIABLE_WarnSpecs_2_109);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_62);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_8_p_0((MR_Integer) 0, IntInstDefnMap_45, ImpInstDefnMap_62, &IntInstCheckedMap_63, STATE_VARIABLE_ErrSpecs_5_108, &STATE_VARIABLE_ErrSpecs_6_111, STATE_VARIABLE_WarnSpecs_2_109, &STATE_VARIABLE_WarnSpecs_3_112);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_64);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_8_p_0((MR_Integer) 0, IntModeDefnMap_46, ImpModeDefnMap_64, &IntModeCheckedMap_65, STATE_VARIABLE_ErrSpecs_6_111, STATE_VARIABLE_ErrSpecs_67, STATE_VARIABLE_WarnSpecs_3_112, STATE_VARIABLE_WarnSpecs_69);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt1_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionUseMap_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_29));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_30));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeCheckedMap_61));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstCheckedMap_63));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntModeCheckedMap_65));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_47));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_48));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_49));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_50));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_51));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers_40));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_52));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntTypeRepnMap_53));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpTypeClasses_60));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnums_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnums_5,
  MR_Word STATE_VARIABLE_TypeClasses_0_6,
  MR_Word * STATE_VARIABLE_TypeClasses_7,
  MR_Word STATE_VARIABLE_ErrSpecs_0_8,
  MR_Word * STATE_VARIABLE_ErrSpecs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_9 = STATE_VARIABLE_ErrSpecs_0_8;
      *STATE_VARIABLE_TypeClasses_7 = STATE_VARIABLE_TypeClasses_0_6;
      *STATE_VARIABLE_ForeignEnums_5 = STATE_VARIABLE_ForeignEnums_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_69;
      MR_Word STATE_VARIABLE_TypeClasses_1_71;
      MR_Word STATE_VARIABLE_ErrSpecs_1_83;
      MR_Word STATE_VARIABLE_ForeignEnums_1_84;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_8;

      switch (MR_tag((MR_Word) Item_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_100;
            MR_Word Pieces_106;
            MR_Word Spec_107;

            Var_90 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_22);
            Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[16])));
            Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[49])), Var_89);
            Var_100 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
            {
              Spec_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
              MR_hl_field(0, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_107, 3) = ((MR_Box) (Var_100));
              MR_hl_field(0, Spec_107, 4) = ((MR_Box) (Pieces_106));
            }
            {
              STATE_VARIABLE_ErrSpecs_1_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_83, 0) = ((MR_Box) (Spec_107));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_83, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_8));
            }
            STATE_VARIABLE_TypeDefns_1_69 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_1_84 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_TypeClasses_1_71 = STATE_VARIABLE_TypeClasses_0_6;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_22, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
            case (MR_Integer) 17:
              {
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_100;
                MR_Word Pieces_106;
                MR_Word Spec_107;

                Var_90 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_22);
                Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[16])));
                Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[49])), Var_89);
                Var_100 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
                {
                  Spec_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
                  MR_hl_field(0, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_107, 3) = ((MR_Box) (Var_100));
                  MR_hl_field(0, Spec_107, 4) = ((MR_Box) (Pieces_106));
                }
                {
                  STATE_VARIABLE_ErrSpecs_1_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_83, 0) = ((MR_Box) (Spec_107));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_83, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_8));
                }
                STATE_VARIABLE_TypeDefns_1_69 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_84 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_1_71 = STATE_VARIABLE_TypeClasses_0_6;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_42 = ((MR_Word) ((MR_hl_field(3, Item_22, 1))));

                {
                  STATE_VARIABLE_ForeignEnums_1_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_84, 0) = ((MR_Box) (ItemForeignEnum_42));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_84, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_69 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_TypeClasses_1_71 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_ErrSpecs_1_83 = STATE_VARIABLE_ErrSpecs_0_8;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_29 = ((MR_Word) ((MR_hl_field(3, Item_22, 1))));
                MR_Word ClassName_30 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 0))));
                MR_Word Params_31 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 1))));
                MR_Word Supers_32 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 2))));
                MR_Word Fundeps_33 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 3))));
                MR_Word Interface_34 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 4))));
                MR_Word TVarSet_35 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 5))));
                MR_Word Context_36 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 6))));
                MR_Word SeqNum_37 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, 7))));

                if ((Interface_34 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word AbstractItemTypeClass_38;

                  {
                    AbstractItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, AbstractItemTypeClass_38, 0) = ((MR_Box) (ClassName_30));
                    MR_hl_field(0, AbstractItemTypeClass_38, 1) = ((MR_Box) (Params_31));
                    MR_hl_field(0, AbstractItemTypeClass_38, 2) = ((MR_Box) (Supers_32));
                    MR_hl_field(0, AbstractItemTypeClass_38, 3) = ((MR_Box) (Fundeps_33));
                    MR_hl_field(0, AbstractItemTypeClass_38, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, AbstractItemTypeClass_38, 5) = ((MR_Box) (TVarSet_35));
                    MR_hl_field(0, AbstractItemTypeClass_38, 6) = ((MR_Box) (Context_36));
                    MR_hl_field(0, AbstractItemTypeClass_38, 7) = ((MR_Box) (SeqNum_37));
                  }
                  {
                    STATE_VARIABLE_TypeClasses_1_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_71, 0) = ((MR_Box) (AbstractItemTypeClass_38));
                    MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_71, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_6));
                  }
                  STATE_VARIABLE_ErrSpecs_1_83 = STATE_VARIABLE_ErrSpecs_0_8;
                }
                else
                {
                  MR_Word Spec_41;

                  {
                    Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
                    MR_hl_field(0, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_41, 3) = ((MR_Box) (Context_36));
                    MR_hl_field(0, Spec_41, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[57])));
                  }
                  {
                    STATE_VARIABLE_ErrSpecs_1_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_83, 0) = ((MR_Box) (Spec_41));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_83, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_8));
                  }
                  STATE_VARIABLE_TypeClasses_1_71 = STATE_VARIABLE_TypeClasses_0_6;
                }
                STATE_VARIABLE_TypeDefns_1_69 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_1_84 = STATE_VARIABLE_ForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_28 = ((MR_Word) ((MR_hl_field(3, Item_22, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_69, 0) = ((MR_Box) (ItemTypeDefn_28));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_69, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_1_84 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_1_71 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_ErrSpecs_1_83 = STATE_VARIABLE_ErrSpecs_0_8;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_23;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_69;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_1_84;
      next_value_of_STATE_VARIABLE_TypeClasses_0_6 = STATE_VARIABLE_TypeClasses_1_71;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_8 = STATE_VARIABLE_ErrSpecs_1_83;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_ForeignEnums_0_4 = next_value_of_STATE_VARIABLE_ForeignEnums_0_4;
      STATE_VARIABLE_TypeClasses_0_6 = next_value_of_STATE_VARIABLE_TypeClasses_0_6;
      STATE_VARIABLE_ErrSpecs_0_8 = next_value_of_STATE_VARIABLE_ErrSpecs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int1_items_int_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_PredDecls_0_12,
  MR_Word * STATE_VARIABLE_PredDecls_13,
  MR_Word STATE_VARIABLE_ModeDecls_0_14,
  MR_Word * STATE_VARIABLE_ModeDecls_15,
  MR_Word STATE_VARIABLE_ForeignEnums_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnums_17,
  MR_Word STATE_VARIABLE_DeclPragmas_0_18,
  MR_Word * STATE_VARIABLE_DeclPragmas_19,
  MR_Word STATE_VARIABLE_DeclMarkers_0_20,
  MR_Word * STATE_VARIABLE_DeclMarkers_21,
  MR_Word STATE_VARIABLE_Promises_0_22,
  MR_Word * STATE_VARIABLE_Promises_23,
  MR_Word STATE_VARIABLE_TypeRepns_0_24,
  MR_Word * STATE_VARIABLE_TypeRepns_25,
  MR_Word STATE_VARIABLE_ErrSpecs_0_26,
  MR_Word * STATE_VARIABLE_ErrSpecs_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_27 = STATE_VARIABLE_ErrSpecs_0_26;
      *STATE_VARIABLE_TypeRepns_25 = STATE_VARIABLE_TypeRepns_0_24;
      *STATE_VARIABLE_Promises_23 = STATE_VARIABLE_Promises_0_22;
      *STATE_VARIABLE_DeclMarkers_21 = STATE_VARIABLE_DeclMarkers_0_20;
      *STATE_VARIABLE_DeclPragmas_19 = STATE_VARIABLE_DeclPragmas_0_18;
      *STATE_VARIABLE_ForeignEnums_17 = STATE_VARIABLE_ForeignEnums_0_16;
      *STATE_VARIABLE_ModeDecls_15 = STATE_VARIABLE_ModeDecls_0_14;
      *STATE_VARIABLE_PredDecls_13 = STATE_VARIABLE_PredDecls_0_12;
      *STATE_VARIABLE_Instances_11 = STATE_VARIABLE_Instances_0_10;
      *STATE_VARIABLE_TypeClasses_9 = STATE_VARIABLE_TypeClasses_0_8;
      *STATE_VARIABLE_ModeDefns_7 = STATE_VARIABLE_ModeDefns_0_6;
      *STATE_VARIABLE_InstDefns_5 = STATE_VARIABLE_InstDefns_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_68 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_147;
      MR_Word STATE_VARIABLE_InstDefns_1_148;
      MR_Word STATE_VARIABLE_ModeDefns_1_149;
      MR_Word STATE_VARIABLE_TypeClasses_1_150;
      MR_Word STATE_VARIABLE_Instances_1_152;
      MR_Word STATE_VARIABLE_ErrSpecs_1_167;
      MR_Word STATE_VARIABLE_TypeRepns_1_168;
      MR_Word STATE_VARIABLE_PredDecls_1_169;
      MR_Word STATE_VARIABLE_ModeDecls_1_170;
      MR_Word STATE_VARIABLE_ForeignEnums_1_171;
      MR_Word STATE_VARIABLE_DeclPragmas_1_172;
      MR_Word STATE_VARIABLE_DeclMarkers_1_173;
      MR_Word STATE_VARIABLE_Promises_1_174;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      MR_Word next_value_of_STATE_VARIABLE_DeclPragmas_0_18;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkers_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_22;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_24;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_26;

      switch (MR_tag((MR_Word) Item_67)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_195;
            MR_Word Var_196;
            MR_Word Var_206;
            MR_Word Pieces_228;
            MR_Word Spec_229;

            Var_196 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_67);
            Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
            Pieces_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[49])), Var_195);
            Var_206 = parse_tree__prog_item__get_item_context_1_f_0(Item_67);
            {
              Spec_229 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
              MR_hl_field(0, Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_229, 3) = ((MR_Box) (Var_206));
              MR_hl_field(0, Spec_229, 4) = ((MR_Box) (Pieces_228));
            }
            {
              STATE_VARIABLE_ErrSpecs_1_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 0) = ((MR_Box) (Spec_229));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_26));
            }
            STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl_101 = (MR_Word) (MR_body((MR_Word) (Item_67), (MR_Integer) 1));

            {
              STATE_VARIABLE_PredDecls_1_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_1_169, 0) = ((MR_Box) (ItemPredDecl_101));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_1_169, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
            }
            STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
            STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_102 = (MR_Word) (MR_body((MR_Word) (Item_67), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDecls_1_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ModeDecls_1_170, 0) = ((MR_Box) (ItemModeDecl_102));
              MR_hl_field(1, STATE_VARIABLE_ModeDecls_1_170, 1) = ((MR_Box) (STATE_VARIABLE_ModeDecls_0_14));
            }
            STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
            STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_67, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
              {
                MR_Word Var_195;
                MR_Word Var_196;
                MR_Word Var_206;
                MR_Word Pieces_228;
                MR_Word Spec_229;

                Var_196 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_67);
                Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
                Pieces_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[49])), Var_195);
                Var_206 = parse_tree__prog_item__get_item_context_1_f_0(Item_67);
                {
                  Spec_229 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
                  MR_hl_field(0, Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_229, 3) = ((MR_Box) (Var_206));
                  MR_hl_field(0, Spec_229, 4) = ((MR_Box) (Pieces_228));
                }
                {
                  STATE_VARIABLE_ErrSpecs_1_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 0) = ((MR_Box) (Spec_229));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_26));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_103 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_ForeignEnums_1_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_171, 0) = ((MR_Box) (ItemForeignEnum_103));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_171, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_105 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_DeclMarkers_1_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_1_173, 0) = ((MR_Box) (ItemDeclMarker_105));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_1_173, 1) = ((MR_Box) (STATE_VARIABLE_DeclMarkers_0_20));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_106 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));
                MR_Word PromiseType_107 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromise_106, 0))) & (MR_Integer) 3);
                MR_Word Context_225 = ((MR_Word) ((MR_hl_field(0, ItemPromise_106, 4))));

                switch (PromiseType_107) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_Promises_1_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Promises_1_174, 0) = ((MR_Box) (ItemPromise_106));
                        MR_hl_field(1, STATE_VARIABLE_Promises_1_174, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                      }
                      STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_179;
                      MR_Word Var_180;
                      MR_Word Pieces_221;
                      MR_Word Spec_222;

                      Var_180 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_67);
                      Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_180, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])));
                      Pieces_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[49])), Var_179);
                      {
                        Spec_222 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Spec_222, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
                        MR_hl_field(0, Spec_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, Spec_222, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                        MR_hl_field(0, Spec_222, 3) = ((MR_Box) (Context_225));
                        MR_hl_field(0, Spec_222, 4) = ((MR_Box) (Pieces_221));
                      }
                      {
                        STATE_VARIABLE_ErrSpecs_1_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 0) = ((MR_Box) (Spec_222));
                        MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_26));
                      }
                      STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_85 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_TypeClasses_1_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_150, 0) = ((MR_Box) (ItemTypeClass_85));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_150, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_86 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));
                MR_Word ClassName_87 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 0))));
                MR_Word Types_88 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 1))));
                MR_Word OrigTypes_89 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 2))));
                MR_Word Constraints_90 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 3))));
                MR_Word Body_91 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 4))));
                MR_Word TVarSet_92 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 5))));
                MR_Word Module_93 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 6))));
                MR_Word Context_94 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 7))));
                MR_Word SeqNum_95 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, 8))));

                if ((Body_91 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ItemAbstractInstance_96;

                  {
                    ItemAbstractInstance_96 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ItemAbstractInstance_96, 0) = ((MR_Box) (ClassName_87));
                    MR_hl_field(0, ItemAbstractInstance_96, 1) = ((MR_Box) (Types_88));
                    MR_hl_field(0, ItemAbstractInstance_96, 2) = ((MR_Box) (OrigTypes_89));
                    MR_hl_field(0, ItemAbstractInstance_96, 3) = ((MR_Box) (Constraints_90));
                    MR_hl_field(0, ItemAbstractInstance_96, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, ItemAbstractInstance_96, 5) = ((MR_Box) (TVarSet_92));
                    MR_hl_field(0, ItemAbstractInstance_96, 6) = ((MR_Box) (Module_93));
                    MR_hl_field(0, ItemAbstractInstance_96, 7) = ((MR_Box) (Context_94));
                    MR_hl_field(0, ItemAbstractInstance_96, 8) = ((MR_Box) (SeqNum_95));
                  }
                  {
                    STATE_VARIABLE_Instances_1_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_152, 0) = ((MR_Box) (ItemAbstractInstance_96));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_152, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
                }
                else
                {
                  MR_Word Spec_99;

                  {
                    Spec_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
                    MR_hl_field(0, Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_99, 3) = ((MR_Box) (Context_94));
                    MR_hl_field(0, Spec_99, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[54])));
                  }
                  {
                    STATE_VARIABLE_ErrSpecs_1_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 0) = ((MR_Box) (Spec_99));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_167, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_26));
                  }
                  STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_82 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_147, 0) = ((MR_Box) (ItemTypeDefn_82));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_147, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_83 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_InstDefns_1_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_148, 0) = ((MR_Box) (ItemInstDefn_83));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_148, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_84 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_ModeDefns_1_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_149, 0) = ((MR_Box) (ItemModeDefn_84));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_149, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_104 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_DeclPragmas_1_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_1_172, 0) = ((MR_Box) (ItemDeclPragma_104));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_1_172, 1) = ((MR_Box) (STATE_VARIABLE_DeclPragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_1_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepn_100 = ((MR_Word) ((MR_hl_field(3, Item_67, 1))));

                {
                  STATE_VARIABLE_TypeRepns_1_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_1_168, 0) = ((MR_Box) (ItemTypeRepn_100));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_1_168, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_24));
                }
                STATE_VARIABLE_TypeDefns_1_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_1_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_167 = STATE_VARIABLE_ErrSpecs_0_26;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_68;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_147;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_1_148;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_1_149;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_1_150;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_1_152;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_1_169;
      next_value_of_STATE_VARIABLE_ModeDecls_0_14 = STATE_VARIABLE_ModeDecls_1_170;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_1_171;
      next_value_of_STATE_VARIABLE_DeclPragmas_0_18 = STATE_VARIABLE_DeclPragmas_1_172;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_20 = STATE_VARIABLE_DeclMarkers_1_173;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_1_174;
      next_value_of_STATE_VARIABLE_TypeRepns_0_24 = STATE_VARIABLE_TypeRepns_1_168;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_26 = STATE_VARIABLE_ErrSpecs_1_167;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_PredDecls_0_12 = next_value_of_STATE_VARIABLE_PredDecls_0_12;
      STATE_VARIABLE_ModeDecls_0_14 = next_value_of_STATE_VARIABLE_ModeDecls_0_14;
      STATE_VARIABLE_ForeignEnums_0_16 = next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      STATE_VARIABLE_DeclPragmas_0_18 = next_value_of_STATE_VARIABLE_DeclPragmas_0_18;
      STATE_VARIABLE_DeclMarkers_0_20 = next_value_of_STATE_VARIABLE_DeclMarkers_0_20;
      STATE_VARIABLE_Promises_0_22 = next_value_of_STATE_VARIABLE_Promises_0_22;
      STATE_VARIABLE_TypeRepns_0_24 = next_value_of_STATE_VARIABLE_TypeRepns_0_24;
      STATE_VARIABLE_ErrSpecs_0_26 = next_value_of_STATE_VARIABLE_ErrSpecs_0_26;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__195__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0(
  MR_Word ParseTreeInt_7,
  MR_Word * ParseTreeInt0_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_77,
  MR_Word * STATE_VARIABLE_ErrSpecs_78,
  MR_Word STATE_VARIABLE_WarnSpecs_0_79,
  MR_Word * STATE_VARIABLE_WarnSpecs_80)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 0))));
  MR_Word IntFileKind_12 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_7, 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 2))));
  MR_Word MaybeVersionNumbers_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 3))));
  MR_Word IntIncls_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 4))));
  MR_Word ImpIncls_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 5))));
  MR_Word IntAvails_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 6))));
  MR_Word ImpAvails_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 7))));
  MR_Word IntFIMs_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 8))));
  MR_Word ImpFIMs_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 9))));
  MR_Word IntItems_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 10))));
  MR_Word ImpItems_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_7, 11))));
  MR_Word InclMap_23;
  MR_Word InclErrSpecs_24;
  MR_Word SectionImportUseMap_25;
  MR_Word ImportWarnSpecs_26;
  MR_Word IntFIMSpecs_27;
  MR_Word ImpFIMSpecs_28;
  MR_Word IntTypeDefns_29;
  MR_Word IntInstDefns_30;
  MR_Word IntModeDefns_31;
  MR_Word IntTypeClasses0_32;
  MR_Word IntInstances0_33;
  MR_Word IntPredDecls0_34;
  MR_Word RevIntModeDecls_35;
  MR_Word IntDeclPragmas0_37;
  MR_Word IntDeclMarkers0_38;
  MR_Word IntPromises0_39;
  MR_Word ClassifyIntErrSpecs_40;
  MR_Word IntTypeDefnMap_41;
  MR_Word IntInstDefnMap_42;
  MR_Word IntModeDefnMap_43;
  MR_Word IntTypeClasses_44;
  MR_Word IntInstances_45;
  MR_Word IntPredDecls_46;
  MR_Word IntModeDecls_47;
  MR_Word IntDeclPragmas_48;
  MR_Word IntDeclMarkers_49;
  MR_Word IntPromises_50;
  MR_Word ImpTypeDefns_51;
  MR_Word ImpInstDefns_52;
  MR_Word ImpModeDefns_53;
  MR_Word ImpTypeClasses0_54;
  MR_Word ImpInstances0_55;
  MR_Word ImpPredDecls0_56;
  MR_Word RevImpModeDecls_57;
  MR_Word ImpForeignEnums_58;
  MR_Word ImpDeclPragmas0_59;
  MR_Word ImpDeclMarkers0_60;
  MR_Word ImpPromises0_61;
  MR_Word ClassifyImpErrSpecs_62;
  MR_Word ImpTypeDefnMap_63;
  MR_Word ImpInstDefnMap_64;
  MR_Word ImpModeDefnMap_65;
  MR_Word ImpTypeClasses_66;
  MR_Word ImpInstances_67;
  MR_Word ImpPredDecls_68;
  MR_Word ImpModeDecls_69;
  MR_Word ImpForeignEnumMap_70;
  MR_Word ImpDeclPragmas_71;
  MR_Word ImpDeclMarkers_72;
  MR_Word ImpPromises_73;
  MR_Word TypeCtorCheckedMap_74;
  MR_Word InstCtorCheckedMap_75;
  MR_Word ModeCtorCheckedMap_76;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_ErrSpecs_1_86;
  MR_Word STATE_VARIABLE_WarnSpecs_1_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word STATE_VARIABLE_ErrSpecs_2_106;
  MR_Word STATE_VARIABLE_ErrSpecs_3_119;
  MR_Word STATE_VARIABLE_ErrSpecs_4_121;
  MR_Word STATE_VARIABLE_WarnSpecs_2_122;
  MR_Word STATE_VARIABLE_ErrSpecs_5_124;
  MR_Word STATE_VARIABLE_WarnSpecs_3_125;
  MR_Word _IntForeignEnums_36;

  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_6_p_0_1));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (IntFileKind_12));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_81, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int0\'/6", (MR_String) "trying to convert non-ifk_int0 parse_tree_int to parse_tree_int0");
  parse_tree__convert_include__classify_include_modules_5_p_0(IntIncls_15, ImpIncls_16, &InclMap_23, (MR_Word) ((MR_Unsigned) 0U), &InclErrSpecs_24);
  STATE_VARIABLE_ErrSpecs_1_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InclErrSpecs_24, STATE_VARIABLE_ErrSpecs_0_77);
  parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0((MR_Integer) 0, ModuleName_11, IntAvails_17, ImpAvails_18, &SectionImportUseMap_25, (MR_Word) ((MR_Unsigned) 0U), &ImportWarnSpecs_26);
  STATE_VARIABLE_WarnSpecs_1_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ImportWarnSpecs_26, STATE_VARIABLE_WarnSpecs_0_79);
  Var_90 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), IntFIMs_19);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_90, &IntFIMSpecs_27);
  Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), ImpFIMs_20);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_92, &ImpFIMSpecs_28);
  parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_25_p_0(IntItems_21, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_29, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_30, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_32, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_33, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_34, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_35, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_36, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_37, (MR_Word) ((MR_Unsigned) 0U), &IntDeclMarkers0_38, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_39, (MR_Word) ((MR_Unsigned) 0U), &ClassifyIntErrSpecs_40);
  STATE_VARIABLE_ErrSpecs_2_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyIntErrSpecs_40, STATE_VARIABLE_ErrSpecs_1_86);
  IntTypeDefnMap_41 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_29);
  IntInstDefnMap_42 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_30);
  IntModeDefnMap_43 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_31);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_32, &IntTypeClasses_44);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_33, &IntInstances_45);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_34, &IntPredDecls_46);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_35, &IntModeDecls_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntDeclPragmas0_37, &IntDeclPragmas_48);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntDeclMarkers0_38, &IntDeclMarkers_49);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_39, &IntPromises_50);
  parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_25_p_0(ImpItems_22, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns_51, (MR_Word) ((MR_Unsigned) 0U), &ImpInstDefns_52, (MR_Word) ((MR_Unsigned) 0U), &ImpModeDefns_53, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_54, (MR_Word) ((MR_Unsigned) 0U), &ImpInstances0_55, (MR_Word) ((MR_Unsigned) 0U), &ImpPredDecls0_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_57, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums_58, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclPragmas0_59, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclMarkers0_60, (MR_Word) ((MR_Unsigned) 0U), &ImpPromises0_61, (MR_Word) ((MR_Unsigned) 0U), &ClassifyImpErrSpecs_62);
  STATE_VARIABLE_ErrSpecs_3_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ClassifyImpErrSpecs_62, STATE_VARIABLE_ErrSpecs_2_106);
  ImpTypeDefnMap_63 = parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_51);
  ImpInstDefnMap_64 = parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_52);
  ImpModeDefnMap_65 = parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_53);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_54, &ImpTypeClasses_66);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), ImpInstances0_55, &ImpInstances_67);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_56, &ImpPredDecls_68);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_57, &ImpModeDecls_69);
  ImpForeignEnumMap_70 = parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_58);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), ImpDeclPragmas0_59, &ImpDeclPragmas_71);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ImpDeclMarkers0_60, &ImpDeclMarkers_72);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises0_61, &ImpPromises_73);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, IntTypeDefnMap_41, ImpTypeDefnMap_63, ImpForeignEnumMap_70, &TypeCtorCheckedMap_74, STATE_VARIABLE_ErrSpecs_3_119, &STATE_VARIABLE_ErrSpecs_4_121, STATE_VARIABLE_WarnSpecs_1_89, &STATE_VARIABLE_WarnSpecs_2_122);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_8_p_0((MR_Integer) 0, IntInstDefnMap_42, ImpInstDefnMap_64, &InstCtorCheckedMap_75, STATE_VARIABLE_ErrSpecs_4_121, &STATE_VARIABLE_ErrSpecs_5_124, STATE_VARIABLE_WarnSpecs_2_122, &STATE_VARIABLE_WarnSpecs_3_125);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_8_p_0((MR_Integer) 0, IntModeDefnMap_43, ImpModeDefnMap_65, &ModeCtorCheckedMap_76, STATE_VARIABLE_ErrSpecs_5_124, STATE_VARIABLE_ErrSpecs_78, STATE_VARIABLE_WarnSpecs_3_125, STATE_VARIABLE_WarnSpecs_80);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt0_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionImportUseMap_25));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_27));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_28));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_74));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_75));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_76));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_44));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_45));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_46));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_47));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_48));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers_49));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_50));
    MR_hl_field(0, base, 17) = ((MR_Box) (ImpTypeClasses_66));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpInstances_67));
    MR_hl_field(0, base, 19) = ((MR_Box) (ImpPredDecls_68));
    MR_hl_field(0, base, 20) = ((MR_Box) (ImpModeDecls_69));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpDeclPragmas_71));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpDeclMarkers_72));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPromises_73));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_25_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_InstDefns_0_4,
  MR_Word * STATE_VARIABLE_InstDefns_5,
  MR_Word STATE_VARIABLE_ModeDefns_0_6,
  MR_Word * STATE_VARIABLE_ModeDefns_7,
  MR_Word STATE_VARIABLE_TypeClasses_0_8,
  MR_Word * STATE_VARIABLE_TypeClasses_9,
  MR_Word STATE_VARIABLE_Instances_0_10,
  MR_Word * STATE_VARIABLE_Instances_11,
  MR_Word STATE_VARIABLE_PredDecls_0_12,
  MR_Word * STATE_VARIABLE_PredDecls_13,
  MR_Word STATE_VARIABLE_RevModeDecls_0_14,
  MR_Word * STATE_VARIABLE_RevModeDecls_15,
  MR_Word STATE_VARIABLE_ForeignEnums_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnums_17,
  MR_Word STATE_VARIABLE_DeclPragmas_0_18,
  MR_Word * STATE_VARIABLE_DeclPragmas_19,
  MR_Word STATE_VARIABLE_DeclMarkers_0_20,
  MR_Word * STATE_VARIABLE_DeclMarkers_21,
  MR_Word STATE_VARIABLE_Promises_0_22,
  MR_Word * STATE_VARIABLE_Promises_23,
  MR_Word STATE_VARIABLE_ErrSpecs_0_24,
  MR_Word * STATE_VARIABLE_ErrSpecs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_25 = STATE_VARIABLE_ErrSpecs_0_24;
      *STATE_VARIABLE_Promises_23 = STATE_VARIABLE_Promises_0_22;
      *STATE_VARIABLE_DeclMarkers_21 = STATE_VARIABLE_DeclMarkers_0_20;
      *STATE_VARIABLE_DeclPragmas_19 = STATE_VARIABLE_DeclPragmas_0_18;
      *STATE_VARIABLE_ForeignEnums_17 = STATE_VARIABLE_ForeignEnums_0_16;
      *STATE_VARIABLE_RevModeDecls_15 = STATE_VARIABLE_RevModeDecls_0_14;
      *STATE_VARIABLE_PredDecls_13 = STATE_VARIABLE_PredDecls_0_12;
      *STATE_VARIABLE_Instances_11 = STATE_VARIABLE_Instances_0_10;
      *STATE_VARIABLE_TypeClasses_9 = STATE_VARIABLE_TypeClasses_0_8;
      *STATE_VARIABLE_ModeDefns_7 = STATE_VARIABLE_ModeDefns_0_6;
      *STATE_VARIABLE_InstDefns_5 = STATE_VARIABLE_InstDefns_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeDefns_1_134;
      MR_Word STATE_VARIABLE_InstDefns_1_135;
      MR_Word STATE_VARIABLE_ModeDefns_1_136;
      MR_Word STATE_VARIABLE_TypeClasses_1_137;
      MR_Word STATE_VARIABLE_Instances_1_139;
      MR_Word STATE_VARIABLE_ErrSpecs_1_151;
      MR_Word STATE_VARIABLE_PredDecls_1_152;
      MR_Word STATE_VARIABLE_RevModeDecls_1_153;
      MR_Word STATE_VARIABLE_ForeignEnums_1_154;
      MR_Word STATE_VARIABLE_DeclPragmas_1_155;
      MR_Word STATE_VARIABLE_DeclMarkers_1_156;
      MR_Word STATE_VARIABLE_Promises_1_157;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      MR_Word next_value_of_STATE_VARIABLE_DeclPragmas_0_18;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkers_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_22;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_24;

      switch (MR_tag((MR_Word) Item_62)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_173;
            MR_Word Pieces_187;
            MR_Word Spec_188;

            Var_163 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_62);
            Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_163, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
            Pieces_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[42])), Var_162);
            Var_173 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
            {
              Spec_188 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_188, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/25"));
              MR_hl_field(0, Spec_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_188, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_188, 3) = ((MR_Box) (Var_173));
              MR_hl_field(0, Spec_188, 4) = ((MR_Box) (Pieces_187));
            }
            {
              STATE_VARIABLE_ErrSpecs_1_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_151, 0) = ((MR_Box) (Spec_188));
              MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_151, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_24));
            }
            STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl_94 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 1));

            {
              STATE_VARIABLE_PredDecls_1_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_1_152, 0) = ((MR_Box) (ItemPredDecl_94));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_1_152, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
            }
            STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_95 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_1_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_153, 0) = ((MR_Box) (ItemModeDecl_95));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_1_153, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_62, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
            case (MR_Integer) 17:
              {
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_173;
                MR_Word Pieces_187;
                MR_Word Spec_188;

                Var_163 = parse_tree__item_util__items_desc_pieces_1_f_0(Item_62);
                Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_163, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[44])));
                Pieces_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[42])), Var_162);
                Var_173 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
                {
                  Spec_188 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_188, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/25"));
                  MR_hl_field(0, Spec_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_188, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                  MR_hl_field(0, Spec_188, 3) = ((MR_Box) (Var_173));
                  MR_hl_field(0, Spec_188, 4) = ((MR_Box) (Pieces_187));
                }
                {
                  STATE_VARIABLE_ErrSpecs_1_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_151, 0) = ((MR_Box) (Spec_188));
                  MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_151, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_24));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_96 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_ForeignEnums_1_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_154, 0) = ((MR_Box) (ItemForeignEnum_96));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_1_154, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_98 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_DeclMarkers_1_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_1_156, 0) = ((MR_Box) (ItemDeclMarker_98));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_1_156, 1) = ((MR_Box) (STATE_VARIABLE_DeclMarkers_0_20));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_99 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_Promises_1_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Promises_1_157, 0) = ((MR_Box) (ItemPromise_99));
                  MR_hl_field(1, STATE_VARIABLE_Promises_1_157, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_79 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_TypeClasses_1_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_137, 0) = ((MR_Box) (ItemTypeClass_79));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_1_137, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_80 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));
                MR_Word ClassName_81 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 0))));
                MR_Word Types_82 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 1))));
                MR_Word OrigTypes_83 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 2))));
                MR_Word Constraints_84 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 3))));
                MR_Word Body_85 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 4))));
                MR_Word TVarSet_86 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 5))));
                MR_Word Module_87 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 6))));
                MR_Word Context_88 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 7))));
                MR_Word SeqNum_89 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, 8))));

                if ((Body_85 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ItemAbstractInstance_90;

                  {
                    ItemAbstractInstance_90 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ItemAbstractInstance_90, 0) = ((MR_Box) (ClassName_81));
                    MR_hl_field(0, ItemAbstractInstance_90, 1) = ((MR_Box) (Types_82));
                    MR_hl_field(0, ItemAbstractInstance_90, 2) = ((MR_Box) (OrigTypes_83));
                    MR_hl_field(0, ItemAbstractInstance_90, 3) = ((MR_Box) (Constraints_84));
                    MR_hl_field(0, ItemAbstractInstance_90, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, ItemAbstractInstance_90, 5) = ((MR_Box) (TVarSet_86));
                    MR_hl_field(0, ItemAbstractInstance_90, 6) = ((MR_Box) (Module_87));
                    MR_hl_field(0, ItemAbstractInstance_90, 7) = ((MR_Box) (Context_88));
                    MR_hl_field(0, ItemAbstractInstance_90, 8) = ((MR_Box) (SeqNum_89));
                  }
                  {
                    STATE_VARIABLE_Instances_1_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_139, 0) = ((MR_Box) (ItemAbstractInstance_90));
                    MR_hl_field(1, STATE_VARIABLE_Instances_1_139, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
                }
                else
                {
                  MR_Word Spec_93;

                  {
                    Spec_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/25"));
                    MR_hl_field(0, Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, Spec_93, 3) = ((MR_Box) (Context_88));
                    MR_hl_field(0, Spec_93, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[47])));
                  }
                  {
                    STATE_VARIABLE_ErrSpecs_1_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_151, 0) = ((MR_Box) (Spec_93));
                    MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_151, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_24));
                  }
                  STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_76 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_TypeDefns_1_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_134, 0) = ((MR_Box) (ItemTypeDefn_76));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_1_134, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_77 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_InstDefns_1_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_135, 0) = ((MR_Box) (ItemInstDefn_77));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_1_135, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_78 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_ModeDefns_1_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_136, 0) = ((MR_Box) (ItemModeDefn_78));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_1_136, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_1_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_97 = ((MR_Word) ((MR_hl_field(3, Item_62, 1))));

                {
                  STATE_VARIABLE_DeclPragmas_1_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_1_155, 0) = ((MR_Box) (ItemDeclPragma_97));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_1_155, 1) = ((MR_Box) (STATE_VARIABLE_DeclPragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_1_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_1_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_1_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_1_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_1_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_1_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_1_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_1_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclMarkers_1_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_1_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ErrSpecs_1_151 = STATE_VARIABLE_ErrSpecs_0_24;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_63;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_1_134;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_1_135;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_1_136;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_1_137;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_1_139;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_1_152;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_1_153;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_1_154;
      next_value_of_STATE_VARIABLE_DeclPragmas_0_18 = STATE_VARIABLE_DeclPragmas_1_155;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_20 = STATE_VARIABLE_DeclMarkers_1_156;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_1_157;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_24 = STATE_VARIABLE_ErrSpecs_1_151;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_PredDecls_0_12 = next_value_of_STATE_VARIABLE_PredDecls_0_12;
      STATE_VARIABLE_RevModeDecls_0_14 = next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      STATE_VARIABLE_ForeignEnums_0_16 = next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      STATE_VARIABLE_DeclPragmas_0_18 = next_value_of_STATE_VARIABLE_DeclPragmas_0_18;
      STATE_VARIABLE_DeclMarkers_0_20 = next_value_of_STATE_VARIABLE_DeclMarkers_0_20;
      STATE_VARIABLE_Promises_0_22 = next_value_of_STATE_VARIABLE_Promises_0_22;
      STATE_VARIABLE_ErrSpecs_0_24 = next_value_of_STATE_VARIABLE_ErrSpecs_0_24;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____parse_tree_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_parse_tree____Unify____parse_tree_int_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____parse_tree_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_parse_tree____Compare____parse_tree_int_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____parse_tree_opt_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_parse_tree____Unify____parse_tree_opt_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____parse_tree_opt_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_parse_tree____Compare____parse_tree_opt_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____raw_compilation_unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_parse_tree____Unify____raw_compilation_unit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____raw_compilation_unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_parse_tree____Compare____raw_compilation_unit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree____Unify____raw_item_block_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_parse_tree____Unify____raw_item_block_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_parse_tree____Compare____raw_item_block_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_parse_tree____Compare____raw_item_block_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__convert_parse_tree__init(void)
{
}

void mercury__parse_tree__convert_parse_tree__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_int_0);
  MR_register_type_ctor_info(&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_parse_tree_opt_0);
  MR_register_type_ctor_info(&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_compilation_unit_0);
  MR_register_type_ctor_info(&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0);
}

void mercury__parse_tree__convert_parse_tree__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__convert_parse_tree__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.convert_parse_tree.
