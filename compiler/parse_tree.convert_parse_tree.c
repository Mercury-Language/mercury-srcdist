/*
** Automatically generated from `convert_parse_tree.m'
** by the Mercury compiler,
** version rotd-2021-07-19
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
#include "bimap.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_parse_tree_type_defns.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_c_java_csharp_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1689__1_1_p_0(
  MR_Word IntForeignExportLangs_121);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1687__1_1_p_0(
  MR_Word IntFactTablesSet_119);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1685__1_1_p_0(
  MR_Word IntForeignIncludeFilesCord_118);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1309__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__996__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__826__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__649__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__440__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_67);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__295__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__276__1_2_p_0(
  MR_Word ImpAvails_21,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__273__1_2_p_0(
  MR_Word ImpIncls_19,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__248__1_2_p_0(
  MR_Word ImpAvails_24,
  MR_Word HeadVar__2_37);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__245__1_2_p_0(
  MR_Word ImpIncls_22,
  MR_Word HeadVar__2_32);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(
  MR_Word ItemFIM_6,
  MR_Word STATE_VARIABLE_FIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_FIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(
  MR_Word IntFIMSpecMap_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_foreign_enum_items_3_p_0(
  MR_Word AllEnums_4,
  MR_Word STATE_VARIABLE_ForeignEnums_0_9,
  MR_Word * STATE_VARIABLE_ForeignEnums_10);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_foreign_type_defn_1_f_0(
  MR_Word ForeignDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_du_type_defn_1_f_0(
  MR_Word DuDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_eqv_type_defn_1_f_0(
  MR_Word EqvDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_solver_type_defn_1_f_0(
  MR_Word SolverDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_abstract_type_defn_1_f_0(
  MR_Word AbstractDefnInfo_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_15,
  MR_Word * STATE_VARIABLE_TypeDefns_16);

static void MR_CALL 
parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_17);

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15);

static void MR_CALL 
parse_tree__convert_parse_tree__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_22,
  MR_Word * STATE_VARIABLE_ModeDefnMap_23);

static void MR_CALL 
parse_tree__convert_parse_tree__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_23,
  MR_Word * STATE_VARIABLE_InstDefnMap_24);

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_42,
  MR_Word * STATE_VARIABLE_TypeDefnMap_43);

static void MR_CALL 
parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(
  MR_Word Clause0_3,
  MR_Word * Clause_4);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_2(
  MR_Box closure_arg);

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
  MR_Word STATE_VARIABLE_IntImportMap_0_4,
  MR_Word * STATE_VARIABLE_IntImportMap_5,
  MR_Word STATE_VARIABLE_IntUseMap_0_6,
  MR_Word * STATE_VARIABLE_IntUseMap_7,
  MR_Word STATE_VARIABLE_IntFIMSpecMap_0_8,
  MR_Word * STATE_VARIABLE_IntFIMSpecMap_9,
  MR_Word STATE_VARIABLE_RevIntTypeDefnsAbs_0_10,
  MR_Word * STATE_VARIABLE_RevIntTypeDefnsAbs_11,
  MR_Word STATE_VARIABLE_RevIntTypeDefnsMer_0_12,
  MR_Word * STATE_VARIABLE_RevIntTypeDefnsMer_13,
  MR_Word STATE_VARIABLE_RevIntTypeDefnsForeign_0_14,
  MR_Word * STATE_VARIABLE_RevIntTypeDefnsForeign_15,
  MR_Word STATE_VARIABLE_RevIntInstDefns_0_16,
  MR_Word * STATE_VARIABLE_RevIntInstDefns_17,
  MR_Word STATE_VARIABLE_RevIntModeDefns_0_18,
  MR_Word * STATE_VARIABLE_RevIntModeDefns_19,
  MR_Word STATE_VARIABLE_RevIntTypeClasses_0_20,
  MR_Word * STATE_VARIABLE_RevIntTypeClasses_21,
  MR_Word STATE_VARIABLE_RevIntInstances_0_22,
  MR_Word * STATE_VARIABLE_RevIntInstances_23,
  MR_Word STATE_VARIABLE_RevIntPredDecls_0_24,
  MR_Word * STATE_VARIABLE_RevIntPredDecls_25,
  MR_Word STATE_VARIABLE_RevIntModeDecls_0_26,
  MR_Word * STATE_VARIABLE_RevIntModeDecls_27,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_28,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_29,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_30,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_31,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_32,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_33,
  MR_Word STATE_VARIABLE_RevIntPromises_0_34,
  MR_Word * STATE_VARIABLE_RevIntPromises_35,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_36,
  MR_Word * STATE_VARIABLE_RevIntInitialises_37,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_38,
  MR_Word * STATE_VARIABLE_RevIntFinalises_39,
  MR_Word STATE_VARIABLE_RevIntMutables_0_40,
  MR_Word * STATE_VARIABLE_RevIntMutables_41,
  MR_Word STATE_VARIABLE_IntContents_0_42,
  MR_Word * STATE_VARIABLE_IntContents_43,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_44,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_45,
  MR_Word STATE_VARIABLE_ImpIncls_0_46,
  MR_Word * STATE_VARIABLE_ImpIncls_47,
  MR_Word STATE_VARIABLE_ImpImportMap_0_48,
  MR_Word * STATE_VARIABLE_ImpImportMap_49,
  MR_Word STATE_VARIABLE_ImpUseMap_0_50,
  MR_Word * STATE_VARIABLE_ImpUseMap_51,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_52,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_53,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsAbs_0_54,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsAbs_55,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsMer_0_56,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsMer_57,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsForeign_0_58,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsForeign_59,
  MR_Word STATE_VARIABLE_RevImpInstDefns_0_60,
  MR_Word * STATE_VARIABLE_RevImpInstDefns_61,
  MR_Word STATE_VARIABLE_RevImpModeDefns_0_62,
  MR_Word * STATE_VARIABLE_RevImpModeDefns_63,
  MR_Word STATE_VARIABLE_RevImpTypeClasses_0_64,
  MR_Word * STATE_VARIABLE_RevImpTypeClasses_65,
  MR_Word STATE_VARIABLE_RevImpInstances_0_66,
  MR_Word * STATE_VARIABLE_RevImpInstances_67,
  MR_Word STATE_VARIABLE_RevImpPredDecls_0_68,
  MR_Word * STATE_VARIABLE_RevImpPredDecls_69,
  MR_Word STATE_VARIABLE_RevImpModeDecls_0_70,
  MR_Word * STATE_VARIABLE_RevImpModeDecls_71,
  MR_Word STATE_VARIABLE_RevImpClauses_0_72,
  MR_Word * STATE_VARIABLE_RevImpClauses_73,
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_74,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_75,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_76,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_77,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_78,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_79,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_80,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_81,
  MR_Word STATE_VARIABLE_RevImpPromises_0_82,
  MR_Word * STATE_VARIABLE_RevImpPromises_83,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_84,
  MR_Word * STATE_VARIABLE_RevImpInitialises_85,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_86,
  MR_Word * STATE_VARIABLE_RevImpFinalises_87,
  MR_Word STATE_VARIABLE_RevImpMutables_0_88,
  MR_Word * STATE_VARIABLE_RevImpMutables_89,
  MR_Word STATE_VARIABLE_ImpContents_0_90,
  MR_Word * STATE_VARIABLE_ImpContents_91,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_92,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_93,
  MR_Word STATE_VARIABLE_Specs_0_94,
  MR_Word * STATE_VARIABLE_Specs_95);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefnsAbs_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefnsAbs_3,
  MR_Word STATE_VARIABLE_RevTypeDefnsMer_0_4,
  MR_Word * STATE_VARIABLE_RevTypeDefnsMer_5,
  MR_Word STATE_VARIABLE_RevTypeDefnsForeign_0_6,
  MR_Word * STATE_VARIABLE_RevTypeDefnsForeign_7,
  MR_Word STATE_VARIABLE_RevInstDefns_0_8,
  MR_Word * STATE_VARIABLE_RevInstDefns_9,
  MR_Word STATE_VARIABLE_RevModeDefns_0_10,
  MR_Word * STATE_VARIABLE_RevModeDefns_11,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_12,
  MR_Word * STATE_VARIABLE_RevTypeClasses_13,
  MR_Word STATE_VARIABLE_RevInstances_0_14,
  MR_Word * STATE_VARIABLE_RevInstances_15,
  MR_Word STATE_VARIABLE_RevPredDecls_0_16,
  MR_Word * STATE_VARIABLE_RevPredDecls_17,
  MR_Word STATE_VARIABLE_RevModeDecls_0_18,
  MR_Word * STATE_VARIABLE_RevModeDecls_19,
  MR_Word STATE_VARIABLE_RevClauses_0_20,
  MR_Word * STATE_VARIABLE_RevClauses_21,
  MR_Word STATE_VARIABLE_RevForeignEnums_0_22,
  MR_Word * STATE_VARIABLE_RevForeignEnums_23,
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_24,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_25,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_26,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_27,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_28,
  MR_Word * STATE_VARIABLE_RevImplPragmas_29,
  MR_Word STATE_VARIABLE_RevPromises_0_30,
  MR_Word * STATE_VARIABLE_RevPromises_31,
  MR_Word STATE_VARIABLE_RevInitialises_0_32,
  MR_Word * STATE_VARIABLE_RevInitialises_33,
  MR_Word STATE_VARIABLE_RevFinalises_0_34,
  MR_Word * STATE_VARIABLE_RevFinalises_35,
  MR_Word STATE_VARIABLE_RevMutables_0_36,
  MR_Word * STATE_VARIABLE_RevMutables_37,
  MR_Word STATE_VARIABLE_Contents_0_38,
  MR_Word * STATE_VARIABLE_Contents_39,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_40,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_foreign_export_lang_3_p_0(
  MR_Word Lang_4,
  MR_Word STATE_VARIABLE_Contents_0_8,
  MR_Word * STATE_VARIABLE_Contents_9);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(
  MR_Word Lang_4,
  MR_Word STATE_VARIABLE_Contents_0_8,
  MR_Word * STATE_VARIABLE_Contents_9);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefnsAbs_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefnsAbs_3,
  MR_Word STATE_VARIABLE_RevTypeDefnsMer_0_4,
  MR_Word * STATE_VARIABLE_RevTypeDefnsMer_5,
  MR_Word STATE_VARIABLE_RevTypeDefnsForeign_0_6,
  MR_Word * STATE_VARIABLE_RevTypeDefnsForeign_7,
  MR_Word STATE_VARIABLE_RevInstDefns_0_8,
  MR_Word * STATE_VARIABLE_RevInstDefns_9,
  MR_Word STATE_VARIABLE_RevModeDefns_0_10,
  MR_Word * STATE_VARIABLE_RevModeDefns_11,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_12,
  MR_Word * STATE_VARIABLE_RevTypeClasses_13,
  MR_Word STATE_VARIABLE_RevInstances_0_14,
  MR_Word * STATE_VARIABLE_RevInstances_15,
  MR_Word STATE_VARIABLE_RevPredDecls_0_16,
  MR_Word * STATE_VARIABLE_RevPredDecls_17,
  MR_Word STATE_VARIABLE_RevModeDecls_0_18,
  MR_Word * STATE_VARIABLE_RevModeDecls_19,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_20,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_21,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevImplPragmas_23,
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
  MR_Word STATE_VARIABLE_Contents_0_34,
  MR_Word * STATE_VARIABLE_Contents_35,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_36,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
parse_tree__convert_parse_tree__error_is_exported_4_p_0(
  MR_Word Context_5,
  MR_Word DescPieces_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromiseInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0(
  MR_Word ItemInstanceInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_contents_foreign_type_3_p_0(
  MR_Word DetailsForeign_4,
  MR_Word STATE_VARIABLE_Contents_0_9,
  MR_Word * STATE_VARIABLE_Contents_10);

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

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__convert_parse_tree__classify_plain_opt_items_45_p_0(
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
  MR_Word STATE_VARIABLE_PredMarkers_0_24,
  MR_Word * STATE_VARIABLE_PredMarkers_25,
  MR_Word STATE_VARIABLE_TypeSpecs_0_26,
  MR_Word * STATE_VARIABLE_TypeSpecs_27,
  MR_Word STATE_VARIABLE_UnusedArgs_0_28,
  MR_Word * STATE_VARIABLE_UnusedArgs_29,
  MR_Word STATE_VARIABLE_TermInfos_0_30,
  MR_Word * STATE_VARIABLE_TermInfos_31,
  MR_Word STATE_VARIABLE_Term2Infos_0_32,
  MR_Word * STATE_VARIABLE_Term2Infos_33,
  MR_Word STATE_VARIABLE_Exceptions_0_34,
  MR_Word * STATE_VARIABLE_Exceptions_35,
  MR_Word STATE_VARIABLE_Trailings_0_36,
  MR_Word * STATE_VARIABLE_Trailings_37,
  MR_Word STATE_VARIABLE_MMTablings_0_38,
  MR_Word * STATE_VARIABLE_MMTablings_39,
  MR_Word STATE_VARIABLE_Sharings_0_40,
  MR_Word * STATE_VARIABLE_Sharings_41,
  MR_Word STATE_VARIABLE_Reuses_0_42,
  MR_Word * STATE_VARIABLE_Reuses_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1(
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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1(
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
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int1_items_int_25_p_0(
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
  MR_Word STATE_VARIABLE_Promises_0_20,
  MR_Word * STATE_VARIABLE_Promises_21,
  MR_Word STATE_VARIABLE_TypeRepns_0_22,
  MR_Word * STATE_VARIABLE_TypeRepns_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(
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
  MR_Word STATE_VARIABLE_Promises_0_20,
  MR_Word * STATE_VARIABLE_Promises_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0(
  MR_Word TypeCtorRepnMap_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(
  MR_Word ForeignEnumMap_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(
  MR_Word ModeCtorDefnMap_3);

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(
  MR_Word InstCtorDefnMap_3);

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(
  MR_Word TypeCtorDefnMap_3);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[122][2];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[112][3];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[14][6];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[29][5];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[2][8];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[5][4];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][9];




static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[122][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[6]))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[20]))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[30]))
  },
  /* row 32 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 33 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 34 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain any"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its implementation section."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations in its implementation section."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "version number information."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[37])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain any"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 25U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[37])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an implementation section."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file must not have"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain any"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[61])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[65])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int0 file may not contain"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int1 file may not contain"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int file may not contain"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .opt file may not contain"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma for"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma for the same module/language combination"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because there is a"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant,"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma in the interface section is here."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause for"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A Mercury source file may not contain"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[116]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[118]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[112][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[20]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[5]))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[11])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 61 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 62 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 68 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 69 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 72 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 80 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_21)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 82 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_23)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 84 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[18])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[19])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[20])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 92 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_32)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[21])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_33)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[22])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[23])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_35)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 96 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[11])),
    ((MR_Box) (parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 97 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[12])),
    ((MR_Box) (parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 98 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[13])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 99 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[13])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 100 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[13])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 101 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 102 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 103 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[24])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[25])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 106 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[24])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 107 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[26])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 108 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[27])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 109 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[28])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 110 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[28])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 111 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[28])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[14][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_c_java_csharp_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[29][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 24 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 25 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 26 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 27 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 28 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_c_java_csharp_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  {
    (MR_TypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1689__1_1_p_0(
  MR_Word IntForeignExportLangs_121)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntForeignExportLangs_121);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1687__1_1_p_0(
  MR_Word IntFactTablesSet_119)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntFactTablesSet_119);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1685__1_1_p_0(
  MR_Word IntForeignIncludeFilesCord_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), IntForeignIncludeFilesCord_118);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1309__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded = (OptFileKind_9 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__996__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_64)
{
  {
    MR_bool succeeded = (OptFileKind_9 == HeadVar__2_64);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__826__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_71)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_71);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__649__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_61);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__440__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_67)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_67);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__295__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_76);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__276__1_2_p_0(
  MR_Word ImpAvails_21,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), ((MR_Box) (ImpAvails_21)), ((MR_Box) (HeadVar__2_31)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__273__1_2_p_0(
  MR_Word ImpIncls_19,
  MR_Word HeadVar__2_26)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), ((MR_Box) (ImpIncls_19)), ((MR_Box) (HeadVar__2_26)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__248__1_2_p_0(
  MR_Word ImpAvails_24,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), ((MR_Box) (ImpAvails_24)), ((MR_Box) (HeadVar__2_37)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__245__1_2_p_0(
  MR_Word ImpIncls_22,
  MR_Word HeadVar__2_32)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), ((MR_Box) (ImpIncls_22)), ((MR_Box) (HeadVar__2_32)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(
  MR_Word ItemFIM_6,
  MR_Word STATE_VARIABLE_FIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_FIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word Lang_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemFIM_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFIM_6, (MR_Integer) 1))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFIM_6, (MR_Integer) 2))));
    MR_Word FIMSpec_13;
    MR_Word PrevContext_14;
    MR_Box conv0_PrevContext_14;

    {
      FIMSpec_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_13, 0) = (MR_Box) ((MR_Unsigned) (Lang_9));
      MR_hl_field(MR_mktag(0), FIMSpec_13, 1) = ((MR_Box) (ModuleName_10));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), STATE_VARIABLE_FIMSpecMap_0_20, ((MR_Box) (FIMSpec_13)), &conv0_PrevContext_14);
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
      MR_Word Spec_19;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_String Var_39;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (ModuleName_10));
      }
      Var_39 = libs__globals__foreign_language_string_1_f_0(Lang_9);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[93])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[92])));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[108])));
        MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_26));
      }
      {
        MainMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MainMsg_16, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), MainMsg_16, 1) = ((MR_Box) (MainPieces_15));
      }
      {
        PrevMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PrevMsg_18, 0) = ((MR_Box) (PrevContext_14));
        MR_hl_field(MR_mktag(0), PrevMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[114])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (PrevMsg_18));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MainMsg_16));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
      }
      {
        Spec_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_foreign_import_module\'/5"));
        MR_hl_field(MR_mktag(2), Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 26) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(2), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(2), Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(2), Spec_19, 4) = ((MR_Box) (Var_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
      *STATE_VARIABLE_FIMSpecMap_21 = STATE_VARIABLE_FIMSpecMap_0_20;
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (FIMSpec_13)), ((MR_Box) (Context_11)), STATE_VARIABLE_FIMSpecMap_0_20, STATE_VARIABLE_FIMSpecMap_21);
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(
  MR_Word IntFIMSpecMap_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_Word Lang_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_8, (MR_Integer) 1))));
    MR_Word ImpContext_13;
    MR_Word IntContext_14;
    MR_Word ImpPieces_15;
    MR_Word ImpMsg_17;
    MR_Word IntMsg_18;
    MR_Word Spec_19;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Box conv0_ImpContext_13;
    MR_Box conv1_IntContext_14;

    mercury__map__det_remove_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (FIMSpec_8)), &conv0_ImpContext_13, STATE_VARIABLE_ImpFIMSpecMap_0_20, STATE_VARIABLE_ImpFIMSpecMap_21);
    ImpContext_13 = ((MR_Word) (conv0_ImpContext_13));
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_7, ((MR_Box) (FIMSpec_8)), &conv1_IntContext_14);
    IntContext_14 = ((MR_Word) (conv1_IntContext_14));
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ModuleName_12));
    }
    Var_40 = libs__globals__foreign_language_string_1_f_0(Lang_11);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[102])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      ImpPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[91])));
      MR_hl_field(MR_mktag(1), ImpPieces_15, 1) = ((MR_Box) (Var_27));
    }
    {
      ImpMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImpMsg_17, 0) = ((MR_Box) (ImpContext_13));
      MR_hl_field(MR_mktag(0), ImpMsg_17, 1) = ((MR_Box) (ImpPieces_15));
    }
    {
      IntMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IntMsg_18, 0) = ((MR_Box) (IntContext_14));
      MR_hl_field(MR_mktag(0), IntMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[107])));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (IntMsg_18));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (ImpMsg_17));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Spec_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_int_imp_fim\'/6"));
      MR_hl_field(MR_mktag(2), Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 26) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(2), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(2), Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(2), Spec_19, 4) = ((MR_Box) (Var_75));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_foreign_enum_items_3_p_0(
  MR_Word AllEnums_4,
  MR_Word STATE_VARIABLE_ForeignEnums_0_9,
  MR_Word * STATE_VARIABLE_ForeignEnums_10)
{
  {
    MR_Word ForeignEnumsC_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 0))));
    MR_Word ForeignEnumsJava_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 1))));
    MR_Word ForeignEnumsCsharp_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 2))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    Var_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsC_6);
    Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsJava_7);
    Var_16 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsCsharp_8);
    Var_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), Var_15, Var_16);
    Var_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), Var_13, Var_14);
    *STATE_VARIABLE_ForeignEnums_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnums_0_9, Var_12);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7)
{
  *STATE_VARIABLE_TypeRepns_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), STATE_VARIABLE_TypeRepns_0_6, ((MR_Box) (TypeRepn_4)));
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9)
{
  {
    MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 0))));
    MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), AbstractDefns_6);
    Var_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), EqvDefns_7);
    Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), Var_12, Var_13);
    *STATE_VARIABLE_ModeDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), STATE_VARIABLE_ModeDefns_0_8, Var_11);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9)
{
  {
    MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 0))));
    MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), AbstractDefns_6);
    Var_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), EqvDefns_7);
    Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), Var_12, Var_13);
    *STATE_VARIABLE_InstDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), STATE_VARIABLE_InstDefns_0_8, Var_11);
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_foreign_type_defn_1_f_0(
  MR_Word ForeignDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word ForeignDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (ForeignDefn_5));
    }
    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_du_type_defn_1_f_0(
  MR_Word DuDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word DuDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6 = (MR_Word) ((MR_Word) (DuDefn_5));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 5))));

    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_eqv_type_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_6, 0) = ((MR_Box) (EqvDefn_5));
    }
    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_solver_type_defn_1_f_0(
  MR_Word SolverDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word SolverDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SolverDefn_5)));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 5))));

    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__wrap_abstract_type_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word AbstractDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (AbstractDefn_5));
    }
    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_TypeDefnInfo_4;

    conv7_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_TypeDefnInfo_4;

    conv6_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_TypeDefnInfo_4;

    conv5_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_TypeDefnInfo_4;

    conv4_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_du_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_TypeDefnInfo_4;

    conv3_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_eqv_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_TypeDefnInfo_4;

    conv2_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeDefnInfo_4;

    conv1_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_solver_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_TypeDefnInfo_4;

    conv0_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_15,
  MR_Word * STATE_VARIABLE_TypeDefns_16)
{
  {
    MR_Word AbstractSolverDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 0))));
    MR_Word SolverDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 1))));
    MR_Word AbstractStdDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 2))));
    MR_Word EqvDefns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 3))));
    MR_Word DuDefns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 4))));
    MR_Word CJCsEDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 5))));
    MR_Word ForeignDefnsC_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_11, (MR_Integer) 0))));
    MR_Word ForeignDefnsJava_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_11, (MR_Integer) 1))));
    MR_Word ForeignDefnsCsharp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_11, (MR_Integer) 2))));
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;

    if ((AbstractSolverDefns_6 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractSolverDefns_6, (MR_Integer) 0))));

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (X_66));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[104]), Var_22);
    Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[105]), SolverDefns_7);
    if ((AbstractStdDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_29 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractStdDefns_8, (MR_Integer) 0))));

      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (X_69));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[106]), Var_29);
    Var_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[107]), EqvDefns_9);
    Var_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[108]), DuDefns_10);
    Var_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[109]), ForeignDefnsC_12);
    Var_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[110]), ForeignDefnsJava_13);
    Var_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[111]), ForeignDefnsCsharp_14);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_40, Var_42);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_37, Var_39);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_34, Var_36);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_31, Var_33);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_27, Var_30);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_24, Var_26);
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_20, Var_23);
    Var_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_19);
    *STATE_VARIABLE_TypeDefns_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), STATE_VARIABLE_TypeDefns_0_15, Var_18);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_17)
{
  {
    MR_bool succeeded;
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_4, (MR_Integer) 1))));
    MR_Word AllEnums_15;
    MR_Word STATE_VARIABLE_ForeignEnumsC_18_18;
    MR_Word STATE_VARIABLE_ForeignEnumsJava_19_19;
    MR_Word STATE_VARIABLE_ForeignEnumsCsharp_20_20;
    MR_Word STATE_VARIABLE_ForeignEnumsCsharp_24_24;
    MR_Word STATE_VARIABLE_ForeignEnumsJava_27_27;
    MR_Word STATE_VARIABLE_ForeignEnumsC_30_30;
    MR_Word AllEnums0_14;
    MR_Box conv0_AllEnums0_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), STATE_VARIABLE_ForeignEnumMap_0_16, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums0_14);
    if (succeeded)
    {
      AllEnums0_14 = ((MR_Word) (conv0_AllEnums0_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      STATE_VARIABLE_ForeignEnumsC_18_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_14, (MR_Integer) 0))));
      STATE_VARIABLE_ForeignEnumsJava_19_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_14, (MR_Integer) 1))));
      STATE_VARIABLE_ForeignEnumsCsharp_20_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_14, (MR_Integer) 2))));
    }
    else
    {
      STATE_VARIABLE_ForeignEnumsC_18_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignEnumsJava_19_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignEnumsCsharp_20_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
    switch (Lang_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_31;

          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsC_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsC_18_18, Var_31);
          STATE_VARIABLE_ForeignEnumsJava_27_27 = STATE_VARIABLE_ForeignEnumsJava_19_19;
          STATE_VARIABLE_ForeignEnumsCsharp_24_24 = STATE_VARIABLE_ForeignEnumsCsharp_20_20;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsCsharp_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsCsharp_20_20, Var_25);
          STATE_VARIABLE_ForeignEnumsC_30_30 = STATE_VARIABLE_ForeignEnumsC_18_18;
          STATE_VARIABLE_ForeignEnumsJava_27_27 = STATE_VARIABLE_ForeignEnumsJava_19_19;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsJava_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsJava_19_19, Var_28);
          STATE_VARIABLE_ForeignEnumsC_30_30 = STATE_VARIABLE_ForeignEnumsC_18_18;
          STATE_VARIABLE_ForeignEnumsCsharp_24_24 = STATE_VARIABLE_ForeignEnumsCsharp_20_20;
        }
        break;
    }
    {
      AllEnums_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllEnums_15, 0) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsC_30_30));
      MR_hl_field(MR_mktag(0), AllEnums_15, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsJava_27_27));
      MR_hl_field(MR_mktag(0), AllEnums_15, 2) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsCsharp_24_24));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (AllEnums_15)), STATE_VARIABLE_ForeignEnumMap_0_16, STATE_VARIABLE_ForeignEnumMap_17);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15)
{
  {
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnInfo_4, (MR_Integer) 0))));
    MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnInfo_4, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Word TypeCtor_13;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[25]), Params_7, &Arity_12);
    {
      TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), TypeCtor_13, 1) = ((MR_Box) (Arity_12));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), ((MR_Box) (TypeCtor_13)), ((MR_Box) (TypeRepnInfo_4)), STATE_VARIABLE_TypeRepnMap_0_14, STATE_VARIABLE_TypeRepnMap_15);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_22,
  MR_Word * STATE_VARIABLE_ModeDefnMap_23)
{
  {
    MR_bool succeeded;
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 0))));
    MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 1))));
    MR_Word MaybeAbstractModeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 2))));
    MR_Integer Arity_12;
    MR_Word ModeCtor_13;
    MR_Word AllDefns0_14;
    MR_Box conv0_AllDefns0_14;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), Params_7, &Arity_12);
    {
      ModeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeCtor_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), ModeCtor_13, 1) = ((MR_Box) (Arity_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), STATE_VARIABLE_ModeDefnMap_0_22, ((MR_Box) (ModeCtor_13)), &conv0_AllDefns0_14);
    if (succeeded)
    {
      AllDefns0_14 = ((MR_Word) (conv0_AllDefns0_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AbstractDefns0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_14, (MR_Integer) 0))));
      MR_Word NonAbstractDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_14, (MR_Integer) 1))));
      MR_Word AllDefns_18;

      if ((MaybeAbstractModeDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word AbstractDefns_17;

        {
          AbstractDefns_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbstractDefns_17, 0) = ((MR_Box) (ModeDefnInfo_4));
          MR_hl_field(MR_mktag(1), AbstractDefns_17, 1) = ((MR_Box) (AbstractDefns0_15));
        }
        {
          AllDefns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_18, 0) = ((MR_Box) (AbstractDefns_17));
          MR_hl_field(MR_mktag(0), AllDefns_18, 1) = ((MR_Box) (NonAbstractDefns0_16));
        }
      }
      else
      {
        MR_Word NonAbstractDefns_20;

        {
          NonAbstractDefns_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NonAbstractDefns_20, 0) = ((MR_Box) (ModeDefnInfo_4));
          MR_hl_field(MR_mktag(1), NonAbstractDefns_20, 1) = ((MR_Box) (NonAbstractDefns0_16));
        }
        {
          AllDefns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_18, 0) = ((MR_Box) (AbstractDefns0_15));
          MR_hl_field(MR_mktag(0), AllDefns_18, 1) = ((MR_Box) (NonAbstractDefns_20));
        }
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (ModeCtor_13)), ((MR_Box) (AllDefns_18)), STATE_VARIABLE_ModeDefnMap_0_22, STATE_VARIABLE_ModeDefnMap_23);
    }
    else
    {
      MR_Word AllDefns_32;

      if ((MaybeAbstractModeDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ModeDefnInfo_4));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AllDefns_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_32, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(0), AllDefns_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ModeDefnInfo_4));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AllDefns_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), AllDefns_32, 1) = ((MR_Box) (Var_26));
        }
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (ModeCtor_13)), ((MR_Box) (AllDefns_32)), STATE_VARIABLE_ModeDefnMap_0_22, STATE_VARIABLE_ModeDefnMap_23);
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_23,
  MR_Word * STATE_VARIABLE_InstDefnMap_24)
{
  {
    MR_bool succeeded;
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 0))));
    MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 1))));
    MR_Word MaybeAbstractInstDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 3))));
    MR_Integer Arity_13;
    MR_Word InstCtor_14;
    MR_Word AllDefns0_15;
    MR_Box conv0_AllDefns0_15;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), Params_7, &Arity_13);
    {
      InstCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstCtor_14, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), InstCtor_14, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), STATE_VARIABLE_InstDefnMap_0_23, ((MR_Box) (InstCtor_14)), &conv0_AllDefns0_15);
    if (succeeded)
    {
      AllDefns0_15 = ((MR_Word) (conv0_AllDefns0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AbstractDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_15, (MR_Integer) 0))));
      MR_Word NonAbstractDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_15, (MR_Integer) 1))));
      MR_Word AllDefns_19;

      if ((MaybeAbstractInstDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word AbstractDefns_18;

        {
          AbstractDefns_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbstractDefns_18, 0) = ((MR_Box) (InstDefnInfo_4));
          MR_hl_field(MR_mktag(1), AbstractDefns_18, 1) = ((MR_Box) (AbstractDefns0_16));
        }
        {
          AllDefns_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_19, 0) = ((MR_Box) (AbstractDefns_18));
          MR_hl_field(MR_mktag(0), AllDefns_19, 1) = ((MR_Box) (NonAbstractDefns0_17));
        }
      }
      else
      {
        MR_Word NonAbstractDefns_21;

        {
          NonAbstractDefns_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NonAbstractDefns_21, 0) = ((MR_Box) (InstDefnInfo_4));
          MR_hl_field(MR_mktag(1), NonAbstractDefns_21, 1) = ((MR_Box) (NonAbstractDefns0_17));
        }
        {
          AllDefns_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_19, 0) = ((MR_Box) (AbstractDefns0_16));
          MR_hl_field(MR_mktag(0), AllDefns_19, 1) = ((MR_Box) (NonAbstractDefns_21));
        }
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (InstCtor_14)), ((MR_Box) (AllDefns_19)), STATE_VARIABLE_InstDefnMap_0_23, STATE_VARIABLE_InstDefnMap_24);
    }
    else
    {
      MR_Word AllDefns_33;

      if ((MaybeAbstractInstDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (InstDefnInfo_4));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AllDefns_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_33, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), AllDefns_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (InstDefnInfo_4));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AllDefns_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AllDefns_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), AllDefns_33, 1) = ((MR_Box) (Var_27));
        }
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (InstCtor_14)), ((MR_Box) (AllDefns_33)), STATE_VARIABLE_InstDefnMap_0_23, STATE_VARIABLE_InstDefnMap_24);
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_42,
  MR_Word * STATE_VARIABLE_TypeDefnMap_43)
{
  {
    MR_bool succeeded;
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 0))));
    MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 1))));
    MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 2))));
    MR_Integer Arity_12;
    MR_Word TypeCtor_13;
    MR_Word AllDefns_41;
    MR_Word STATE_VARIABLE_AbstractSolverDefns_44_44;
    MR_Word STATE_VARIABLE_SolverDefns_45_45;
    MR_Word STATE_VARIABLE_AbstractStdDefns_46_46;
    MR_Word STATE_VARIABLE_EqvDefns_47_47;
    MR_Word STATE_VARIABLE_DuDefns_48_48;
    MR_Word STATE_VARIABLE_ForeignDefnsC_50_50;
    MR_Word STATE_VARIABLE_ForeignDefnsJava_51_51;
    MR_Word STATE_VARIABLE_ForeignDefnsCsharp_52_52;
    MR_Word STATE_VARIABLE_ForeignDefnsCsharp_61_61;
    MR_Word STATE_VARIABLE_ForeignDefnsJava_64_64;
    MR_Word STATE_VARIABLE_ForeignDefnsC_67_67;
    MR_Word STATE_VARIABLE_DuDefns_70_70;
    MR_Word STATE_VARIABLE_EqvDefns_73_73;
    MR_Word STATE_VARIABLE_SolverDefns_76_76;
    MR_Word STATE_VARIABLE_AbstractStdDefns_79_79;
    MR_Word STATE_VARIABLE_AbstractSolverDefns_82_82;
    MR_Word Var_85;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word AllDefns0_22;
    MR_Box conv0_AllDefns0_22;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[25]), Params_7, &Arity_12);
    {
      TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), TypeCtor_13, 1) = ((MR_Box) (Arity_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), STATE_VARIABLE_TypeDefnMap_0_42, ((MR_Box) (TypeCtor_13)), &conv0_AllDefns0_22);
    if (succeeded)
    {
      AllDefns0_22 = ((MR_Word) (conv0_AllDefns0_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_49;

      STATE_VARIABLE_AbstractSolverDefns_44_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_22, (MR_Integer) 0))));
      STATE_VARIABLE_SolverDefns_45_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_22, (MR_Integer) 1))));
      STATE_VARIABLE_AbstractStdDefns_46_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_22, (MR_Integer) 2))));
      STATE_VARIABLE_EqvDefns_47_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_22, (MR_Integer) 3))));
      STATE_VARIABLE_DuDefns_48_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_22, (MR_Integer) 4))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_22, (MR_Integer) 5))));
      STATE_VARIABLE_ForeignDefnsC_50_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
      STATE_VARIABLE_ForeignDefnsJava_51_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
      STATE_VARIABLE_ForeignDefnsCsharp_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 2))));
    }
    else
    {
      STATE_VARIABLE_AbstractSolverDefns_44_44 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_SolverDefns_45_45 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_AbstractStdDefns_46_46 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_EqvDefns_47_47 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_DuDefns_48_48 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsC_50_50 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsJava_51_51 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsCsharp_52_52 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 0))));
    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 1))));
    Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 3))));
    Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 4))));
    Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) TypeDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_31 = (MR_Word) ((MR_Word) (TypeDefn_8));
          MR_Word DuDefnInfo_32;
          MR_Word Var_71;

          {
            DuDefnInfo_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 1) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 2) = ((MR_Box) (DetailsDu_31));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 3) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 4) = ((MR_Box) (Var_131));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 5) = ((MR_Box) (Var_130));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (DuDefnInfo_32));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DuDefns_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), STATE_VARIABLE_DuDefns_48_48, Var_71);
          STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
          STATE_VARIABLE_SolverDefns_76_76 = STATE_VARIABLE_SolverDefns_45_45;
          STATE_VARIABLE_AbstractStdDefns_79_79 = STATE_VARIABLE_AbstractStdDefns_46_46;
          STATE_VARIABLE_EqvDefns_73_73 = STATE_VARIABLE_EqvDefns_47_47;
          STATE_VARIABLE_ForeignDefnsC_67_67 = STATE_VARIABLE_ForeignDefnsC_50_50;
          STATE_VARIABLE_ForeignDefnsJava_64_64 = STATE_VARIABLE_ForeignDefnsJava_51_51;
          STATE_VARIABLE_ForeignDefnsCsharp_61_61 = STATE_VARIABLE_ForeignDefnsCsharp_52_52;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_27 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 1));
          MR_Word SolverDefnInfo_28;
          MR_Word Var_77;

          {
            SolverDefnInfo_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 1) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 2) = ((MR_Box) (DetailsSolver_27));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 3) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 4) = ((MR_Box) (Var_131));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 5) = ((MR_Box) (Var_130));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (SolverDefnInfo_28));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_SolverDefns_76_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), STATE_VARIABLE_SolverDefns_45_45, Var_77);
          STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
          STATE_VARIABLE_AbstractStdDefns_79_79 = STATE_VARIABLE_AbstractStdDefns_46_46;
          STATE_VARIABLE_EqvDefns_73_73 = STATE_VARIABLE_EqvDefns_47_47;
          STATE_VARIABLE_DuDefns_70_70 = STATE_VARIABLE_DuDefns_48_48;
          STATE_VARIABLE_ForeignDefnsC_67_67 = STATE_VARIABLE_ForeignDefnsC_50_50;
          STATE_VARIABLE_ForeignDefnsJava_64_64 = STATE_VARIABLE_ForeignDefnsJava_51_51;
          STATE_VARIABLE_ForeignDefnsCsharp_61_61 = STATE_VARIABLE_ForeignDefnsCsharp_52_52;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_8, (MR_Integer) 0))));
          MR_Word EqvDefnInfo_30;
          MR_Word Var_74;

          {
            EqvDefnInfo_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 1) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 2) = ((MR_Box) (DetailsEqv_29));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 3) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 4) = ((MR_Box) (Var_131));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 5) = ((MR_Box) (Var_130));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (EqvDefnInfo_30));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_EqvDefns_73_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), STATE_VARIABLE_EqvDefns_47_47, Var_74);
          STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
          STATE_VARIABLE_SolverDefns_76_76 = STATE_VARIABLE_SolverDefns_45_45;
          STATE_VARIABLE_AbstractStdDefns_79_79 = STATE_VARIABLE_AbstractStdDefns_46_46;
          STATE_VARIABLE_DuDefns_70_70 = STATE_VARIABLE_DuDefns_48_48;
          STATE_VARIABLE_ForeignDefnsC_67_67 = STATE_VARIABLE_ForeignDefnsC_50_50;
          STATE_VARIABLE_ForeignDefnsJava_64_64 = STATE_VARIABLE_ForeignDefnsJava_51_51;
          STATE_VARIABLE_ForeignDefnsCsharp_61_61 = STATE_VARIABLE_ForeignDefnsCsharp_52_52;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsAbstract_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
              MR_Word AbstractDefnInfo_24;

              {
                AbstractDefnInfo_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_24, 0) = ((MR_Box) (Var_135));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_24, 1) = ((MR_Box) (Var_134));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_24, 2) = ((MR_Box) (DetailsAbstract_23));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_24, 3) = ((MR_Box) (Var_132));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_24, 4) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_24, 5) = ((MR_Box) (Var_130));
              }
              switch (MR_tag((MR_Word) DetailsAbstract_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DetailsAbstract_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_80;

                        {
                          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (AbstractDefnInfo_24));
                          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        STATE_VARIABLE_AbstractStdDefns_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractStdDefns_46_46, Var_80);
                        STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_83;

                        {
                          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (AbstractDefnInfo_24));
                          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        STATE_VARIABLE_AbstractSolverDefns_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractSolverDefns_44_44, Var_83);
                        STATE_VARIABLE_AbstractStdDefns_79_79 = STATE_VARIABLE_AbstractStdDefns_46_46;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_80;

                    {
                      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (AbstractDefnInfo_24));
                      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_AbstractStdDefns_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractStdDefns_46_46, Var_80);
                    STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_80;

                    {
                      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (AbstractDefnInfo_24));
                      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_AbstractStdDefns_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractStdDefns_46_46, Var_80);
                    STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
                  }
                  break;
              }
              STATE_VARIABLE_SolverDefns_76_76 = STATE_VARIABLE_SolverDefns_45_45;
              STATE_VARIABLE_EqvDefns_73_73 = STATE_VARIABLE_EqvDefns_47_47;
              STATE_VARIABLE_DuDefns_70_70 = STATE_VARIABLE_DuDefns_48_48;
              STATE_VARIABLE_ForeignDefnsC_67_67 = STATE_VARIABLE_ForeignDefnsC_50_50;
              STATE_VARIABLE_ForeignDefnsJava_64_64 = STATE_VARIABLE_ForeignDefnsJava_51_51;
              STATE_VARIABLE_ForeignDefnsCsharp_61_61 = STATE_VARIABLE_ForeignDefnsCsharp_52_52;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
              MR_Word ForeignDefnInfo_34;
              MR_Word LangType_35;

              {
                ForeignDefnInfo_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 0) = ((MR_Box) (Var_135));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 1) = ((MR_Box) (Var_134));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 2) = ((MR_Box) (DetailsForeign_33));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 3) = ((MR_Box) (Var_132));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 4) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 5) = ((MR_Box) (Var_130));
              }
              LangType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_33, (MR_Integer) 0))));
              switch (MR_tag((MR_Word) LangType_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_68;

                    {
                      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsC_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsC_50_50, Var_68);
                    STATE_VARIABLE_ForeignDefnsJava_64_64 = STATE_VARIABLE_ForeignDefnsJava_51_51;
                    STATE_VARIABLE_ForeignDefnsCsharp_61_61 = STATE_VARIABLE_ForeignDefnsCsharp_52_52;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_65;

                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsJava_64_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsJava_51_51, Var_65);
                    STATE_VARIABLE_ForeignDefnsC_67_67 = STATE_VARIABLE_ForeignDefnsC_50_50;
                    STATE_VARIABLE_ForeignDefnsCsharp_61_61 = STATE_VARIABLE_ForeignDefnsCsharp_52_52;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_62;

                    {
                      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsCsharp_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsCsharp_52_52, Var_62);
                    STATE_VARIABLE_ForeignDefnsC_67_67 = STATE_VARIABLE_ForeignDefnsC_50_50;
                    STATE_VARIABLE_ForeignDefnsJava_64_64 = STATE_VARIABLE_ForeignDefnsJava_51_51;
                  }
                  break;
              }
              STATE_VARIABLE_AbstractSolverDefns_82_82 = STATE_VARIABLE_AbstractSolverDefns_44_44;
              STATE_VARIABLE_SolverDefns_76_76 = STATE_VARIABLE_SolverDefns_45_45;
              STATE_VARIABLE_AbstractStdDefns_79_79 = STATE_VARIABLE_AbstractStdDefns_46_46;
              STATE_VARIABLE_EqvDefns_73_73 = STATE_VARIABLE_EqvDefns_47_47;
              STATE_VARIABLE_DuDefns_70_70 = STATE_VARIABLE_DuDefns_48_48;
            }
            break;
        }
        break;
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsC_67_67));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsJava_64_64));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsCsharp_61_61));
    }
    {
      AllDefns_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllDefns_41, 0) = ((MR_Box) (STATE_VARIABLE_AbstractSolverDefns_82_82));
      MR_hl_field(MR_mktag(0), AllDefns_41, 1) = ((MR_Box) (STATE_VARIABLE_SolverDefns_76_76));
      MR_hl_field(MR_mktag(0), AllDefns_41, 2) = ((MR_Box) (STATE_VARIABLE_AbstractStdDefns_79_79));
      MR_hl_field(MR_mktag(0), AllDefns_41, 3) = ((MR_Box) (STATE_VARIABLE_EqvDefns_73_73));
      MR_hl_field(MR_mktag(0), AllDefns_41, 4) = ((MR_Box) (STATE_VARIABLE_DuDefns_70_70));
      MR_hl_field(MR_mktag(0), AllDefns_41, 5) = ((MR_Box) (Var_85));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (AllDefns_41)), STATE_VARIABLE_TypeDefnMap_0_42, STATE_VARIABLE_TypeDefnMap_43);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(
  MR_Word Clause0_3,
  MR_Word * Clause_4)
{
  {
    MR_Word VarSet0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 3))));
    MR_Word VarSet_6;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    mercury__varset__undo_default_names_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_5, &VarSet_6);
    Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 4))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 5))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_3, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *Clause_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeRepns_7;

    parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepns_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepns_7));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0(
  MR_Word TypeCtorRepnMap_3)
{
  {
    MR_Word TypeRepns_4;
    MR_Word TypeRepnsCord_5;
    MR_Word Var_7;
    MR_Box conv1_TypeRepnsCord_5;

    Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[24]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[103]), TypeCtorRepnMap_3, ((MR_Box) (Var_7)), &conv1_TypeRepnsCord_5);
    TypeRepnsCord_5 = ((MR_Word) (conv1_TypeRepnsCord_5));
    TypeRepns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), TypeRepnsCord_5);
    return TypeRepns_4;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1689__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1687__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1685__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ImpFIMSpecMap_21;
    MR_Word conv0_STATE_VARIABLE_Specs_23;

    parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ImpFIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_23);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ImpFIMSpecMap_21));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word STATE_VARIABLE_Specs_0_126,
  MR_Word * STATE_VARIABLE_Specs_127)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_7, (MR_Integer) 1))));
    MR_Word ItemBlocks_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_7, (MR_Integer) 2))));
    MR_Word IntImportMap0_13;
    MR_Word IntUseMap0_14;
    MR_Word IntFIMSpecMap0_15;
    MR_Word ImpImportMap0_16;
    MR_Word ImpUseMap0_17;
    MR_Word ImpFIMSpecMap0_18;
    MR_Word IntContents0_19;
    MR_Word IntImplicitAvailNeeds0_20;
    MR_Word ImpContents0_21;
    MR_Word ImpImplicitAvailNeeds0_22;
    MR_Word IntIncls_23;
    MR_Word IntImportMap_24;
    MR_Word IntUseMap_25;
    MR_Word IntFIMSpecMap_26;
    MR_Word RevIntTypeDefnsAbs_27;
    MR_Word RevIntTypeDefnsMer_28;
    MR_Word RevIntTypeDefnsForeign_29;
    MR_Word RevIntInstDefns_30;
    MR_Word RevIntModeDefns_31;
    MR_Word RevIntTypeClasses_32;
    MR_Word RevIntInstances0_33;
    MR_Word RevIntPredDecls_34;
    MR_Word RevIntModeDecls_35;
    MR_Word RevIntDeclPragmas_36;
    MR_Word RevIntImplPragmas_37;
    MR_Word IntBadClausePreds_38;
    MR_Word RevIntPromises_39;
    MR_Word RevIntInitialises_40;
    MR_Word RevIntFinalises_41;
    MR_Word RevIntMutables_42;
    MR_Word IntContents_43;
    MR_Word IntImplicitAvailNeeds_44;
    MR_Word ImpIncls_45;
    MR_Word ImpImportMap_46;
    MR_Word ImpUseMap_47;
    MR_Word ImpFIMSpecMap1_48;
    MR_Word RevImpTypeDefnsAbs_49;
    MR_Word RevImpTypeDefnsMer_50;
    MR_Word RevImpTypeDefnsForeign_51;
    MR_Word RevImpInstDefns_52;
    MR_Word RevImpModeDefns_53;
    MR_Word RevImpTypeClasses_54;
    MR_Word RevImpInstances0_55;
    MR_Word RevImpPredDecls_56;
    MR_Word RevImpModeDecls_57;
    MR_Word RevImpClauses_58;
    MR_Word RevImpForeignEnums_59;
    MR_Word RevImpForeignExportEnums_60;
    MR_Word RevImpDeclPragmas_61;
    MR_Word RevImpImplPragmas_62;
    MR_Word RevImpPromises_63;
    MR_Word RevImpInitialises0_64;
    MR_Word RevImpFinalises0_65;
    MR_Word RevImpMutables0_66;
    MR_Word ImpImplicitAvailNeeds_68;
    MR_Word IntInclMap_69;
    MR_Word ImpInclMap_70;
    MR_Word InclMap_71;
    MR_Word IntTypeDefnsAbs_72;
    MR_Word IntTypeDefnsMer_73;
    MR_Word IntTypeDefnsForeign_74;
    MR_Word IntInstDefns_75;
    MR_Word IntModeDefns_76;
    MR_Word IntTypeClasses_77;
    MR_Word IntInstances0_78;
    MR_Word IntPredDecls_79;
    MR_Word IntModeDecls_80;
    MR_Word IntDeclPragmas_81;
    MR_Word IntImplPragmas_82;
    MR_Word IntPromises_83;
    MR_Word IntInitialises_84;
    MR_Word IntFinalises_85;
    MR_Word IntMutables_86;
    MR_Word ImpTypeDefnsAbs_87;
    MR_Word ImpTypeDefnsMer_88;
    MR_Word ImpTypeDefnsForeign_89;
    MR_Word ImpInstDefns_90;
    MR_Word ImpModeDefns_91;
    MR_Word ImpTypeClasses_92;
    MR_Word ImpInstances0_93;
    MR_Word ImpPredDecls_94;
    MR_Word ImpModeDecls_95;
    MR_Word ImpClauses_96;
    MR_Word ImpForeignEnums_97;
    MR_Word ImpForeignExportEnums_98;
    MR_Word ImpDeclPragmas_99;
    MR_Word ImpImplPragmas0_100;
    MR_Word ImpPromises_101;
    MR_Word ImpInitialises0_102;
    MR_Word ImpFinalises0_103;
    MR_Word ImpMutables0_104;
    MR_Word IntInstances_105;
    MR_Word ImpInstances_106;
    MR_Word ImpImplPragmas_108;
    MR_Word ImpInitialises_109;
    MR_Word ImpFinalises_110;
    MR_Word ImpMutables_111;
    MR_Word SectionImportUseMap_112;
    MR_Word ImportUseMap0_113;
    MR_Word ImportUseMap_114;
    MR_Word IntImpFIMSpecs_115;
    MR_Word ImpFIMSpecMap_116;
    MR_Word IntForeignIncludeFilesCord_118;
    MR_Word IntFactTablesSet_119;
    MR_Word IntForeignExportLangs_121;
    MR_Word Var_140;
    MR_Word STATE_VARIABLE_Specs_164_164;
    MR_Word STATE_VARIABLE_Specs_165_165;
    MR_Word STATE_VARIABLE_Specs_166_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_171;
    MR_Word Var_174;
    MR_Word Var_177;
    MR_Word ImpContents_67;
    MR_Box conv3_ImpFIMSpecMap_116;
    MR_Box conv2_STATE_VARIABLE_Specs_127;

    mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntImportMap0_13);
    mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntUseMap0_14);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntFIMSpecMap0_15);
    mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &ImpImportMap0_16);
    mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &ImpUseMap0_17);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &ImpFIMSpecMap0_18);
    IntContents0_19 = parse_tree__get_dependencies__init_item_contents_0_f_0();
    IntImplicitAvailNeeds0_20 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
    ImpContents0_21 = parse_tree__get_dependencies__init_item_contents_0_f_0();
    ImpImplicitAvailNeeds0_22 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
    Var_140 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0));
    parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0(ItemBlocks_12, (MR_Word) ((MR_Unsigned) 0U), &IntIncls_23, IntImportMap0_13, &IntImportMap_24, IntUseMap0_14, &IntUseMap_25, IntFIMSpecMap0_15, &IntFIMSpecMap_26, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefnsAbs_27, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefnsMer_28, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefnsForeign_29, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstDefns_30, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeClasses_32, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstances0_33, (MR_Word) ((MR_Unsigned) 0U), &RevIntPredDecls_34, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_35, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclPragmas_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplPragmas_37, Var_140, &IntBadClausePreds_38, (MR_Word) ((MR_Unsigned) 0U), &RevIntPromises_39, (MR_Word) ((MR_Unsigned) 0U), &RevIntInitialises_40, (MR_Word) ((MR_Unsigned) 0U), &RevIntFinalises_41, (MR_Word) ((MR_Unsigned) 0U), &RevIntMutables_42, IntContents0_19, &IntContents_43, IntImplicitAvailNeeds0_20, &IntImplicitAvailNeeds_44, (MR_Word) ((MR_Unsigned) 0U), &ImpIncls_45, ImpImportMap0_16, &ImpImportMap_46, ImpUseMap0_17, &ImpUseMap_47, ImpFIMSpecMap0_18, &ImpFIMSpecMap1_48, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefnsAbs_49, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefnsMer_50, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefnsForeign_51, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstDefns_52, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDefns_53, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeClasses_54, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstances0_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpPredDecls_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_57, (MR_Word) ((MR_Unsigned) 0U), &RevImpClauses_58, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignEnums_59, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignExportEnums_60, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclPragmas_61, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplPragmas_62, (MR_Word) ((MR_Unsigned) 0U), &RevImpPromises_63, (MR_Word) ((MR_Unsigned) 0U), &RevImpInitialises0_64, (MR_Word) ((MR_Unsigned) 0U), &RevImpFinalises0_65, (MR_Word) ((MR_Unsigned) 0U), &RevImpMutables0_66, ImpContents0_21, &ImpContents_67, ImpImplicitAvailNeeds0_22, &ImpImplicitAvailNeeds_68, STATE_VARIABLE_Specs_0_126, &STATE_VARIABLE_Specs_164_164);
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_23, ImpIncls_45, &IntInclMap_69, &ImpInclMap_70, &InclMap_71, STATE_VARIABLE_Specs_164_164, &STATE_VARIABLE_Specs_165_165);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntTypeDefnsAbs_27, &IntTypeDefnsAbs_72);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntTypeDefnsMer_28, &IntTypeDefnsMer_73);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntTypeDefnsForeign_29, &IntTypeDefnsForeign_74);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), RevIntInstDefns_30, &IntInstDefns_75);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), RevIntModeDefns_31, &IntModeDefns_76);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevIntTypeClasses_32, &IntTypeClasses_77);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevIntInstances0_33, &IntInstances0_78);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevIntPredDecls_34, &IntPredDecls_79);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_35, &IntModeDecls_80);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), RevIntDeclPragmas_36, &IntDeclPragmas_81);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), RevIntImplPragmas_37, &IntImplPragmas_82);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevIntPromises_39, &IntPromises_83);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevIntInitialises_40, &IntInitialises_84);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevIntFinalises_41, &IntFinalises_85);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevIntMutables_42, &IntMutables_86);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpTypeDefnsAbs_49, &ImpTypeDefnsAbs_87);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpTypeDefnsMer_50, &ImpTypeDefnsMer_88);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpTypeDefnsForeign_51, &ImpTypeDefnsForeign_89);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), RevImpInstDefns_52, &ImpInstDefns_90);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), RevImpModeDefns_53, &ImpModeDefns_91);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevImpTypeClasses_54, &ImpTypeClasses_92);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevImpInstances0_55, &ImpInstances0_93);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevImpPredDecls_56, &ImpPredDecls_94);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_57, &ImpModeDecls_95);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevImpClauses_58, &ImpClauses_96);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), RevImpForeignEnums_59, &ImpForeignEnums_97);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), RevImpForeignExportEnums_60, &ImpForeignExportEnums_98);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), RevImpDeclPragmas_61, &ImpDeclPragmas_99);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), RevImpImplPragmas_62, &ImpImplPragmas0_100);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevImpPromises_63, &ImpPromises_101);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevImpInitialises0_64, &ImpInitialises0_102);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevImpFinalises0_65, &ImpFinalises0_103);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevImpMutables0_66, &ImpMutables0_104);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), InclMap_71);
    if (succeeded)
    {
      IntInstances_105 = IntInstances0_78;
      ImpInstances_106 = ImpInstances0_93;
    }
    else
    {
      MR_Word MovedImpInstances_107;

      parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(IntInstances0_78, &IntInstances_105, &MovedImpInstances_107);
      ImpInstances_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MovedImpInstances_107, ImpInstances0_93);
    }
    ImpImplPragmas_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), IntImplPragmas_82, ImpImplPragmas0_100);
    ImpInitialises_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), IntInitialises_84, ImpInitialises0_102);
    ImpFinalises_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), IntFinalises_85, ImpFinalises0_103);
    ImpMutables_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), IntMutables_86, ImpMutables0_104);
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_10, IntImportMap_24, IntUseMap_25, ImpImportMap_46, ImpUseMap_47, &SectionImportUseMap_112, STATE_VARIABLE_Specs_165_165, &STATE_VARIABLE_Specs_166_166);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_112, &ImportUseMap0_113);
    parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(Globals_6, IntImplicitAvailNeeds_44, ImpImplicitAvailNeeds_68, ImportUseMap0_113, &ImportUseMap_114);
    Var_167 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_26);
    Var_168 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap1_48);
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_167, Var_168, &IntImpFIMSpecs_115);
    {
      Var_169 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_169, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_169, 3) = ((MR_Box) (IntFIMSpecMap_26));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), Var_169, IntImpFIMSpecs_115, ((MR_Box) (ImpFIMSpecMap1_48)), &conv3_ImpFIMSpecMap_116, ((MR_Box) (STATE_VARIABLE_Specs_166_166)), &conv2_STATE_VARIABLE_Specs_127);
    ImpFIMSpecMap_116 = ((MR_Word) (conv3_ImpFIMSpecMap_116));
    *STATE_VARIABLE_Specs_127 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_127));
    IntForeignIncludeFilesCord_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntContents_43, (MR_Integer) 0))));
    IntFactTablesSet_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntContents_43, (MR_Integer) 1))));
    IntForeignExportLangs_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntContents_43, (MR_Integer) 3))));
    {
      Var_171 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (IntForeignIncludeFilesCord_118));
    }
    mercury__require__expect_3_p_0(Var_171, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "interface has foreign include files");
    {
      Var_174 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_174, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_174, 3) = ((MR_Box) (IntFactTablesSet_119));
    }
    mercury__require__expect_3_p_0(Var_174, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "interface has fact tables");
    {
      Var_177 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (IntForeignExportLangs_121));
    }
    mercury__require__expect_3_p_0(Var_177, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "interface has foreign export languages");
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeModuleSrc_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_69));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_70));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_71));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_46));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_47));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_114));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_26));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_116));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntTypeDefnsAbs_72));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeDefnsMer_73));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntTypeDefnsForeign_74));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntInstDefns_75));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDefns_76));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntTypeClasses_77));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntInstances_105));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntPredDecls_79));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntModeDecls_80));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntDeclPragmas_81));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntPromises_83));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntBadClausePreds_38));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpTypeDefnsAbs_87));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeDefnsMer_88));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpTypeDefnsForeign_89));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpInstDefns_90));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpModeDefns_91));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpTypeClasses_92));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpInstances_106));
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ImpPredDecls_94));
      MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ImpModeDecls_95));
      MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ImpClauses_96));
      MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ImpForeignEnums_97));
      MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ImpForeignExportEnums_98));
      MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ImpDeclPragmas_99));
      MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (ImpImplPragmas_108));
      MR_hl_field(MR_mktag(0), base, 39) = ((MR_Box) (ImpPromises_101));
      MR_hl_field(MR_mktag(0), base, 40) = ((MR_Box) (ImpInitialises_109));
      MR_hl_field(MR_mktag(0), base, 41) = ((MR_Box) (ImpFinalises_110));
      MR_hl_field(MR_mktag(0), base, 42) = ((MR_Box) (ImpMutables_111));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_FIMSpecMap_21;
    MR_Word conv4_STATE_VARIABLE_Specs_23;

    parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_FIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_23);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_FIMSpecMap_21));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_23));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FIMSpecMap_21;
    MR_Word conv0_STATE_VARIABLE_Specs_23;

    parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_23);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FIMSpecMap_21));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_95_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImportMap_0_4,
  MR_Word * STATE_VARIABLE_IntImportMap_5,
  MR_Word STATE_VARIABLE_IntUseMap_0_6,
  MR_Word * STATE_VARIABLE_IntUseMap_7,
  MR_Word STATE_VARIABLE_IntFIMSpecMap_0_8,
  MR_Word * STATE_VARIABLE_IntFIMSpecMap_9,
  MR_Word STATE_VARIABLE_RevIntTypeDefnsAbs_0_10,
  MR_Word * STATE_VARIABLE_RevIntTypeDefnsAbs_11,
  MR_Word STATE_VARIABLE_RevIntTypeDefnsMer_0_12,
  MR_Word * STATE_VARIABLE_RevIntTypeDefnsMer_13,
  MR_Word STATE_VARIABLE_RevIntTypeDefnsForeign_0_14,
  MR_Word * STATE_VARIABLE_RevIntTypeDefnsForeign_15,
  MR_Word STATE_VARIABLE_RevIntInstDefns_0_16,
  MR_Word * STATE_VARIABLE_RevIntInstDefns_17,
  MR_Word STATE_VARIABLE_RevIntModeDefns_0_18,
  MR_Word * STATE_VARIABLE_RevIntModeDefns_19,
  MR_Word STATE_VARIABLE_RevIntTypeClasses_0_20,
  MR_Word * STATE_VARIABLE_RevIntTypeClasses_21,
  MR_Word STATE_VARIABLE_RevIntInstances_0_22,
  MR_Word * STATE_VARIABLE_RevIntInstances_23,
  MR_Word STATE_VARIABLE_RevIntPredDecls_0_24,
  MR_Word * STATE_VARIABLE_RevIntPredDecls_25,
  MR_Word STATE_VARIABLE_RevIntModeDecls_0_26,
  MR_Word * STATE_VARIABLE_RevIntModeDecls_27,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_28,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_29,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_30,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_31,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_32,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_33,
  MR_Word STATE_VARIABLE_RevIntPromises_0_34,
  MR_Word * STATE_VARIABLE_RevIntPromises_35,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_36,
  MR_Word * STATE_VARIABLE_RevIntInitialises_37,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_38,
  MR_Word * STATE_VARIABLE_RevIntFinalises_39,
  MR_Word STATE_VARIABLE_RevIntMutables_0_40,
  MR_Word * STATE_VARIABLE_RevIntMutables_41,
  MR_Word STATE_VARIABLE_IntContents_0_42,
  MR_Word * STATE_VARIABLE_IntContents_43,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_44,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_45,
  MR_Word STATE_VARIABLE_ImpIncls_0_46,
  MR_Word * STATE_VARIABLE_ImpIncls_47,
  MR_Word STATE_VARIABLE_ImpImportMap_0_48,
  MR_Word * STATE_VARIABLE_ImpImportMap_49,
  MR_Word STATE_VARIABLE_ImpUseMap_0_50,
  MR_Word * STATE_VARIABLE_ImpUseMap_51,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_52,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_53,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsAbs_0_54,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsAbs_55,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsMer_0_56,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsMer_57,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsForeign_0_58,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsForeign_59,
  MR_Word STATE_VARIABLE_RevImpInstDefns_0_60,
  MR_Word * STATE_VARIABLE_RevImpInstDefns_61,
  MR_Word STATE_VARIABLE_RevImpModeDefns_0_62,
  MR_Word * STATE_VARIABLE_RevImpModeDefns_63,
  MR_Word STATE_VARIABLE_RevImpTypeClasses_0_64,
  MR_Word * STATE_VARIABLE_RevImpTypeClasses_65,
  MR_Word STATE_VARIABLE_RevImpInstances_0_66,
  MR_Word * STATE_VARIABLE_RevImpInstances_67,
  MR_Word STATE_VARIABLE_RevImpPredDecls_0_68,
  MR_Word * STATE_VARIABLE_RevImpPredDecls_69,
  MR_Word STATE_VARIABLE_RevImpModeDecls_0_70,
  MR_Word * STATE_VARIABLE_RevImpModeDecls_71,
  MR_Word STATE_VARIABLE_RevImpClauses_0_72,
  MR_Word * STATE_VARIABLE_RevImpClauses_73,
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_74,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_75,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_76,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_77,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_78,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_79,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_80,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_81,
  MR_Word STATE_VARIABLE_RevImpPromises_0_82,
  MR_Word * STATE_VARIABLE_RevImpPromises_83,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_84,
  MR_Word * STATE_VARIABLE_RevImpInitialises_85,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_86,
  MR_Word * STATE_VARIABLE_RevImpFinalises_87,
  MR_Word STATE_VARIABLE_RevImpMutables_0_88,
  MR_Word * STATE_VARIABLE_RevImpMutables_89,
  MR_Word STATE_VARIABLE_ImpContents_0_90,
  MR_Word * STATE_VARIABLE_ImpContents_91,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_92,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_93,
  MR_Word STATE_VARIABLE_Specs_0_94,
  MR_Word * STATE_VARIABLE_Specs_95)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_95 = STATE_VARIABLE_Specs_0_94;
      *STATE_VARIABLE_ImpImplicitAvailNeeds_93 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_92;
      *STATE_VARIABLE_ImpContents_91 = STATE_VARIABLE_ImpContents_0_90;
      *STATE_VARIABLE_RevImpMutables_89 = STATE_VARIABLE_RevImpMutables_0_88;
      *STATE_VARIABLE_RevImpFinalises_87 = STATE_VARIABLE_RevImpFinalises_0_86;
      *STATE_VARIABLE_RevImpInitialises_85 = STATE_VARIABLE_RevImpInitialises_0_84;
      *STATE_VARIABLE_RevImpPromises_83 = STATE_VARIABLE_RevImpPromises_0_82;
      *STATE_VARIABLE_RevImpImplPragmas_81 = STATE_VARIABLE_RevImpImplPragmas_0_80;
      *STATE_VARIABLE_RevImpDeclPragmas_79 = STATE_VARIABLE_RevImpDeclPragmas_0_78;
      *STATE_VARIABLE_RevImpForeignExportEnums_77 = STATE_VARIABLE_RevImpForeignExportEnums_0_76;
      *STATE_VARIABLE_RevImpForeignEnums_75 = STATE_VARIABLE_RevImpForeignEnums_0_74;
      *STATE_VARIABLE_RevImpClauses_73 = STATE_VARIABLE_RevImpClauses_0_72;
      *STATE_VARIABLE_RevImpModeDecls_71 = STATE_VARIABLE_RevImpModeDecls_0_70;
      *STATE_VARIABLE_RevImpPredDecls_69 = STATE_VARIABLE_RevImpPredDecls_0_68;
      *STATE_VARIABLE_RevImpInstances_67 = STATE_VARIABLE_RevImpInstances_0_66;
      *STATE_VARIABLE_RevImpTypeClasses_65 = STATE_VARIABLE_RevImpTypeClasses_0_64;
      *STATE_VARIABLE_RevImpModeDefns_63 = STATE_VARIABLE_RevImpModeDefns_0_62;
      *STATE_VARIABLE_RevImpInstDefns_61 = STATE_VARIABLE_RevImpInstDefns_0_60;
      *STATE_VARIABLE_RevImpTypeDefnsForeign_59 = STATE_VARIABLE_RevImpTypeDefnsForeign_0_58;
      *STATE_VARIABLE_RevImpTypeDefnsMer_57 = STATE_VARIABLE_RevImpTypeDefnsMer_0_56;
      *STATE_VARIABLE_RevImpTypeDefnsAbs_55 = STATE_VARIABLE_RevImpTypeDefnsAbs_0_54;
      *STATE_VARIABLE_ImpFIMSpecMap_53 = STATE_VARIABLE_ImpFIMSpecMap_0_52;
      *STATE_VARIABLE_ImpUseMap_51 = STATE_VARIABLE_ImpUseMap_0_50;
      *STATE_VARIABLE_ImpImportMap_49 = STATE_VARIABLE_ImpImportMap_0_48;
      *STATE_VARIABLE_ImpIncls_47 = STATE_VARIABLE_ImpIncls_0_46;
      *STATE_VARIABLE_IntImplicitAvailNeeds_45 = STATE_VARIABLE_IntImplicitAvailNeeds_0_44;
      *STATE_VARIABLE_IntContents_43 = STATE_VARIABLE_IntContents_0_42;
      *STATE_VARIABLE_RevIntMutables_41 = STATE_VARIABLE_RevIntMutables_0_40;
      *STATE_VARIABLE_RevIntFinalises_39 = STATE_VARIABLE_RevIntFinalises_0_38;
      *STATE_VARIABLE_RevIntInitialises_37 = STATE_VARIABLE_RevIntInitialises_0_36;
      *STATE_VARIABLE_RevIntPromises_35 = STATE_VARIABLE_RevIntPromises_0_34;
      *STATE_VARIABLE_IntBadClausePreds_33 = STATE_VARIABLE_IntBadClausePreds_0_32;
      *STATE_VARIABLE_RevIntImplPragmas_31 = STATE_VARIABLE_RevIntImplPragmas_0_30;
      *STATE_VARIABLE_RevIntDeclPragmas_29 = STATE_VARIABLE_RevIntDeclPragmas_0_28;
      *STATE_VARIABLE_RevIntModeDecls_27 = STATE_VARIABLE_RevIntModeDecls_0_26;
      *STATE_VARIABLE_RevIntPredDecls_25 = STATE_VARIABLE_RevIntPredDecls_0_24;
      *STATE_VARIABLE_RevIntInstances_23 = STATE_VARIABLE_RevIntInstances_0_22;
      *STATE_VARIABLE_RevIntTypeClasses_21 = STATE_VARIABLE_RevIntTypeClasses_0_20;
      *STATE_VARIABLE_RevIntModeDefns_19 = STATE_VARIABLE_RevIntModeDefns_0_18;
      *STATE_VARIABLE_RevIntInstDefns_17 = STATE_VARIABLE_RevIntInstDefns_0_16;
      *STATE_VARIABLE_RevIntTypeDefnsForeign_15 = STATE_VARIABLE_RevIntTypeDefnsForeign_0_14;
      *STATE_VARIABLE_RevIntTypeDefnsMer_13 = STATE_VARIABLE_RevIntTypeDefnsMer_0_12;
      *STATE_VARIABLE_RevIntTypeDefnsAbs_11 = STATE_VARIABLE_RevIntTypeDefnsAbs_0_10;
      *STATE_VARIABLE_IntFIMSpecMap_9 = STATE_VARIABLE_IntFIMSpecMap_0_8;
      *STATE_VARIABLE_IntUseMap_7 = STATE_VARIABLE_IntUseMap_0_6;
      *STATE_VARIABLE_IntImportMap_5 = STATE_VARIABLE_IntImportMap_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word ItemBlock_237 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_238 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_237, (MR_Integer) 1))));
      MR_Word Incls_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_237, (MR_Integer) 2))));
      MR_Word Avails_289 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_237, (MR_Integer) 3))));
      MR_Word FIMs_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_237, (MR_Integer) 4))));
      MR_Word Items_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_237, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_386_386;
      MR_Word STATE_VARIABLE_ImpImportMap_387_387;
      MR_Word STATE_VARIABLE_ImpUseMap_388_388;
      MR_Word STATE_VARIABLE_ImpFIMSpecMap_390_390;
      MR_Word STATE_VARIABLE_RevImpTypeDefnsAbs_392_392;
      MR_Word STATE_VARIABLE_RevImpTypeDefnsMer_393_393;
      MR_Word STATE_VARIABLE_RevImpTypeDefnsForeign_394_394;
      MR_Word STATE_VARIABLE_RevImpInstDefns_395_395;
      MR_Word STATE_VARIABLE_RevImpModeDefns_396_396;
      MR_Word STATE_VARIABLE_RevImpTypeClasses_397_397;
      MR_Word STATE_VARIABLE_RevImpInstances_398_398;
      MR_Word STATE_VARIABLE_RevImpPredDecls_399_399;
      MR_Word STATE_VARIABLE_RevImpModeDecls_400_400;
      MR_Word STATE_VARIABLE_RevImpClauses_401_401;
      MR_Word STATE_VARIABLE_RevImpForeignEnums_402_402;
      MR_Word STATE_VARIABLE_RevImpForeignExportEnums_403_403;
      MR_Word STATE_VARIABLE_RevImpDeclPragmas_404_404;
      MR_Word STATE_VARIABLE_RevImpImplPragmas_405_405;
      MR_Word STATE_VARIABLE_RevImpPromises_406_406;
      MR_Word STATE_VARIABLE_RevImpInitialises_407_407;
      MR_Word STATE_VARIABLE_RevImpFinalises_408_408;
      MR_Word STATE_VARIABLE_RevImpMutables_409_409;
      MR_Word STATE_VARIABLE_ImpContents_410_410;
      MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_411_411;
      MR_Word STATE_VARIABLE_IntIncls_413_413;
      MR_Word STATE_VARIABLE_IntImportMap_414_414;
      MR_Word STATE_VARIABLE_IntUseMap_415_415;
      MR_Word STATE_VARIABLE_IntFIMSpecMap_417_417;
      MR_Word STATE_VARIABLE_RevIntTypeDefnsAbs_419_419;
      MR_Word STATE_VARIABLE_RevIntTypeDefnsMer_420_420;
      MR_Word STATE_VARIABLE_RevIntTypeDefnsForeign_421_421;
      MR_Word STATE_VARIABLE_RevIntInstDefns_422_422;
      MR_Word STATE_VARIABLE_RevIntModeDefns_423_423;
      MR_Word STATE_VARIABLE_RevIntTypeClasses_424_424;
      MR_Word STATE_VARIABLE_RevIntInstances_425_425;
      MR_Word STATE_VARIABLE_RevIntPredDecls_426_426;
      MR_Word STATE_VARIABLE_RevIntModeDecls_427_427;
      MR_Word STATE_VARIABLE_RevIntDeclPragmas_428_428;
      MR_Word STATE_VARIABLE_RevIntImplPragmas_429_429;
      MR_Word STATE_VARIABLE_IntBadClausePreds_430_430;
      MR_Word STATE_VARIABLE_RevIntPromises_431_431;
      MR_Word STATE_VARIABLE_RevIntInitialises_432_432;
      MR_Word STATE_VARIABLE_RevIntFinalises_433_433;
      MR_Word STATE_VARIABLE_RevIntMutables_434_434;
      MR_Word STATE_VARIABLE_IntContents_435_435;
      MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_436_436;
      MR_Word STATE_VARIABLE_Specs_437_437;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntImportMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntUseMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeDefnsAbs_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeDefnsMer_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeDefnsForeign_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInstDefns_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevIntModeDefns_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInstances_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPredDecls_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevIntModeDecls_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_30;
      MR_Word next_value_of_STATE_VARIABLE_IntBadClausePreds_0_32;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPromises_0_34;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInitialises_0_36;
      MR_Word next_value_of_STATE_VARIABLE_RevIntFinalises_0_38;
      MR_Word next_value_of_STATE_VARIABLE_RevIntMutables_0_40;
      MR_Word next_value_of_STATE_VARIABLE_IntContents_0_42;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_44;
      MR_Word next_value_of_STATE_VARIABLE_ImpIncls_0_46;
      MR_Word next_value_of_STATE_VARIABLE_ImpImportMap_0_48;
      MR_Word next_value_of_STATE_VARIABLE_ImpUseMap_0_50;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_52;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefnsAbs_0_54;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefnsMer_0_56;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefnsForeign_0_58;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstDefns_0_60;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDefns_0_62;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_64;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstances_0_66;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPredDecls_0_68;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDecls_0_70;
      MR_Word next_value_of_STATE_VARIABLE_RevImpClauses_0_72;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_74;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_76;
      MR_Word next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_78;
      MR_Word next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_80;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPromises_0_82;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInitialises_0_84;
      MR_Word next_value_of_STATE_VARIABLE_RevImpFinalises_0_86;
      MR_Word next_value_of_STATE_VARIABLE_RevImpMutables_0_88;
      MR_Word next_value_of_STATE_VARIABLE_ImpContents_0_90;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_92;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_94;

      switch (Section_287) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Specs_391_391;
            MR_Box conv3_STATE_VARIABLE_ImpFIMSpecMap_390_390;
            MR_Box conv2_STATE_VARIABLE_Specs_391_391;

            STATE_VARIABLE_ImpIncls_386_386 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpIncls_0_46, Incls_288);
            parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_289, STATE_VARIABLE_ImpImportMap_0_48, &STATE_VARIABLE_ImpImportMap_387_387, STATE_VARIABLE_ImpUseMap_0_50, &STATE_VARIABLE_ImpUseMap_388_388);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[101]), FIMs_290, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecMap_0_52)), &conv3_STATE_VARIABLE_ImpFIMSpecMap_390_390, ((MR_Box) (STATE_VARIABLE_Specs_0_94)), &conv2_STATE_VARIABLE_Specs_391_391);
            STATE_VARIABLE_ImpFIMSpecMap_390_390 = ((MR_Word) (conv3_STATE_VARIABLE_ImpFIMSpecMap_390_390));
            STATE_VARIABLE_Specs_391_391 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_391_391));
            parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0(Items_291, STATE_VARIABLE_RevImpTypeDefnsAbs_0_54, &STATE_VARIABLE_RevImpTypeDefnsAbs_392_392, STATE_VARIABLE_RevImpTypeDefnsMer_0_56, &STATE_VARIABLE_RevImpTypeDefnsMer_393_393, STATE_VARIABLE_RevImpTypeDefnsForeign_0_58, &STATE_VARIABLE_RevImpTypeDefnsForeign_394_394, STATE_VARIABLE_RevImpInstDefns_0_60, &STATE_VARIABLE_RevImpInstDefns_395_395, STATE_VARIABLE_RevImpModeDefns_0_62, &STATE_VARIABLE_RevImpModeDefns_396_396, STATE_VARIABLE_RevImpTypeClasses_0_64, &STATE_VARIABLE_RevImpTypeClasses_397_397, STATE_VARIABLE_RevImpInstances_0_66, &STATE_VARIABLE_RevImpInstances_398_398, STATE_VARIABLE_RevImpPredDecls_0_68, &STATE_VARIABLE_RevImpPredDecls_399_399, STATE_VARIABLE_RevImpModeDecls_0_70, &STATE_VARIABLE_RevImpModeDecls_400_400, STATE_VARIABLE_RevImpClauses_0_72, &STATE_VARIABLE_RevImpClauses_401_401, STATE_VARIABLE_RevImpForeignEnums_0_74, &STATE_VARIABLE_RevImpForeignEnums_402_402, STATE_VARIABLE_RevImpForeignExportEnums_0_76, &STATE_VARIABLE_RevImpForeignExportEnums_403_403, STATE_VARIABLE_RevImpDeclPragmas_0_78, &STATE_VARIABLE_RevImpDeclPragmas_404_404, STATE_VARIABLE_RevImpImplPragmas_0_80, &STATE_VARIABLE_RevImpImplPragmas_405_405, STATE_VARIABLE_RevImpPromises_0_82, &STATE_VARIABLE_RevImpPromises_406_406, STATE_VARIABLE_RevImpInitialises_0_84, &STATE_VARIABLE_RevImpInitialises_407_407, STATE_VARIABLE_RevImpFinalises_0_86, &STATE_VARIABLE_RevImpFinalises_408_408, STATE_VARIABLE_RevImpMutables_0_88, &STATE_VARIABLE_RevImpMutables_409_409, STATE_VARIABLE_ImpContents_0_90, &STATE_VARIABLE_ImpContents_410_410, STATE_VARIABLE_ImpImplicitAvailNeeds_0_92, &STATE_VARIABLE_ImpImplicitAvailNeeds_411_411, STATE_VARIABLE_Specs_391_391, &STATE_VARIABLE_Specs_437_437);
            STATE_VARIABLE_IntIncls_413_413 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImportMap_414_414 = STATE_VARIABLE_IntImportMap_0_4;
            STATE_VARIABLE_IntUseMap_415_415 = STATE_VARIABLE_IntUseMap_0_6;
            STATE_VARIABLE_IntFIMSpecMap_417_417 = STATE_VARIABLE_IntFIMSpecMap_0_8;
            STATE_VARIABLE_RevIntTypeDefnsAbs_419_419 = STATE_VARIABLE_RevIntTypeDefnsAbs_0_10;
            STATE_VARIABLE_RevIntTypeDefnsMer_420_420 = STATE_VARIABLE_RevIntTypeDefnsMer_0_12;
            STATE_VARIABLE_RevIntTypeDefnsForeign_421_421 = STATE_VARIABLE_RevIntTypeDefnsForeign_0_14;
            STATE_VARIABLE_RevIntInstDefns_422_422 = STATE_VARIABLE_RevIntInstDefns_0_16;
            STATE_VARIABLE_RevIntModeDefns_423_423 = STATE_VARIABLE_RevIntModeDefns_0_18;
            STATE_VARIABLE_RevIntTypeClasses_424_424 = STATE_VARIABLE_RevIntTypeClasses_0_20;
            STATE_VARIABLE_RevIntInstances_425_425 = STATE_VARIABLE_RevIntInstances_0_22;
            STATE_VARIABLE_RevIntPredDecls_426_426 = STATE_VARIABLE_RevIntPredDecls_0_24;
            STATE_VARIABLE_RevIntModeDecls_427_427 = STATE_VARIABLE_RevIntModeDecls_0_26;
            STATE_VARIABLE_RevIntDeclPragmas_428_428 = STATE_VARIABLE_RevIntDeclPragmas_0_28;
            STATE_VARIABLE_RevIntImplPragmas_429_429 = STATE_VARIABLE_RevIntImplPragmas_0_30;
            STATE_VARIABLE_IntBadClausePreds_430_430 = STATE_VARIABLE_IntBadClausePreds_0_32;
            STATE_VARIABLE_RevIntPromises_431_431 = STATE_VARIABLE_RevIntPromises_0_34;
            STATE_VARIABLE_RevIntInitialises_432_432 = STATE_VARIABLE_RevIntInitialises_0_36;
            STATE_VARIABLE_RevIntFinalises_433_433 = STATE_VARIABLE_RevIntFinalises_0_38;
            STATE_VARIABLE_RevIntMutables_434_434 = STATE_VARIABLE_RevIntMutables_0_40;
            STATE_VARIABLE_IntContents_435_435 = STATE_VARIABLE_IntContents_0_42;
            STATE_VARIABLE_IntImplicitAvailNeeds_436_436 = STATE_VARIABLE_IntImplicitAvailNeeds_0_44;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_418_418;
            MR_Box conv7_STATE_VARIABLE_IntFIMSpecMap_417_417;
            MR_Box conv6_STATE_VARIABLE_Specs_418_418;

            STATE_VARIABLE_IntIncls_413_413 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Incls_288);
            parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_289, STATE_VARIABLE_IntImportMap_0_4, &STATE_VARIABLE_IntImportMap_414_414, STATE_VARIABLE_IntUseMap_0_6, &STATE_VARIABLE_IntUseMap_415_415);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[102]), FIMs_290, ((MR_Box) (STATE_VARIABLE_IntFIMSpecMap_0_8)), &conv7_STATE_VARIABLE_IntFIMSpecMap_417_417, ((MR_Box) (STATE_VARIABLE_Specs_0_94)), &conv6_STATE_VARIABLE_Specs_418_418);
            STATE_VARIABLE_IntFIMSpecMap_417_417 = ((MR_Word) (conv7_STATE_VARIABLE_IntFIMSpecMap_417_417));
            STATE_VARIABLE_Specs_418_418 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_418_418));
            parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(Items_291, STATE_VARIABLE_RevIntTypeDefnsAbs_0_10, &STATE_VARIABLE_RevIntTypeDefnsAbs_419_419, STATE_VARIABLE_RevIntTypeDefnsMer_0_12, &STATE_VARIABLE_RevIntTypeDefnsMer_420_420, STATE_VARIABLE_RevIntTypeDefnsForeign_0_14, &STATE_VARIABLE_RevIntTypeDefnsForeign_421_421, STATE_VARIABLE_RevIntInstDefns_0_16, &STATE_VARIABLE_RevIntInstDefns_422_422, STATE_VARIABLE_RevIntModeDefns_0_18, &STATE_VARIABLE_RevIntModeDefns_423_423, STATE_VARIABLE_RevIntTypeClasses_0_20, &STATE_VARIABLE_RevIntTypeClasses_424_424, STATE_VARIABLE_RevIntInstances_0_22, &STATE_VARIABLE_RevIntInstances_425_425, STATE_VARIABLE_RevIntPredDecls_0_24, &STATE_VARIABLE_RevIntPredDecls_426_426, STATE_VARIABLE_RevIntModeDecls_0_26, &STATE_VARIABLE_RevIntModeDecls_427_427, STATE_VARIABLE_RevIntDeclPragmas_0_28, &STATE_VARIABLE_RevIntDeclPragmas_428_428, STATE_VARIABLE_RevIntImplPragmas_0_30, &STATE_VARIABLE_RevIntImplPragmas_429_429, STATE_VARIABLE_IntBadClausePreds_0_32, &STATE_VARIABLE_IntBadClausePreds_430_430, STATE_VARIABLE_RevIntPromises_0_34, &STATE_VARIABLE_RevIntPromises_431_431, STATE_VARIABLE_RevIntInitialises_0_36, &STATE_VARIABLE_RevIntInitialises_432_432, STATE_VARIABLE_RevIntFinalises_0_38, &STATE_VARIABLE_RevIntFinalises_433_433, STATE_VARIABLE_RevIntMutables_0_40, &STATE_VARIABLE_RevIntMutables_434_434, STATE_VARIABLE_IntContents_0_42, &STATE_VARIABLE_IntContents_435_435, STATE_VARIABLE_IntImplicitAvailNeeds_0_44, &STATE_VARIABLE_IntImplicitAvailNeeds_436_436, STATE_VARIABLE_Specs_418_418, &STATE_VARIABLE_Specs_437_437);
            STATE_VARIABLE_ImpIncls_386_386 = STATE_VARIABLE_ImpIncls_0_46;
            STATE_VARIABLE_ImpImportMap_387_387 = STATE_VARIABLE_ImpImportMap_0_48;
            STATE_VARIABLE_ImpUseMap_388_388 = STATE_VARIABLE_ImpUseMap_0_50;
            STATE_VARIABLE_ImpFIMSpecMap_390_390 = STATE_VARIABLE_ImpFIMSpecMap_0_52;
            STATE_VARIABLE_RevImpTypeDefnsAbs_392_392 = STATE_VARIABLE_RevImpTypeDefnsAbs_0_54;
            STATE_VARIABLE_RevImpTypeDefnsMer_393_393 = STATE_VARIABLE_RevImpTypeDefnsMer_0_56;
            STATE_VARIABLE_RevImpTypeDefnsForeign_394_394 = STATE_VARIABLE_RevImpTypeDefnsForeign_0_58;
            STATE_VARIABLE_RevImpInstDefns_395_395 = STATE_VARIABLE_RevImpInstDefns_0_60;
            STATE_VARIABLE_RevImpModeDefns_396_396 = STATE_VARIABLE_RevImpModeDefns_0_62;
            STATE_VARIABLE_RevImpTypeClasses_397_397 = STATE_VARIABLE_RevImpTypeClasses_0_64;
            STATE_VARIABLE_RevImpInstances_398_398 = STATE_VARIABLE_RevImpInstances_0_66;
            STATE_VARIABLE_RevImpPredDecls_399_399 = STATE_VARIABLE_RevImpPredDecls_0_68;
            STATE_VARIABLE_RevImpModeDecls_400_400 = STATE_VARIABLE_RevImpModeDecls_0_70;
            STATE_VARIABLE_RevImpClauses_401_401 = STATE_VARIABLE_RevImpClauses_0_72;
            STATE_VARIABLE_RevImpForeignEnums_402_402 = STATE_VARIABLE_RevImpForeignEnums_0_74;
            STATE_VARIABLE_RevImpForeignExportEnums_403_403 = STATE_VARIABLE_RevImpForeignExportEnums_0_76;
            STATE_VARIABLE_RevImpDeclPragmas_404_404 = STATE_VARIABLE_RevImpDeclPragmas_0_78;
            STATE_VARIABLE_RevImpImplPragmas_405_405 = STATE_VARIABLE_RevImpImplPragmas_0_80;
            STATE_VARIABLE_RevImpPromises_406_406 = STATE_VARIABLE_RevImpPromises_0_82;
            STATE_VARIABLE_RevImpInitialises_407_407 = STATE_VARIABLE_RevImpInitialises_0_84;
            STATE_VARIABLE_RevImpFinalises_408_408 = STATE_VARIABLE_RevImpFinalises_0_86;
            STATE_VARIABLE_RevImpMutables_409_409 = STATE_VARIABLE_RevImpMutables_0_88;
            STATE_VARIABLE_ImpContents_410_410 = STATE_VARIABLE_ImpContents_0_90;
            STATE_VARIABLE_ImpImplicitAvailNeeds_411_411 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_92;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_238;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_413_413;
      next_value_of_STATE_VARIABLE_IntImportMap_0_4 = STATE_VARIABLE_IntImportMap_414_414;
      next_value_of_STATE_VARIABLE_IntUseMap_0_6 = STATE_VARIABLE_IntUseMap_415_415;
      next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8 = STATE_VARIABLE_IntFIMSpecMap_417_417;
      next_value_of_STATE_VARIABLE_RevIntTypeDefnsAbs_0_10 = STATE_VARIABLE_RevIntTypeDefnsAbs_419_419;
      next_value_of_STATE_VARIABLE_RevIntTypeDefnsMer_0_12 = STATE_VARIABLE_RevIntTypeDefnsMer_420_420;
      next_value_of_STATE_VARIABLE_RevIntTypeDefnsForeign_0_14 = STATE_VARIABLE_RevIntTypeDefnsForeign_421_421;
      next_value_of_STATE_VARIABLE_RevIntInstDefns_0_16 = STATE_VARIABLE_RevIntInstDefns_422_422;
      next_value_of_STATE_VARIABLE_RevIntModeDefns_0_18 = STATE_VARIABLE_RevIntModeDefns_423_423;
      next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_20 = STATE_VARIABLE_RevIntTypeClasses_424_424;
      next_value_of_STATE_VARIABLE_RevIntInstances_0_22 = STATE_VARIABLE_RevIntInstances_425_425;
      next_value_of_STATE_VARIABLE_RevIntPredDecls_0_24 = STATE_VARIABLE_RevIntPredDecls_426_426;
      next_value_of_STATE_VARIABLE_RevIntModeDecls_0_26 = STATE_VARIABLE_RevIntModeDecls_427_427;
      next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_28 = STATE_VARIABLE_RevIntDeclPragmas_428_428;
      next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_30 = STATE_VARIABLE_RevIntImplPragmas_429_429;
      next_value_of_STATE_VARIABLE_IntBadClausePreds_0_32 = STATE_VARIABLE_IntBadClausePreds_430_430;
      next_value_of_STATE_VARIABLE_RevIntPromises_0_34 = STATE_VARIABLE_RevIntPromises_431_431;
      next_value_of_STATE_VARIABLE_RevIntInitialises_0_36 = STATE_VARIABLE_RevIntInitialises_432_432;
      next_value_of_STATE_VARIABLE_RevIntFinalises_0_38 = STATE_VARIABLE_RevIntFinalises_433_433;
      next_value_of_STATE_VARIABLE_RevIntMutables_0_40 = STATE_VARIABLE_RevIntMutables_434_434;
      next_value_of_STATE_VARIABLE_IntContents_0_42 = STATE_VARIABLE_IntContents_435_435;
      next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_44 = STATE_VARIABLE_IntImplicitAvailNeeds_436_436;
      next_value_of_STATE_VARIABLE_ImpIncls_0_46 = STATE_VARIABLE_ImpIncls_386_386;
      next_value_of_STATE_VARIABLE_ImpImportMap_0_48 = STATE_VARIABLE_ImpImportMap_387_387;
      next_value_of_STATE_VARIABLE_ImpUseMap_0_50 = STATE_VARIABLE_ImpUseMap_388_388;
      next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_52 = STATE_VARIABLE_ImpFIMSpecMap_390_390;
      next_value_of_STATE_VARIABLE_RevImpTypeDefnsAbs_0_54 = STATE_VARIABLE_RevImpTypeDefnsAbs_392_392;
      next_value_of_STATE_VARIABLE_RevImpTypeDefnsMer_0_56 = STATE_VARIABLE_RevImpTypeDefnsMer_393_393;
      next_value_of_STATE_VARIABLE_RevImpTypeDefnsForeign_0_58 = STATE_VARIABLE_RevImpTypeDefnsForeign_394_394;
      next_value_of_STATE_VARIABLE_RevImpInstDefns_0_60 = STATE_VARIABLE_RevImpInstDefns_395_395;
      next_value_of_STATE_VARIABLE_RevImpModeDefns_0_62 = STATE_VARIABLE_RevImpModeDefns_396_396;
      next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_64 = STATE_VARIABLE_RevImpTypeClasses_397_397;
      next_value_of_STATE_VARIABLE_RevImpInstances_0_66 = STATE_VARIABLE_RevImpInstances_398_398;
      next_value_of_STATE_VARIABLE_RevImpPredDecls_0_68 = STATE_VARIABLE_RevImpPredDecls_399_399;
      next_value_of_STATE_VARIABLE_RevImpModeDecls_0_70 = STATE_VARIABLE_RevImpModeDecls_400_400;
      next_value_of_STATE_VARIABLE_RevImpClauses_0_72 = STATE_VARIABLE_RevImpClauses_401_401;
      next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_74 = STATE_VARIABLE_RevImpForeignEnums_402_402;
      next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_76 = STATE_VARIABLE_RevImpForeignExportEnums_403_403;
      next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_78 = STATE_VARIABLE_RevImpDeclPragmas_404_404;
      next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_80 = STATE_VARIABLE_RevImpImplPragmas_405_405;
      next_value_of_STATE_VARIABLE_RevImpPromises_0_82 = STATE_VARIABLE_RevImpPromises_406_406;
      next_value_of_STATE_VARIABLE_RevImpInitialises_0_84 = STATE_VARIABLE_RevImpInitialises_407_407;
      next_value_of_STATE_VARIABLE_RevImpFinalises_0_86 = STATE_VARIABLE_RevImpFinalises_408_408;
      next_value_of_STATE_VARIABLE_RevImpMutables_0_88 = STATE_VARIABLE_RevImpMutables_409_409;
      next_value_of_STATE_VARIABLE_ImpContents_0_90 = STATE_VARIABLE_ImpContents_410_410;
      next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_92 = STATE_VARIABLE_ImpImplicitAvailNeeds_411_411;
      next_value_of_STATE_VARIABLE_Specs_0_94 = STATE_VARIABLE_Specs_437_437;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntImportMap_0_4 = next_value_of_STATE_VARIABLE_IntImportMap_0_4;
      STATE_VARIABLE_IntUseMap_0_6 = next_value_of_STATE_VARIABLE_IntUseMap_0_6;
      STATE_VARIABLE_IntFIMSpecMap_0_8 = next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8;
      STATE_VARIABLE_RevIntTypeDefnsAbs_0_10 = next_value_of_STATE_VARIABLE_RevIntTypeDefnsAbs_0_10;
      STATE_VARIABLE_RevIntTypeDefnsMer_0_12 = next_value_of_STATE_VARIABLE_RevIntTypeDefnsMer_0_12;
      STATE_VARIABLE_RevIntTypeDefnsForeign_0_14 = next_value_of_STATE_VARIABLE_RevIntTypeDefnsForeign_0_14;
      STATE_VARIABLE_RevIntInstDefns_0_16 = next_value_of_STATE_VARIABLE_RevIntInstDefns_0_16;
      STATE_VARIABLE_RevIntModeDefns_0_18 = next_value_of_STATE_VARIABLE_RevIntModeDefns_0_18;
      STATE_VARIABLE_RevIntTypeClasses_0_20 = next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_20;
      STATE_VARIABLE_RevIntInstances_0_22 = next_value_of_STATE_VARIABLE_RevIntInstances_0_22;
      STATE_VARIABLE_RevIntPredDecls_0_24 = next_value_of_STATE_VARIABLE_RevIntPredDecls_0_24;
      STATE_VARIABLE_RevIntModeDecls_0_26 = next_value_of_STATE_VARIABLE_RevIntModeDecls_0_26;
      STATE_VARIABLE_RevIntDeclPragmas_0_28 = next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_28;
      STATE_VARIABLE_RevIntImplPragmas_0_30 = next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_30;
      STATE_VARIABLE_IntBadClausePreds_0_32 = next_value_of_STATE_VARIABLE_IntBadClausePreds_0_32;
      STATE_VARIABLE_RevIntPromises_0_34 = next_value_of_STATE_VARIABLE_RevIntPromises_0_34;
      STATE_VARIABLE_RevIntInitialises_0_36 = next_value_of_STATE_VARIABLE_RevIntInitialises_0_36;
      STATE_VARIABLE_RevIntFinalises_0_38 = next_value_of_STATE_VARIABLE_RevIntFinalises_0_38;
      STATE_VARIABLE_RevIntMutables_0_40 = next_value_of_STATE_VARIABLE_RevIntMutables_0_40;
      STATE_VARIABLE_IntContents_0_42 = next_value_of_STATE_VARIABLE_IntContents_0_42;
      STATE_VARIABLE_IntImplicitAvailNeeds_0_44 = next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_44;
      STATE_VARIABLE_ImpIncls_0_46 = next_value_of_STATE_VARIABLE_ImpIncls_0_46;
      STATE_VARIABLE_ImpImportMap_0_48 = next_value_of_STATE_VARIABLE_ImpImportMap_0_48;
      STATE_VARIABLE_ImpUseMap_0_50 = next_value_of_STATE_VARIABLE_ImpUseMap_0_50;
      STATE_VARIABLE_ImpFIMSpecMap_0_52 = next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_52;
      STATE_VARIABLE_RevImpTypeDefnsAbs_0_54 = next_value_of_STATE_VARIABLE_RevImpTypeDefnsAbs_0_54;
      STATE_VARIABLE_RevImpTypeDefnsMer_0_56 = next_value_of_STATE_VARIABLE_RevImpTypeDefnsMer_0_56;
      STATE_VARIABLE_RevImpTypeDefnsForeign_0_58 = next_value_of_STATE_VARIABLE_RevImpTypeDefnsForeign_0_58;
      STATE_VARIABLE_RevImpInstDefns_0_60 = next_value_of_STATE_VARIABLE_RevImpInstDefns_0_60;
      STATE_VARIABLE_RevImpModeDefns_0_62 = next_value_of_STATE_VARIABLE_RevImpModeDefns_0_62;
      STATE_VARIABLE_RevImpTypeClasses_0_64 = next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_64;
      STATE_VARIABLE_RevImpInstances_0_66 = next_value_of_STATE_VARIABLE_RevImpInstances_0_66;
      STATE_VARIABLE_RevImpPredDecls_0_68 = next_value_of_STATE_VARIABLE_RevImpPredDecls_0_68;
      STATE_VARIABLE_RevImpModeDecls_0_70 = next_value_of_STATE_VARIABLE_RevImpModeDecls_0_70;
      STATE_VARIABLE_RevImpClauses_0_72 = next_value_of_STATE_VARIABLE_RevImpClauses_0_72;
      STATE_VARIABLE_RevImpForeignEnums_0_74 = next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_74;
      STATE_VARIABLE_RevImpForeignExportEnums_0_76 = next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_76;
      STATE_VARIABLE_RevImpDeclPragmas_0_78 = next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_78;
      STATE_VARIABLE_RevImpImplPragmas_0_80 = next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_80;
      STATE_VARIABLE_RevImpPromises_0_82 = next_value_of_STATE_VARIABLE_RevImpPromises_0_82;
      STATE_VARIABLE_RevImpInitialises_0_84 = next_value_of_STATE_VARIABLE_RevImpInitialises_0_84;
      STATE_VARIABLE_RevImpFinalises_0_86 = next_value_of_STATE_VARIABLE_RevImpFinalises_0_86;
      STATE_VARIABLE_RevImpMutables_0_88 = next_value_of_STATE_VARIABLE_RevImpMutables_0_88;
      STATE_VARIABLE_ImpContents_0_90 = next_value_of_STATE_VARIABLE_ImpContents_0_90;
      STATE_VARIABLE_ImpImplicitAvailNeeds_0_92 = next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_92;
      STATE_VARIABLE_Specs_0_94 = next_value_of_STATE_VARIABLE_Specs_0_94;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Contents_9;

    parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Contents_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Contents_9));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Contents_9;

    parse_tree__convert_parse_tree__accumulate_foreign_export_lang_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Contents_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Contents_9));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Contents_9;

    parse_tree__convert_parse_tree__accumulate_foreign_export_lang_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Contents_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Contents_9));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefnsAbs_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefnsAbs_3,
  MR_Word STATE_VARIABLE_RevTypeDefnsMer_0_4,
  MR_Word * STATE_VARIABLE_RevTypeDefnsMer_5,
  MR_Word STATE_VARIABLE_RevTypeDefnsForeign_0_6,
  MR_Word * STATE_VARIABLE_RevTypeDefnsForeign_7,
  MR_Word STATE_VARIABLE_RevInstDefns_0_8,
  MR_Word * STATE_VARIABLE_RevInstDefns_9,
  MR_Word STATE_VARIABLE_RevModeDefns_0_10,
  MR_Word * STATE_VARIABLE_RevModeDefns_11,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_12,
  MR_Word * STATE_VARIABLE_RevTypeClasses_13,
  MR_Word STATE_VARIABLE_RevInstances_0_14,
  MR_Word * STATE_VARIABLE_RevInstances_15,
  MR_Word STATE_VARIABLE_RevPredDecls_0_16,
  MR_Word * STATE_VARIABLE_RevPredDecls_17,
  MR_Word STATE_VARIABLE_RevModeDecls_0_18,
  MR_Word * STATE_VARIABLE_RevModeDecls_19,
  MR_Word STATE_VARIABLE_RevClauses_0_20,
  MR_Word * STATE_VARIABLE_RevClauses_21,
  MR_Word STATE_VARIABLE_RevForeignEnums_0_22,
  MR_Word * STATE_VARIABLE_RevForeignEnums_23,
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_24,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_25,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_26,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_27,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_28,
  MR_Word * STATE_VARIABLE_RevImplPragmas_29,
  MR_Word STATE_VARIABLE_RevPromises_0_30,
  MR_Word * STATE_VARIABLE_RevPromises_31,
  MR_Word STATE_VARIABLE_RevInitialises_0_32,
  MR_Word * STATE_VARIABLE_RevInitialises_33,
  MR_Word STATE_VARIABLE_RevFinalises_0_34,
  MR_Word * STATE_VARIABLE_RevFinalises_35,
  MR_Word STATE_VARIABLE_RevMutables_0_36,
  MR_Word * STATE_VARIABLE_RevMutables_37,
  MR_Word STATE_VARIABLE_Contents_0_38,
  MR_Word * STATE_VARIABLE_Contents_39,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_40,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
      *STATE_VARIABLE_ImplicitAvailNeeds_41 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
      *STATE_VARIABLE_Contents_39 = STATE_VARIABLE_Contents_0_38;
      *STATE_VARIABLE_RevMutables_37 = STATE_VARIABLE_RevMutables_0_36;
      *STATE_VARIABLE_RevFinalises_35 = STATE_VARIABLE_RevFinalises_0_34;
      *STATE_VARIABLE_RevInitialises_33 = STATE_VARIABLE_RevInitialises_0_32;
      *STATE_VARIABLE_RevPromises_31 = STATE_VARIABLE_RevPromises_0_30;
      *STATE_VARIABLE_RevImplPragmas_29 = STATE_VARIABLE_RevImplPragmas_0_28;
      *STATE_VARIABLE_RevDeclPragmas_27 = STATE_VARIABLE_RevDeclPragmas_0_26;
      *STATE_VARIABLE_RevForeignExportEnums_25 = STATE_VARIABLE_RevForeignExportEnums_0_24;
      *STATE_VARIABLE_RevForeignEnums_23 = STATE_VARIABLE_RevForeignEnums_0_22;
      *STATE_VARIABLE_RevClauses_21 = STATE_VARIABLE_RevClauses_0_20;
      *STATE_VARIABLE_RevModeDecls_19 = STATE_VARIABLE_RevModeDecls_0_18;
      *STATE_VARIABLE_RevPredDecls_17 = STATE_VARIABLE_RevPredDecls_0_16;
      *STATE_VARIABLE_RevInstances_15 = STATE_VARIABLE_RevInstances_0_14;
      *STATE_VARIABLE_RevTypeClasses_13 = STATE_VARIABLE_RevTypeClasses_0_12;
      *STATE_VARIABLE_RevModeDefns_11 = STATE_VARIABLE_RevModeDefns_0_10;
      *STATE_VARIABLE_RevInstDefns_9 = STATE_VARIABLE_RevInstDefns_0_8;
      *STATE_VARIABLE_RevTypeDefnsForeign_7 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
      *STATE_VARIABLE_RevTypeDefnsMer_5 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
      *STATE_VARIABLE_RevTypeDefnsAbs_3 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
    }
    else
    {
      MR_Word Item_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMutables_274_274;
      MR_Word STATE_VARIABLE_RevFinalises_278_278;
      MR_Word STATE_VARIABLE_RevInitialises_282_282;
      MR_Word STATE_VARIABLE_RevPromises_284_284;
      MR_Word STATE_VARIABLE_Specs_301_301;
      MR_Word STATE_VARIABLE_RevImplPragmas_302_302;
      MR_Word STATE_VARIABLE_RevDeclPragmas_314_314;
      MR_Word STATE_VARIABLE_RevForeignExportEnums_315_315;
      MR_Word STATE_VARIABLE_RevForeignEnums_317_317;
      MR_Word STATE_VARIABLE_RevClauses_319_319;
      MR_Word STATE_VARIABLE_RevModeDecls_320_320;
      MR_Word STATE_VARIABLE_RevPredDecls_321_321;
      MR_Word STATE_VARIABLE_RevInstances_323_323;
      MR_Word STATE_VARIABLE_RevTypeClasses_324_324;
      MR_Word STATE_VARIABLE_RevModeDefns_325_325;
      MR_Word STATE_VARIABLE_RevInstDefns_326_326;
      MR_Word STATE_VARIABLE_Contents_327_327;
      MR_Word STATE_VARIABLE_RevTypeDefnsForeign_328_328;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_330_330;
      MR_Word STATE_VARIABLE_RevTypeDefnsMer_331_331;
      MR_Word STATE_VARIABLE_RevTypeDefnsAbs_332_332;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevInstDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDefns_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeClasses_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevInstances_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignEnums_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevPromises_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevInitialises_0_32;
      MR_Word next_value_of_STATE_VARIABLE_RevFinalises_0_34;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_36;
      MR_Word next_value_of_STATE_VARIABLE_Contents_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_42;

      switch (MR_tag((MR_Word) Item_107)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_148 = (MR_Word) ((MR_Word) (Item_107));

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(ItemClauseInfo_148, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_330_330);
            {
              STATE_VARIABLE_RevClauses_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_319_319, 0) = ((MR_Box) (ItemClauseInfo_148));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_319_319, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_20));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
            STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
            STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
            STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
            STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
            STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
            STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
            STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
            STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefnInfo_142 = (MR_Word) (MR_body((MR_Word) (Item_107), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevInstDefns_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_326_326, 0) = ((MR_Box) (ItemInstDefnInfo_142));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_326_326, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_8));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
            STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
            STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
            STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
            STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
            STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
            STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
            STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
            STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefnInfo_143 = (MR_Word) (MR_body((MR_Word) (Item_107), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDefns_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_325_325, 0) = ((MR_Box) (ItemModeDefnInfo_143));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_325_325, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_10));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
            STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
            STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
            STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
            STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
            STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
            STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
            STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
            STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDeclInfo_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevPredDecls_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_321_321, 0) = ((MR_Box) (ItemPredDeclInfo_146));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_321_321, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_16));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDeclInfo_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_320_320, 0) = ((MR_Box) (ItemModeDeclInfo_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_320_320, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_18));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Lang_150 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_149, (MR_Integer) 0))) & (MR_Integer) 3);

                parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_150, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_327_327);
                {
                  STATE_VARIABLE_RevForeignEnums_317_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignEnums_317_317, 0) = ((MR_Box) (ItemForeignEnumInfo_149));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignEnums_317_317, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignEnums_0_22));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemFEEInfo_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevForeignExportEnums_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignExportEnums_315_315, 0) = ((MR_Box) (ItemFEEInfo_155));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignExportEnums_315_315, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignExportEnums_0_24));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromiseInfo_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_206, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_330_330);
                {
                  STATE_VARIABLE_RevPromises_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_284_284, 0) = ((MR_Box) (ItemPromiseInfo_206));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_284_284, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_30));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeclassInfo_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_324_324, 0) = ((MR_Box) (ItemTypeclassInfo_144));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_324_324, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_12));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_145, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_330_330);
                {
                  STATE_VARIABLE_RevInstances_323_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_323_323, 0) = ((MR_Box) (ItemInstanceInfo_145));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_323_323, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_14));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInitialiseInfo_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_280;
                MR_Box conv3_STATE_VARIABLE_Contents_327_327;

                Var_280 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[99]), Var_280, ((MR_Box) (STATE_VARIABLE_Contents_0_38)), &conv3_STATE_VARIABLE_Contents_327_327);
                STATE_VARIABLE_Contents_327_327 = ((MR_Word) (conv3_STATE_VARIABLE_Contents_327_327));
                {
                  STATE_VARIABLE_RevInitialises_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_282_282, 0) = ((MR_Box) (ItemInitialiseInfo_207));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_282_282, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_32));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemFinaliseInfo_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_276;
                MR_Box conv1_STATE_VARIABLE_Contents_327_327;

                Var_276 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[98]), Var_276, ((MR_Box) (STATE_VARIABLE_Contents_0_38)), &conv1_STATE_VARIABLE_Contents_327_327);
                STATE_VARIABLE_Contents_327_327 = ((MR_Word) (conv1_STATE_VARIABLE_Contents_327_327));
                {
                  STATE_VARIABLE_RevFinalises_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_278_278, 0) = ((MR_Box) (ItemFinaliseInfo_208));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_278_278, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_34));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_271;
                MR_Box conv5_STATE_VARIABLE_Contents_327_327;

                Var_271 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[100]), Var_271, ((MR_Box) (STATE_VARIABLE_Contents_0_38)), &conv5_STATE_VARIABLE_Contents_327_327);
                STATE_VARIABLE_Contents_327_327 = ((MR_Word) (conv5_STATE_VARIABLE_Contents_327_327));
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(ItemMutableInfo_209, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_330_330);
                {
                  STATE_VARIABLE_RevMutables_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_274_274, 0) = ((MR_Box) (ItemMutableInfo_209));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_274_274, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_36));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefnInfo_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word TypeDefn_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_130, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) TypeDefn_133)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_331_331, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_331_331, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                      STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DetailsSolver_138 = (MR_Word) (MR_body((MR_Word) (TypeDefn_133), (MR_Integer) 1));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_138, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_330_330);
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_331_331, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_331_331, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_331_331, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_331_331, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                      STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_133, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            STATE_VARIABLE_RevTypeDefnsAbs_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_332_332, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_332_332, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsAbs_0_2));
                          }
                          STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word DetailsForeign_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_133, (MR_Integer) 1))));

                          parse_tree__convert_parse_tree__accumulate_contents_foreign_type_3_p_0(DetailsForeign_141, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_327_327);
                          {
                            STATE_VARIABLE_RevTypeDefnsForeign_328_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_328_328, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_328_328, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsForeign_0_6));
                          }
                          STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                          STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_314_314, 0) = ((MR_Box) (ItemDeclPragma_156));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_314_314, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_26));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word ImplPragma_158;

                {
                  STATE_VARIABLE_RevImplPragmas_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_302_302, 0) = ((MR_Box) (ItemImplPragma_157));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_302_302, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_28));
                }
                ImplPragma_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_157, (MR_Integer) 0))));
                switch (MR_tag((MR_Word) ImplPragma_158)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_163 = (MR_Word) ((MR_Word) (ImplPragma_158));
                      MR_Word LiteralOrInclude_456 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_163, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Contents_312_462;
                      MR_Word Lang_463 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_163, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                      if (((MR_tag((MR_Word) LiteralOrInclude_456)) == (MR_Integer) 1))
                      {
                        MR_String FileName_429 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_456, (MR_Integer) 0))));
                        MR_Word InclFile_430;
                        MR_Word FIFOs0_431;
                        MR_Word FIFOs_432;
                        MR_Word Var_422;
                        MR_Word Var_423;
                        MR_Word Var_424;

                        {
                          InclFile_430 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_430, 0) = (MR_Box) ((MR_Unsigned) (Lang_463));
                          MR_hl_field(MR_mktag(0), InclFile_430, 1) = ((MR_Box) (FileName_429));
                        }
                        FIFOs0_431 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 0))));
                        FIFOs_432 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), FIFOs0_431, ((MR_Box) (InclFile_430)));
                        Var_422 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 1))));
                        Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 2))));
                        Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 3))));
                        {
                          STATE_VARIABLE_Contents_312_462 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_462, 0) = ((MR_Box) (FIFOs_432));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_462, 1) = ((MR_Box) (Var_422));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_462, 2) = ((MR_Box) (Var_423));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_462, 3) = ((MR_Box) (Var_424));
                        }
                      }
                      else
                        STATE_VARIABLE_Contents_312_462 = STATE_VARIABLE_Contents_0_38;
                      parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_463, STATE_VARIABLE_Contents_312_462, &STATE_VARIABLE_Contents_327_327);
                      STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FCInfo_161 = (MR_Word) (MR_body((MR_Word) (ImplPragma_158), (MR_Integer) 1));
                      MR_Word LiteralOrInclude_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_161, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Contents_312_312;
                      MR_Word Lang_354 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_161, (MR_Integer) 0))) & (MR_Integer) 3);

                      if (((MR_tag((MR_Word) LiteralOrInclude_162)) == (MR_Integer) 1))
                      {
                        MR_String FileName_166 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_162, (MR_Integer) 0))));
                        MR_Word InclFile_167;
                        MR_Word FIFOs0_168;
                        MR_Word FIFOs_169;
                        MR_Word Var_365;
                        MR_Word Var_366;
                        MR_Word Var_367;

                        {
                          InclFile_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_167, 0) = (MR_Box) ((MR_Unsigned) (Lang_354));
                          MR_hl_field(MR_mktag(0), InclFile_167, 1) = ((MR_Box) (FileName_166));
                        }
                        FIFOs0_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 0))));
                        FIFOs_169 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), FIFOs0_168, ((MR_Box) (InclFile_167)));
                        Var_365 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 1))));
                        Var_366 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 2))));
                        Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 3))));
                        {
                          STATE_VARIABLE_Contents_312_312 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_312, 0) = ((MR_Box) (FIFOs_169));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_312, 1) = ((MR_Box) (Var_365));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_312, 2) = ((MR_Box) (Var_366));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_312_312, 3) = ((MR_Box) (Var_367));
                        }
                      }
                      else
                        STATE_VARIABLE_Contents_312_312 = STATE_VARIABLE_Contents_0_38;
                      parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_354, STATE_VARIABLE_Contents_312_312, &STATE_VARIABLE_Contents_327_327);
                      STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPInfo_174 = (MR_Word) (MR_body((MR_Word) (ImplPragma_158), (MR_Integer) 2));
                      MR_Word Attrs_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_174, (MR_Integer) 0))));
                      MR_Word Var_308;

                      Var_308 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_175);
                      parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Var_308, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_327_327);
                      STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word FPEInfo_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 1))));
                          MR_Word STATE_VARIABLE_Contents_310_310;
                          MR_Word Lang_355 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_170, (MR_Integer) 1))) & (MR_Integer) 3);

                          parse_tree__convert_parse_tree__accumulate_foreign_export_lang_3_p_0(Lang_355, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_310_310);
                          parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_355, STATE_VARIABLE_Contents_310_310, &STATE_VARIABLE_Contents_327_327);
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word FactTableInfo_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 1))));
                          MR_Word FactTables0_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 1))));
                          MR_Word FactTables_185;
                          MR_String FileName_356 = ((MR_String) ((MR_hl_field(MR_mktag(0), FactTableInfo_182, (MR_Integer) 1))));
                          MR_Word Var_371;
                          MR_Word Var_373;
                          MR_Word Var_374;

                          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FileName_356)), FactTables0_184, &FactTables_185);
                          Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 0))));
                          Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 2))));
                          Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 3))));
                          {
                            STATE_VARIABLE_Contents_327_327 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_327_327, 0) = ((MR_Box) (Var_371));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_327_327, 1) = ((MR_Box) (FactTables_185));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_327_327, 2) = ((MR_Box) (Var_373));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_327_327, 3) = ((MR_Box) (Var_374));
                          }
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word TableInfo_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_186, (MR_Integer) 2))));
                          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_303_303;
                          MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_40, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitAvailNeeds_303_303 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_303_303, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_189 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_303_303;
                          else
                          {
                            MR_Word Attributes_190 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_189, (MR_Integer) 0))));
                            MR_Word StatsAttr_191 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_190, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);

                            switch (StatsAttr_191) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_303_303;
                                break;
                              case (MR_Integer) 0:
                                {
                                  STATE_VARIABLE_ImplicitAvailNeeds_330_330 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_330_330, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Specs_301_301 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Pieces_204;
                MR_Word Spec_205;
                MR_Word Var_289;
                MR_Word Var_290;
                MR_Word Var_300;

                Var_290 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_107);
                Var_289 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_290, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[117])), Var_289);
                Var_300 = parse_tree__prog_item__get_item_context_1_f_0(Item_107);
                {
                  Spec_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_205, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/43"));
                  MR_hl_field(MR_mktag(1), Spec_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_205, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_205, 3) = ((MR_Box) (Var_300));
                  MR_hl_field(MR_mktag(1), Spec_205, 4) = ((MR_Box) (Pieces_204));
                }
                {
                  STATE_VARIABLE_Specs_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_301_301, 0) = ((MR_Box) (Spec_205));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_301_301, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepnInfo_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_257;
                MR_Word Var_258;
                MR_Word Var_268;
                MR_Word Pieces_359;
                MR_Word Spec_360;

                Var_258 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_107);
                Var_257 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_258, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_359 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[117])), Var_257);
                Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_210, (MR_Integer) 4))));
                {
                  Spec_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_360, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/43"));
                  MR_hl_field(MR_mktag(1), Spec_360, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_360, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_360, 3) = ((MR_Box) (Var_268));
                  MR_hl_field(MR_mktag(1), Spec_360, 4) = ((MR_Box) (Pieces_359));
                }
                {
                  STATE_VARIABLE_Specs_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_301_301, 0) = ((MR_Box) (Spec_360));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_301_301, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_332_332 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_331_331 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_328_328 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_326_326 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_325_325 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_324_324 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_323_323 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_321_321 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_320_320 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_319_319 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_317_317 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_315_315 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_314_314 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_302_302 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_284_284 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_282_282 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_278_278 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_274_274 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_327_327 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_330_330 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_108;
      next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2 = STATE_VARIABLE_RevTypeDefnsAbs_332_332;
      next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4 = STATE_VARIABLE_RevTypeDefnsMer_331_331;
      next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6 = STATE_VARIABLE_RevTypeDefnsForeign_328_328;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_8 = STATE_VARIABLE_RevInstDefns_326_326;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_10 = STATE_VARIABLE_RevModeDefns_325_325;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_12 = STATE_VARIABLE_RevTypeClasses_324_324;
      next_value_of_STATE_VARIABLE_RevInstances_0_14 = STATE_VARIABLE_RevInstances_323_323;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_16 = STATE_VARIABLE_RevPredDecls_321_321;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_18 = STATE_VARIABLE_RevModeDecls_320_320;
      next_value_of_STATE_VARIABLE_RevClauses_0_20 = STATE_VARIABLE_RevClauses_319_319;
      next_value_of_STATE_VARIABLE_RevForeignEnums_0_22 = STATE_VARIABLE_RevForeignEnums_317_317;
      next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_24 = STATE_VARIABLE_RevForeignExportEnums_315_315;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_26 = STATE_VARIABLE_RevDeclPragmas_314_314;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_28 = STATE_VARIABLE_RevImplPragmas_302_302;
      next_value_of_STATE_VARIABLE_RevPromises_0_30 = STATE_VARIABLE_RevPromises_284_284;
      next_value_of_STATE_VARIABLE_RevInitialises_0_32 = STATE_VARIABLE_RevInitialises_282_282;
      next_value_of_STATE_VARIABLE_RevFinalises_0_34 = STATE_VARIABLE_RevFinalises_278_278;
      next_value_of_STATE_VARIABLE_RevMutables_0_36 = STATE_VARIABLE_RevMutables_274_274;
      next_value_of_STATE_VARIABLE_Contents_0_38 = STATE_VARIABLE_Contents_327_327;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40 = STATE_VARIABLE_ImplicitAvailNeeds_330_330;
      next_value_of_STATE_VARIABLE_Specs_0_42 = STATE_VARIABLE_Specs_301_301;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTypeDefnsAbs_0_2 = next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2;
      STATE_VARIABLE_RevTypeDefnsMer_0_4 = next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4;
      STATE_VARIABLE_RevTypeDefnsForeign_0_6 = next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6;
      STATE_VARIABLE_RevInstDefns_0_8 = next_value_of_STATE_VARIABLE_RevInstDefns_0_8;
      STATE_VARIABLE_RevModeDefns_0_10 = next_value_of_STATE_VARIABLE_RevModeDefns_0_10;
      STATE_VARIABLE_RevTypeClasses_0_12 = next_value_of_STATE_VARIABLE_RevTypeClasses_0_12;
      STATE_VARIABLE_RevInstances_0_14 = next_value_of_STATE_VARIABLE_RevInstances_0_14;
      STATE_VARIABLE_RevPredDecls_0_16 = next_value_of_STATE_VARIABLE_RevPredDecls_0_16;
      STATE_VARIABLE_RevModeDecls_0_18 = next_value_of_STATE_VARIABLE_RevModeDecls_0_18;
      STATE_VARIABLE_RevClauses_0_20 = next_value_of_STATE_VARIABLE_RevClauses_0_20;
      STATE_VARIABLE_RevForeignEnums_0_22 = next_value_of_STATE_VARIABLE_RevForeignEnums_0_22;
      STATE_VARIABLE_RevForeignExportEnums_0_24 = next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_24;
      STATE_VARIABLE_RevDeclPragmas_0_26 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_26;
      STATE_VARIABLE_RevImplPragmas_0_28 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_28;
      STATE_VARIABLE_RevPromises_0_30 = next_value_of_STATE_VARIABLE_RevPromises_0_30;
      STATE_VARIABLE_RevInitialises_0_32 = next_value_of_STATE_VARIABLE_RevInitialises_0_32;
      STATE_VARIABLE_RevFinalises_0_34 = next_value_of_STATE_VARIABLE_RevFinalises_0_34;
      STATE_VARIABLE_RevMutables_0_36 = next_value_of_STATE_VARIABLE_RevMutables_0_36;
      STATE_VARIABLE_Contents_0_38 = next_value_of_STATE_VARIABLE_Contents_0_38;
      STATE_VARIABLE_ImplicitAvailNeeds_0_40 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40;
      STATE_VARIABLE_Specs_0_42 = next_value_of_STATE_VARIABLE_Specs_0_42;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_foreign_export_lang_3_p_0(
  MR_Word Lang_4,
  MR_Word STATE_VARIABLE_Contents_0_8,
  MR_Word * STATE_VARIABLE_Contents_9)
{
  {
    MR_Word FELangs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 3))));
    MR_Word FELangs_7;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_4)), FELangs0_6, &FELangs_7);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FELangs_7));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(
  MR_Word Lang_4,
  MR_Word STATE_VARIABLE_Contents_0_8,
  MR_Word * STATE_VARIABLE_Contents_9)
{
  {
    MR_Word Langs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 2))));
    MR_Word Langs_7;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_4)), Langs0_6, &Langs_7);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 1))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Langs_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTypeDefnsAbs_0_2,
  MR_Word * STATE_VARIABLE_RevTypeDefnsAbs_3,
  MR_Word STATE_VARIABLE_RevTypeDefnsMer_0_4,
  MR_Word * STATE_VARIABLE_RevTypeDefnsMer_5,
  MR_Word STATE_VARIABLE_RevTypeDefnsForeign_0_6,
  MR_Word * STATE_VARIABLE_RevTypeDefnsForeign_7,
  MR_Word STATE_VARIABLE_RevInstDefns_0_8,
  MR_Word * STATE_VARIABLE_RevInstDefns_9,
  MR_Word STATE_VARIABLE_RevModeDefns_0_10,
  MR_Word * STATE_VARIABLE_RevModeDefns_11,
  MR_Word STATE_VARIABLE_RevTypeClasses_0_12,
  MR_Word * STATE_VARIABLE_RevTypeClasses_13,
  MR_Word STATE_VARIABLE_RevInstances_0_14,
  MR_Word * STATE_VARIABLE_RevInstances_15,
  MR_Word STATE_VARIABLE_RevPredDecls_0_16,
  MR_Word * STATE_VARIABLE_RevPredDecls_17,
  MR_Word STATE_VARIABLE_RevModeDecls_0_18,
  MR_Word * STATE_VARIABLE_RevModeDecls_19,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_20,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_21,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevImplPragmas_23,
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
  MR_Word STATE_VARIABLE_Contents_0_34,
  MR_Word * STATE_VARIABLE_Contents_35,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_36,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_37,
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
      *STATE_VARIABLE_ImplicitAvailNeeds_37 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
      *STATE_VARIABLE_Contents_35 = STATE_VARIABLE_Contents_0_34;
      *STATE_VARIABLE_RevMutables_33 = STATE_VARIABLE_RevMutables_0_32;
      *STATE_VARIABLE_RevFinalises_31 = STATE_VARIABLE_RevFinalises_0_30;
      *STATE_VARIABLE_RevInitialises_29 = STATE_VARIABLE_RevInitialises_0_28;
      *STATE_VARIABLE_RevPromises_27 = STATE_VARIABLE_RevPromises_0_26;
      *STATE_VARIABLE_BadClausePreds_25 = STATE_VARIABLE_BadClausePreds_0_24;
      *STATE_VARIABLE_RevImplPragmas_23 = STATE_VARIABLE_RevImplPragmas_0_22;
      *STATE_VARIABLE_RevDeclPragmas_21 = STATE_VARIABLE_RevDeclPragmas_0_20;
      *STATE_VARIABLE_RevModeDecls_19 = STATE_VARIABLE_RevModeDecls_0_18;
      *STATE_VARIABLE_RevPredDecls_17 = STATE_VARIABLE_RevPredDecls_0_16;
      *STATE_VARIABLE_RevInstances_15 = STATE_VARIABLE_RevInstances_0_14;
      *STATE_VARIABLE_RevTypeClasses_13 = STATE_VARIABLE_RevTypeClasses_0_12;
      *STATE_VARIABLE_RevModeDefns_11 = STATE_VARIABLE_RevModeDefns_0_10;
      *STATE_VARIABLE_RevInstDefns_9 = STATE_VARIABLE_RevInstDefns_0_8;
      *STATE_VARIABLE_RevTypeDefnsForeign_7 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
      *STATE_VARIABLE_RevTypeDefnsMer_5 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
      *STATE_VARIABLE_RevTypeDefnsAbs_3 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
    }
    else
    {
      MR_Word Item_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMutables_244_244;
      MR_Word STATE_VARIABLE_RevFinalises_248_248;
      MR_Word STATE_VARIABLE_RevInitialises_252_252;
      MR_Word STATE_VARIABLE_RevPromises_257_257;
      MR_Word STATE_VARIABLE_RevImplPragmas_278_278;
      MR_Word STATE_VARIABLE_RevDeclPragmas_282_282;
      MR_Word STATE_VARIABLE_Specs_286_286;
      MR_Word STATE_VARIABLE_BadClausePreds_293_293;
      MR_Word STATE_VARIABLE_RevModeDecls_294_294;
      MR_Word STATE_VARIABLE_RevPredDecls_295_295;
      MR_Word STATE_VARIABLE_RevInstances_297_297;
      MR_Word STATE_VARIABLE_RevTypeClasses_298_298;
      MR_Word STATE_VARIABLE_RevModeDefns_299_299;
      MR_Word STATE_VARIABLE_RevInstDefns_300_300;
      MR_Word STATE_VARIABLE_Contents_301_301;
      MR_Word STATE_VARIABLE_RevTypeDefnsForeign_302_302;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_304_304;
      MR_Word STATE_VARIABLE_RevTypeDefnsMer_305_305;
      MR_Word STATE_VARIABLE_RevTypeDefnsAbs_306_306;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevInstDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDefns_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeClasses_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevInstances_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_22;
      MR_Word next_value_of_STATE_VARIABLE_BadClausePreds_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevPromises_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevInitialises_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevFinalises_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_32;
      MR_Word next_value_of_STATE_VARIABLE_Contents_0_34;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_36;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_38;

      switch (MR_tag((MR_Word) Item_97)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_136 = (MR_Word) ((MR_Word) (Item_97));
            MR_Word PredOrFunc_137 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_136, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredSymName_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_136, (MR_Integer) 1))));
            MR_Word ArgTerms_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_136, (MR_Integer) 2))));
            MR_Word Context_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_136, (MR_Integer) 5))));
            MR_Integer Arity_144;
            MR_Word UnqualPredSymName_145;
            MR_String PredName_146;
            MR_String Var_283;
            MR_Word Var_284;
            MR_Word Var_285;
            MR_Word Var_289;
            MR_Word Var_290;
            MR_Word Var_292;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[34]), ArgTerms_139, &Arity_144);
            Var_283 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_138);
            {
              UnqualPredSymName_145 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), UnqualPredSymName_145, 0) = ((MR_Box) (Var_283));
            }
            {
              Var_284 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_284, 0) = ((MR_Box) (UnqualPredSymName_145));
              MR_hl_field(MR_mktag(0), Var_284, 1) = ((MR_Box) (Arity_144));
            }
            PredName_146 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_2_f_0(PredOrFunc_137, Var_284);
            {
              Var_290 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_290, 0) = ((MR_Box) (PredName_146));
            }
            {
              Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_289, 0) = ((MR_Box) (Var_290));
              MR_hl_field(MR_mktag(1), Var_289, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[115])));
              MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) (Var_289));
            }
            parse_tree__convert_parse_tree__error_is_exported_4_p_0(Context_142, Var_285, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
            {
              Var_292 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_292, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_137));
              MR_hl_field(MR_mktag(0), Var_292, 1) = ((MR_Box) (PredSymName_138));
              MR_hl_field(MR_mktag(0), Var_292, 2) = ((MR_Box) (Arity_144));
            }
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), ((MR_Box) (Var_292)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_293_293);
            STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
            STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
            STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
            STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefnInfo_130 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevInstDefns_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_300_300, 0) = ((MR_Box) (ItemInstDefnInfo_130));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_300_300, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_8));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
            STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
            STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
            STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
            STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
            STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefnInfo_131 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDefns_299_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_299_299, 0) = ((MR_Box) (ItemModeDefnInfo_131));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_299_299, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_10));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
            STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
            STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
            STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
            STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
            STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDeclInfo_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevPredDecls_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_295_295, 0) = ((MR_Box) (ItemPredDeclInfo_134));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_295_295, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_16));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDeclInfo_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_294_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_294_294, 0) = ((MR_Box) (ItemModeDeclInfo_135));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_294_294, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_18));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word Var_253;
                MR_Word Var_254;

                Var_253 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                Var_254 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_253, Var_254, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromiseInfo_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_179, STATE_VARIABLE_ImplicitAvailNeeds_0_36, &STATE_VARIABLE_ImplicitAvailNeeds_304_304);
                {
                  STATE_VARIABLE_RevPromises_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_257_257, 0) = ((MR_Box) (ItemPromiseInfo_179));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_257_257, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_26));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeclassInfo_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_298_298, 0) = ((MR_Box) (ItemTypeclassInfo_132));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_298_298, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_12));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_133, STATE_VARIABLE_ImplicitAvailNeeds_0_36, &STATE_VARIABLE_ImplicitAvailNeeds_304_304);
                {
                  STATE_VARIABLE_RevInstances_297_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_297_297, 0) = ((MR_Box) (ItemInstanceInfo_133));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_297_297, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_14));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInitialiseInfo_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Var_249;
                MR_Word Var_250;

                Var_249 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                Var_250 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_249, Var_250, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevInitialises_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_252_252, 0) = ((MR_Box) (ItemInitialiseInfo_182));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_252_252, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_28));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemFinaliseInfo_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Var_245;
                MR_Word Var_246;

                Var_245 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                Var_246 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_245, Var_246, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevFinalises_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_248_248, 0) = ((MR_Box) (ItemFinaliseInfo_183));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_248_248, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_30));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Var_241;
                MR_Word Var_242;

                Var_241 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                Var_242 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_241, Var_242, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevMutables_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_244_244, 0) = ((MR_Box) (ItemMutableInfo_184));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_244_244, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_32));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefnInfo_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word TypeDefn_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_118, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) TypeDefn_121)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_305_305, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_305_305, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                      STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DetailsSolver_126 = (MR_Word) (MR_body((MR_Word) (TypeDefn_121), (MR_Integer) 1));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_126, STATE_VARIABLE_ImplicitAvailNeeds_0_36, &STATE_VARIABLE_ImplicitAvailNeeds_304_304);
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_305_305, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_305_305, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_305_305, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_305_305, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                      STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_121, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            STATE_VARIABLE_RevTypeDefnsAbs_306_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_306_306, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_306_306, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsAbs_0_2));
                          }
                          STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                          STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                          STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word DetailsForeign_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_121, (MR_Integer) 1))));

                          parse_tree__convert_parse_tree__accumulate_contents_foreign_type_3_p_0(DetailsForeign_129, STATE_VARIABLE_Contents_0_34, &STATE_VARIABLE_Contents_301_301);
                          {
                            STATE_VARIABLE_RevTypeDefnsForeign_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_302_302, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_302_302, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsForeign_0_6));
                          }
                          STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                          STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_282_282, 0) = ((MR_Box) (ItemDeclPragma_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_282_282, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_20));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word ImplPragma_149;
                MR_Word Var_275;
                MR_Word Var_276;

                Var_275 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                Var_276 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_275, Var_276, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevImplPragmas_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_278_278, 0) = ((MR_Box) (ItemImplPragma_148));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_278_278, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_22));
                }
                ImplPragma_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_148, (MR_Integer) 0))));
                switch (MR_tag((MR_Word) ImplPragma_149)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ForeignProcInfo_151 = (MR_Word) (MR_body((MR_Word) (ImplPragma_149), (MR_Integer) 2));
                      MR_Word Vars_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_151, (MR_Integer) 3))));
                      MR_Word SymName_347 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_151, (MR_Integer) 1))));
                      MR_Word Var_348;
                      MR_Word PredOrFunc_349 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_151, (MR_Integer) 2))) & (MR_Integer) 1);
                      MR_Integer Arity_350;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars_154, &Arity_350);
                      {
                        Var_348 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_348, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_349));
                        MR_hl_field(MR_mktag(0), Var_348, 1) = ((MR_Box) (SymName_347));
                        MR_hl_field(MR_mktag(0), Var_348, 2) = ((MR_Box) (Arity_350));
                      }
                      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), ((MR_Box) (Var_348)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_293_293);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_149, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word SymName_153;
                          MR_Word ExternalProcInfo_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_149, (MR_Integer) 1))));
                          MR_Word PFNameArity_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalProcInfo_158, (MR_Integer) 0))));
                          MR_Word Var_279;
                          MR_Word Var_280;
                          MR_Word PredOrFunc_327 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFNameArity_159, (MR_Integer) 0))) & (MR_Integer) 1);
                          MR_Integer Arity_328;

                          SymName_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFNameArity_159, (MR_Integer) 1))));
                          Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFNameArity_159, (MR_Integer) 2))));
                          Arity_328 = (MR_Integer) (Var_279);
                          {
                            Var_280 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_280, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_327));
                            MR_hl_field(MR_mktag(0), Var_280, 1) = ((MR_Box) (SymName_153));
                            MR_hl_field(MR_mktag(0), Var_280, 2) = ((MR_Box) (Arity_328));
                          }
                          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), ((MR_Box) (Var_280)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_293_293);
                        }
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 3:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 6:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 7:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 8:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 9:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 10:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 11:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 12:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 13:
                        STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Pieces_177;
                MR_Word Spec_178;
                MR_Word Var_262;
                MR_Word Var_263;
                MR_Word Var_273;

                Var_263 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                Var_262 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_263, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[117])), Var_262);
                Var_273 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                {
                  Spec_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_178, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
                  MR_hl_field(MR_mktag(1), Spec_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_178, 3) = ((MR_Box) (Var_273));
                  MR_hl_field(MR_mktag(1), Spec_178, 4) = ((MR_Box) (Pieces_177));
                }
                {
                  STATE_VARIABLE_Specs_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_286_286, 0) = ((MR_Box) (Spec_178));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_286_286, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepnInfo_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Var_228;
                MR_Word Var_229;
                MR_Word Var_239;
                MR_Word Pieces_334;
                MR_Word Spec_335;

                Var_229 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                Var_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_229, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_334 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[117])), Var_228);
                Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_185, (MR_Integer) 4))));
                {
                  Spec_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_335, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
                  MR_hl_field(MR_mktag(1), Spec_335, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_335, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_335, 3) = ((MR_Box) (Var_239));
                  MR_hl_field(MR_mktag(1), Spec_335, 4) = ((MR_Box) (Pieces_334));
                }
                {
                  STATE_VARIABLE_Specs_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_286_286, 0) = ((MR_Box) (Spec_335));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_286_286, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_306_306 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_305_305 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_302_302 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_300_300 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_299_299 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_298_298 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_297_297 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_295_295 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_294_294 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_282_282 = STATE_VARIABLE_RevDeclPragmas_0_20;
                STATE_VARIABLE_RevImplPragmas_278_278 = STATE_VARIABLE_RevImplPragmas_0_22;
                STATE_VARIABLE_BadClausePreds_293_293 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_257_257 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_252_252 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_248_248 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_244_244 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Contents_301_301 = STATE_VARIABLE_Contents_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_304_304 = STATE_VARIABLE_ImplicitAvailNeeds_0_36;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_98;
      next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2 = STATE_VARIABLE_RevTypeDefnsAbs_306_306;
      next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4 = STATE_VARIABLE_RevTypeDefnsMer_305_305;
      next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6 = STATE_VARIABLE_RevTypeDefnsForeign_302_302;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_8 = STATE_VARIABLE_RevInstDefns_300_300;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_10 = STATE_VARIABLE_RevModeDefns_299_299;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_12 = STATE_VARIABLE_RevTypeClasses_298_298;
      next_value_of_STATE_VARIABLE_RevInstances_0_14 = STATE_VARIABLE_RevInstances_297_297;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_16 = STATE_VARIABLE_RevPredDecls_295_295;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_18 = STATE_VARIABLE_RevModeDecls_294_294;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_20 = STATE_VARIABLE_RevDeclPragmas_282_282;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_22 = STATE_VARIABLE_RevImplPragmas_278_278;
      next_value_of_STATE_VARIABLE_BadClausePreds_0_24 = STATE_VARIABLE_BadClausePreds_293_293;
      next_value_of_STATE_VARIABLE_RevPromises_0_26 = STATE_VARIABLE_RevPromises_257_257;
      next_value_of_STATE_VARIABLE_RevInitialises_0_28 = STATE_VARIABLE_RevInitialises_252_252;
      next_value_of_STATE_VARIABLE_RevFinalises_0_30 = STATE_VARIABLE_RevFinalises_248_248;
      next_value_of_STATE_VARIABLE_RevMutables_0_32 = STATE_VARIABLE_RevMutables_244_244;
      next_value_of_STATE_VARIABLE_Contents_0_34 = STATE_VARIABLE_Contents_301_301;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_36 = STATE_VARIABLE_ImplicitAvailNeeds_304_304;
      next_value_of_STATE_VARIABLE_Specs_0_38 = STATE_VARIABLE_Specs_286_286;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTypeDefnsAbs_0_2 = next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2;
      STATE_VARIABLE_RevTypeDefnsMer_0_4 = next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4;
      STATE_VARIABLE_RevTypeDefnsForeign_0_6 = next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6;
      STATE_VARIABLE_RevInstDefns_0_8 = next_value_of_STATE_VARIABLE_RevInstDefns_0_8;
      STATE_VARIABLE_RevModeDefns_0_10 = next_value_of_STATE_VARIABLE_RevModeDefns_0_10;
      STATE_VARIABLE_RevTypeClasses_0_12 = next_value_of_STATE_VARIABLE_RevTypeClasses_0_12;
      STATE_VARIABLE_RevInstances_0_14 = next_value_of_STATE_VARIABLE_RevInstances_0_14;
      STATE_VARIABLE_RevPredDecls_0_16 = next_value_of_STATE_VARIABLE_RevPredDecls_0_16;
      STATE_VARIABLE_RevModeDecls_0_18 = next_value_of_STATE_VARIABLE_RevModeDecls_0_18;
      STATE_VARIABLE_RevDeclPragmas_0_20 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_20;
      STATE_VARIABLE_RevImplPragmas_0_22 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_22;
      STATE_VARIABLE_BadClausePreds_0_24 = next_value_of_STATE_VARIABLE_BadClausePreds_0_24;
      STATE_VARIABLE_RevPromises_0_26 = next_value_of_STATE_VARIABLE_RevPromises_0_26;
      STATE_VARIABLE_RevInitialises_0_28 = next_value_of_STATE_VARIABLE_RevInitialises_0_28;
      STATE_VARIABLE_RevFinalises_0_30 = next_value_of_STATE_VARIABLE_RevFinalises_0_30;
      STATE_VARIABLE_RevMutables_0_32 = next_value_of_STATE_VARIABLE_RevMutables_0_32;
      STATE_VARIABLE_Contents_0_34 = next_value_of_STATE_VARIABLE_Contents_0_34;
      STATE_VARIABLE_ImplicitAvailNeeds_0_36 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_36;
      STATE_VARIABLE_Specs_0_38 = next_value_of_STATE_VARIABLE_Specs_0_38;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__error_is_exported_4_p_0(
  MR_Word Context_5,
  MR_Word DescPieces_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Pieces_8;
    MR_Word Spec_9;
    MR_Word Var_16;

    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[121])));
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[119])), Var_16);
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (Pieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromiseInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_4, (MR_Integer) 1))));

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0(
  MR_Word ItemInstanceInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17)
{
  {
    MR_Word InstanceBody_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_4, (MR_Integer) 4))));

    if ((InstanceBody_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitAvailNeeds_17 = STATE_VARIABLE_ImplicitAvailNeeds_0_16;
    else
    {
      MR_Word InstanceMethods_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_10, (MR_Integer) 0))));
      MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_17;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[97]), InstanceMethods_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_16)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_17);
      *STATE_VARIABLE_ImplicitAvailNeeds_17 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_17));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_contents_foreign_type_3_p_0(
  MR_Word DetailsForeign_4,
  MR_Word STATE_VARIABLE_Contents_0_9,
  MR_Word * STATE_VARIABLE_Contents_10)
{
  {
    MR_Word ForeignType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_4, (MR_Integer) 0))));
    MR_Word Var_11;
    MR_Word Langs0_17;
    MR_Word Langs_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;

    Var_11 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_6);
    Langs0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 2))));
    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_11)), Langs0_17, &Langs_18);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Langs_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(
  MR_Word DetailsSolver_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  {
    MR_Word SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_4, (MR_Integer) 0))));
    MR_Word MutableItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_6, (MR_Integer) 3))));
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_13;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[96]), MutableItems_11, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(
  MR_Word IntInstances0_4,
  MR_Word * IntInstances_5,
  MR_Word * ImpInstances_6)
{
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
      MR_Word IntInstance_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word IntInstances_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Body_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_IntInstanceCord_25_25;
      MR_Word STATE_VARIABLE_ImpInstanceCord_26_26;
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 0))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 2))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 3))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 5))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 6))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 7))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 8))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInstanceCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4;

      if ((Body_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (IntInstance_12)), STATE_VARIABLE_IntInstanceCord_0_2, &STATE_VARIABLE_IntInstanceCord_25_25);
        STATE_VARIABLE_ImpInstanceCord_26_26 = STATE_VARIABLE_ImpInstanceCord_0_4;
      }
      else
      {
        MR_Word AbstractIntInstance_18;

        {
          AbstractIntInstance_18 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 1) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 2) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 3) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 5) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 6) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 7) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(0), AbstractIntInstance_18, 8) = ((MR_Box) (Var_36));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractIntInstance_18)), STATE_VARIABLE_IntInstanceCord_0_2, &STATE_VARIABLE_IntInstanceCord_25_25);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (IntInstance_12)), STATE_VARIABLE_ImpInstanceCord_0_4, &STATE_VARIABLE_ImpInstanceCord_26_26);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = IntInstances_13;
      next_value_of_STATE_VARIABLE_IntInstanceCord_0_2 = STATE_VARIABLE_IntInstanceCord_25_25;
      next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4 = STATE_VARIABLE_ImpInstanceCord_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInstanceCord_0_2 = next_value_of_STATE_VARIABLE_IntInstanceCord_0_2;
      STATE_VARIABLE_ImpInstanceCord_0_4 = next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv38_HeadVar__2_2;

    conv38_HeadVar__2_2 = parse_tree__item_util__wrap_mutable_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv38_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv37_HeadVar__2_2;

    conv37_HeadVar__2_2 = parse_tree__item_util__wrap_finalise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv37_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv36_HeadVar__2_2;

    conv36_HeadVar__2_2 = parse_tree__item_util__wrap_initialise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv36_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv35_HeadVar__2_2;

    conv35_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv35_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv34_HeadVar__2_2;

    conv34_HeadVar__2_2 = parse_tree__item_util__wrap_impl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv34_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv33_HeadVar__2_2;

    conv33_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv33_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv32_HeadVar__2_2;

    conv32_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_export_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv32_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv31_HeadVar__2_2;

    conv31_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv31_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv30_HeadVar__2_2;

    conv30_HeadVar__2_2 = parse_tree__item_util__wrap_clause_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv30_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv29_HeadVar__2_2;

    conv29_HeadVar__2_2 = parse_tree__item_util__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv29_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv28_HeadVar__2_2;

    conv28_HeadVar__2_2 = parse_tree__item_util__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv27_HeadVar__2_2;

    conv27_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv27_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv26_HeadVar__2_2;

    conv26_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv26_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv25_HeadVar__2_2;

    conv25_HeadVar__2_2 = parse_tree__item_util__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv25_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv24_HeadVar__2_2;

    conv24_HeadVar__2_2 = parse_tree__item_util__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv24_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv23_HeadVar__2_2;

    conv23_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv23_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv22_HeadVar__2_2;

    conv22_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv22_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv21_HeadVar__2_2;

    conv21_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv21_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_HeadVar__2_2;

    conv20_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__2_2;

    conv19_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_HeadVar__2_2;

    conv18_HeadVar__2_2 = parse_tree__item_util__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__2_2;

    conv17_HeadVar__2_2 = parse_tree__item_util__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv16_HeadVar__2_2;

    conv16_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv16_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv15_HeadVar__2_2;

    conv15_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__2_2;

    conv14_HeadVar__2_2 = parse_tree__item_util__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv13_HeadVar__2_2;

    conv13_HeadVar__2_2 = parse_tree__item_util__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_2;

    conv12_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__2_2;

    conv11_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2;

    conv10_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__3_3;

    conv7_HeadVar__3_3 = parse_tree__item_util__fim_module_lang_to_spec_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__5_5;

    parse_tree__item_util__acc_avails_with_contexts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5);
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    parse_tree__item_util__acc_avails_with_contexts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * RawCompUnit_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 1))));
    MR_Word InclMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 4))));
    MR_Word IntImportMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 5))));
    MR_Word IntUseMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 6))));
    MR_Word ImpImportMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 7))));
    MR_Word ImpUseMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 8))));
    MR_Word IntFIMSpecMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 15))));
    MR_Word IntInstDefns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 16))));
    MR_Word IntModeDefns_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 17))));
    MR_Word IntTypeClasses_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 18))));
    MR_Word IntInstances_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 19))));
    MR_Word IntPredDecls_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 20))));
    MR_Word IntModeDecls_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 21))));
    MR_Word IntDeclPragmas_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 22))));
    MR_Word IntPromises_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 23))));
    MR_Word ImpTypeDefnsAbs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 25))));
    MR_Word ImpTypeDefnsMer_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsForeign_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 27))));
    MR_Word ImpInstDefns_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 28))));
    MR_Word ImpModeDefns_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 29))));
    MR_Word ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 30))));
    MR_Word ImpInstances_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 31))));
    MR_Word ImpPredDecls_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 32))));
    MR_Word ImpModeDecls_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 33))));
    MR_Word ImpClauses_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 34))));
    MR_Word ImpForeignEnums_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 35))));
    MR_Word ImpForeignExportEnums_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 36))));
    MR_Word ImpDeclPragmas_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 37))));
    MR_Word ImpImplPragmas_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 38))));
    MR_Word ImpPromises_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 39))));
    MR_Word ImpInitialises_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 40))));
    MR_Word ImpFinalises_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 41))));
    MR_Word ImpMutables_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 42))));
    MR_Word IntIncls_48;
    MR_Word ImpIncls_49;
    MR_Word IntAvails0_50;
    MR_Word IntAvails1_51;
    MR_Word ImpAvails0_52;
    MR_Word ImpAvails1_53;
    MR_Word IntAvails_54;
    MR_Word ImpAvails_55;
    MR_Word IntFIMs_56;
    MR_Word ImpFIMs_60;
    MR_Word IntItems_61;
    MR_Word ImpItems_62;
    MR_Word SrcItemBlocks0_63;
    MR_Word SrcItemBlocks_64;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_164;
    MR_Box conv1_IntAvails0_50;
    MR_Box conv3_IntAvails1_51;
    MR_Box conv4_ImpAvails0_52;
    MR_Box conv5_ImpAvails1_53;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_9, &IntIncls_48, &ImpIncls_49);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[0]), IntImportMap_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_IntAvails0_50);
    IntAvails0_50 = ((MR_Word) (conv1_IntAvails0_50));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[1]), IntUseMap_11, ((MR_Box) (IntAvails0_50)), &conv3_IntAvails1_51);
    IntAvails1_51 = ((MR_Word) (conv3_IntAvails1_51));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[0]), ImpImportMap_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ImpAvails0_52);
    ImpAvails0_52 = ((MR_Word) (conv4_ImpAvails0_52));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[1]), ImpUseMap_13, ((MR_Box) (ImpAvails0_52)), &conv5_ImpAvails1_53);
    ImpAvails1_53 = ((MR_Word) (conv5_ImpAvails1_53));
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails1_51, &IntAvails_54);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvails1_53, &ImpAvails_55);
    if ((MaybeImplicitFIMLangs_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_80;

      Var_80 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_15);
      IntFIMs_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[64]), Var_80);
    }
    else
    {
      MR_Word ImplicitFIMLangs_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_17, (MR_Integer) 0))));
      MR_Word ImplicitFIMSpecs_58;
      MR_Word IntFIMSpecs_59;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_78;

      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[10]));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_4));
        MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (ModuleName_5));
      }
      ImplicitFIMSpecs_58 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_75, ImplicitFIMLangs_57);
      Var_76 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_15);
      mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_76, ImplicitFIMSpecs_58, &IntFIMSpecs_59);
      Var_78 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_59);
      IntFIMs_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[65]), Var_78);
    }
    Var_82 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_16);
    ImpFIMs_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[66]), Var_82);
    Var_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[67]), IntTypeDefnsAbs_18);
    Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[68]), IntTypeDefnsMer_19);
    Var_89 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[69]), IntTypeDefnsForeign_20);
    Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[70]), IntInstDefns_21);
    Var_95 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[71]), IntModeDefns_22);
    Var_98 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[72]), IntTypeClasses_23);
    Var_101 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[73]), IntInstances_24);
    Var_104 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[74]), IntPredDecls_25);
    Var_107 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[75]), IntModeDecls_26);
    Var_110 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[76]), IntDeclPragmas_27);
    Var_112 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[77]), IntPromises_28);
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_110, Var_112);
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_107, Var_109);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_104, Var_106);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_101, Var_103);
    Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_98, Var_100);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_95, Var_97);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_92, Var_94);
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_89, Var_91);
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_86, Var_88);
    IntItems_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_83, Var_85);
    Var_114 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[78]), ImpTypeDefnsAbs_30);
    Var_117 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[79]), ImpTypeDefnsMer_31);
    Var_120 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[80]), ImpTypeDefnsForeign_32);
    Var_123 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[81]), ImpInstDefns_33);
    Var_126 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[82]), ImpModeDefns_34);
    Var_129 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[83]), ImpTypeClasses_35);
    Var_132 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[84]), ImpInstances_36);
    Var_135 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[85]), ImpPredDecls_37);
    Var_138 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[86]), ImpModeDecls_38);
    Var_141 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[87]), ImpClauses_39);
    Var_144 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[88]), ImpForeignEnums_40);
    Var_147 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[89]), ImpForeignExportEnums_41);
    Var_150 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[90]), ImpDeclPragmas_42);
    Var_153 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[91]), ImpImplPragmas_43);
    Var_156 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[92]), ImpPromises_44);
    Var_159 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[93]), ImpInitialises_45);
    Var_162 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[94]), ImpFinalises_46);
    Var_164 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[95]), ImpMutables_47);
    Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_162, Var_164);
    Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_159, Var_161);
    Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_156, Var_158);
    Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_153, Var_155);
    Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_150, Var_152);
    Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_147, Var_149);
    Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_144, Var_146);
    Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_141, Var_143);
    Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_138, Var_140);
    Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_135, Var_137);
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_132, Var_134);
    Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_129, Var_131);
    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_126, Var_128);
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_123, Var_125);
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_120, Var_122);
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_117, Var_119);
    ImpItems_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_114, Var_116);
    parse_tree__item_util__make_and_add_item_block_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 0)), IntIncls_48, IntAvails_54, IntFIMs_56, IntItems_61, (MR_Word) ((MR_Unsigned) 0U), &SrcItemBlocks0_63);
    parse_tree__item_util__make_and_add_item_block_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 1)), ImpIncls_49, ImpAvails_55, ImpFIMs_60, ImpItems_62, SrcItemBlocks0_63, &SrcItemBlocks_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *RawCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SrcItemBlocks_64));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1309__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0(
  MR_Word ParseTreeOpt_5,
  MR_Word * ParseTreeTransOpt_6,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 0))));
    MR_Word OptFileKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 2))));
    MR_Word Uses_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 5))));
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
    MR_String Var_40;
    MR_Word STATE_VARIABLE_Specs_59_59;
    MR_Word STATE_VARIABLE_Specs_75_75;

    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (OptFileKind_9));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "trying to convert non-ofk_trans_opt parse_tree_opt ", (MR_String) "to parse_tree_trans_opt");
    mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4", Var_40);
    if ((Uses_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_0_36;
    else
    {
      MR_Word FirstUse_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uses_11, (MR_Integer) 0))));
      MR_Word UseSpec_17;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstUse_14, (MR_Integer) 1))));

      {
        UseSpec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UseSpec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4"));
        MR_hl_field(MR_mktag(1), UseSpec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), UseSpec_17, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), UseSpec_17, 3) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), UseSpec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[72])));
      }
      {
        STATE_VARIABLE_Specs_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 0) = ((MR_Box) (UseSpec_17));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
      }
    }
    if ((FIMs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_59_59;
    else
    {
      MR_Word FirstFIM_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FIMs_12, (MR_Integer) 0))));
      MR_Word FIMSpec_21;
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstFIM_18, (MR_Integer) 2))));

      {
        FIMSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FIMSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4"));
        MR_hl_field(MR_mktag(1), FIMSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FIMSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), FIMSpec_21, 3) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), FIMSpec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[73])));
      }
      {
        STATE_VARIABLE_Specs_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 0) = ((MR_Box) (FIMSpec_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_59_59));
      }
    }
    parse_tree__convert_parse_tree__classify_trans_opt_items_17_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_22, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_23, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_24, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_25, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_26, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_27, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_28, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_37);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[11]), TermInfos0_22, &TermInfos_29);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[12]), Term2Infos0_23, &Term2Infos_30);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[13]), Exceptions0_24, &Exceptions_31);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[14]), Trailings0_25, &Trailings_32);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[15]), MMTablings0_26, &MMTablings_33);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[16]), Sharings0_27, &Sharings_34);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[17]), Reuses0_28, &Reuses_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeTransOpt_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TermInfos_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Term2Infos_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Exceptions_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Trailings_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MMTablings_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Sharings_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Reuses_35));
    }
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
      MR_Word Item_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MMTablings_148_148;
      MR_Word STATE_VARIABLE_Trailings_149_149;
      MR_Word STATE_VARIABLE_Exceptions_150_150;
      MR_Word STATE_VARIABLE_Specs_184_184;
      MR_Word STATE_VARIABLE_Reuses_185_185;
      MR_Word STATE_VARIABLE_Sharings_186_186;
      MR_Word STATE_VARIABLE_Term2Infos_187_187;
      MR_Word STATE_VARIABLE_TermInfos_188_188;
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
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_129;
            MR_Word Pieces_207;
            MR_Word Spec_208;

            Var_119 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
            Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[90])), Var_118);
            Var_129 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
            {
              Spec_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_208, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
              MR_hl_field(MR_mktag(1), Spec_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_208, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_208, 3) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(1), Spec_208, 4) = ((MR_Box) (Pieces_207));
            }
            {
              STATE_VARIABLE_Specs_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 0) = ((MR_Box) (Spec_208));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
            }
            STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
            STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
            STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
            STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
            STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
            STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
            STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 0))))) {
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
            case (MR_Integer) 14:
              {
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_129;
                MR_Word Pieces_207;
                MR_Word Spec_208;

                Var_119 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[90])), Var_118);
                Var_129 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                {
                  Spec_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_208, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                  MR_hl_field(MR_mktag(1), Spec_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_208, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_208, 3) = ((MR_Box) (Var_129));
                  MR_hl_field(MR_mktag(1), Spec_208, 4) = ((MR_Box) (Pieces_207));
                }
                {
                  STATE_VARIABLE_Specs_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 0) = ((MR_Box) (Spec_208));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                }
                STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
                STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word DeclPragma_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_52, (MR_Integer) 0))));
                MR_Word Context_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_52, (MR_Integer) 1))));
                MR_Word SeqNum_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_52, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) DeclPragma_53)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Pieces_71;
                      MR_Word Spec_72;
                      MR_Word Var_172;
                      MR_Word Var_173;
                      MR_Word Var_183;

                      Var_173 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                      Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_173, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                      Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[90])), Var_172);
                      Var_183 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_72, 3) = ((MR_Box) (Var_183));
                        MR_hl_field(MR_mktag(1), Spec_72, 4) = ((MR_Box) (Pieces_71));
                      }
                      {
                        STATE_VARIABLE_Specs_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 0) = ((MR_Box) (Spec_72));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                      }
                      STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                      STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                      STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                      STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DeclPragma_53, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                        {
                          MR_Word Pieces_71;
                          MR_Word Spec_72;
                          MR_Word Var_172;
                          MR_Word Var_173;
                          MR_Word Var_183;

                          Var_173 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                          Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_173, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                          Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[90])), Var_172);
                          Var_183 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                          {
                            Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                            MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), Spec_72, 3) = ((MR_Box) (Var_183));
                            MR_hl_field(MR_mktag(1), Spec_72, 4) = ((MR_Box) (Pieces_71));
                          }
                          {
                            STATE_VARIABLE_Specs_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 0) = ((MR_Box) (Spec_72));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                          }
                          STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Term_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_53, (MR_Integer) 1))));
                          MR_Word ItemTerm_57;

                          {
                            ItemTerm_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemTerm_57, 0) = ((MR_Box) (Term_56));
                            MR_hl_field(MR_mktag(0), ItemTerm_57, 1) = ((MR_Box) (Context_54));
                            MR_hl_field(MR_mktag(0), ItemTerm_57, 2) = ((MR_Box) (SeqNum_55));
                          }
                          {
                            STATE_VARIABLE_TermInfos_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TermInfos_188_188, 0) = ((MR_Box) (ItemTerm_57));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TermInfos_188_188, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_2));
                          }
                          STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Term2_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_53, (MR_Integer) 1))));
                          MR_Word ItemTerm2_59;

                          {
                            ItemTerm2_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemTerm2_59, 0) = ((MR_Box) (Term2_58));
                            MR_hl_field(MR_mktag(0), ItemTerm2_59, 1) = ((MR_Box) (Context_54));
                            MR_hl_field(MR_mktag(0), ItemTerm2_59, 2) = ((MR_Box) (SeqNum_55));
                          }
                          {
                            STATE_VARIABLE_Term2Infos_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Term2Infos_187_187, 0) = ((MR_Box) (ItemTerm2_59));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Term2Infos_187_187, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_4));
                          }
                          STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Sharing_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_53, (MR_Integer) 1))));
                          MR_Word ItemSharing_61;

                          {
                            ItemSharing_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemSharing_61, 0) = ((MR_Box) (Sharing_60));
                            MR_hl_field(MR_mktag(0), ItemSharing_61, 1) = ((MR_Box) (Context_54));
                            MR_hl_field(MR_mktag(0), ItemSharing_61, 2) = ((MR_Box) (SeqNum_55));
                          }
                          {
                            STATE_VARIABLE_Sharings_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sharings_186_186, 0) = ((MR_Box) (ItemSharing_61));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sharings_186_186, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_12));
                          }
                          STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word Reuse_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_53, (MR_Integer) 1))));
                          MR_Word ItemReuse_63;

                          {
                            ItemReuse_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemReuse_63, 0) = ((MR_Box) (Reuse_62));
                            MR_hl_field(MR_mktag(0), ItemReuse_63, 1) = ((MR_Box) (Context_54));
                            MR_hl_field(MR_mktag(0), ItemReuse_63, 2) = ((MR_Box) (SeqNum_55));
                          }
                          {
                            STATE_VARIABLE_Reuses_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Reuses_185_185, 0) = ((MR_Box) (ItemReuse_63));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Reuses_185_185, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_14));
                          }
                          STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Var_155;
                MR_Word Var_156;
                MR_Word Var_166;
                MR_Word Pieces_197;
                MR_Word Spec_198;

                Var_156 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_156, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[90])), Var_155);
                Var_166 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                {
                  Spec_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_198, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                  MR_hl_field(MR_mktag(1), Spec_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_198, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_198, 3) = ((MR_Box) (Var_166));
                  MR_hl_field(MR_mktag(1), Spec_198, 4) = ((MR_Box) (Pieces_197));
                }
                {
                  STATE_VARIABLE_Specs_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 0) = ((MR_Box) (Spec_198));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                }
                STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
                STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemGenPragma_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word GenPragma_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_74, (MR_Integer) 0))));
                MR_Word Context_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_74, (MR_Integer) 1))));
                MR_Word SeqNum_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_74, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) GenPragma_75)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_135;
                      MR_Word Var_136;
                      MR_Word Var_146;
                      MR_Word Pieces_199;
                      MR_Word Spec_200;

                      Var_136 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                      Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_136, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                      Pieces_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[90])), Var_135);
                      Var_146 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_200, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(MR_mktag(1), Spec_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_200, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_200, 3) = ((MR_Box) (Var_146));
                        MR_hl_field(MR_mktag(1), Spec_200, 4) = ((MR_Box) (Pieces_199));
                      }
                      {
                        STATE_VARIABLE_Specs_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 0) = ((MR_Box) (Spec_200));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_184_184, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                      }
                      STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_76 = (MR_Word) (MR_body((MR_Word) (GenPragma_75), (MR_Integer) 1));
                      MR_Word ItemException_77;

                      {
                        ItemException_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemException_77, 0) = ((MR_Box) (Exception_76));
                        MR_hl_field(MR_mktag(0), ItemException_77, 1) = ((MR_Box) (Context_203));
                        MR_hl_field(MR_mktag(0), ItemException_77, 2) = ((MR_Box) (SeqNum_204));
                      }
                      {
                        STATE_VARIABLE_Exceptions_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Exceptions_150_150, 0) = ((MR_Box) (ItemException_77));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Exceptions_150_150, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_6));
                      }
                      STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
                      STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_78 = (MR_Word) (MR_body((MR_Word) (GenPragma_75), (MR_Integer) 2));
                      MR_Word ItemTrailing_79;

                      {
                        ItemTrailing_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemTrailing_79, 0) = ((MR_Box) (Trailing_78));
                        MR_hl_field(MR_mktag(0), ItemTrailing_79, 1) = ((MR_Box) (Context_203));
                        MR_hl_field(MR_mktag(0), ItemTrailing_79, 2) = ((MR_Box) (SeqNum_204));
                      }
                      {
                        STATE_VARIABLE_Trailings_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Trailings_149_149, 0) = ((MR_Box) (ItemTrailing_79));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Trailings_149_149, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_8));
                      }
                      STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_MMTablings_148_148 = STATE_VARIABLE_MMTablings_0_10;
                      STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_80 = (MR_Word) (MR_body((MR_Word) (GenPragma_75), (MR_Integer) 3));
                      MR_Word ItemMMTabling_81;

                      {
                        ItemMMTabling_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemMMTabling_81, 0) = ((MR_Box) (MMTabling_80));
                        MR_hl_field(MR_mktag(0), ItemMMTabling_81, 1) = ((MR_Box) (Context_203));
                        MR_hl_field(MR_mktag(0), ItemMMTabling_81, 2) = ((MR_Box) (SeqNum_204));
                      }
                      {
                        STATE_VARIABLE_MMTablings_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MMTablings_148_148, 0) = ((MR_Box) (ItemMMTabling_81));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MMTablings_148_148, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_10));
                      }
                      STATE_VARIABLE_Exceptions_150_150 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_Trailings_149_149 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_Specs_184_184 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                }
                STATE_VARIABLE_TermInfos_188_188 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_187_187 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Sharings_186_186 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_185_185 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_43;
      next_value_of_STATE_VARIABLE_TermInfos_0_2 = STATE_VARIABLE_TermInfos_188_188;
      next_value_of_STATE_VARIABLE_Term2Infos_0_4 = STATE_VARIABLE_Term2Infos_187_187;
      next_value_of_STATE_VARIABLE_Exceptions_0_6 = STATE_VARIABLE_Exceptions_150_150;
      next_value_of_STATE_VARIABLE_Trailings_0_8 = STATE_VARIABLE_Trailings_149_149;
      next_value_of_STATE_VARIABLE_MMTablings_0_10 = STATE_VARIABLE_MMTablings_148_148;
      next_value_of_STATE_VARIABLE_Sharings_0_12 = STATE_VARIABLE_Sharings_186_186;
      next_value_of_STATE_VARIABLE_Reuses_0_14 = STATE_VARIABLE_Reuses_185_185;
      next_value_of_STATE_VARIABLE_Specs_0_16 = STATE_VARIABLE_Specs_184_184;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Clause_4;

    parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Clause_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_Clause_4));
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__996__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(
  MR_Word ParseTreeOpt_5,
  MR_Word * ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 0))));
    MR_Word OptFileKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 2))));
    MR_Word Uses_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 3))));
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_5, (MR_Integer) 5))));
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
    MR_Word PredMarkers0_27;
    MR_Word TypeSpecs0_28;
    MR_Word UnusedArgs0_29;
    MR_Word TermInfos0_30;
    MR_Word Term2Infos0_31;
    MR_Word Exceptions0_32;
    MR_Word Trailings0_33;
    MR_Word MMTablings0_34;
    MR_Word Sharings0_35;
    MR_Word Reuses0_36;
    MR_Word TypeDefns_37;
    MR_Word ForeignEnums_38;
    MR_Word InstDefns_39;
    MR_Word ModeDefns_40;
    MR_Word TypeClasses_41;
    MR_Word Instances_42;
    MR_Word PredDecls_43;
    MR_Word ModeDecls_44;
    MR_Word Clauses0_45;
    MR_Word ForeignProcs_46;
    MR_Word Promises_47;
    MR_Word PredMarkers_48;
    MR_Word TypeSpecs_49;
    MR_Word UnusedArgs_50;
    MR_Word TermInfos_51;
    MR_Word Term2Infos_52;
    MR_Word Exceptions_53;
    MR_Word Trailings_54;
    MR_Word MMTablings_55;
    MR_Word Sharings_56;
    MR_Word Reuses_57;
    MR_Word Clauses_58;
    MR_Word Var_61;
    MR_String Var_63;
    MR_Word Var_67;
    MR_Word Var_68;

    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (OptFileKind_9));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "trying to convert non-ofk_plain_opt parse_tree_opt ", (MR_String) "to parse_tree_plain_opt");
    mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_plain_opt\'/4", Var_63);
    Var_67 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(Uses_11, Var_67, &UseMap_14);
    Var_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[62]), FIMs_12);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_68, &FIMSpecs_15);
    parse_tree__convert_parse_tree__classify_plain_opt_items_45_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TypeDefns0_16, (MR_Word) ((MR_Unsigned) 0U), &ForeignEnums0_17, (MR_Word) ((MR_Unsigned) 0U), &InstDefns0_18, (MR_Word) ((MR_Unsigned) 0U), &ModeDefns0_19, (MR_Word) ((MR_Unsigned) 0U), &TypeClasses0_20, (MR_Word) ((MR_Unsigned) 0U), &Instances0_21, (MR_Word) ((MR_Unsigned) 0U), &PredDecls0_22, (MR_Word) ((MR_Unsigned) 0U), &RevModeDecls_23, (MR_Word) ((MR_Unsigned) 0U), &RevClauses0_24, (MR_Word) ((MR_Unsigned) 0U), &RevForeignProcs_25, (MR_Word) ((MR_Unsigned) 0U), &Promises0_26, (MR_Word) ((MR_Unsigned) 0U), &PredMarkers0_27, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs0_28, (MR_Word) ((MR_Unsigned) 0U), &UnusedArgs0_29, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_30, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_31, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_32, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_33, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_34, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_35, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_36, STATE_VARIABLE_Specs_0_59, STATE_VARIABLE_Specs_60);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), TypeDefns0_16, &TypeDefns_37);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnums0_17, &ForeignEnums_38);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), InstDefns0_18, &InstDefns_39);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ModeDefns0_19, &ModeDefns_40);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), TypeClasses0_20, &TypeClasses_41);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), Instances0_21, &Instances_42);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDecls0_22, &PredDecls_43);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevModeDecls_23, &ModeDecls_44);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevClauses0_24, &Clauses0_45);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[7]), RevForeignProcs_25, &ForeignProcs_46);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), Promises0_26, &Promises_47);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[8]), PredMarkers0_27, &PredMarkers_48);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[9]), TypeSpecs0_28, &TypeSpecs_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[10]), UnusedArgs0_29, &UnusedArgs_50);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[11]), TermInfos0_30, &TermInfos_51);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[12]), Term2Infos0_31, &Term2Infos_52);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[13]), Exceptions0_32, &Exceptions_53);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[14]), Trailings0_33, &Trailings_54);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[15]), MMTablings0_34, &MMTablings_55);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[16]), Sharings0_35, &Sharings_56);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[17]), Reuses0_36, &Reuses_57);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[63]), Clauses0_45, &Clauses_58);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreePlainOpt_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (UseMap_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FIMSpecs_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TypeDefns_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignEnums_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InstDefns_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModeDefns_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeClasses_41));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Instances_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (PredDecls_43));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ModeDecls_44));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Clauses_58));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignProcs_46));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Promises_47));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (PredMarkers_48));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (TypeSpecs_49));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (UnusedArgs_50));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (TermInfos_51));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Term2Infos_52));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Exceptions_53));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Trailings_54));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (MMTablings_55));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Sharings_56));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Reuses_57));
    }
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
      MR_Word Use_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Uses_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Use_7, (MR_Integer) 0))));
      MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Use_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UseMap_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (Context_11)), HeadVar__2_2, &STATE_VARIABLE_UseMap_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Uses_8;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_UseMap_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_plain_opt_items_45_p_0(
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
  MR_Word STATE_VARIABLE_PredMarkers_0_24,
  MR_Word * STATE_VARIABLE_PredMarkers_25,
  MR_Word STATE_VARIABLE_TypeSpecs_0_26,
  MR_Word * STATE_VARIABLE_TypeSpecs_27,
  MR_Word STATE_VARIABLE_UnusedArgs_0_28,
  MR_Word * STATE_VARIABLE_UnusedArgs_29,
  MR_Word STATE_VARIABLE_TermInfos_0_30,
  MR_Word * STATE_VARIABLE_TermInfos_31,
  MR_Word STATE_VARIABLE_Term2Infos_0_32,
  MR_Word * STATE_VARIABLE_Term2Infos_33,
  MR_Word STATE_VARIABLE_Exceptions_0_34,
  MR_Word * STATE_VARIABLE_Exceptions_35,
  MR_Word STATE_VARIABLE_Trailings_0_36,
  MR_Word * STATE_VARIABLE_Trailings_37,
  MR_Word STATE_VARIABLE_MMTablings_0_38,
  MR_Word * STATE_VARIABLE_MMTablings_39,
  MR_Word STATE_VARIABLE_Sharings_0_40,
  MR_Word * STATE_VARIABLE_Sharings_41,
  MR_Word STATE_VARIABLE_Reuses_0_42,
  MR_Word * STATE_VARIABLE_Reuses_43,
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
      *STATE_VARIABLE_Reuses_43 = STATE_VARIABLE_Reuses_0_42;
      *STATE_VARIABLE_Sharings_41 = STATE_VARIABLE_Sharings_0_40;
      *STATE_VARIABLE_MMTablings_39 = STATE_VARIABLE_MMTablings_0_38;
      *STATE_VARIABLE_Trailings_37 = STATE_VARIABLE_Trailings_0_36;
      *STATE_VARIABLE_Exceptions_35 = STATE_VARIABLE_Exceptions_0_34;
      *STATE_VARIABLE_Term2Infos_33 = STATE_VARIABLE_Term2Infos_0_32;
      *STATE_VARIABLE_TermInfos_31 = STATE_VARIABLE_TermInfos_0_30;
      *STATE_VARIABLE_UnusedArgs_29 = STATE_VARIABLE_UnusedArgs_0_28;
      *STATE_VARIABLE_TypeSpecs_27 = STATE_VARIABLE_TypeSpecs_0_26;
      *STATE_VARIABLE_PredMarkers_25 = STATE_VARIABLE_PredMarkers_0_24;
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
      MR_Word Item_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MMTablings_264_264;
      MR_Word STATE_VARIABLE_Trailings_265_265;
      MR_Word STATE_VARIABLE_Exceptions_266_266;
      MR_Word STATE_VARIABLE_UnusedArgs_267_267;
      MR_Word STATE_VARIABLE_RevForeignProcs_285_285;
      MR_Word STATE_VARIABLE_Specs_305_305;
      MR_Word STATE_VARIABLE_Reuses_306_306;
      MR_Word STATE_VARIABLE_Sharings_307_307;
      MR_Word STATE_VARIABLE_Term2Infos_308_308;
      MR_Word STATE_VARIABLE_TermInfos_309_309;
      MR_Word STATE_VARIABLE_PredMarkers_312_312;
      MR_Word STATE_VARIABLE_TypeSpecs_313_313;
      MR_Word STATE_VARIABLE_Promises_314_314;
      MR_Word STATE_VARIABLE_RevClauses_315_315;
      MR_Word STATE_VARIABLE_RevModeDecls_316_316;
      MR_Word STATE_VARIABLE_PredDecls_317_317;
      MR_Word STATE_VARIABLE_Instances_318_318;
      MR_Word STATE_VARIABLE_TypeClasses_319_319;
      MR_Word STATE_VARIABLE_ModeDefns_320_320;
      MR_Word STATE_VARIABLE_InstDefns_321_321;
      MR_Word STATE_VARIABLE_ForeignEnums_322_322;
      MR_Word STATE_VARIABLE_TypeDefns_323_323;
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
      MR_Word next_value_of_STATE_VARIABLE_PredMarkers_0_24;
      MR_Word next_value_of_STATE_VARIABLE_TypeSpecs_0_26;
      MR_Word next_value_of_STATE_VARIABLE_UnusedArgs_0_28;
      MR_Word next_value_of_STATE_VARIABLE_TermInfos_0_30;
      MR_Word next_value_of_STATE_VARIABLE_Term2Infos_0_32;
      MR_Word next_value_of_STATE_VARIABLE_Exceptions_0_34;
      MR_Word next_value_of_STATE_VARIABLE_Trailings_0_36;
      MR_Word next_value_of_STATE_VARIABLE_MMTablings_0_38;
      MR_Word next_value_of_STATE_VARIABLE_Sharings_0_40;
      MR_Word next_value_of_STATE_VARIABLE_Reuses_0_42;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_44;

      switch (MR_tag((MR_Word) Item_112)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_144 = (MR_Word) ((MR_Word) (Item_112));

            {
              STATE_VARIABLE_RevClauses_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_315_315, 0) = ((MR_Box) (ItemClause_144));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_315_315, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_18));
            }
            STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
            STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
            STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
            STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
            STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
            STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
            STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
            STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
            STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
            STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_138 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_321_321, 0) = ((MR_Box) (ItemInstDefn_138));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_321_321, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
            STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
            STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
            STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
            STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
            STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
            STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
            STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
            STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
            STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_139 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_320_320, 0) = ((MR_Box) (ItemModeDefn_139));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_320_320, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_8));
            }
            STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
            STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
            STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
            STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
            STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
            STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
            STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
            STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
            STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
            STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_PredDecls_317_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_317_317, 0) = ((MR_Box) (ItemPredDecl_142));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_317_317, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_14));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_316_316, 0) = ((MR_Box) (ItemModeDecl_143));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_316_316, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_16));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_322_322, 0) = ((MR_Box) (ItemForeignEnum_137));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_322_322, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 14:
              {
                MR_Word Var_251;
                MR_Word Var_252;
                MR_Word Var_262;
                MR_Word Pieces_383;
                MR_Word Spec_384;

                Var_252 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                Var_251 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_252, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_383 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[88])), Var_251);
                Var_262 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                {
                  Spec_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_384, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                  MR_hl_field(MR_mktag(1), Spec_384, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_384, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_384, 3) = ((MR_Box) (Var_262));
                  MR_hl_field(MR_mktag(1), Spec_384, 4) = ((MR_Box) (Pieces_383));
                }
                {
                  STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_384));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Promises_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_314_314, 0) = ((MR_Box) (ItemPromise_145));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_314_314, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_319_319, 0) = ((MR_Box) (ItemTypeClass_140));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_319_319, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_10));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_318_318, 0) = ((MR_Box) (ItemInstance_141));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_318_318, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_12));
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_323_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_323_323, 0) = ((MR_Box) (ItemTypeDefn_136));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_323_323, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));
                MR_Word DeclPragma_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_146, (MR_Integer) 0))));
                MR_Word Context_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_146, (MR_Integer) 1))));
                MR_Word SeqNum_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_146, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) DeclPragma_147)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Pieces_173;
                      MR_Word Spec_174;
                      MR_Word Var_293;
                      MR_Word Var_294;
                      MR_Word Var_304;

                      Var_294 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                      Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_294, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                      Pieces_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[88])), Var_293);
                      Var_304 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                      {
                        Spec_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_174, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                        MR_hl_field(MR_mktag(1), Spec_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_174, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_174, 3) = ((MR_Box) (Var_304));
                        MR_hl_field(MR_mktag(1), Spec_174, 4) = ((MR_Box) (Pieces_173));
                      }
                      {
                        STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_174));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                      }
                      STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                      STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                      STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                      STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                      STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                      STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word TypeSpec_150 = (MR_Word) (MR_body((MR_Word) (DeclPragma_147), (MR_Integer) 2));
                      MR_Word ItemTypeSpec_151;

                      {
                        ItemTypeSpec_151 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemTypeSpec_151, 0) = ((MR_Box) (TypeSpec_150));
                        MR_hl_field(MR_mktag(0), ItemTypeSpec_151, 1) = ((MR_Box) (Context_148));
                        MR_hl_field(MR_mktag(0), ItemTypeSpec_151, 2) = ((MR_Box) (SeqNum_149));
                      }
                      {
                        STATE_VARIABLE_TypeSpecs_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeSpecs_313_313, 0) = ((MR_Box) (ItemTypeSpec_151));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeSpecs_313_313, 1) = ((MR_Box) (STATE_VARIABLE_TypeSpecs_0_26));
                      }
                      STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                      STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                      STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                      STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                      STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                      STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 3:
                        {
                          MR_Word Pieces_173;
                          MR_Word Spec_174;
                          MR_Word Var_293;
                          MR_Word Var_294;
                          MR_Word Var_304;

                          Var_294 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                          Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_294, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                          Pieces_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[88])), Var_293);
                          Var_304 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                          {
                            Spec_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_174, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                            MR_hl_field(MR_mktag(1), Spec_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_174, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), Spec_174, 3) = ((MR_Box) (Var_304));
                            MR_hl_field(MR_mktag(1), Spec_174, 4) = ((MR_Box) (Pieces_173));
                          }
                          {
                            STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_174));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                          }
                          STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word SymNameArityMaybePF_392 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word PFU_394 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_392, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_395 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_392, (MR_Integer) 1))));
                          MR_Word Arity_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_392, (MR_Integer) 2))));
                          MR_Word PredOrFunc_397;
                          MR_Word SymNameArityPF_398;
                          MR_Word PredMarker_399;
                          MR_Word ItemPredMarker_400;

                          switch (PFU_394) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_397 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_397 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_398 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_398, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_397));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_398, 1) = ((MR_Box) (SymName_395));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_398, 2) = ((MR_Box) (Arity_396));
                          }
                          {
                            PredMarker_399 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_399, 0) = ((MR_Box) (SymNameArityPF_398));
                            MR_hl_field(MR_mktag(0), PredMarker_399, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                          }
                          {
                            ItemPredMarker_400 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_400, 0) = ((MR_Box) (PredMarker_399));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_400, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_400, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_400));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word SymNameArityMaybePF_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word PFU_154 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_152, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_152, (MR_Integer) 1))));
                          MR_Word Arity_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_152, (MR_Integer) 2))));
                          MR_Word PredOrFunc_157;
                          MR_Word SymNameArityPF_158;
                          MR_Word PredMarker_159;
                          MR_Word ItemPredMarker_160;

                          switch (PFU_154) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_157 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_157 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_158 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_158, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_157));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_158, 1) = ((MR_Box) (SymName_155));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_158, 2) = ((MR_Box) (Arity_156));
                          }
                          {
                            PredMarker_159 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_159, 0) = ((MR_Box) (SymNameArityPF_158));
                            MR_hl_field(MR_mktag(0), PredMarker_159, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                          }
                          {
                            ItemPredMarker_160 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_160, 0) = ((MR_Box) (PredMarker_159));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_160, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_160, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_160));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Term_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemTerm_162;

                          {
                            ItemTerm_162 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemTerm_162, 0) = ((MR_Box) (Term_161));
                            MR_hl_field(MR_mktag(0), ItemTerm_162, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemTerm_162, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_TermInfos_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TermInfos_309_309, 0) = ((MR_Box) (ItemTerm_162));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TermInfos_309_309, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_30));
                          }
                          STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Term2_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemTerm2_164;

                          {
                            ItemTerm2_164 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemTerm2_164, 0) = ((MR_Box) (Term2_163));
                            MR_hl_field(MR_mktag(0), ItemTerm2_164, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemTerm2_164, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_Term2Infos_308_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Term2Infos_308_308, 0) = ((MR_Box) (ItemTerm2_164));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Term2Infos_308_308, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_32));
                          }
                          STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Sharing_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemSharing_166;

                          {
                            ItemSharing_166 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemSharing_166, 0) = ((MR_Box) (Sharing_165));
                            MR_hl_field(MR_mktag(0), ItemSharing_166, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemSharing_166, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_Sharings_307_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sharings_307_307, 0) = ((MR_Box) (ItemSharing_166));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sharings_307_307, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_40));
                          }
                          STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word Reuse_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemReuse_168;

                          {
                            ItemReuse_168 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemReuse_168, 0) = ((MR_Box) (Reuse_167));
                            MR_hl_field(MR_mktag(0), ItemReuse_168, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemReuse_168, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_Reuses_306_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Reuses_306_306, 0) = ((MR_Box) (ItemReuse_168));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Reuses_306_306, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_42));
                          }
                          STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));
                MR_Word ImplPragma_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_175, (MR_Integer) 0))));
                MR_Word Context_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_175, (MR_Integer) 1))));
                MR_Word SeqNum_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_175, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) ImplPragma_176)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_272;
                      MR_Word Var_273;
                      MR_Word Var_283;
                      MR_Word Pieces_355;
                      MR_Word Spec_356;

                      Var_273 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                      Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_273, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                      Pieces_355 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[88])), Var_272);
                      Var_283 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                      {
                        Spec_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_356, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                        MR_hl_field(MR_mktag(1), Spec_356, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_356, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_356, 3) = ((MR_Box) (Var_283));
                        MR_hl_field(MR_mktag(1), Spec_356, 4) = ((MR_Box) (Pieces_355));
                      }
                      {
                        STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_356));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                      }
                      STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                      STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ForeignProc_177 = (MR_Word) (MR_body((MR_Word) (ImplPragma_176), (MR_Integer) 2));
                      MR_Word ItemForeignProc_178;

                      {
                        ItemForeignProc_178 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemForeignProc_178, 0) = ((MR_Box) (ForeignProc_177));
                        MR_hl_field(MR_mktag(0), ItemForeignProc_178, 1) = ((MR_Box) (Context_368));
                        MR_hl_field(MR_mktag(0), ItemForeignProc_178, 2) = ((MR_Box) (SeqNum_369));
                      }
                      {
                        STATE_VARIABLE_RevForeignProcs_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignProcs_285_285, 0) = ((MR_Box) (ItemForeignProc_178));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignProcs_285_285, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_20));
                      }
                      STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                      STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 6:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 13:
                        {
                          MR_Word Var_272;
                          MR_Word Var_273;
                          MR_Word Var_283;
                          MR_Word Pieces_355;
                          MR_Word Spec_356;

                          Var_273 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                          Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_273, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                          Pieces_355 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[88])), Var_272);
                          Var_283 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                          {
                            Spec_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_356, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                            MR_hl_field(MR_mktag(1), Spec_356, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_356, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), Spec_356, 3) = ((MR_Box) (Var_283));
                            MR_hl_field(MR_mktag(1), Spec_356, 4) = ((MR_Box) (Pieces_355));
                          }
                          {
                            STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_356));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word SymNameArityMaybePF_346 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 1))));
                          MR_Word PFU_348 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_346, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_349 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_346, (MR_Integer) 1))));
                          MR_Word Arity_350 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_346, (MR_Integer) 2))));
                          MR_Word PredOrFunc_351;
                          MR_Word SymNameArityPF_352;
                          MR_Word PredMarker_353;
                          MR_Word ItemPredMarker_354;

                          switch (PFU_348) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_351 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_351 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_352 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_352, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_351));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_352, 1) = ((MR_Box) (SymName_349));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_352, 2) = ((MR_Box) (Arity_350));
                          }
                          {
                            PredMarker_353 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_353, 0) = ((MR_Box) (SymNameArityPF_352));
                            MR_hl_field(MR_mktag(0), PredMarker_353, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                          {
                            ItemPredMarker_354 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_354, 0) = ((MR_Box) (PredMarker_353));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_354, 1) = ((MR_Box) (Context_368));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_354, 2) = ((MR_Box) (SeqNum_369));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_354));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word SymNameArityMaybePF_424 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 1))));
                          MR_Word PFU_426 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_424, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_427 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_424, (MR_Integer) 1))));
                          MR_Word Arity_428 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_424, (MR_Integer) 2))));
                          MR_Word PredOrFunc_429;
                          MR_Word SymNameArityPF_430;
                          MR_Word PredMarker_431;
                          MR_Word ItemPredMarker_432;

                          switch (PFU_426) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_429 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_429 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_430 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_430, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_429));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_430, 1) = ((MR_Box) (SymName_427));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_430, 2) = ((MR_Box) (Arity_428));
                          }
                          {
                            PredMarker_431 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_431, 0) = ((MR_Box) (SymNameArityPF_430));
                            MR_hl_field(MR_mktag(0), PredMarker_431, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                          }
                          {
                            ItemPredMarker_432 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_432, 0) = ((MR_Box) (PredMarker_431));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_432, 1) = ((MR_Box) (Context_368));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_432, 2) = ((MR_Box) (SeqNum_369));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_432));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word SymNameArityMaybePF_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 1))));
                          MR_Word PFU_411 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_409, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_412 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_409, (MR_Integer) 1))));
                          MR_Word Arity_413 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_409, (MR_Integer) 2))));
                          MR_Word PredOrFunc_414;
                          MR_Word SymNameArityPF_415;
                          MR_Word PredMarker_416;
                          MR_Word ItemPredMarker_417;

                          switch (PFU_411) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_414 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_414 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_415 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_415, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_414));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_415, 1) = ((MR_Box) (SymName_412));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_415, 2) = ((MR_Box) (Arity_413));
                          }
                          {
                            PredMarker_416 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_416, 0) = ((MR_Box) (SymNameArityPF_415));
                            MR_hl_field(MR_mktag(0), PredMarker_416, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                          }
                          {
                            ItemPredMarker_417 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_417, 0) = ((MR_Box) (PredMarker_416));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_417, 1) = ((MR_Box) (Context_368));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_417, 2) = ((MR_Box) (SeqNum_369));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_417));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Word SymNameArityMaybePF_454 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 1))));
                          MR_Word PFU_456 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_454, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_457 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_454, (MR_Integer) 1))));
                          MR_Word Arity_458 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_454, (MR_Integer) 2))));
                          MR_Word PredOrFunc_459;
                          MR_Word SymNameArityPF_460;
                          MR_Word PredMarker_461;
                          MR_Word ItemPredMarker_462;

                          switch (PFU_456) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_459 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_459 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_460 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_460, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_459));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_460, 1) = ((MR_Box) (SymName_457));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_460, 2) = ((MR_Box) (Arity_458));
                          }
                          {
                            PredMarker_461 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_461, 0) = ((MR_Box) (SymNameArityPF_460));
                            MR_hl_field(MR_mktag(0), PredMarker_461, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                          }
                          {
                            ItemPredMarker_462 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_462, 0) = ((MR_Box) (PredMarker_461));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_462, 1) = ((MR_Box) (Context_368));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_462, 2) = ((MR_Box) (SeqNum_369));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_462));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          MR_Word SymNameArityMaybePF_469 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 1))));
                          MR_Word PFU_471 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_469, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_472 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_469, (MR_Integer) 1))));
                          MR_Word Arity_473 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_469, (MR_Integer) 2))));
                          MR_Word PredOrFunc_474;
                          MR_Word SymNameArityPF_475;
                          MR_Word PredMarker_476;
                          MR_Word ItemPredMarker_477;

                          switch (PFU_471) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_474 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_474 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_475 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_475, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_474));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_475, 1) = ((MR_Box) (SymName_472));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_475, 2) = ((MR_Box) (Arity_473));
                          }
                          {
                            PredMarker_476 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_476, 0) = ((MR_Box) (SymNameArityPF_475));
                            MR_hl_field(MR_mktag(0), PredMarker_476, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                          }
                          {
                            ItemPredMarker_477 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_477, 0) = ((MR_Box) (PredMarker_476));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_477, 1) = ((MR_Box) (Context_368));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_477, 2) = ((MR_Box) (SeqNum_369));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_477));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word SymNameArityMaybePF_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_176, (MR_Integer) 1))));
                          MR_Word PFU_441 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_439, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word SymName_442 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_439, (MR_Integer) 1))));
                          MR_Word Arity_443 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityMaybePF_439, (MR_Integer) 2))));
                          MR_Word PredOrFunc_444;
                          MR_Word SymNameArityPF_445;
                          MR_Word PredMarker_446;
                          MR_Word ItemPredMarker_447;

                          switch (PFU_441) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              PredOrFunc_444 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              PredOrFunc_444 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45", (MR_String) "PFU = pfu_unknown");
                                return;
                              }
                              break;
                          }
                          {
                            SymNameArityPF_445 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), SymNameArityPF_445, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_444));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_445, 1) = ((MR_Box) (SymName_442));
                            MR_hl_field(MR_mktag(0), SymNameArityPF_445, 2) = ((MR_Box) (Arity_443));
                          }
                          {
                            PredMarker_446 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_446, 0) = ((MR_Box) (SymNameArityPF_445));
                            MR_hl_field(MR_mktag(0), PredMarker_446, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                          }
                          {
                            ItemPredMarker_447 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_447, 0) = ((MR_Box) (PredMarker_446));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_447, 1) = ((MR_Box) (Context_368));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_447, 2) = ((MR_Box) (SeqNum_369));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 0) = ((MR_Box) (ItemPredMarker_447));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_312_312, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemGenPragma_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));
                MR_Word GenPragma_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_189, (MR_Integer) 0))));
                MR_Word Context_381 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_189, (MR_Integer) 1))));
                MR_Word SeqNum_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_189, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) GenPragma_190)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word UnusedArgs_127 = (MR_Word) ((MR_Word) (GenPragma_190));
                      MR_Word ItemUnusedArgs_191;

                      {
                        ItemUnusedArgs_191 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemUnusedArgs_191, 0) = ((MR_Box) (UnusedArgs_127));
                        MR_hl_field(MR_mktag(0), ItemUnusedArgs_191, 1) = ((MR_Box) (Context_381));
                        MR_hl_field(MR_mktag(0), ItemUnusedArgs_191, 2) = ((MR_Box) (SeqNum_382));
                      }
                      {
                        STATE_VARIABLE_UnusedArgs_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnusedArgs_267_267, 0) = ((MR_Box) (ItemUnusedArgs_191));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnusedArgs_267_267, 1) = ((MR_Box) (STATE_VARIABLE_UnusedArgs_0_28));
                      }
                      STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                      STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                      STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_192 = (MR_Word) (MR_body((MR_Word) (GenPragma_190), (MR_Integer) 1));
                      MR_Word ItemException_193;

                      {
                        ItemException_193 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemException_193, 0) = ((MR_Box) (Exception_192));
                        MR_hl_field(MR_mktag(0), ItemException_193, 1) = ((MR_Box) (Context_381));
                        MR_hl_field(MR_mktag(0), ItemException_193, 2) = ((MR_Box) (SeqNum_382));
                      }
                      {
                        STATE_VARIABLE_Exceptions_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Exceptions_266_266, 0) = ((MR_Box) (ItemException_193));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Exceptions_266_266, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_34));
                      }
                      STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                      STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                      STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_194 = (MR_Word) (MR_body((MR_Word) (GenPragma_190), (MR_Integer) 2));
                      MR_Word ItemTrailing_195;

                      {
                        ItemTrailing_195 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemTrailing_195, 0) = ((MR_Box) (Trailing_194));
                        MR_hl_field(MR_mktag(0), ItemTrailing_195, 1) = ((MR_Box) (Context_381));
                        MR_hl_field(MR_mktag(0), ItemTrailing_195, 2) = ((MR_Box) (SeqNum_382));
                      }
                      {
                        STATE_VARIABLE_Trailings_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Trailings_265_265, 0) = ((MR_Box) (ItemTrailing_195));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Trailings_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_36));
                      }
                      STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                      STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                      STATE_VARIABLE_MMTablings_264_264 = STATE_VARIABLE_MMTablings_0_38;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_196 = (MR_Word) (MR_body((MR_Word) (GenPragma_190), (MR_Integer) 3));
                      MR_Word ItemMMTabling_197;

                      {
                        ItemMMTabling_197 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemMMTabling_197, 0) = ((MR_Box) (MMTabling_196));
                        MR_hl_field(MR_mktag(0), ItemMMTabling_197, 1) = ((MR_Box) (Context_381));
                        MR_hl_field(MR_mktag(0), ItemMMTabling_197, 2) = ((MR_Box) (SeqNum_382));
                      }
                      {
                        STATE_VARIABLE_MMTablings_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MMTablings_264_264, 0) = ((MR_Box) (ItemMMTabling_197));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MMTablings_264_264, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_38));
                      }
                      STATE_VARIABLE_UnusedArgs_267_267 = STATE_VARIABLE_UnusedArgs_0_28;
                      STATE_VARIABLE_Exceptions_266_266 = STATE_VARIABLE_Exceptions_0_34;
                      STATE_VARIABLE_Trailings_265_265 = STATE_VARIABLE_Trailings_0_36;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_323_323 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_322_322 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_321_321 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_320_320 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_319_319 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_318_318 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_317_317 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_316_316 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_315_315 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_285_285 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_314_314 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_312_312 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_313_313 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_TermInfos_309_309 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_308_308 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Sharings_307_307 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_306_306 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_113;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_323_323;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_322_322;
      next_value_of_STATE_VARIABLE_InstDefns_0_6 = STATE_VARIABLE_InstDefns_321_321;
      next_value_of_STATE_VARIABLE_ModeDefns_0_8 = STATE_VARIABLE_ModeDefns_320_320;
      next_value_of_STATE_VARIABLE_TypeClasses_0_10 = STATE_VARIABLE_TypeClasses_319_319;
      next_value_of_STATE_VARIABLE_Instances_0_12 = STATE_VARIABLE_Instances_318_318;
      next_value_of_STATE_VARIABLE_PredDecls_0_14 = STATE_VARIABLE_PredDecls_317_317;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_16 = STATE_VARIABLE_RevModeDecls_316_316;
      next_value_of_STATE_VARIABLE_RevClauses_0_18 = STATE_VARIABLE_RevClauses_315_315;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_20 = STATE_VARIABLE_RevForeignProcs_285_285;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_314_314;
      next_value_of_STATE_VARIABLE_PredMarkers_0_24 = STATE_VARIABLE_PredMarkers_312_312;
      next_value_of_STATE_VARIABLE_TypeSpecs_0_26 = STATE_VARIABLE_TypeSpecs_313_313;
      next_value_of_STATE_VARIABLE_UnusedArgs_0_28 = STATE_VARIABLE_UnusedArgs_267_267;
      next_value_of_STATE_VARIABLE_TermInfos_0_30 = STATE_VARIABLE_TermInfos_309_309;
      next_value_of_STATE_VARIABLE_Term2Infos_0_32 = STATE_VARIABLE_Term2Infos_308_308;
      next_value_of_STATE_VARIABLE_Exceptions_0_34 = STATE_VARIABLE_Exceptions_266_266;
      next_value_of_STATE_VARIABLE_Trailings_0_36 = STATE_VARIABLE_Trailings_265_265;
      next_value_of_STATE_VARIABLE_MMTablings_0_38 = STATE_VARIABLE_MMTablings_264_264;
      next_value_of_STATE_VARIABLE_Sharings_0_40 = STATE_VARIABLE_Sharings_307_307;
      next_value_of_STATE_VARIABLE_Reuses_0_42 = STATE_VARIABLE_Reuses_306_306;
      next_value_of_STATE_VARIABLE_Specs_0_44 = STATE_VARIABLE_Specs_305_305;
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
      STATE_VARIABLE_PredMarkers_0_24 = next_value_of_STATE_VARIABLE_PredMarkers_0_24;
      STATE_VARIABLE_TypeSpecs_0_26 = next_value_of_STATE_VARIABLE_TypeSpecs_0_26;
      STATE_VARIABLE_UnusedArgs_0_28 = next_value_of_STATE_VARIABLE_UnusedArgs_0_28;
      STATE_VARIABLE_TermInfos_0_30 = next_value_of_STATE_VARIABLE_TermInfos_0_30;
      STATE_VARIABLE_Term2Infos_0_32 = next_value_of_STATE_VARIABLE_Term2Infos_0_32;
      STATE_VARIABLE_Exceptions_0_34 = next_value_of_STATE_VARIABLE_Exceptions_0_34;
      STATE_VARIABLE_Trailings_0_36 = next_value_of_STATE_VARIABLE_Trailings_0_36;
      STATE_VARIABLE_MMTablings_0_38 = next_value_of_STATE_VARIABLE_MMTablings_0_38;
      STATE_VARIABLE_Sharings_0_40 = next_value_of_STATE_VARIABLE_Sharings_0_40;
      STATE_VARIABLE_Reuses_0_42 = next_value_of_STATE_VARIABLE_Reuses_0_42;
      STATE_VARIABLE_Specs_0_44 = next_value_of_STATE_VARIABLE_Specs_0_44;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__826__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 0))));
    MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 2))));
    MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 3))));
    MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 4))));
    MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 5))));
    MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 6))));
    MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 7))));
    MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 8))));
    MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 9))));
    MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 10))));
    MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 11))));
    MR_Word IntInclMap_23;
    MR_Word InclMap_25;
    MR_Word IntImportMap_26;
    MR_Word IntUseMap_27;
    MR_Word SectionImportUseMap_32;
    MR_Word ImportUseMap_33;
    MR_Word IntTypeDefns0_38;
    MR_Word IntInstDefns0_39;
    MR_Word IntModeDefns0_40;
    MR_Word IntTypeClasses0_41;
    MR_Word IntInstances0_42;
    MR_Word IntTypeRepns0_43;
    MR_Word IntTypeDefnMap_44;
    MR_Word IntInstDefnMap_45;
    MR_Word IntModeDefnMap_46;
    MR_Word IntTypeClasses_47;
    MR_Word IntInstances_48;
    MR_Word IntTypeRepnMap_49;
    MR_Word ImpTypeDefnMap_50;
    MR_Word ImpForeignEnumMap_51;
    MR_Word Var_68;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_Specs_85_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_Specs_107_107;
    MR_Word STATE_VARIABLE_Specs_123_123;
    MR_Word STATE_VARIABLE_Specs_130_130;
    MR_Word STATE_VARIABLE_Specs_132_132;
    MR_Word STATE_VARIABLE_ImpContexts_134_134;
    MR_Word STATE_VARIABLE_ImpContexts_136_136;
    MR_Word STATE_VARIABLE_ImpContexts_138_138;
    MR_Word STATE_VARIABLE_ImpContexts_140_140;
    MR_Word STATE_VARIABLE_ImpContexts_142_142;
    MR_Word _ImpInclMap_24;
    MR_Word _TypeDefnCheckedMap_52;

    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 3));
    }
    mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4", (MR_String) "trying to convert non-ifk_int3 parse_tree_int to parse_tree_int3");
    if ((MaybeVersionNumbers_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_66;
    else
    {
      MR_Word VNSpec_22;

      {
        VNSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VNSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), VNSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), VNSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), VNSpec_22, 3) = ((MR_Box) (ModuleNameContext_10));
        MR_hl_field(MR_mktag(1), VNSpec_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[60])));
      }
      {
        STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (VNSpec_22));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
      }
    }
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_23, &_ImpInclMap_24, &InclMap_25, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_85_85);
    Var_86 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_87 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_86, &IntImportMap_26, Var_87, &IntUseMap_27);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), IntUseMap_27);
    if (succeeded)
      STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_85_85;
    else
    {
      MR_Word IntUseContextLists_28;
      MR_Word IntUseContexts_29;
      MR_Word IntUseSpec_31;
      MR_Word Var_102;
      MR_Box conv0_Var_102;

      IntUseContextLists_28 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), IntUseMap_27);
      mercury__one_or_more__condense_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseContextLists_28, &IntUseContexts_29);
      conv0_Var_102 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseContexts_29);
      Var_102 = ((MR_Word) (conv0_Var_102));
      {
        IntUseSpec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 3) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[63])));
      }
      {
        STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (IntUseSpec_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (STATE_VARIABLE_Specs_85_85));
      }
    }
    Var_104 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_105 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_106 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, IntImportMap_26, Var_104, Var_105, Var_106, &SectionImportUseMap_32, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_107_107);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_32, &ImportUseMap_33);
    if ((IntFIMs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_123_123 = STATE_VARIABLE_Specs_107_107;
    else
    {
      MR_Word FirstIntFIM_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntFIMs_16, (MR_Integer) 0))));
      MR_Word IntFIMSpec_37;
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstIntFIM_34, (MR_Integer) 2))));

      {
        IntFIMSpec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 3) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[66])));
      }
      {
        STATE_VARIABLE_Specs_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_123_123, 0) = ((MR_Box) (IntFIMSpec_37));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_123_123, 1) = ((MR_Box) (STATE_VARIABLE_Specs_107_107));
      }
    }
    parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_38, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_39, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_41, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_42, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_43, STATE_VARIABLE_Specs_123_123, &STATE_VARIABLE_Specs_130_130);
    IntTypeDefnMap_44 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_38);
    IntInstDefnMap_45 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_39);
    IntModeDefnMap_46 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_40);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_41, &IntTypeClasses_47);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_42, &IntInstances_48);
    IntTypeRepnMap_49 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_43);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), &ImpTypeDefnMap_50);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), &ImpForeignEnumMap_51);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_44, ImpTypeDefnMap_50, ImpForeignEnumMap_51, &_TypeDefnCheckedMap_52, STATE_VARIABLE_Specs_130_130, &STATE_VARIABLE_Specs_132_132);
    if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_134_134 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadIncl_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadIncl_54, (MR_Integer) 1))));

      {
        STATE_VARIABLE_ImpContexts_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_134_134, 0) = ((MR_Box) (Var_135));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_134_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_136_136 = STATE_VARIABLE_ImpContexts_134_134;
    else
    {
      MR_Word HeadAvail_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
      MR_Word Var_137;

      Var_137 = parse_tree__item_util__get_avail_context_1_f_0(HeadAvail_56);
      {
        STATE_VARIABLE_ImpContexts_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_136_136, 0) = ((MR_Box) (Var_137));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_136_136, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_134_134));
      }
    }
    if ((ImpFIMs_17 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_138_138 = STATE_VARIABLE_ImpContexts_136_136;
    else
    {
      MR_Word HeadFIM_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpFIMs_17, (MR_Integer) 0))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFIM_58, (MR_Integer) 2))));

      {
        STATE_VARIABLE_ImpContexts_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_138_138, 0) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_138_138, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_136_136));
      }
    }
    if ((ImpItems_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_140_140 = STATE_VARIABLE_ImpContexts_138_138;
    else
    {
      MR_Word HeadImpItem_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItems_19, (MR_Integer) 0))));
      MR_Word Var_141;

      Var_141 = parse_tree__prog_item__get_item_context_1_f_0(HeadImpItem_60);
      {
        STATE_VARIABLE_ImpContexts_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_140_140, 0) = ((MR_Box) (Var_141));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_140_140, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_138_138));
      }
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), STATE_VARIABLE_ImpContexts_140_140, &STATE_VARIABLE_ImpContexts_142_142);
    if ((STATE_VARIABLE_ImpContexts_142_142 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_132_132;
    else
    {
      MR_Word FirstImpContext_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_142_142, (MR_Integer) 0))));
      MR_Word ImpItemSpec_65;

      {
        ImpItemSpec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpItemSpec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), ImpItemSpec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImpItemSpec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImpItemSpec_65, 3) = ((MR_Box) (FirstImpContext_62));
        MR_hl_field(MR_mktag(1), ImpItemSpec_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[70])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_67 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpItemSpec_65));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_132_132));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt3_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InclMap_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntImportMap_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImportUseMap_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntTypeDefnMap_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntInstDefnMap_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntModeDefnMap_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeClasses_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstances_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeRepnMap_49));
    }
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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_TypeRepns_13 = STATE_VARIABLE_TypeRepns_0_12;
      *STATE_VARIABLE_Instances_11 = STATE_VARIABLE_Instances_0_10;
      *STATE_VARIABLE_TypeClasses_9 = STATE_VARIABLE_TypeClasses_0_8;
      *STATE_VARIABLE_ModeDefns_7 = STATE_VARIABLE_ModeDefns_0_6;
      *STATE_VARIABLE_InstDefns_5 = STATE_VARIABLE_InstDefns_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_96_96;
      MR_Word STATE_VARIABLE_TypeRepns_97_97;
      MR_Word STATE_VARIABLE_Instances_98_98;
      MR_Word STATE_VARIABLE_TypeClasses_99_99;
      MR_Word STATE_VARIABLE_ModeDefns_100_100;
      MR_Word STATE_VARIABLE_InstDefns_101_101;
      MR_Word STATE_VARIABLE_TypeDefns_102_102;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_14;

      switch (MR_tag((MR_Word) Item_37)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_64;
            MR_Word Spec_65;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_95;

            Var_85 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
            Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[86])), Var_84);
            Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_64));
            }
            {
              STATE_VARIABLE_Specs_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
            }
            STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_47 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_101_101, 0) = ((MR_Box) (ItemInstDefn_47));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_101_101, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_48 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_100_100, 0) = ((MR_Box) (ItemModeDefn_48));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_100_100, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
              {
                MR_Word Pieces_64;
                MR_Word Spec_65;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_95;

                Var_85 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
                Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[86])), Var_84);
                Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                  MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_64));
                }
                {
                  STATE_VARIABLE_Specs_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 0) = ((MR_Box) (Spec_65));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_99_99, 0) = ((MR_Box) (ItemTypeClass_49));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_99_99, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_98_98, 0) = ((MR_Box) (ItemInstance_50));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_98_98, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_102_102, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_102_102, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_97_97, 0) = ((MR_Box) (ItemTypeRepn_51));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_97_97, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_102_102;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_101_101;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_100_100;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_99_99;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_98_98;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_97_97;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_96_96;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_TypeRepns_0_12 = next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      STATE_VARIABLE_Specs_0_14 = next_value_of_STATE_VARIABLE_Specs_0_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__649__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt2_6,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 0))));
    MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 2))));
    MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 3))));
    MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 4))));
    MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 5))));
    MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 6))));
    MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 7))));
    MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 8))));
    MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 9))));
    MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 10))));
    MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 11))));
    MR_Word IntInclMap_24;
    MR_Word InclMap_26;
    MR_Word IntImportMap_27;
    MR_Word IntUseMap_28;
    MR_Word SectionImportUseMap_36;
    MR_Word ImportUseMap_37;
    MR_Word IntFIMSpecs_38;
    MR_Word ImpFIMSpecs_39;
    MR_Word IntTypeDefns0_40;
    MR_Word IntInstDefns0_41;
    MR_Word IntModeDefns0_42;
    MR_Word IntTypeClasses0_43;
    MR_Word IntInstances0_44;
    MR_Word IntTypeRepns0_45;
    MR_Word IntTypeDefnMap_46;
    MR_Word IntInstDefnMap_47;
    MR_Word IntModeDefnMap_48;
    MR_Word IntTypeClasses_49;
    MR_Word IntInstances_50;
    MR_Word IntTypeRepnMap_51;
    MR_Word ImpTypeDefns0_52;
    MR_Word ImpTypeDefnMap_53;
    MR_Word ImpForeignEnumMap_54;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_Specs_99_99;
    MR_Word STATE_VARIABLE_Specs_121_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word STATE_VARIABLE_Specs_125_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word STATE_VARIABLE_Specs_136_136;
    MR_Word STATE_VARIABLE_Specs_138_138;
    MR_Word _ImpInclMap_25;
    MR_Word FirstIntImportContext_29;
    MR_Word _TypeDefnCheckedMap_55;

    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4", (MR_String) "trying to convert non-ifk_int2 parse_tree_int to parse_tree_int2");
    if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_80_80 = STATE_VARIABLE_Specs_0_56;
    else
    {
      MR_Word FirstImpIncl_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
      MR_Word ImpInclSpec_23;
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstImpIncl_20, (MR_Integer) 1))));

      {
        ImpInclSpec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 3) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[48])));
      }
      {
        STATE_VARIABLE_Specs_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_80_80, 0) = ((MR_Box) (ImpInclSpec_23));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_80_80, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
      }
    }
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_24, &_ImpInclMap_25, &InclMap_26, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_82_82);
    Var_83 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_84 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_83, &IntImportMap_27, Var_84, &IntUseMap_28);
    succeeded = parse_tree__item_util__first_context_in_module_names_contexts_2_p_0(IntImportMap_27, &FirstIntImportContext_29);
    if (succeeded)
    {
      MR_Word IntImportSpec_31;

      {
        IntImportSpec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntImportSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
        MR_hl_field(MR_mktag(1), IntImportSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), IntImportSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), IntImportSpec_31, 3) = ((MR_Box) (FirstIntImportContext_29));
        MR_hl_field(MR_mktag(1), IntImportSpec_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[41])));
      }
      {
        STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (IntImportSpec_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_82_82));
      }
    }
    else
      STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_82_82;
    if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_121_121 = STATE_VARIABLE_Specs_99_99;
    else
    {
      MR_Word FirstImpAvail_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
      MR_Word ImpAvailSpec_35;
      MR_Word Var_120;

      Var_120 = parse_tree__item_util__get_avail_context_1_f_0(FirstImpAvail_32);
      {
        ImpAvailSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 3) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[56])));
      }
      {
        STATE_VARIABLE_Specs_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_121_121, 0) = ((MR_Box) (ImpAvailSpec_35));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_121_121, 1) = ((MR_Box) (STATE_VARIABLE_Specs_99_99));
      }
    }
    Var_122 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_123 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_124 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, Var_122, IntUseMap_28, Var_123, Var_124, &SectionImportUseMap_36, STATE_VARIABLE_Specs_121_121, &STATE_VARIABLE_Specs_125_125);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_36, &ImportUseMap_37);
    Var_126 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[60]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_126, &IntFIMSpecs_38);
    Var_128 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[61]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_128, &ImpFIMSpecs_39);
    parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_41, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_42, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_43, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_44, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_45, STATE_VARIABLE_Specs_125_125, &STATE_VARIABLE_Specs_136_136);
    IntTypeDefnMap_46 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_40);
    IntInstDefnMap_47 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_41);
    IntModeDefnMap_48 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_42);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_43, &IntTypeClasses_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_44, &IntInstances_50);
    IntTypeRepnMap_51 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_45);
    parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_52, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_138_138);
    ImpTypeDefnMap_53 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_52);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), &ImpForeignEnumMap_54);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_46, ImpTypeDefnMap_53, ImpForeignEnumMap_54, &_TypeDefnCheckedMap_55, STATE_VARIABLE_Specs_138_138, STATE_VARIABLE_Specs_57);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntUseMap_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImportUseMap_37));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntFIMSpecs_38));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpFIMSpecs_39));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeDefnMap_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstDefnMap_47));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntModeDefnMap_48));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntTypeClasses_49));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntInstances_50));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeRepnMap_51));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ImpTypeDefnMap_53));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
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
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_56_56;
      MR_Word STATE_VARIABLE_TypeDefns_57_57;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Pieces_34;
            MR_Word Spec_35;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_55;

            Var_45 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_12);
            Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[43])));
            Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[85])), Var_44);
            Var_55 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
            {
              Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
              MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_35, 3) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Spec_35, 4) = ((MR_Box) (Pieces_34));
            }
            {
              STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_35));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
            }
            STATE_VARIABLE_TypeDefns_57_57 = STATE_VARIABLE_TypeDefns_0_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
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
            case (MR_Integer) 13:
            case (MR_Integer) 14:
              {
                MR_Word Pieces_34;
                MR_Word Spec_35;
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_55;

                Var_45 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_12);
                Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[43])));
                Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[85])), Var_44);
                Var_55 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
                {
                  Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_35, 3) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Spec_35, 4) = ((MR_Box) (Pieces_34));
                }
                {
                  STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_35));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                }
                STATE_VARIABLE_TypeDefns_57_57 = STATE_VARIABLE_TypeDefns_0_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_57_57, 0) = ((MR_Box) (ItemTypeDefn_16));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_57_57, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_Specs_56_56 = STATE_VARIABLE_Specs_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_57_57;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_TypeRepns_13 = STATE_VARIABLE_TypeRepns_0_12;
      *STATE_VARIABLE_Instances_11 = STATE_VARIABLE_Instances_0_10;
      *STATE_VARIABLE_TypeClasses_9 = STATE_VARIABLE_TypeClasses_0_8;
      *STATE_VARIABLE_ModeDefns_7 = STATE_VARIABLE_ModeDefns_0_6;
      *STATE_VARIABLE_InstDefns_5 = STATE_VARIABLE_InstDefns_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_96_96;
      MR_Word STATE_VARIABLE_TypeRepns_97_97;
      MR_Word STATE_VARIABLE_Instances_98_98;
      MR_Word STATE_VARIABLE_TypeClasses_99_99;
      MR_Word STATE_VARIABLE_ModeDefns_100_100;
      MR_Word STATE_VARIABLE_InstDefns_101_101;
      MR_Word STATE_VARIABLE_TypeDefns_102_102;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_14;

      switch (MR_tag((MR_Word) Item_37)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_64;
            MR_Word Spec_65;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_95;

            Var_85 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
            Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[85])), Var_84);
            Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_64));
            }
            {
              STATE_VARIABLE_Specs_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
            }
            STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_47 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_101_101, 0) = ((MR_Box) (ItemInstDefn_47));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_101_101, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_48 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_100_100, 0) = ((MR_Box) (ItemModeDefn_48));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_100_100, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
              {
                MR_Word Pieces_64;
                MR_Word Spec_65;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_95;

                Var_85 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
                Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[85])), Var_84);
                Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
                  MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_64));
                }
                {
                  STATE_VARIABLE_Specs_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 0) = ((MR_Box) (Spec_65));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_99_99, 0) = ((MR_Box) (ItemTypeClass_49));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_99_99, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_98_98, 0) = ((MR_Box) (ItemInstance_50));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_98_98, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_102_102, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_102_102, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_97_97 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_97_97, 0) = ((MR_Box) (ItemTypeRepn_51));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_97_97, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_102_102 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_101_101 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_100_100 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_99_99 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_98_98 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_102_102;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_101_101;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_100_100;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_99_99;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_98_98;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_97_97;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_96_96;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_TypeRepns_0_12 = next_value_of_STATE_VARIABLE_TypeRepns_0_12;
      STATE_VARIABLE_Specs_0_14 = next_value_of_STATE_VARIABLE_Specs_0_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__440__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt1_6,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 0))));
    MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 2))));
    MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 3))));
    MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 4))));
    MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 5))));
    MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 6))));
    MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 7))));
    MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 8))));
    MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 9))));
    MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 10))));
    MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 11))));
    MR_Word IntInclMap_20;
    MR_Word ImpInclMap_21;
    MR_Word InclMap_22;
    MR_Word IntImportMap_23;
    MR_Word IntUseMap_24;
    MR_Word ImpImportMap_25;
    MR_Word ImpUseMap_26;
    MR_Word SectionImportUseMap_30;
    MR_Word ImportUseMap_31;
    MR_Word IntFIMSpecs_32;
    MR_Word ImpFIMSpecs_33;
    MR_Word IntTypeDefns_34;
    MR_Word IntInstDefns_35;
    MR_Word IntModeDefns_36;
    MR_Word IntTypeClasses0_37;
    MR_Word IntInstances0_38;
    MR_Word IntPredDecls0_39;
    MR_Word RevIntModeDecls_40;
    MR_Word IntDeclPragmas0_42;
    MR_Word IntPromises0_43;
    MR_Word IntTypeRepns_44;
    MR_Word IntTypeDefnMap_45;
    MR_Word IntInstDefnMap_46;
    MR_Word IntModeDefnMap_47;
    MR_Word IntTypeClasses_48;
    MR_Word IntInstances_49;
    MR_Word IntPredDecls_50;
    MR_Word IntModeDecls_51;
    MR_Word IntDeclPragmas_52;
    MR_Word IntPromises_53;
    MR_Word IntTypeRepnMap_54;
    MR_Word ImpTypeDefns0_55;
    MR_Word ImpForeignEnums0_56;
    MR_Word ImpTypeClasses0_57;
    MR_Word ImpTypeDefnMap_58;
    MR_Word ImpForeignEnumMap_59;
    MR_Word ImpTypeClasses_60;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_Specs_68_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_Specs_87_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word STATE_VARIABLE_Specs_90_90;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_Specs_106_106;
    MR_Word STATE_VARIABLE_Specs_110_110;
    MR_Word FirstImportContext_27;
    MR_Word _IntForeignEnums_41;
    MR_Word _TypeDefnCheckedMap_61;

    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/4", (MR_String) "trying to convert non-ifk_int1 parse_tree_int to parse_tree_int1");
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, ImpIncls_13, &IntInclMap_20, &ImpInclMap_21, &InclMap_22, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_68_68);
    Var_69 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_70 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_69, &IntImportMap_23, Var_70, &IntUseMap_24);
    Var_71 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_72 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_15, Var_71, &ImpImportMap_25, Var_72, &ImpUseMap_26);
    succeeded = parse_tree__item_util__first_context_in_two_module_names_contexts_3_p_0(IntImportMap_23, ImpImportMap_25, &FirstImportContext_27);
    if (succeeded)
    {
      MR_Word ImportSpec_29;

      {
        ImportSpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImportSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/4"));
        MR_hl_field(MR_mktag(1), ImportSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImportSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImportSpec_29, 3) = ((MR_Box) (FirstImportContext_27));
        MR_hl_field(MR_mktag(1), ImportSpec_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[41])));
      }
      {
        STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (ImportSpec_29));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_68_68));
      }
    }
    else
      STATE_VARIABLE_Specs_87_87 = STATE_VARIABLE_Specs_68_68;
    Var_88 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_89 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, Var_88, IntUseMap_24, Var_89, ImpUseMap_26, &SectionImportUseMap_30, STATE_VARIABLE_Specs_87_87, &STATE_VARIABLE_Specs_90_90);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_30, &ImportUseMap_31);
    Var_91 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[58]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_91, &IntFIMSpecs_32);
    Var_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[59]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_93, &ImpFIMSpecs_33);
    parse_tree__convert_parse_tree__classify_int1_items_int_25_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_35, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_36, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_37, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_38, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_39, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_40, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_41, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_42, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_43, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns_44, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_106_106);
    IntTypeDefnMap_45 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_34);
    IntInstDefnMap_46 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_35);
    IntModeDefnMap_47 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_36);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_37, &IntTypeClasses_48);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_38, &IntInstances_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_39, &IntPredDecls_50);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_40, &IntModeDecls_51);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), IntDeclPragmas0_42, &IntDeclPragmas_52);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_43, &IntPromises_53);
    IntTypeRepnMap_54 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns_44);
    parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_55, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums0_56, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_57, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_110_110);
    ImpTypeDefnMap_58 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_55);
    ImpForeignEnumMap_59 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums0_56);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_57, &ImpTypeClasses_60);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_45, ImpTypeDefnMap_58, ImpForeignEnumMap_59, &_TypeDefnCheckedMap_61, STATE_VARIABLE_Specs_110_110, STATE_VARIABLE_Specs_63);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpUseMap_26));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImportUseMap_31));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntFIMSpecs_32));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpFIMSpecs_33));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeDefnMap_45));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntInstDefnMap_46));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntModeDefnMap_47));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeClasses_48));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntInstances_49));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_50));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_51));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntDeclPragmas_52));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntPromises_53));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntTypeRepnMap_54));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeDefnMap_58));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpForeignEnumMap_59));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpTypeClasses_60));
    }
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
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_TypeClasses_7 = STATE_VARIABLE_TypeClasses_0_6;
      *STATE_VARIABLE_ForeignEnums_5 = STATE_VARIABLE_ForeignEnums_0_4;
      *STATE_VARIABLE_TypeDefns_3 = STATE_VARIABLE_TypeDefns_0_2;
    }
    else
    {
      MR_Word Item_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_72_72;
      MR_Word STATE_VARIABLE_ForeignEnums_73_73;
      MR_Word STATE_VARIABLE_TypeClasses_74_74;
      MR_Word STATE_VARIABLE_TypeDefns_75_75;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      switch (MR_tag((MR_Word) Item_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Pieces_46;
            MR_Word Spec_47;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_71;

            Var_61 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_22);
            Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[43])));
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[83])), Var_60);
            Var_71 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
            {
              Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
              MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(1), Spec_47, 4) = ((MR_Box) (Pieces_46));
            }
            {
              STATE_VARIABLE_Specs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_72_72, 0) = ((MR_Box) (Spec_47));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_72_72, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
            }
            STATE_VARIABLE_TypeDefns_75_75 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_73_73 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_TypeClasses_74_74 = STATE_VARIABLE_TypeClasses_0_6;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
              {
                MR_Word Pieces_46;
                MR_Word Spec_47;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_71;

                Var_61 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_22);
                Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[43])));
                Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[83])), Var_60);
                Var_71 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
                {
                  Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
                  MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (Var_71));
                  MR_hl_field(MR_mktag(1), Spec_47, 4) = ((MR_Box) (Pieces_46));
                }
                {
                  STATE_VARIABLE_Specs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_72_72, 0) = ((MR_Box) (Spec_47));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_72_72, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                }
                STATE_VARIABLE_TypeDefns_75_75 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_73_73 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_74_74 = STATE_VARIABLE_TypeClasses_0_6;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_73_73, 0) = ((MR_Box) (ItemForeignEnum_30));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_73_73, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_75_75 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_TypeClasses_74_74 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_Specs_72_72 = STATE_VARIABLE_Specs_0_8;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_74_74, 0) = ((MR_Box) (ItemTypeClass_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_74_74, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_6));
                }
                STATE_VARIABLE_TypeDefns_75_75 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_73_73 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_Specs_72_72 = STATE_VARIABLE_Specs_0_8;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_75_75, 0) = ((MR_Box) (ItemTypeDefn_28));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_75_75, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_73_73 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_74_74 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_Specs_72_72 = STATE_VARIABLE_Specs_0_8;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_23;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_75_75;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_73_73;
      next_value_of_STATE_VARIABLE_TypeClasses_0_6 = STATE_VARIABLE_TypeClasses_74_74;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_72_72;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_ForeignEnums_0_4 = next_value_of_STATE_VARIABLE_ForeignEnums_0_4;
      STATE_VARIABLE_TypeClasses_0_6 = next_value_of_STATE_VARIABLE_TypeClasses_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int1_items_int_25_p_0(
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
  MR_Word STATE_VARIABLE_Promises_0_20,
  MR_Word * STATE_VARIABLE_Promises_21,
  MR_Word STATE_VARIABLE_TypeRepns_0_22,
  MR_Word * STATE_VARIABLE_TypeRepns_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      *STATE_VARIABLE_TypeRepns_23 = STATE_VARIABLE_TypeRepns_0_22;
      *STATE_VARIABLE_Promises_21 = STATE_VARIABLE_Promises_0_20;
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
      MR_Word Item_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_158_158;
      MR_Word STATE_VARIABLE_Promises_159_159;
      MR_Word STATE_VARIABLE_DeclPragmas_160_160;
      MR_Word STATE_VARIABLE_ForeignEnums_161_161;
      MR_Word STATE_VARIABLE_ModeDecls_162_162;
      MR_Word STATE_VARIABLE_PredDecls_163_163;
      MR_Word STATE_VARIABLE_TypeRepns_164_164;
      MR_Word STATE_VARIABLE_Instances_165_165;
      MR_Word STATE_VARIABLE_TypeClasses_166_166;
      MR_Word STATE_VARIABLE_ModeDefns_167_167;
      MR_Word STATE_VARIABLE_InstDefns_168_168;
      MR_Word STATE_VARIABLE_TypeDefns_169_169;
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
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_20;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_22;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

      switch (MR_tag((MR_Word) Item_62)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_141;
            MR_Word Pieces_182;
            MR_Word Spec_183;

            Var_131 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_62);
            Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
            Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[79])), Var_130);
            Var_141 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
            {
              Spec_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_183, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/25"));
              MR_hl_field(MR_mktag(1), Spec_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_183, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_183, 3) = ((MR_Box) (Var_141));
              MR_hl_field(MR_mktag(1), Spec_183, 4) = ((MR_Box) (Pieces_182));
            }
            {
              STATE_VARIABLE_Specs_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_158_158, 0) = ((MR_Box) (Spec_183));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_158_158, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
            STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_77 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_168_168, 0) = ((MR_Box) (ItemInstDefn_77));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_168_168, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
            STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_78 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_167_167, 0) = ((MR_Box) (ItemModeDefn_78));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_167_167, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
            STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_PredDecls_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_163_163, 0) = ((MR_Box) (ItemPredDecl_82));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_163_163, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDecls_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDecls_162_162, 0) = ((MR_Box) (ItemModeDecl_83));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDecls_162_162, 1) = ((MR_Box) (STATE_VARIABLE_ModeDecls_0_14));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_161_161, 0) = ((MR_Box) (ItemForeignEnum_84));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_161_161, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
              {
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_141;
                MR_Word Pieces_182;
                MR_Word Spec_183;

                Var_131 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_62);
                Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
                Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[79])), Var_130);
                Var_141 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
                {
                  Spec_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_183, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/25"));
                  MR_hl_field(MR_mktag(1), Spec_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_183, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_183, 3) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(1), Spec_183, 4) = ((MR_Box) (Pieces_182));
                }
                {
                  STATE_VARIABLE_Specs_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_158_158, 0) = ((MR_Box) (Spec_183));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_158_158, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));
                MR_Word PromiseType_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_86, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Context_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_86, (MR_Integer) 4))));

                switch (PromiseType_87) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_Promises_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_159_159, 0) = ((MR_Box) (ItemPromise_86));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_159_159, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_20));
                      }
                      STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Pieces_93;
                      MR_Word Spec_94;
                      MR_Word Var_147;
                      MR_Word Var_148;

                      Var_148 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_62);
                      Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_148, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])));
                      Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[79])), Var_147);
                      {
                        Spec_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_94, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/25"));
                        MR_hl_field(MR_mktag(1), Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_94, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_94, 3) = ((MR_Box) (Context_91));
                        MR_hl_field(MR_mktag(1), Spec_94, 4) = ((MR_Box) (Pieces_93));
                      }
                      {
                        STATE_VARIABLE_Specs_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_158_158, 0) = ((MR_Box) (Spec_94));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_158_158, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                      }
                      STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_166_166, 0) = ((MR_Box) (ItemTypeClass_79));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_166_166, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_165_165, 0) = ((MR_Box) (ItemInstance_80));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_165_165, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_169_169, 0) = ((MR_Box) (ItemTypeDefn_76));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_169_169, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_DeclPragmas_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_DeclPragmas_160_160, 0) = ((MR_Box) (ItemDeclPragma_85));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_DeclPragmas_160_160, 1) = ((MR_Box) (STATE_VARIABLE_DeclPragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_164_164 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_164_164, 0) = ((MR_Box) (ItemTypeRepn_81));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_164_164, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_22));
                }
                STATE_VARIABLE_TypeDefns_169_169 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_168_168 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_167_167 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_166_166 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_165_165 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_163_163 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_162_162 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_161_161 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_160_160 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_159_159 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_0_24;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_63;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_169_169;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_168_168;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_167_167;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_166_166;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_165_165;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_163_163;
      next_value_of_STATE_VARIABLE_ModeDecls_0_14 = STATE_VARIABLE_ModeDecls_162_162;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_161_161;
      next_value_of_STATE_VARIABLE_DeclPragmas_0_18 = STATE_VARIABLE_DeclPragmas_160_160;
      next_value_of_STATE_VARIABLE_Promises_0_20 = STATE_VARIABLE_Promises_159_159;
      next_value_of_STATE_VARIABLE_TypeRepns_0_22 = STATE_VARIABLE_TypeRepns_164_164;
      next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_158_158;
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
      STATE_VARIABLE_Promises_0_20 = next_value_of_STATE_VARIABLE_Promises_0_20;
      STATE_VARIABLE_TypeRepns_0_22 = next_value_of_STATE_VARIABLE_TypeRepns_0_22;
      STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeRepnMap_15;

    parse_tree__convert_parse_tree__add_type_repn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepnMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepnMap_15));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(
  MR_Word TypeRepnInfos_3)
{
  {
    MR_Word TypeRepnMap_4;
    MR_Word Var_6;
    MR_Box conv1_TypeRepnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[57]), TypeRepnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeRepnMap_4);
    TypeRepnMap_4 = ((MR_Word) (conv1_TypeRepnMap_4));
    return TypeRepnMap_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__295__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 0))));
    MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 2))));
    MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 3))));
    MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 4))));
    MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 5))));
    MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 6))));
    MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 7))));
    MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 8))));
    MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 9))));
    MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 10))));
    MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_5, (MR_Integer) 11))));
    MR_Word IntInclMap_20;
    MR_Word ImpInclMap_21;
    MR_Word InclMap_22;
    MR_Word IntImportMap_23;
    MR_Word IntUseMap_24;
    MR_Word ImpImportMap_25;
    MR_Word ImpUseMap_26;
    MR_Word SectionImportUseMap_27;
    MR_Word ImportUseMap_28;
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
    MR_Word IntPromises0_40;
    MR_Word IntTypeDefnMap_41;
    MR_Word IntInstDefnMap_42;
    MR_Word IntModeDefnMap_43;
    MR_Word IntTypeClasses_44;
    MR_Word IntInstances_45;
    MR_Word IntPredDecls_46;
    MR_Word IntModeDecls_47;
    MR_Word IntDeclPragmas_48;
    MR_Word IntPromises_49;
    MR_Word ImpTypeDefns_50;
    MR_Word ImpInstDefns_51;
    MR_Word ImpModeDefns_52;
    MR_Word ImpTypeClasses0_53;
    MR_Word ImpInstances0_54;
    MR_Word ImpPredDecls0_55;
    MR_Word RevImpModeDecls_56;
    MR_Word ImpForeignEnums_57;
    MR_Word ImpDeclPragmas0_58;
    MR_Word ImpPromises0_59;
    MR_Word ImpTypeDefnMap_60;
    MR_Word ImpInstDefnMap_61;
    MR_Word ImpModeDefnMap_62;
    MR_Word ImpTypeClasses_63;
    MR_Word ImpInstances_64;
    MR_Word ImpPredDecls_65;
    MR_Word ImpModeDecls_66;
    MR_Word ImpForeignEnumMap_67;
    MR_Word ImpDeclPragmas_68;
    MR_Word ImpPromises_69;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_Specs_77_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_Specs_97_97;
    MR_Word STATE_VARIABLE_Specs_108_108;
    MR_Word _IntForeignEnums_38;
    MR_Word _TypeDefnCheckedMap_70;

    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int0\'/4", (MR_String) "trying to convert non-ifk_int0 parse_tree_int to parse_tree_int0");
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, ImpIncls_13, &IntInclMap_20, &ImpInclMap_21, &InclMap_22, STATE_VARIABLE_Specs_0_71, &STATE_VARIABLE_Specs_77_77);
    Var_78 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_79 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_78, &IntImportMap_23, Var_79, &IntUseMap_24);
    Var_80 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_81 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_15, Var_80, &ImpImportMap_25, Var_81, &ImpUseMap_26);
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, IntImportMap_23, IntUseMap_24, ImpImportMap_25, ImpUseMap_26, &SectionImportUseMap_27, STATE_VARIABLE_Specs_77_77, &STATE_VARIABLE_Specs_82_82);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_27, &ImportUseMap_28);
    Var_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[55]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_83, &IntFIMSpecs_29);
    Var_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[56]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_85, &ImpFIMSpecs_30);
    parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_32, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_33, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_35, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_37, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_38, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_39, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_40, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_97_97);
    IntTypeDefnMap_41 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_31);
    IntInstDefnMap_42 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_32);
    IntModeDefnMap_43 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_33);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_34, &IntTypeClasses_44);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_35, &IntInstances_45);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_36, &IntPredDecls_46);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_37, &IntModeDecls_47);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), IntDeclPragmas0_39, &IntDeclPragmas_48);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_40, &IntPromises_49);
    parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns_50, (MR_Word) ((MR_Unsigned) 0U), &ImpInstDefns_51, (MR_Word) ((MR_Unsigned) 0U), &ImpModeDefns_52, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_53, (MR_Word) ((MR_Unsigned) 0U), &ImpInstances0_54, (MR_Word) ((MR_Unsigned) 0U), &ImpPredDecls0_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_56, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums_57, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclPragmas0_58, (MR_Word) ((MR_Unsigned) 0U), &ImpPromises0_59, STATE_VARIABLE_Specs_97_97, &STATE_VARIABLE_Specs_108_108);
    ImpTypeDefnMap_60 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_50);
    ImpInstDefnMap_61 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_51);
    ImpModeDefnMap_62 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_52);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_53, &ImpTypeClasses_63);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstances0_54, &ImpInstances_64);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_55, &ImpPredDecls_65);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_56, &ImpModeDecls_66);
    ImpForeignEnumMap_67 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_57);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), ImpDeclPragmas0_58, &ImpDeclPragmas_68);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises0_59, &ImpPromises_69);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_41, ImpTypeDefnMap_60, ImpForeignEnumMap_67, &_TypeDefnCheckedMap_70, STATE_VARIABLE_Specs_108_108, STATE_VARIABLE_Specs_72);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (32 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt0_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntImportMap_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntUseMap_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpImportMap_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpUseMap_26));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImportUseMap_28));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntFIMSpecs_29));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ImpFIMSpecs_30));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntTypeDefnMap_41));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntInstDefnMap_42));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntModeDefnMap_43));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntTypeClasses_44));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntInstances_45));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPredDecls_46));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntModeDecls_47));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntDeclPragmas_48));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPromises_49));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeDefnMap_60));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpInstDefnMap_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpModeDefnMap_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpTypeClasses_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpInstances_64));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpPredDecls_65));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpModeDecls_66));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpForeignEnumMap_67));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpDeclPragmas_68));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpPromises_69));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(
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
  MR_Word STATE_VARIABLE_Promises_0_20,
  MR_Word * STATE_VARIABLE_Promises_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      *STATE_VARIABLE_Promises_21 = STATE_VARIABLE_Promises_0_20;
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
      MR_Word Item_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_128_128;
      MR_Word STATE_VARIABLE_Promises_129_129;
      MR_Word STATE_VARIABLE_DeclPragmas_130_130;
      MR_Word STATE_VARIABLE_ForeignEnums_131_131;
      MR_Word STATE_VARIABLE_RevModeDecls_132_132;
      MR_Word STATE_VARIABLE_PredDecls_133_133;
      MR_Word STATE_VARIABLE_Instances_134_134;
      MR_Word STATE_VARIABLE_TypeClasses_135_135;
      MR_Word STATE_VARIABLE_ModeDefns_136_136;
      MR_Word STATE_VARIABLE_InstDefns_137_137;
      MR_Word STATE_VARIABLE_TypeDefns_138_138;
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
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_22;

      switch (MR_tag((MR_Word) Item_57)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_88;
            MR_Word Spec_89;
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_127;

            Var_117 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_57);
            Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
            Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])), Var_116);
            Var_127 = parse_tree__prog_item__get_item_context_1_f_0(Item_57);
            {
              Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/23"));
              MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_89, 3) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(1), Spec_89, 4) = ((MR_Box) (Pieces_88));
            }
            {
              STATE_VARIABLE_Specs_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_128_128, 0) = ((MR_Box) (Spec_89));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_128_128, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
            }
            STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_71 = (MR_Word) (MR_body((MR_Word) (Item_57), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_137_137, 0) = ((MR_Box) (ItemInstDefn_71));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_137_137, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_72 = (MR_Word) (MR_body((MR_Word) (Item_57), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_136_136, 0) = ((MR_Box) (ItemModeDefn_72));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_136_136, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_PredDecls_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_133_133, 0) = ((MR_Box) (ItemPredDecl_75));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_133_133, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_132_132, 0) = ((MR_Box) (ItemModeDecl_76));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_132_132, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_131_131, 0) = ((MR_Box) (ItemForeignEnum_77));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_131_131, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
              {
                MR_Word Pieces_88;
                MR_Word Spec_89;
                MR_Word Var_116;
                MR_Word Var_117;
                MR_Word Var_127;

                Var_117 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_57);
                Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])), Var_116);
                Var_127 = parse_tree__prog_item__get_item_context_1_f_0(Item_57);
                {
                  Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/23"));
                  MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_89, 3) = ((MR_Box) (Var_127));
                  MR_hl_field(MR_mktag(1), Spec_89, 4) = ((MR_Box) (Pieces_88));
                }
                {
                  STATE_VARIABLE_Specs_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_128_128, 0) = ((MR_Box) (Spec_89));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_128_128, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Promises_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_129_129, 0) = ((MR_Box) (ItemPromise_79));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_129_129, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_20));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_135_135, 0) = ((MR_Box) (ItemTypeClass_73));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_135_135, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_134_134, 0) = ((MR_Box) (ItemInstance_74));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_134_134, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_138_138, 0) = ((MR_Box) (ItemTypeDefn_70));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_138_138, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_130_130 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_DeclPragmas_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_DeclPragmas_130_130, 0) = ((MR_Box) (ItemDeclPragma_78));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_DeclPragmas_130_130, 1) = ((MR_Box) (STATE_VARIABLE_DeclPragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_138_138 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_137_137 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_135_135 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_134_134 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_133_133 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_132_132 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_131_131 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Promises_129_129 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_0_22;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_58;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_138_138;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_137_137;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_136_136;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_135_135;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_134_134;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_133_133;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_132_132;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_131_131;
      next_value_of_STATE_VARIABLE_DeclPragmas_0_18 = STATE_VARIABLE_DeclPragmas_130_130;
      next_value_of_STATE_VARIABLE_Promises_0_20 = STATE_VARIABLE_Promises_129_129;
      next_value_of_STATE_VARIABLE_Specs_0_22 = STATE_VARIABLE_Specs_128_128;
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
      STATE_VARIABLE_Promises_0_20 = next_value_of_STATE_VARIABLE_Promises_0_20;
      STATE_VARIABLE_Specs_0_22 = next_value_of_STATE_VARIABLE_Specs_0_22;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ForeignEnumMap_17;

    parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnumMap_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumMap_17));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(
  MR_Word ForeignEnums_3)
{
  {
    MR_Word ForeignEnumMap_4;
    MR_Word Var_6;
    MR_Box conv1_ForeignEnumMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[54]), ForeignEnums_3, ((MR_Box) (Var_6)), &conv1_ForeignEnumMap_4);
    ForeignEnumMap_4 = ((MR_Word) (conv1_ForeignEnumMap_4));
    return ForeignEnumMap_4;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModeDefnMap_23;

    parse_tree__convert_parse_tree__add_mode_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefnMap_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefnMap_23));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(
  MR_Word ModeDefnInfos_3)
{
  {
    MR_Word ModeDefnMap_4;
    MR_Word Var_6;
    MR_Box conv1_ModeDefnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[53]), ModeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_ModeDefnMap_4);
    ModeDefnMap_4 = ((MR_Word) (conv1_ModeDefnMap_4));
    return ModeDefnMap_4;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstDefnMap_24;

    parse_tree__convert_parse_tree__add_inst_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefnMap_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefnMap_24));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(
  MR_Word InstDefnInfos_3)
{
  {
    MR_Word InstDefnMap_4;
    MR_Word Var_6;
    MR_Box conv1_InstDefnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[52]), InstDefnInfos_3, ((MR_Box) (Var_6)), &conv1_InstDefnMap_4);
    InstDefnMap_4 = ((MR_Word) (conv1_InstDefnMap_4));
    return InstDefnMap_4;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeDefnMap_43;

    parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefnMap_43);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_43));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(
  MR_Word TypeDefnInfos_3)
{
  {
    MR_Word TypeDefnMap_4;
    MR_Word Var_6;
    MR_Box conv1_TypeDefnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[51]), TypeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeDefnMap_4);
    TypeDefnMap_4 = ((MR_Word) (conv1_TypeDefnMap_4));
    return TypeDefnMap_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__276__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__273__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0(
  MR_Word ParseTreeInt3_3)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 1))));
    MR_Word InclMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 3))));
    MR_Word ImportUseMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 5))));
    MR_Word IntTypeDefnMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 6))));
    MR_Word IntInstDefnMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 7))));
    MR_Word IntModeDefnMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 8))));
    MR_Word IntTypeClasses_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 9))));
    MR_Word IntInstances_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 10))));
    MR_Word IntTypeRepnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 11))));
    MR_Word IntIncls_18;
    MR_Word ImpIncls_19;
    MR_Word IntAvails_20;
    MR_Word ImpAvails_21;
    MR_Word IntItems_22;
    MR_Word Var_23;
    MR_Word Var_28;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word TypeDefns_61;
    MR_Word InstDefns_69;
    MR_Word ModeDefns_77;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_8, &IntIncls_18, &ImpIncls_19);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[12]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ImpIncls_19));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_23, (MR_String) "function \140parse_tree.convert_parse_tree.convert_parse_tree_int3_to_int\'/1", (MR_String) "parse_tree_int3 has imp includes");
    parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_10, &IntAvails_20, &ImpAvails_21);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ImpAvails_21));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "function \140parse_tree.convert_parse_tree.convert_parse_tree_int3_to_int\'/1", (MR_String) "parse_tree_int3 has imp avails");
    TypeDefns_61 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0(IntTypeDefnMap_11);
    Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[46]), TypeDefns_61);
    InstDefns_69 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0(IntInstDefnMap_12);
    Var_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[47]), InstDefns_69);
    ModeDefns_77 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0(IntModeDefnMap_13);
    Var_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[48]), ModeDefns_77);
    Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[49]), IntTypeClasses_14);
    Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[50]), IntInstances_15);
    Var_43 = parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_16);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_41, Var_43);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_38, Var_40);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_36, Var_37);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_34, Var_35);
    IntItems_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_32, Var_33);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_18));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_20));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_22));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__item_util__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__item_util__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__248__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__245__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0(
  MR_Word ParseTreeInt2_3)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 1))));
    MR_Word MaybeVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 2))));
    MR_Word InclMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 4))));
    MR_Word ImportUseMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 6))));
    MR_Word IntFIMSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 7))));
    MR_Word ImpFIMSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 8))));
    MR_Word IntTypeDefnMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 9))));
    MR_Word IntInstDefnMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 10))));
    MR_Word IntModeDefnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 11))));
    MR_Word IntTypeClasses_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 12))));
    MR_Word IntInstances_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 13))));
    MR_Word IntTypeRepnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 14))));
    MR_Word ImpTypeDefnMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 15))));
    MR_Word IntIncls_21;
    MR_Word ImpIncls_22;
    MR_Word IntAvails_23;
    MR_Word ImpAvails_24;
    MR_Word IntFIMs_25;
    MR_Word ImpFIMs_26;
    MR_Word IntItems_27;
    MR_Word ImpItems_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word TypeDefns_74;
    MR_Word InstDefns_82;
    MR_Word ModeDefns_90;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_9, &IntIncls_21, &ImpIncls_22);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[12]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ImpIncls_22));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_29, (MR_String) "function \140parse_tree.convert_parse_tree.convert_parse_tree_int2_to_int\'/1", (MR_String) "parse_tree_int2 has imp includes");
    parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_11, &IntAvails_23, &ImpAvails_24);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[13]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0_2));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (ImpAvails_24));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_34, (MR_String) "function \140parse_tree.convert_parse_tree.convert_parse_tree_int2_to_int\'/1", (MR_String) "parse_tree_int2 has imp avails");
    Var_38 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[39]), IntFIMSpecs_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_38, &IntFIMs_25);
    Var_40 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[40]), ImpFIMSpecs_13);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_40, &ImpFIMs_26);
    TypeDefns_74 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0(IntTypeDefnMap_14);
    Var_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[41]), TypeDefns_74);
    InstDefns_82 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0(IntInstDefnMap_15);
    Var_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[42]), InstDefns_82);
    ModeDefns_90 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0(IntModeDefnMap_16);
    Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[43]), ModeDefns_90);
    Var_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[44]), IntTypeClasses_17);
    Var_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[45]), IntInstances_18);
    Var_53 = parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_19);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_51, Var_53);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_48, Var_50);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_46, Var_47);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_44, Var_45);
    IntItems_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_42, Var_43);
    ImpItems_28 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_20);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_21));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_23));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_25));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_26));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_27));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_28));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__item_util__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__item_util__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0(
  MR_Word ParseTreeInt1_3)
{
  {
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 1))));
    MR_Word MaybeVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 2))));
    MR_Word InclMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 5))));
    MR_Word ImportUseMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 8))));
    MR_Word IntFIMSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 9))));
    MR_Word ImpFIMSpecs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 10))));
    MR_Word IntTypeDefnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 11))));
    MR_Word IntInstDefnMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 12))));
    MR_Word IntModeDefnMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 13))));
    MR_Word IntTypeClasses_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 14))));
    MR_Word IntInstances_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 15))));
    MR_Word IntPredDecls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 16))));
    MR_Word IntModeDecls_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 17))));
    MR_Word IntDeclPragmas_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 18))));
    MR_Word IntPromises_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 19))));
    MR_Word IntTypeRepnMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 20))));
    MR_Word ImpTypeDefnMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 21))));
    MR_Word ImpForeignEnumMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 22))));
    MR_Word ImpTypeClasses_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 23))));
    MR_Word IntIncls_29;
    MR_Word ImpIncls_30;
    MR_Word IntAvails_31;
    MR_Word ImpAvails_32;
    MR_Word IntFIMs_33;
    MR_Word ImpFIMs_34;
    MR_Word IntItems_35;
    MR_Word ImpItems_36;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_10, &IntIncls_29, &ImpIncls_30);
    parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_13, &IntAvails_31, &ImpAvails_32);
    Var_38 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[30]), IntFIMSpecs_14);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_38, &IntFIMs_33);
    Var_40 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[31]), ImpFIMSpecs_15);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_40, &ImpFIMs_34);
    Var_42 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(IntTypeDefnMap_16);
    Var_44 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_17);
    Var_46 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_18);
    Var_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[32]), IntTypeClasses_19);
    Var_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[33]), IntInstances_20);
    Var_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[34]), IntPredDecls_21);
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[35]), IntModeDecls_22);
    Var_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[36]), IntDeclPragmas_23);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[37]), IntPromises_24);
    Var_65 = parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_25);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_63, Var_65);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_60, Var_62);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_57, Var_59);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_54, Var_56);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_51, Var_53);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_48, Var_50);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_46, Var_47);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_44, Var_45);
    IntItems_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_42, Var_43);
    Var_66 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_26);
    Var_68 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(ImpForeignEnumMap_27);
    Var_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[38]), ImpTypeClasses_28);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_68, Var_69);
    ImpItems_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_66, Var_67);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_29));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) (ImpIncls_30));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) (ImpAvails_32));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_33));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_34));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_35));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_36));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_type_repn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeRepns_7;

    parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepns_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepns_7));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0(
  MR_Word TypeCtorRepnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word TypeRepns_5;
    MR_Word TypeRepnsCord_13;
    MR_Word Var_15;
    MR_Box conv1_TypeRepnsCord_13;

    Var_15 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[24]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]), TypeCtorRepnMap_3, ((MR_Box) (Var_15)), &conv1_TypeRepnsCord_13);
    TypeRepnsCord_13 = ((MR_Word) (conv1_TypeRepnsCord_13));
    TypeRepns_5 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), TypeRepnsCord_13);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[29]), TypeRepns_5);
    return Items_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv13_HeadVar__2_2;

    conv13_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_2;

    conv12_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__2_2;

    conv11_HeadVar__2_2 = parse_tree__item_util__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2;

    conv10_HeadVar__2_2 = parse_tree__item_util__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__item_util__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__item_util__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0(
  MR_Word ParseTreeInt0_3)
{
  {
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 1))));
    MR_Word MaybeVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 2))));
    MR_Word InclMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 5))));
    MR_Word ImportUseMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 10))));
    MR_Word IntFIMSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 11))));
    MR_Word ImpFIMSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 12))));
    MR_Word IntTypeDefnMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 13))));
    MR_Word IntInstDefnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 14))));
    MR_Word IntModeDefnMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 15))));
    MR_Word IntTypeClasses_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 16))));
    MR_Word IntInstances_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 17))));
    MR_Word IntPredDecls_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 18))));
    MR_Word IntModeDecls_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 19))));
    MR_Word IntDeclPragmas_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 20))));
    MR_Word IntPromises_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 21))));
    MR_Word ImpTypeDefnMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 22))));
    MR_Word ImpInstDefnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 23))));
    MR_Word ImpModeDefnMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 24))));
    MR_Word ImpTypeClasses_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 25))));
    MR_Word ImpInstances_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 26))));
    MR_Word ImpPredDecls_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 27))));
    MR_Word ImpModeDecls_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 28))));
    MR_Word ImpForeignEnumMap_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 29))));
    MR_Word ImpDeclPragmas_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 30))));
    MR_Word ImpPromises_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 31))));
    MR_Word IntIncls_37;
    MR_Word ImpIncls_38;
    MR_Word IntAvails_39;
    MR_Word ImpAvails_40;
    MR_Word IntFIMs_41;
    MR_Word ImpFIMs_42;
    MR_Word IntItems_43;
    MR_Word ImpItems_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_94;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_10, &IntIncls_37, &ImpIncls_38);
    parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_15, &IntAvails_39, &ImpAvails_40);
    Var_46 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[14]), IntFIMSpecs_16);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_46, &IntFIMs_41);
    Var_48 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[15]), ImpFIMSpecs_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_48, &ImpFIMs_42);
    Var_50 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(IntTypeDefnMap_18);
    Var_52 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_19);
    Var_54 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_20);
    Var_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[16]), IntTypeClasses_21);
    Var_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[17]), IntInstances_22);
    Var_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), IntPredDecls_23);
    Var_65 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[19]), IntModeDecls_24);
    Var_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[20]), IntDeclPragmas_25);
    Var_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[21]), IntPromises_26);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_68, Var_70);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_65, Var_67);
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_62, Var_64);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_59, Var_61);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_56, Var_58);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_54, Var_55);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_52, Var_53);
    IntItems_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_50, Var_51);
    Var_72 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_27);
    Var_74 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(ImpInstDefnMap_28);
    Var_76 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(ImpModeDefnMap_29);
    Var_78 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[22]), ImpTypeClasses_30);
    Var_81 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[23]), ImpInstances_31);
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[24]), ImpPredDecls_32);
    Var_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]), ImpModeDecls_33);
    Var_90 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(ImpForeignEnumMap_34);
    Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]), ImpDeclPragmas_35);
    Var_94 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), ImpPromises_36);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_92, Var_94);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_90, Var_91);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_87, Var_89);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_84, Var_86);
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_81, Var_83);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_78, Var_80);
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_76, Var_77);
    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_74, Var_75);
    ImpItems_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_72, Var_73);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_37));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) (ImpIncls_38));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_39));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) (ImpAvails_40));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_41));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_42));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_43));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_44));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ForeignEnums_10;

    parse_tree__convert_parse_tree__accumulate_foreign_enum_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnums_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnums_10));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(
  MR_Word ForeignEnumMap_3)
{
  {
    MR_Word Items_4;
    MR_Word ForeignEnumItemsCord_5;
    MR_Word ForeignEnumItems_6;
    MR_Word Var_8;
    MR_Box conv1_ForeignEnumItemsCord_5;

    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[33]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), ForeignEnumMap_3, ((MR_Box) (Var_8)), &conv1_ForeignEnumItemsCord_5);
    ForeignEnumItemsCord_5 = ((MR_Word) (conv1_ForeignEnumItemsCord_5));
    ForeignEnumItems_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumItemsCord_5);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[13]), ForeignEnumItems_6);
    return Items_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(
  MR_Word ModeCtorDefnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word ModeDefns_5;

    ModeDefns_5 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0(ModeCtorDefnMap_3);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), ModeDefns_5);
    return Items_4;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModeDefns_9;

    parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefns_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefns_9));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0(
  MR_Word ModeCtorDefnMap_3)
{
  {
    MR_Word ModeDefns_4;
    MR_Word ModeDefnsCord_5;
    MR_Word Var_7;
    MR_Box conv1_ModeDefnsCord_5;

    Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[23]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), ModeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_ModeDefnsCord_5);
    ModeDefnsCord_5 = ((MR_Word) (conv1_ModeDefnsCord_5));
    ModeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ModeDefnsCord_5);
    return ModeDefns_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(
  MR_Word InstCtorDefnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word InstDefns_5;

    InstDefns_5 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0(InstCtorDefnMap_3);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]), InstDefns_5);
    return Items_4;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstDefns_9;

    parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefns_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefns_9));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0(
  MR_Word InstCtorDefnMap_3)
{
  {
    MR_Word InstDefns_4;
    MR_Word InstDefnsCord_5;
    MR_Word Var_7;
    MR_Box conv1_InstDefnsCord_5;

    Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[22]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), InstCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_InstDefnsCord_5);
    InstDefnsCord_5 = ((MR_Word) (conv1_InstDefnsCord_5));
    InstDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), InstDefnsCord_5);
    return InstDefns_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(
  MR_Word TypeCtorDefnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word TypeDefns_5;

    TypeDefns_5 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0(TypeCtorDefnMap_3);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[7]), TypeDefns_5);
    return Items_4;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeDefns_16;

    parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefns_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefns_16));
  }
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0(
  MR_Word TypeCtorDefnMap_3)
{
  {
    MR_Word TypeDefns_4;
    MR_Word TypeDefnsCord_5;
    MR_Word Var_7;
    MR_Box conv1_TypeDefnsCord_5;

    Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[21]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), TypeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_TypeDefnsCord_5);
    TypeDefnsCord_5 = ((MR_Word) (conv1_TypeDefnsCord_5));
    TypeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), TypeDefnsCord_5);
    return TypeDefns_4;
  }
}

void mercury__parse_tree__convert_parse_tree__init(void)
{
}

void mercury__parse_tree__convert_parse_tree__init_type_tables(void)
{
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
