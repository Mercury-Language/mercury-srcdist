/*
** Automatically generated from `convert_parse_tree.m'
** by the Mercury compiler,
** version rotd-2020-06-16
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
#include "enum.mih"
#include "getopt_io.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

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
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1626__1_2_p_0(
  MR_Word ImpHasMain_129,
  MR_Word HeadVar__2_188);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1624__1_1_p_0(
  MR_Word IntForeignExportLangs_123);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1622__1_1_p_0(
  MR_Word IntFactTablesSet_121);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1620__1_1_p_0(
  MR_Word IntForeignIncludeFilesCord_120);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1241__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__996__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_63);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__825__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_72);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__647__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__440__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__297__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__278__1_2_p_0(
  MR_Word ImpAvails_21,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__275__1_2_p_0(
  MR_Word ImpIncls_19,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__250__1_2_p_0(
  MR_Word ImpAvails_24,
  MR_Word HeadVar__2_37);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__247__1_2_p_0(
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
  MR_Word STATE_VARIABLE_ForeignEnums_0_10,
  MR_Word * STATE_VARIABLE_ForeignEnums_11);

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
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_TypeDefns_0_16,
  MR_Word * STATE_VARIABLE_TypeDefns_17);

static void MR_CALL 
parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_17,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_18);

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
  MR_Word STATE_VARIABLE_TypeDefnMap_0_43,
  MR_Word * STATE_VARIABLE_TypeDefnMap_44);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_5(
  MR_Box closure_arg);

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
parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0(
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
  MR_Word STATE_VARIABLE_RevIntForeignExportEnums_0_28,
  MR_Word * STATE_VARIABLE_RevIntForeignExportEnums_29,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_30,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_31,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_32,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_33,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_34,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_35,
  MR_Word STATE_VARIABLE_RevIntPromises_0_36,
  MR_Word * STATE_VARIABLE_RevIntPromises_37,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_38,
  MR_Word * STATE_VARIABLE_RevIntInitialises_39,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_40,
  MR_Word * STATE_VARIABLE_RevIntFinalises_41,
  MR_Word STATE_VARIABLE_RevIntMutables_0_42,
  MR_Word * STATE_VARIABLE_RevIntMutables_43,
  MR_Word STATE_VARIABLE_IntContents_0_44,
  MR_Word * STATE_VARIABLE_IntContents_45,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_46,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_47,
  MR_Word STATE_VARIABLE_ImpIncls_0_48,
  MR_Word * STATE_VARIABLE_ImpIncls_49,
  MR_Word STATE_VARIABLE_ImpImportMap_0_50,
  MR_Word * STATE_VARIABLE_ImpImportMap_51,
  MR_Word STATE_VARIABLE_ImpUseMap_0_52,
  MR_Word * STATE_VARIABLE_ImpUseMap_53,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_54,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_55,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsAbs_0_56,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsAbs_57,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsMer_0_58,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsMer_59,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsForeign_0_60,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsForeign_61,
  MR_Word STATE_VARIABLE_RevImpInstDefns_0_62,
  MR_Word * STATE_VARIABLE_RevImpInstDefns_63,
  MR_Word STATE_VARIABLE_RevImpModeDefns_0_64,
  MR_Word * STATE_VARIABLE_RevImpModeDefns_65,
  MR_Word STATE_VARIABLE_RevImpTypeClasses_0_66,
  MR_Word * STATE_VARIABLE_RevImpTypeClasses_67,
  MR_Word STATE_VARIABLE_RevImpInstances_0_68,
  MR_Word * STATE_VARIABLE_RevImpInstances_69,
  MR_Word STATE_VARIABLE_RevImpPredDecls_0_70,
  MR_Word * STATE_VARIABLE_RevImpPredDecls_71,
  MR_Word STATE_VARIABLE_RevImpModeDecls_0_72,
  MR_Word * STATE_VARIABLE_RevImpModeDecls_73,
  MR_Word STATE_VARIABLE_RevImpClauses_0_74,
  MR_Word * STATE_VARIABLE_RevImpClauses_75,
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_76,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_77,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_78,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_79,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_80,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_81,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_82,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_83,
  MR_Word STATE_VARIABLE_RevImpPromises_0_84,
  MR_Word * STATE_VARIABLE_RevImpPromises_85,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_86,
  MR_Word * STATE_VARIABLE_RevImpInitialises_87,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_88,
  MR_Word * STATE_VARIABLE_RevImpFinalises_89,
  MR_Word STATE_VARIABLE_RevImpMutables_0_90,
  MR_Word * STATE_VARIABLE_RevImpMutables_91,
  MR_Word STATE_VARIABLE_ImpContents_0_92,
  MR_Word * STATE_VARIABLE_ImpContents_93,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_94,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_95,
  MR_Word STATE_VARIABLE_Specs_0_96,
  MR_Word * STATE_VARIABLE_Specs_97);

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
parse_tree__convert_parse_tree__classify_src_items_int_41_p_0(
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
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_20,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_21,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_23,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevImplPragmas_25,
  MR_Word STATE_VARIABLE_BadClausePreds_0_26,
  MR_Word * STATE_VARIABLE_BadClausePreds_27,
  MR_Word STATE_VARIABLE_RevPromises_0_28,
  MR_Word * STATE_VARIABLE_RevPromises_29,
  MR_Word STATE_VARIABLE_RevInitialises_0_30,
  MR_Word * STATE_VARIABLE_RevInitialises_31,
  MR_Word STATE_VARIABLE_RevFinalises_0_32,
  MR_Word * STATE_VARIABLE_RevFinalises_33,
  MR_Word STATE_VARIABLE_RevMutables_0_34,
  MR_Word * STATE_VARIABLE_RevMutables_35,
  MR_Word STATE_VARIABLE_Contents_0_36,
  MR_Word * STATE_VARIABLE_Contents_37,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_38,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

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
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_36(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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


static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[124][2];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[113][3];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[14][6];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[29][5];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[2][8];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[5][4];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][9];




static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[124][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma for the same module/language combination"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because there is a"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant,"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma in the interface section is here."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[35])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int0 file may not contain"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int1 file may not contain"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int file may not contain"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .opt file may not contain"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause for"))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A Mercury source file may not contain"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma for"))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate"))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[113][3] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
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
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 68 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 69 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 72 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 80 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_21)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 82 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_23)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 84 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[18])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[19])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_32)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 92 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_33)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[20])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[21])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_35)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[22])),
    ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_36)),
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
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 102 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0_2)),
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
  /* row 112 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[28])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_9)),
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
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
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
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
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
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_TypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
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
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1626__1_2_p_0(
  MR_Word ImpHasMain_129,
  MR_Word HeadVar__2_188)
{
  {
    MR_bool succeeded = (ImpHasMain_129 == HeadVar__2_188);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1624__1_1_p_0(
  MR_Word IntForeignExportLangs_123)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntForeignExportLangs_123);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1622__1_1_p_0(
  MR_Word IntFactTablesSet_121)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntFactTablesSet_121);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1620__1_1_p_0(
  MR_Word IntForeignIncludeFilesCord_120)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), IntForeignIncludeFilesCord_120);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1241__1_2_p_0(
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
  MR_Word HeadVar__2_63)
{
  {
    MR_bool succeeded = (OptFileKind_9 == HeadVar__2_63);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__825__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_72)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_72);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__647__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_62)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_62);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__440__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_68);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__297__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_77);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__278__1_2_p_0(
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
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__275__1_2_p_0(
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
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__250__1_2_p_0(
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
parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__247__1_2_p_0(
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
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[122])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[121])));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[120])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[123])));
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
        MR_hl_field(MR_mktag(0), PrevMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[97])));
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
        MR_hl_field(MR_mktag(2), Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 16U));
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
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[86])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[122])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[121])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[120])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      ImpPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[119])));
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
      MR_hl_field(MR_mktag(0), IntMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
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
      MR_hl_field(MR_mktag(2), Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 16U));
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
  MR_Word STATE_VARIABLE_ForeignEnums_0_10,
  MR_Word * STATE_VARIABLE_ForeignEnums_11)
{
  {
    MR_Word ForeignEnumsC_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 0))));
    MR_Word ForeignEnumsJava_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 1))));
    MR_Word ForeignEnumsCsharp_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 2))));
    MR_Word ForeignEnumsErlang_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_4, (MR_Integer) 3))));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    Var_14 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsC_6);
    Var_16 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsJava_7);
    Var_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsCsharp_8);
    Var_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsErlang_9);
    Var_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), Var_18, Var_19);
    Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), Var_16, Var_17);
    Var_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), Var_14, Var_15);
    *STATE_VARIABLE_ForeignEnums_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnums_0_10, Var_13);
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
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 5))));

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
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 5))));

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
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 5))));

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
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 5))));

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
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 5))));

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
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_TypeDefnInfo_4;

    conv8_TypeDefnInfo_4 = parse_tree__convert_parse_tree__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_TypeDefnInfo_4));
    return wrapper_arg_2;
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
  MR_Word STATE_VARIABLE_TypeDefns_0_16,
  MR_Word * STATE_VARIABLE_TypeDefns_17)
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
    MR_Word ForeignDefnsErlang_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_11, (MR_Integer) 3))));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;

    if ((AbstractSolverDefns_6 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractSolverDefns_6, (MR_Integer) 0))));

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (X_72));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[104]), Var_23);
    Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[105]), SolverDefns_7);
    if ((AbstractStdDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_30 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractStdDefns_8, (MR_Integer) 0))));

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (X_75));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[106]), Var_30);
    Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[107]), EqvDefns_9);
    Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[108]), DuDefns_10);
    Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[109]), ForeignDefnsC_12);
    Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[110]), ForeignDefnsJava_13);
    Var_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[111]), ForeignDefnsCsharp_14);
    Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[112]), ForeignDefnsErlang_15);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_44, Var_46);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_41, Var_43);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_38, Var_40);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_35, Var_37);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_32, Var_34);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_28, Var_31);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_25, Var_27);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_21, Var_24);
    Var_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_20);
    *STATE_VARIABLE_TypeDefns_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), STATE_VARIABLE_TypeDefns_0_16, Var_19);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_17,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_18)
{
  {
    MR_bool succeeded;
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_4, (MR_Integer) 1))));
    MR_Word AllEnums_16;
    MR_Word STATE_VARIABLE_ForeignEnumsC_19_19;
    MR_Word STATE_VARIABLE_ForeignEnumsJava_20_20;
    MR_Word STATE_VARIABLE_ForeignEnumsCsharp_21_21;
    MR_Word STATE_VARIABLE_ForeignEnumsErlang_22_22;
    MR_Word STATE_VARIABLE_ForeignEnumsErlang_27_27;
    MR_Word STATE_VARIABLE_ForeignEnumsCsharp_30_30;
    MR_Word STATE_VARIABLE_ForeignEnumsJava_33_33;
    MR_Word STATE_VARIABLE_ForeignEnumsC_36_36;
    MR_Word AllEnums0_15;
    MR_Box conv0_AllEnums0_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), STATE_VARIABLE_ForeignEnumMap_0_17, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums0_15);
    if (succeeded)
    {
      AllEnums0_15 = ((MR_Word) (conv0_AllEnums0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      STATE_VARIABLE_ForeignEnumsC_19_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_15, (MR_Integer) 0))));
      STATE_VARIABLE_ForeignEnumsJava_20_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_15, (MR_Integer) 1))));
      STATE_VARIABLE_ForeignEnumsCsharp_21_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_15, (MR_Integer) 2))));
      STATE_VARIABLE_ForeignEnumsErlang_22_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums0_15, (MR_Integer) 3))));
    }
    else
    {
      STATE_VARIABLE_ForeignEnumsC_19_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignEnumsJava_20_20 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignEnumsCsharp_21_21 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignEnumsErlang_22_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    switch (Lang_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsC_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsC_19_19, Var_37);
          STATE_VARIABLE_ForeignEnumsJava_33_33 = STATE_VARIABLE_ForeignEnumsJava_20_20;
          STATE_VARIABLE_ForeignEnumsCsharp_30_30 = STATE_VARIABLE_ForeignEnumsCsharp_21_21;
          STATE_VARIABLE_ForeignEnumsErlang_27_27 = STATE_VARIABLE_ForeignEnumsErlang_22_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_31;

          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsCsharp_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsCsharp_21_21, Var_31);
          STATE_VARIABLE_ForeignEnumsC_36_36 = STATE_VARIABLE_ForeignEnumsC_19_19;
          STATE_VARIABLE_ForeignEnumsJava_33_33 = STATE_VARIABLE_ForeignEnumsJava_20_20;
          STATE_VARIABLE_ForeignEnumsErlang_27_27 = STATE_VARIABLE_ForeignEnumsErlang_22_22;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsErlang_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsErlang_22_22, Var_28);
          STATE_VARIABLE_ForeignEnumsC_36_36 = STATE_VARIABLE_ForeignEnumsC_19_19;
          STATE_VARIABLE_ForeignEnumsJava_33_33 = STATE_VARIABLE_ForeignEnumsJava_20_20;
          STATE_VARIABLE_ForeignEnumsCsharp_30_30 = STATE_VARIABLE_ForeignEnumsCsharp_21_21;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_34;

          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ForeignEnumInfo_4));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_ForeignEnumsJava_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsJava_20_20, Var_34);
          STATE_VARIABLE_ForeignEnumsC_36_36 = STATE_VARIABLE_ForeignEnumsC_19_19;
          STATE_VARIABLE_ForeignEnumsCsharp_30_30 = STATE_VARIABLE_ForeignEnumsCsharp_21_21;
          STATE_VARIABLE_ForeignEnumsErlang_27_27 = STATE_VARIABLE_ForeignEnumsErlang_22_22;
        }
        break;
    }
    {
      AllEnums_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllEnums_16, 0) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsC_36_36));
      MR_hl_field(MR_mktag(0), AllEnums_16, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsJava_33_33));
      MR_hl_field(MR_mktag(0), AllEnums_16, 2) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsCsharp_30_30));
      MR_hl_field(MR_mktag(0), AllEnums_16, 3) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsErlang_27_27));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (AllEnums_16)), STATE_VARIABLE_ForeignEnumMap_0_17, STATE_VARIABLE_ForeignEnumMap_18);
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
    MR_Word SNA_13;
    MR_Word AllDefns0_14;
    MR_Box conv0_AllDefns0_14;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), Params_7, &Arity_12);
    {
      SNA_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), SNA_13, 1) = ((MR_Box) (Arity_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), STATE_VARIABLE_ModeDefnMap_0_22, ((MR_Box) (SNA_13)), &conv0_AllDefns0_14);
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
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (SNA_13)), ((MR_Box) (AllDefns_18)), STATE_VARIABLE_ModeDefnMap_0_22, STATE_VARIABLE_ModeDefnMap_23);
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
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (SNA_13)), ((MR_Box) (AllDefns_32)), STATE_VARIABLE_ModeDefnMap_0_22, STATE_VARIABLE_ModeDefnMap_23);
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
    MR_Word SNA_14;
    MR_Word AllDefns0_15;
    MR_Box conv0_AllDefns0_15;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), Params_7, &Arity_13);
    {
      SNA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA_14, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), SNA_14, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), STATE_VARIABLE_InstDefnMap_0_23, ((MR_Box) (SNA_14)), &conv0_AllDefns0_15);
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
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (SNA_14)), ((MR_Box) (AllDefns_19)), STATE_VARIABLE_InstDefnMap_0_23, STATE_VARIABLE_InstDefnMap_24);
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
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (SNA_14)), ((MR_Box) (AllDefns_33)), STATE_VARIABLE_InstDefnMap_0_23, STATE_VARIABLE_InstDefnMap_24);
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_43,
  MR_Word * STATE_VARIABLE_TypeDefnMap_44)
{
  {
    MR_bool succeeded;
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 0))));
    MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 1))));
    MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 2))));
    MR_Integer Arity_12;
    MR_Word TypeCtor_13;
    MR_Word AllDefns_42;
    MR_Word STATE_VARIABLE_AbstractSolverDefns_45_45;
    MR_Word STATE_VARIABLE_SolverDefns_46_46;
    MR_Word STATE_VARIABLE_AbstractStdDefns_47_47;
    MR_Word STATE_VARIABLE_EqvDefns_48_48;
    MR_Word STATE_VARIABLE_DuDefns_49_49;
    MR_Word STATE_VARIABLE_ForeignDefnsC_51_51;
    MR_Word STATE_VARIABLE_ForeignDefnsJava_52_52;
    MR_Word STATE_VARIABLE_ForeignDefnsCsharp_53_53;
    MR_Word STATE_VARIABLE_ForeignDefnsErlang_54_54;
    MR_Word STATE_VARIABLE_ForeignDefnsErlang_64_64;
    MR_Word STATE_VARIABLE_ForeignDefnsCsharp_67_67;
    MR_Word STATE_VARIABLE_ForeignDefnsJava_70_70;
    MR_Word STATE_VARIABLE_ForeignDefnsC_73_73;
    MR_Word STATE_VARIABLE_DuDefns_76_76;
    MR_Word STATE_VARIABLE_EqvDefns_79_79;
    MR_Word STATE_VARIABLE_SolverDefns_82_82;
    MR_Word STATE_VARIABLE_AbstractStdDefns_85_85;
    MR_Word STATE_VARIABLE_AbstractSolverDefns_88_88;
    MR_Word Var_91;
    MR_Integer Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word AllDefns0_23;
    MR_Box conv0_AllDefns0_23;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[25]), Params_7, &Arity_12);
    {
      TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), TypeCtor_13, 1) = ((MR_Box) (Arity_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), STATE_VARIABLE_TypeDefnMap_0_43, ((MR_Box) (TypeCtor_13)), &conv0_AllDefns0_23);
    if (succeeded)
    {
      AllDefns0_23 = ((MR_Word) (conv0_AllDefns0_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_50;

      STATE_VARIABLE_AbstractSolverDefns_45_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 0))));
      STATE_VARIABLE_SolverDefns_46_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 1))));
      STATE_VARIABLE_AbstractStdDefns_47_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 2))));
      STATE_VARIABLE_EqvDefns_48_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 3))));
      STATE_VARIABLE_DuDefns_49_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 4))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 5))));
      STATE_VARIABLE_ForeignDefnsC_51_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
      STATE_VARIABLE_ForeignDefnsJava_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
      STATE_VARIABLE_ForeignDefnsCsharp_53_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 2))));
      STATE_VARIABLE_ForeignDefnsErlang_54_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 3))));
    }
    else
    {
      STATE_VARIABLE_AbstractSolverDefns_45_45 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_SolverDefns_46_46 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_AbstractStdDefns_47_47 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_EqvDefns_48_48 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_DuDefns_49_49 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsC_51_51 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsJava_52_52 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsCsharp_53_53 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ForeignDefnsErlang_54_54 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 0))));
    Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 1))));
    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 3))));
    Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 4))));
    Var_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) TypeDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_31 = (MR_Word) ((MR_Word) (TypeDefn_8));
          MR_Word DuDefnInfo_32;
          MR_Word Var_77;

          {
            DuDefnInfo_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 0) = ((MR_Box) (Var_142));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 1) = ((MR_Box) (Var_141));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 2) = ((MR_Box) (DetailsDu_31));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 3) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 4) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(0), DuDefnInfo_32, 5) = ((MR_Box) (Var_137));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (DuDefnInfo_32));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DuDefns_76_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), STATE_VARIABLE_DuDefns_49_49, Var_77);
          STATE_VARIABLE_AbstractSolverDefns_88_88 = STATE_VARIABLE_AbstractSolverDefns_45_45;
          STATE_VARIABLE_SolverDefns_82_82 = STATE_VARIABLE_SolverDefns_46_46;
          STATE_VARIABLE_AbstractStdDefns_85_85 = STATE_VARIABLE_AbstractStdDefns_47_47;
          STATE_VARIABLE_EqvDefns_79_79 = STATE_VARIABLE_EqvDefns_48_48;
          STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
          STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
          STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
          STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_27 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 1));
          MR_Word SolverDefnInfo_28;
          MR_Word Var_83;

          {
            SolverDefnInfo_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 0) = ((MR_Box) (Var_142));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 1) = ((MR_Box) (Var_141));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 2) = ((MR_Box) (DetailsSolver_27));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 3) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 4) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(0), SolverDefnInfo_28, 5) = ((MR_Box) (Var_137));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (SolverDefnInfo_28));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_SolverDefns_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), STATE_VARIABLE_SolverDefns_46_46, Var_83);
          STATE_VARIABLE_AbstractSolverDefns_88_88 = STATE_VARIABLE_AbstractSolverDefns_45_45;
          STATE_VARIABLE_AbstractStdDefns_85_85 = STATE_VARIABLE_AbstractStdDefns_47_47;
          STATE_VARIABLE_EqvDefns_79_79 = STATE_VARIABLE_EqvDefns_48_48;
          STATE_VARIABLE_DuDefns_76_76 = STATE_VARIABLE_DuDefns_49_49;
          STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
          STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
          STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
          STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_8, (MR_Integer) 0))));
          MR_Word EqvDefnInfo_30;
          MR_Word Var_80;

          {
            EqvDefnInfo_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 0) = ((MR_Box) (Var_142));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 1) = ((MR_Box) (Var_141));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 2) = ((MR_Box) (DetailsEqv_29));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 3) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 4) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(0), EqvDefnInfo_30, 5) = ((MR_Box) (Var_137));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (EqvDefnInfo_30));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_EqvDefns_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), STATE_VARIABLE_EqvDefns_48_48, Var_80);
          STATE_VARIABLE_AbstractSolverDefns_88_88 = STATE_VARIABLE_AbstractSolverDefns_45_45;
          STATE_VARIABLE_SolverDefns_82_82 = STATE_VARIABLE_SolverDefns_46_46;
          STATE_VARIABLE_AbstractStdDefns_85_85 = STATE_VARIABLE_AbstractStdDefns_47_47;
          STATE_VARIABLE_DuDefns_76_76 = STATE_VARIABLE_DuDefns_49_49;
          STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
          STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
          STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
          STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsAbstract_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
              MR_Word AbstractDefnInfo_25;

              {
                AbstractDefnInfo_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_25, 0) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_25, 1) = ((MR_Box) (Var_141));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_25, 2) = ((MR_Box) (DetailsAbstract_24));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_25, 3) = ((MR_Box) (Var_139));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_25, 4) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), AbstractDefnInfo_25, 5) = ((MR_Box) (Var_137));
              }
              switch (MR_tag((MR_Word) DetailsAbstract_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DetailsAbstract_24)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_86;

                        {
                          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (AbstractDefnInfo_25));
                          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        STATE_VARIABLE_AbstractStdDefns_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractStdDefns_47_47, Var_86);
                        STATE_VARIABLE_AbstractSolverDefns_88_88 = STATE_VARIABLE_AbstractSolverDefns_45_45;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_89;

                        {
                          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (AbstractDefnInfo_25));
                          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        STATE_VARIABLE_AbstractSolverDefns_88_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractSolverDefns_45_45, Var_89);
                        STATE_VARIABLE_AbstractStdDefns_85_85 = STATE_VARIABLE_AbstractStdDefns_47_47;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_86;

                    {
                      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (AbstractDefnInfo_25));
                      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_AbstractStdDefns_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbstractStdDefns_47_47, Var_86);
                    STATE_VARIABLE_AbstractSolverDefns_88_88 = STATE_VARIABLE_AbstractSolverDefns_45_45;
                  }
                  break;
              }
              STATE_VARIABLE_SolverDefns_82_82 = STATE_VARIABLE_SolverDefns_46_46;
              STATE_VARIABLE_EqvDefns_79_79 = STATE_VARIABLE_EqvDefns_48_48;
              STATE_VARIABLE_DuDefns_76_76 = STATE_VARIABLE_DuDefns_49_49;
              STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
              STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
              STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
              STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
              MR_Word ForeignDefnInfo_34;
              MR_Word LangType_35;

              {
                ForeignDefnInfo_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 0) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 1) = ((MR_Box) (Var_141));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 2) = ((MR_Box) (DetailsForeign_33));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 3) = ((MR_Box) (Var_139));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 4) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), ForeignDefnInfo_34, 5) = ((MR_Box) (Var_137));
              }
              LangType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_33, (MR_Integer) 0))));
              switch (MR_tag((MR_Word) LangType_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_74;

                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsC_73_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsC_51_51, Var_74);
                    STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
                    STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
                    STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_71;

                    {
                      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsJava_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsJava_52_52, Var_71);
                    STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
                    STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
                    STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_68;

                    {
                      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsCsharp_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsCsharp_53_53, Var_68);
                    STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
                    STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
                    STATE_VARIABLE_ForeignDefnsErlang_64_64 = STATE_VARIABLE_ForeignDefnsErlang_54_54;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Var_65;

                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ForeignDefnInfo_34));
                      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_ForeignDefnsErlang_64_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), STATE_VARIABLE_ForeignDefnsErlang_54_54, Var_65);
                    STATE_VARIABLE_ForeignDefnsC_73_73 = STATE_VARIABLE_ForeignDefnsC_51_51;
                    STATE_VARIABLE_ForeignDefnsJava_70_70 = STATE_VARIABLE_ForeignDefnsJava_52_52;
                    STATE_VARIABLE_ForeignDefnsCsharp_67_67 = STATE_VARIABLE_ForeignDefnsCsharp_53_53;
                  }
                  break;
              }
              STATE_VARIABLE_AbstractSolverDefns_88_88 = STATE_VARIABLE_AbstractSolverDefns_45_45;
              STATE_VARIABLE_SolverDefns_82_82 = STATE_VARIABLE_SolverDefns_46_46;
              STATE_VARIABLE_AbstractStdDefns_85_85 = STATE_VARIABLE_AbstractStdDefns_47_47;
              STATE_VARIABLE_EqvDefns_79_79 = STATE_VARIABLE_EqvDefns_48_48;
              STATE_VARIABLE_DuDefns_76_76 = STATE_VARIABLE_DuDefns_49_49;
            }
            break;
        }
        break;
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsC_73_73));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsJava_70_70));
      MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsCsharp_67_67));
      MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsErlang_64_64));
    }
    {
      AllDefns_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllDefns_42, 0) = ((MR_Box) (STATE_VARIABLE_AbstractSolverDefns_88_88));
      MR_hl_field(MR_mktag(0), AllDefns_42, 1) = ((MR_Box) (STATE_VARIABLE_SolverDefns_82_82));
      MR_hl_field(MR_mktag(0), AllDefns_42, 2) = ((MR_Box) (STATE_VARIABLE_AbstractStdDefns_85_85));
      MR_hl_field(MR_mktag(0), AllDefns_42, 3) = ((MR_Box) (STATE_VARIABLE_EqvDefns_79_79));
      MR_hl_field(MR_mktag(0), AllDefns_42, 4) = ((MR_Box) (STATE_VARIABLE_DuDefns_76_76));
      MR_hl_field(MR_mktag(0), AllDefns_42, 5) = ((MR_Box) (Var_91));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (AllDefns_42)), STATE_VARIABLE_TypeDefnMap_0_43, STATE_VARIABLE_TypeDefnMap_44);
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
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1626__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1624__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1622__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_raw_comp_unit_to_module_src__1620__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
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
  MR_Word STATE_VARIABLE_Specs_0_130,
  MR_Word * STATE_VARIABLE_Specs_131)
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
    MR_Word RevIntForeignExportEnums_36;
    MR_Word RevIntDeclPragmas_37;
    MR_Word RevIntImplPragmas_38;
    MR_Word IntBadClausePreds_39;
    MR_Word RevIntPromises_40;
    MR_Word RevIntInitialises_41;
    MR_Word RevIntFinalises_42;
    MR_Word RevIntMutables_43;
    MR_Word IntContents_44;
    MR_Word IntImplicitAvailNeeds_45;
    MR_Word ImpIncls_46;
    MR_Word ImpImportMap_47;
    MR_Word ImpUseMap_48;
    MR_Word ImpFIMSpecMap1_49;
    MR_Word RevImpTypeDefnsAbs_50;
    MR_Word RevImpTypeDefnsMer_51;
    MR_Word RevImpTypeDefnsForeign_52;
    MR_Word RevImpInstDefns_53;
    MR_Word RevImpModeDefns_54;
    MR_Word RevImpTypeClasses_55;
    MR_Word RevImpInstances0_56;
    MR_Word RevImpPredDecls_57;
    MR_Word RevImpModeDecls_58;
    MR_Word RevImpClauses_59;
    MR_Word RevImpForeignEnums_60;
    MR_Word RevImpForeignExportEnums_61;
    MR_Word RevImpDeclPragmas_62;
    MR_Word RevImpImplPragmas_63;
    MR_Word RevImpPromises_64;
    MR_Word RevImpInitialises0_65;
    MR_Word RevImpFinalises0_66;
    MR_Word RevImpMutables0_67;
    MR_Word ImpContents_68;
    MR_Word ImpImplicitAvailNeeds_69;
    MR_Word IntInclMap_70;
    MR_Word ImpInclMap_71;
    MR_Word InclMap_72;
    MR_Word IntTypeDefnsAbs_73;
    MR_Word IntTypeDefnsMer_74;
    MR_Word IntTypeDefnsForeign_75;
    MR_Word IntInstDefns_76;
    MR_Word IntModeDefns_77;
    MR_Word IntTypeClasses_78;
    MR_Word IntInstances0_79;
    MR_Word IntPredDecls_80;
    MR_Word IntModeDecls_81;
    MR_Word IntForeignExportEnums_82;
    MR_Word IntDeclPragmas_83;
    MR_Word IntImplPragmas_84;
    MR_Word IntPromises_85;
    MR_Word IntInitialises_86;
    MR_Word IntFinalises_87;
    MR_Word IntMutables_88;
    MR_Word ImpTypeDefnsAbs_89;
    MR_Word ImpTypeDefnsMer_90;
    MR_Word ImpTypeDefnsForeign_91;
    MR_Word ImpInstDefns_92;
    MR_Word ImpModeDefns_93;
    MR_Word ImpTypeClasses_94;
    MR_Word ImpInstances0_95;
    MR_Word ImpPredDecls_96;
    MR_Word ImpModeDecls_97;
    MR_Word ImpClauses_98;
    MR_Word ImpForeignEnums_99;
    MR_Word ImpForeignExportEnums_100;
    MR_Word ImpDeclPragmas_101;
    MR_Word ImpImplPragmas0_102;
    MR_Word ImpPromises_103;
    MR_Word ImpInitialises0_104;
    MR_Word ImpFinalises0_105;
    MR_Word ImpMutables0_106;
    MR_Word IntInstances_107;
    MR_Word ImpInstances_108;
    MR_Word ImpImplPragmas_110;
    MR_Word ImpInitialises_111;
    MR_Word ImpFinalises_112;
    MR_Word ImpMutables_113;
    MR_Word SectionImportUseMap_114;
    MR_Word ImportUseMap0_115;
    MR_Word ImportUseMap_116;
    MR_Word IntImpFIMSpecs_117;
    MR_Word ImpFIMSpecMap_118;
    MR_Word IntForeignIncludeFilesCord_120;
    MR_Word IntFactTablesSet_121;
    MR_Word IntForeignExportLangs_123;
    MR_Word ImpHasMain_129;
    MR_Word Var_145;
    MR_Word STATE_VARIABLE_Specs_169_169;
    MR_Word STATE_VARIABLE_Specs_170_170;
    MR_Word STATE_VARIABLE_Specs_171_171;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_176;
    MR_Word Var_179;
    MR_Word Var_182;
    MR_Word Var_185;
    MR_Box conv3_ImpFIMSpecMap_118;
    MR_Box conv2_STATE_VARIABLE_Specs_131;

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
    Var_145 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0));
    parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0(ItemBlocks_12, (MR_Word) ((MR_Unsigned) 0U), &IntIncls_23, IntImportMap0_13, &IntImportMap_24, IntUseMap0_14, &IntUseMap_25, IntFIMSpecMap0_15, &IntFIMSpecMap_26, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefnsAbs_27, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefnsMer_28, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefnsForeign_29, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstDefns_30, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeClasses_32, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstances0_33, (MR_Word) ((MR_Unsigned) 0U), &RevIntPredDecls_34, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_35, (MR_Word) ((MR_Unsigned) 0U), &RevIntForeignExportEnums_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclPragmas_37, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplPragmas_38, Var_145, &IntBadClausePreds_39, (MR_Word) ((MR_Unsigned) 0U), &RevIntPromises_40, (MR_Word) ((MR_Unsigned) 0U), &RevIntInitialises_41, (MR_Word) ((MR_Unsigned) 0U), &RevIntFinalises_42, (MR_Word) ((MR_Unsigned) 0U), &RevIntMutables_43, IntContents0_19, &IntContents_44, IntImplicitAvailNeeds0_20, &IntImplicitAvailNeeds_45, (MR_Word) ((MR_Unsigned) 0U), &ImpIncls_46, ImpImportMap0_16, &ImpImportMap_47, ImpUseMap0_17, &ImpUseMap_48, ImpFIMSpecMap0_18, &ImpFIMSpecMap1_49, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefnsAbs_50, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefnsMer_51, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefnsForeign_52, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstDefns_53, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDefns_54, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeClasses_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstances0_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpPredDecls_57, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_58, (MR_Word) ((MR_Unsigned) 0U), &RevImpClauses_59, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignEnums_60, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignExportEnums_61, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclPragmas_62, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplPragmas_63, (MR_Word) ((MR_Unsigned) 0U), &RevImpPromises_64, (MR_Word) ((MR_Unsigned) 0U), &RevImpInitialises0_65, (MR_Word) ((MR_Unsigned) 0U), &RevImpFinalises0_66, (MR_Word) ((MR_Unsigned) 0U), &RevImpMutables0_67, ImpContents0_21, &ImpContents_68, ImpImplicitAvailNeeds0_22, &ImpImplicitAvailNeeds_69, STATE_VARIABLE_Specs_0_130, &STATE_VARIABLE_Specs_169_169);
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_23, ImpIncls_46, &IntInclMap_70, &ImpInclMap_71, &InclMap_72, STATE_VARIABLE_Specs_169_169, &STATE_VARIABLE_Specs_170_170);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntTypeDefnsAbs_27, &IntTypeDefnsAbs_73);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntTypeDefnsMer_28, &IntTypeDefnsMer_74);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntTypeDefnsForeign_29, &IntTypeDefnsForeign_75);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), RevIntInstDefns_30, &IntInstDefns_76);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), RevIntModeDefns_31, &IntModeDefns_77);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevIntTypeClasses_32, &IntTypeClasses_78);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevIntInstances0_33, &IntInstances0_79);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevIntPredDecls_34, &IntPredDecls_80);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_35, &IntModeDecls_81);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), RevIntForeignExportEnums_36, &IntForeignExportEnums_82);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), RevIntDeclPragmas_37, &IntDeclPragmas_83);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), RevIntImplPragmas_38, &IntImplPragmas_84);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevIntPromises_40, &IntPromises_85);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevIntInitialises_41, &IntInitialises_86);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevIntFinalises_42, &IntFinalises_87);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevIntMutables_43, &IntMutables_88);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpTypeDefnsAbs_50, &ImpTypeDefnsAbs_89);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpTypeDefnsMer_51, &ImpTypeDefnsMer_90);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpTypeDefnsForeign_52, &ImpTypeDefnsForeign_91);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), RevImpInstDefns_53, &ImpInstDefns_92);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), RevImpModeDefns_54, &ImpModeDefns_93);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevImpTypeClasses_55, &ImpTypeClasses_94);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevImpInstances0_56, &ImpInstances0_95);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevImpPredDecls_57, &ImpPredDecls_96);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_58, &ImpModeDecls_97);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevImpClauses_59, &ImpClauses_98);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), RevImpForeignEnums_60, &ImpForeignEnums_99);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), RevImpForeignExportEnums_61, &ImpForeignExportEnums_100);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), RevImpDeclPragmas_62, &ImpDeclPragmas_101);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), RevImpImplPragmas_63, &ImpImplPragmas0_102);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevImpPromises_64, &ImpPromises_103);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevImpInitialises0_65, &ImpInitialises0_104);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevImpFinalises0_66, &ImpFinalises0_105);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevImpMutables0_67, &ImpMutables0_106);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), InclMap_72);
    if (succeeded)
    {
      IntInstances_107 = IntInstances0_79;
      ImpInstances_108 = ImpInstances0_95;
    }
    else
    {
      MR_Word MovedImpInstances_109;

      parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(IntInstances0_79, &IntInstances_107, &MovedImpInstances_109);
      ImpInstances_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MovedImpInstances_109, ImpInstances0_95);
    }
    ImpImplPragmas_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), IntImplPragmas_84, ImpImplPragmas0_102);
    ImpInitialises_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), IntInitialises_86, ImpInitialises0_104);
    ImpFinalises_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), IntFinalises_87, ImpFinalises0_105);
    ImpMutables_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), IntMutables_88, ImpMutables0_106);
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_10, IntImportMap_24, IntUseMap_25, ImpImportMap_47, ImpUseMap_48, &SectionImportUseMap_114, STATE_VARIABLE_Specs_170_170, &STATE_VARIABLE_Specs_171_171);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_114, &ImportUseMap0_115);
    parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(Globals_6, IntImplicitAvailNeeds_45, ImpImplicitAvailNeeds_69, ImportUseMap0_115, &ImportUseMap_116);
    Var_172 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_26);
    Var_173 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap1_49);
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_172, Var_173, &IntImpFIMSpecs_117);
    {
      Var_174 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_174, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_174, 3) = ((MR_Box) (IntFIMSpecMap_26));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), Var_174, IntImpFIMSpecs_117, ((MR_Box) (ImpFIMSpecMap1_49)), &conv3_ImpFIMSpecMap_118, ((MR_Box) (STATE_VARIABLE_Specs_171_171)), &conv2_STATE_VARIABLE_Specs_131);
    ImpFIMSpecMap_118 = ((MR_Word) (conv3_ImpFIMSpecMap_118));
    *STATE_VARIABLE_Specs_131 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_131));
    IntForeignIncludeFilesCord_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntContents_44, (MR_Integer) 0))));
    IntFactTablesSet_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntContents_44, (MR_Integer) 1))));
    IntForeignExportLangs_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntContents_44, (MR_Integer) 3))));
    ImpHasMain_129 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImpContents_68, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_176, 3) = ((MR_Box) (IntForeignIncludeFilesCord_120));
    }
    mercury__require__expect_3_p_0(Var_176, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "interface has foreign include files");
    {
      Var_179 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_179, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_179, 3) = ((MR_Box) (IntFactTablesSet_121));
    }
    mercury__require__expect_3_p_0(Var_179, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "interface has fact tables");
    {
      Var_182 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_182, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_182, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_182, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_182, 3) = ((MR_Box) (IntForeignExportLangs_123));
    }
    mercury__require__expect_3_p_0(Var_182, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "interface has foreign export languages");
    {
      Var_185 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[23]));
      MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (ImpHasMain_129));
      MR_hl_field(MR_mktag(0), Var_185, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_185, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_raw_comp_unit_to_module_src\'/5", (MR_String) "implementation has main");
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (44 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeModuleSrc_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_70));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_71));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_72));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_47));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_48));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_116));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_26));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_118));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntTypeDefnsAbs_73));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeDefnsMer_74));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntTypeDefnsForeign_75));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntInstDefns_76));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDefns_77));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntTypeClasses_78));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntInstances_107));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntPredDecls_80));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntModeDecls_81));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntForeignExportEnums_82));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntDeclPragmas_83));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntPromises_85));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (IntBadClausePreds_39));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeDefnsAbs_89));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpTypeDefnsMer_90));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpTypeDefnsForeign_91));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpInstDefns_92));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpModeDefns_93));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpTypeClasses_94));
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ImpInstances_108));
      MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ImpPredDecls_96));
      MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ImpModeDecls_97));
      MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ImpClauses_98));
      MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ImpForeignEnums_99));
      MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ImpForeignExportEnums_100));
      MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (ImpDeclPragmas_101));
      MR_hl_field(MR_mktag(0), base, 39) = ((MR_Box) (ImpImplPragmas_110));
      MR_hl_field(MR_mktag(0), base, 40) = ((MR_Box) (ImpPromises_103));
      MR_hl_field(MR_mktag(0), base, 41) = ((MR_Box) (ImpInitialises_111));
      MR_hl_field(MR_mktag(0), base, 42) = ((MR_Box) (ImpFinalises_112));
      MR_hl_field(MR_mktag(0), base, 43) = ((MR_Box) (ImpMutables_113));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0_2(
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
parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0_1(
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
parse_tree__convert_parse_tree__classify_src_items_in_blocks_97_p_0(
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
  MR_Word STATE_VARIABLE_RevIntForeignExportEnums_0_28,
  MR_Word * STATE_VARIABLE_RevIntForeignExportEnums_29,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_30,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_31,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_32,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_33,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_34,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_35,
  MR_Word STATE_VARIABLE_RevIntPromises_0_36,
  MR_Word * STATE_VARIABLE_RevIntPromises_37,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_38,
  MR_Word * STATE_VARIABLE_RevIntInitialises_39,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_40,
  MR_Word * STATE_VARIABLE_RevIntFinalises_41,
  MR_Word STATE_VARIABLE_RevIntMutables_0_42,
  MR_Word * STATE_VARIABLE_RevIntMutables_43,
  MR_Word STATE_VARIABLE_IntContents_0_44,
  MR_Word * STATE_VARIABLE_IntContents_45,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_46,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_47,
  MR_Word STATE_VARIABLE_ImpIncls_0_48,
  MR_Word * STATE_VARIABLE_ImpIncls_49,
  MR_Word STATE_VARIABLE_ImpImportMap_0_50,
  MR_Word * STATE_VARIABLE_ImpImportMap_51,
  MR_Word STATE_VARIABLE_ImpUseMap_0_52,
  MR_Word * STATE_VARIABLE_ImpUseMap_53,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_54,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_55,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsAbs_0_56,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsAbs_57,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsMer_0_58,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsMer_59,
  MR_Word STATE_VARIABLE_RevImpTypeDefnsForeign_0_60,
  MR_Word * STATE_VARIABLE_RevImpTypeDefnsForeign_61,
  MR_Word STATE_VARIABLE_RevImpInstDefns_0_62,
  MR_Word * STATE_VARIABLE_RevImpInstDefns_63,
  MR_Word STATE_VARIABLE_RevImpModeDefns_0_64,
  MR_Word * STATE_VARIABLE_RevImpModeDefns_65,
  MR_Word STATE_VARIABLE_RevImpTypeClasses_0_66,
  MR_Word * STATE_VARIABLE_RevImpTypeClasses_67,
  MR_Word STATE_VARIABLE_RevImpInstances_0_68,
  MR_Word * STATE_VARIABLE_RevImpInstances_69,
  MR_Word STATE_VARIABLE_RevImpPredDecls_0_70,
  MR_Word * STATE_VARIABLE_RevImpPredDecls_71,
  MR_Word STATE_VARIABLE_RevImpModeDecls_0_72,
  MR_Word * STATE_VARIABLE_RevImpModeDecls_73,
  MR_Word STATE_VARIABLE_RevImpClauses_0_74,
  MR_Word * STATE_VARIABLE_RevImpClauses_75,
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_76,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_77,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_78,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_79,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_80,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_81,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_82,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_83,
  MR_Word STATE_VARIABLE_RevImpPromises_0_84,
  MR_Word * STATE_VARIABLE_RevImpPromises_85,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_86,
  MR_Word * STATE_VARIABLE_RevImpInitialises_87,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_88,
  MR_Word * STATE_VARIABLE_RevImpFinalises_89,
  MR_Word STATE_VARIABLE_RevImpMutables_0_90,
  MR_Word * STATE_VARIABLE_RevImpMutables_91,
  MR_Word STATE_VARIABLE_ImpContents_0_92,
  MR_Word * STATE_VARIABLE_ImpContents_93,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_94,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_95,
  MR_Word STATE_VARIABLE_Specs_0_96,
  MR_Word * STATE_VARIABLE_Specs_97)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_97 = STATE_VARIABLE_Specs_0_96;
      *STATE_VARIABLE_ImpImplicitAvailNeeds_95 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_94;
      *STATE_VARIABLE_ImpContents_93 = STATE_VARIABLE_ImpContents_0_92;
      *STATE_VARIABLE_RevImpMutables_91 = STATE_VARIABLE_RevImpMutables_0_90;
      *STATE_VARIABLE_RevImpFinalises_89 = STATE_VARIABLE_RevImpFinalises_0_88;
      *STATE_VARIABLE_RevImpInitialises_87 = STATE_VARIABLE_RevImpInitialises_0_86;
      *STATE_VARIABLE_RevImpPromises_85 = STATE_VARIABLE_RevImpPromises_0_84;
      *STATE_VARIABLE_RevImpImplPragmas_83 = STATE_VARIABLE_RevImpImplPragmas_0_82;
      *STATE_VARIABLE_RevImpDeclPragmas_81 = STATE_VARIABLE_RevImpDeclPragmas_0_80;
      *STATE_VARIABLE_RevImpForeignExportEnums_79 = STATE_VARIABLE_RevImpForeignExportEnums_0_78;
      *STATE_VARIABLE_RevImpForeignEnums_77 = STATE_VARIABLE_RevImpForeignEnums_0_76;
      *STATE_VARIABLE_RevImpClauses_75 = STATE_VARIABLE_RevImpClauses_0_74;
      *STATE_VARIABLE_RevImpModeDecls_73 = STATE_VARIABLE_RevImpModeDecls_0_72;
      *STATE_VARIABLE_RevImpPredDecls_71 = STATE_VARIABLE_RevImpPredDecls_0_70;
      *STATE_VARIABLE_RevImpInstances_69 = STATE_VARIABLE_RevImpInstances_0_68;
      *STATE_VARIABLE_RevImpTypeClasses_67 = STATE_VARIABLE_RevImpTypeClasses_0_66;
      *STATE_VARIABLE_RevImpModeDefns_65 = STATE_VARIABLE_RevImpModeDefns_0_64;
      *STATE_VARIABLE_RevImpInstDefns_63 = STATE_VARIABLE_RevImpInstDefns_0_62;
      *STATE_VARIABLE_RevImpTypeDefnsForeign_61 = STATE_VARIABLE_RevImpTypeDefnsForeign_0_60;
      *STATE_VARIABLE_RevImpTypeDefnsMer_59 = STATE_VARIABLE_RevImpTypeDefnsMer_0_58;
      *STATE_VARIABLE_RevImpTypeDefnsAbs_57 = STATE_VARIABLE_RevImpTypeDefnsAbs_0_56;
      *STATE_VARIABLE_ImpFIMSpecMap_55 = STATE_VARIABLE_ImpFIMSpecMap_0_54;
      *STATE_VARIABLE_ImpUseMap_53 = STATE_VARIABLE_ImpUseMap_0_52;
      *STATE_VARIABLE_ImpImportMap_51 = STATE_VARIABLE_ImpImportMap_0_50;
      *STATE_VARIABLE_ImpIncls_49 = STATE_VARIABLE_ImpIncls_0_48;
      *STATE_VARIABLE_IntImplicitAvailNeeds_47 = STATE_VARIABLE_IntImplicitAvailNeeds_0_46;
      *STATE_VARIABLE_IntContents_45 = STATE_VARIABLE_IntContents_0_44;
      *STATE_VARIABLE_RevIntMutables_43 = STATE_VARIABLE_RevIntMutables_0_42;
      *STATE_VARIABLE_RevIntFinalises_41 = STATE_VARIABLE_RevIntFinalises_0_40;
      *STATE_VARIABLE_RevIntInitialises_39 = STATE_VARIABLE_RevIntInitialises_0_38;
      *STATE_VARIABLE_RevIntPromises_37 = STATE_VARIABLE_RevIntPromises_0_36;
      *STATE_VARIABLE_IntBadClausePreds_35 = STATE_VARIABLE_IntBadClausePreds_0_34;
      *STATE_VARIABLE_RevIntImplPragmas_33 = STATE_VARIABLE_RevIntImplPragmas_0_32;
      *STATE_VARIABLE_RevIntDeclPragmas_31 = STATE_VARIABLE_RevIntDeclPragmas_0_30;
      *STATE_VARIABLE_RevIntForeignExportEnums_29 = STATE_VARIABLE_RevIntForeignExportEnums_0_28;
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
      MR_Word ItemBlock_242 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_293 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_242, (MR_Integer) 1))));
      MR_Word Incls_294 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_242, (MR_Integer) 2))));
      MR_Word Avails_295 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_242, (MR_Integer) 3))));
      MR_Word FIMs_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_242, (MR_Integer) 4))));
      MR_Word Items_297 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_242, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_394_394;
      MR_Word STATE_VARIABLE_ImpImportMap_395_395;
      MR_Word STATE_VARIABLE_ImpUseMap_396_396;
      MR_Word STATE_VARIABLE_ImpFIMSpecMap_398_398;
      MR_Word STATE_VARIABLE_RevImpTypeDefnsAbs_400_400;
      MR_Word STATE_VARIABLE_RevImpTypeDefnsMer_401_401;
      MR_Word STATE_VARIABLE_RevImpTypeDefnsForeign_402_402;
      MR_Word STATE_VARIABLE_RevImpInstDefns_403_403;
      MR_Word STATE_VARIABLE_RevImpModeDefns_404_404;
      MR_Word STATE_VARIABLE_RevImpTypeClasses_405_405;
      MR_Word STATE_VARIABLE_RevImpInstances_406_406;
      MR_Word STATE_VARIABLE_RevImpPredDecls_407_407;
      MR_Word STATE_VARIABLE_RevImpModeDecls_408_408;
      MR_Word STATE_VARIABLE_RevImpClauses_409_409;
      MR_Word STATE_VARIABLE_RevImpForeignEnums_410_410;
      MR_Word STATE_VARIABLE_RevImpForeignExportEnums_411_411;
      MR_Word STATE_VARIABLE_RevImpDeclPragmas_412_412;
      MR_Word STATE_VARIABLE_RevImpImplPragmas_413_413;
      MR_Word STATE_VARIABLE_RevImpPromises_414_414;
      MR_Word STATE_VARIABLE_RevImpInitialises_415_415;
      MR_Word STATE_VARIABLE_RevImpFinalises_416_416;
      MR_Word STATE_VARIABLE_RevImpMutables_417_417;
      MR_Word STATE_VARIABLE_ImpContents_418_418;
      MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_419_419;
      MR_Word STATE_VARIABLE_IntIncls_421_421;
      MR_Word STATE_VARIABLE_IntImportMap_422_422;
      MR_Word STATE_VARIABLE_IntUseMap_423_423;
      MR_Word STATE_VARIABLE_IntFIMSpecMap_425_425;
      MR_Word STATE_VARIABLE_RevIntTypeDefnsAbs_427_427;
      MR_Word STATE_VARIABLE_RevIntTypeDefnsMer_428_428;
      MR_Word STATE_VARIABLE_RevIntTypeDefnsForeign_429_429;
      MR_Word STATE_VARIABLE_RevIntInstDefns_430_430;
      MR_Word STATE_VARIABLE_RevIntModeDefns_431_431;
      MR_Word STATE_VARIABLE_RevIntTypeClasses_432_432;
      MR_Word STATE_VARIABLE_RevIntInstances_433_433;
      MR_Word STATE_VARIABLE_RevIntPredDecls_434_434;
      MR_Word STATE_VARIABLE_RevIntModeDecls_435_435;
      MR_Word STATE_VARIABLE_RevIntForeignExportEnums_436_436;
      MR_Word STATE_VARIABLE_RevIntDeclPragmas_437_437;
      MR_Word STATE_VARIABLE_RevIntImplPragmas_438_438;
      MR_Word STATE_VARIABLE_IntBadClausePreds_439_439;
      MR_Word STATE_VARIABLE_RevIntPromises_440_440;
      MR_Word STATE_VARIABLE_RevIntInitialises_441_441;
      MR_Word STATE_VARIABLE_RevIntFinalises_442_442;
      MR_Word STATE_VARIABLE_RevIntMutables_443_443;
      MR_Word STATE_VARIABLE_IntContents_444_444;
      MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_445_445;
      MR_Word STATE_VARIABLE_Specs_446_446;
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
      MR_Word next_value_of_STATE_VARIABLE_RevIntForeignExportEnums_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_32;
      MR_Word next_value_of_STATE_VARIABLE_IntBadClausePreds_0_34;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPromises_0_36;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInitialises_0_38;
      MR_Word next_value_of_STATE_VARIABLE_RevIntFinalises_0_40;
      MR_Word next_value_of_STATE_VARIABLE_RevIntMutables_0_42;
      MR_Word next_value_of_STATE_VARIABLE_IntContents_0_44;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_46;
      MR_Word next_value_of_STATE_VARIABLE_ImpIncls_0_48;
      MR_Word next_value_of_STATE_VARIABLE_ImpImportMap_0_50;
      MR_Word next_value_of_STATE_VARIABLE_ImpUseMap_0_52;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_54;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefnsAbs_0_56;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefnsMer_0_58;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefnsForeign_0_60;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstDefns_0_62;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDefns_0_64;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_66;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstances_0_68;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPredDecls_0_70;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDecls_0_72;
      MR_Word next_value_of_STATE_VARIABLE_RevImpClauses_0_74;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_76;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_78;
      MR_Word next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_80;
      MR_Word next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_82;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPromises_0_84;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInitialises_0_86;
      MR_Word next_value_of_STATE_VARIABLE_RevImpFinalises_0_88;
      MR_Word next_value_of_STATE_VARIABLE_RevImpMutables_0_90;
      MR_Word next_value_of_STATE_VARIABLE_ImpContents_0_92;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_94;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_96;

      switch (Section_293) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Specs_399_399;
            MR_Box conv3_STATE_VARIABLE_ImpFIMSpecMap_398_398;
            MR_Box conv2_STATE_VARIABLE_Specs_399_399;

            STATE_VARIABLE_ImpIncls_394_394 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpIncls_0_48, Incls_294);
            parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_295, STATE_VARIABLE_ImpImportMap_0_50, &STATE_VARIABLE_ImpImportMap_395_395, STATE_VARIABLE_ImpUseMap_0_52, &STATE_VARIABLE_ImpUseMap_396_396);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[101]), FIMs_296, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecMap_0_54)), &conv3_STATE_VARIABLE_ImpFIMSpecMap_398_398, ((MR_Box) (STATE_VARIABLE_Specs_0_96)), &conv2_STATE_VARIABLE_Specs_399_399);
            STATE_VARIABLE_ImpFIMSpecMap_398_398 = ((MR_Word) (conv3_STATE_VARIABLE_ImpFIMSpecMap_398_398));
            STATE_VARIABLE_Specs_399_399 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_399_399));
            parse_tree__convert_parse_tree__classify_src_items_imp_43_p_0(Items_297, STATE_VARIABLE_RevImpTypeDefnsAbs_0_56, &STATE_VARIABLE_RevImpTypeDefnsAbs_400_400, STATE_VARIABLE_RevImpTypeDefnsMer_0_58, &STATE_VARIABLE_RevImpTypeDefnsMer_401_401, STATE_VARIABLE_RevImpTypeDefnsForeign_0_60, &STATE_VARIABLE_RevImpTypeDefnsForeign_402_402, STATE_VARIABLE_RevImpInstDefns_0_62, &STATE_VARIABLE_RevImpInstDefns_403_403, STATE_VARIABLE_RevImpModeDefns_0_64, &STATE_VARIABLE_RevImpModeDefns_404_404, STATE_VARIABLE_RevImpTypeClasses_0_66, &STATE_VARIABLE_RevImpTypeClasses_405_405, STATE_VARIABLE_RevImpInstances_0_68, &STATE_VARIABLE_RevImpInstances_406_406, STATE_VARIABLE_RevImpPredDecls_0_70, &STATE_VARIABLE_RevImpPredDecls_407_407, STATE_VARIABLE_RevImpModeDecls_0_72, &STATE_VARIABLE_RevImpModeDecls_408_408, STATE_VARIABLE_RevImpClauses_0_74, &STATE_VARIABLE_RevImpClauses_409_409, STATE_VARIABLE_RevImpForeignEnums_0_76, &STATE_VARIABLE_RevImpForeignEnums_410_410, STATE_VARIABLE_RevImpForeignExportEnums_0_78, &STATE_VARIABLE_RevImpForeignExportEnums_411_411, STATE_VARIABLE_RevImpDeclPragmas_0_80, &STATE_VARIABLE_RevImpDeclPragmas_412_412, STATE_VARIABLE_RevImpImplPragmas_0_82, &STATE_VARIABLE_RevImpImplPragmas_413_413, STATE_VARIABLE_RevImpPromises_0_84, &STATE_VARIABLE_RevImpPromises_414_414, STATE_VARIABLE_RevImpInitialises_0_86, &STATE_VARIABLE_RevImpInitialises_415_415, STATE_VARIABLE_RevImpFinalises_0_88, &STATE_VARIABLE_RevImpFinalises_416_416, STATE_VARIABLE_RevImpMutables_0_90, &STATE_VARIABLE_RevImpMutables_417_417, STATE_VARIABLE_ImpContents_0_92, &STATE_VARIABLE_ImpContents_418_418, STATE_VARIABLE_ImpImplicitAvailNeeds_0_94, &STATE_VARIABLE_ImpImplicitAvailNeeds_419_419, STATE_VARIABLE_Specs_399_399, &STATE_VARIABLE_Specs_446_446);
            STATE_VARIABLE_IntIncls_421_421 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImportMap_422_422 = STATE_VARIABLE_IntImportMap_0_4;
            STATE_VARIABLE_IntUseMap_423_423 = STATE_VARIABLE_IntUseMap_0_6;
            STATE_VARIABLE_IntFIMSpecMap_425_425 = STATE_VARIABLE_IntFIMSpecMap_0_8;
            STATE_VARIABLE_RevIntTypeDefnsAbs_427_427 = STATE_VARIABLE_RevIntTypeDefnsAbs_0_10;
            STATE_VARIABLE_RevIntTypeDefnsMer_428_428 = STATE_VARIABLE_RevIntTypeDefnsMer_0_12;
            STATE_VARIABLE_RevIntTypeDefnsForeign_429_429 = STATE_VARIABLE_RevIntTypeDefnsForeign_0_14;
            STATE_VARIABLE_RevIntInstDefns_430_430 = STATE_VARIABLE_RevIntInstDefns_0_16;
            STATE_VARIABLE_RevIntModeDefns_431_431 = STATE_VARIABLE_RevIntModeDefns_0_18;
            STATE_VARIABLE_RevIntTypeClasses_432_432 = STATE_VARIABLE_RevIntTypeClasses_0_20;
            STATE_VARIABLE_RevIntInstances_433_433 = STATE_VARIABLE_RevIntInstances_0_22;
            STATE_VARIABLE_RevIntPredDecls_434_434 = STATE_VARIABLE_RevIntPredDecls_0_24;
            STATE_VARIABLE_RevIntModeDecls_435_435 = STATE_VARIABLE_RevIntModeDecls_0_26;
            STATE_VARIABLE_RevIntForeignExportEnums_436_436 = STATE_VARIABLE_RevIntForeignExportEnums_0_28;
            STATE_VARIABLE_RevIntDeclPragmas_437_437 = STATE_VARIABLE_RevIntDeclPragmas_0_30;
            STATE_VARIABLE_RevIntImplPragmas_438_438 = STATE_VARIABLE_RevIntImplPragmas_0_32;
            STATE_VARIABLE_IntBadClausePreds_439_439 = STATE_VARIABLE_IntBadClausePreds_0_34;
            STATE_VARIABLE_RevIntPromises_440_440 = STATE_VARIABLE_RevIntPromises_0_36;
            STATE_VARIABLE_RevIntInitialises_441_441 = STATE_VARIABLE_RevIntInitialises_0_38;
            STATE_VARIABLE_RevIntFinalises_442_442 = STATE_VARIABLE_RevIntFinalises_0_40;
            STATE_VARIABLE_RevIntMutables_443_443 = STATE_VARIABLE_RevIntMutables_0_42;
            STATE_VARIABLE_IntContents_444_444 = STATE_VARIABLE_IntContents_0_44;
            STATE_VARIABLE_IntImplicitAvailNeeds_445_445 = STATE_VARIABLE_IntImplicitAvailNeeds_0_46;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_426_426;
            MR_Box conv7_STATE_VARIABLE_IntFIMSpecMap_425_425;
            MR_Box conv6_STATE_VARIABLE_Specs_426_426;

            STATE_VARIABLE_IntIncls_421_421 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Incls_294);
            parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_295, STATE_VARIABLE_IntImportMap_0_4, &STATE_VARIABLE_IntImportMap_422_422, STATE_VARIABLE_IntUseMap_0_6, &STATE_VARIABLE_IntUseMap_423_423);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[102]), FIMs_296, ((MR_Box) (STATE_VARIABLE_IntFIMSpecMap_0_8)), &conv7_STATE_VARIABLE_IntFIMSpecMap_425_425, ((MR_Box) (STATE_VARIABLE_Specs_0_96)), &conv6_STATE_VARIABLE_Specs_426_426);
            STATE_VARIABLE_IntFIMSpecMap_425_425 = ((MR_Word) (conv7_STATE_VARIABLE_IntFIMSpecMap_425_425));
            STATE_VARIABLE_Specs_426_426 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_426_426));
            parse_tree__convert_parse_tree__classify_src_items_int_41_p_0(Items_297, STATE_VARIABLE_RevIntTypeDefnsAbs_0_10, &STATE_VARIABLE_RevIntTypeDefnsAbs_427_427, STATE_VARIABLE_RevIntTypeDefnsMer_0_12, &STATE_VARIABLE_RevIntTypeDefnsMer_428_428, STATE_VARIABLE_RevIntTypeDefnsForeign_0_14, &STATE_VARIABLE_RevIntTypeDefnsForeign_429_429, STATE_VARIABLE_RevIntInstDefns_0_16, &STATE_VARIABLE_RevIntInstDefns_430_430, STATE_VARIABLE_RevIntModeDefns_0_18, &STATE_VARIABLE_RevIntModeDefns_431_431, STATE_VARIABLE_RevIntTypeClasses_0_20, &STATE_VARIABLE_RevIntTypeClasses_432_432, STATE_VARIABLE_RevIntInstances_0_22, &STATE_VARIABLE_RevIntInstances_433_433, STATE_VARIABLE_RevIntPredDecls_0_24, &STATE_VARIABLE_RevIntPredDecls_434_434, STATE_VARIABLE_RevIntModeDecls_0_26, &STATE_VARIABLE_RevIntModeDecls_435_435, STATE_VARIABLE_RevIntForeignExportEnums_0_28, &STATE_VARIABLE_RevIntForeignExportEnums_436_436, STATE_VARIABLE_RevIntDeclPragmas_0_30, &STATE_VARIABLE_RevIntDeclPragmas_437_437, STATE_VARIABLE_RevIntImplPragmas_0_32, &STATE_VARIABLE_RevIntImplPragmas_438_438, STATE_VARIABLE_IntBadClausePreds_0_34, &STATE_VARIABLE_IntBadClausePreds_439_439, STATE_VARIABLE_RevIntPromises_0_36, &STATE_VARIABLE_RevIntPromises_440_440, STATE_VARIABLE_RevIntInitialises_0_38, &STATE_VARIABLE_RevIntInitialises_441_441, STATE_VARIABLE_RevIntFinalises_0_40, &STATE_VARIABLE_RevIntFinalises_442_442, STATE_VARIABLE_RevIntMutables_0_42, &STATE_VARIABLE_RevIntMutables_443_443, STATE_VARIABLE_IntContents_0_44, &STATE_VARIABLE_IntContents_444_444, STATE_VARIABLE_IntImplicitAvailNeeds_0_46, &STATE_VARIABLE_IntImplicitAvailNeeds_445_445, STATE_VARIABLE_Specs_426_426, &STATE_VARIABLE_Specs_446_446);
            STATE_VARIABLE_ImpIncls_394_394 = STATE_VARIABLE_ImpIncls_0_48;
            STATE_VARIABLE_ImpImportMap_395_395 = STATE_VARIABLE_ImpImportMap_0_50;
            STATE_VARIABLE_ImpUseMap_396_396 = STATE_VARIABLE_ImpUseMap_0_52;
            STATE_VARIABLE_ImpFIMSpecMap_398_398 = STATE_VARIABLE_ImpFIMSpecMap_0_54;
            STATE_VARIABLE_RevImpTypeDefnsAbs_400_400 = STATE_VARIABLE_RevImpTypeDefnsAbs_0_56;
            STATE_VARIABLE_RevImpTypeDefnsMer_401_401 = STATE_VARIABLE_RevImpTypeDefnsMer_0_58;
            STATE_VARIABLE_RevImpTypeDefnsForeign_402_402 = STATE_VARIABLE_RevImpTypeDefnsForeign_0_60;
            STATE_VARIABLE_RevImpInstDefns_403_403 = STATE_VARIABLE_RevImpInstDefns_0_62;
            STATE_VARIABLE_RevImpModeDefns_404_404 = STATE_VARIABLE_RevImpModeDefns_0_64;
            STATE_VARIABLE_RevImpTypeClasses_405_405 = STATE_VARIABLE_RevImpTypeClasses_0_66;
            STATE_VARIABLE_RevImpInstances_406_406 = STATE_VARIABLE_RevImpInstances_0_68;
            STATE_VARIABLE_RevImpPredDecls_407_407 = STATE_VARIABLE_RevImpPredDecls_0_70;
            STATE_VARIABLE_RevImpModeDecls_408_408 = STATE_VARIABLE_RevImpModeDecls_0_72;
            STATE_VARIABLE_RevImpClauses_409_409 = STATE_VARIABLE_RevImpClauses_0_74;
            STATE_VARIABLE_RevImpForeignEnums_410_410 = STATE_VARIABLE_RevImpForeignEnums_0_76;
            STATE_VARIABLE_RevImpForeignExportEnums_411_411 = STATE_VARIABLE_RevImpForeignExportEnums_0_78;
            STATE_VARIABLE_RevImpDeclPragmas_412_412 = STATE_VARIABLE_RevImpDeclPragmas_0_80;
            STATE_VARIABLE_RevImpImplPragmas_413_413 = STATE_VARIABLE_RevImpImplPragmas_0_82;
            STATE_VARIABLE_RevImpPromises_414_414 = STATE_VARIABLE_RevImpPromises_0_84;
            STATE_VARIABLE_RevImpInitialises_415_415 = STATE_VARIABLE_RevImpInitialises_0_86;
            STATE_VARIABLE_RevImpFinalises_416_416 = STATE_VARIABLE_RevImpFinalises_0_88;
            STATE_VARIABLE_RevImpMutables_417_417 = STATE_VARIABLE_RevImpMutables_0_90;
            STATE_VARIABLE_ImpContents_418_418 = STATE_VARIABLE_ImpContents_0_92;
            STATE_VARIABLE_ImpImplicitAvailNeeds_419_419 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_94;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_243;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_421_421;
      next_value_of_STATE_VARIABLE_IntImportMap_0_4 = STATE_VARIABLE_IntImportMap_422_422;
      next_value_of_STATE_VARIABLE_IntUseMap_0_6 = STATE_VARIABLE_IntUseMap_423_423;
      next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8 = STATE_VARIABLE_IntFIMSpecMap_425_425;
      next_value_of_STATE_VARIABLE_RevIntTypeDefnsAbs_0_10 = STATE_VARIABLE_RevIntTypeDefnsAbs_427_427;
      next_value_of_STATE_VARIABLE_RevIntTypeDefnsMer_0_12 = STATE_VARIABLE_RevIntTypeDefnsMer_428_428;
      next_value_of_STATE_VARIABLE_RevIntTypeDefnsForeign_0_14 = STATE_VARIABLE_RevIntTypeDefnsForeign_429_429;
      next_value_of_STATE_VARIABLE_RevIntInstDefns_0_16 = STATE_VARIABLE_RevIntInstDefns_430_430;
      next_value_of_STATE_VARIABLE_RevIntModeDefns_0_18 = STATE_VARIABLE_RevIntModeDefns_431_431;
      next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_20 = STATE_VARIABLE_RevIntTypeClasses_432_432;
      next_value_of_STATE_VARIABLE_RevIntInstances_0_22 = STATE_VARIABLE_RevIntInstances_433_433;
      next_value_of_STATE_VARIABLE_RevIntPredDecls_0_24 = STATE_VARIABLE_RevIntPredDecls_434_434;
      next_value_of_STATE_VARIABLE_RevIntModeDecls_0_26 = STATE_VARIABLE_RevIntModeDecls_435_435;
      next_value_of_STATE_VARIABLE_RevIntForeignExportEnums_0_28 = STATE_VARIABLE_RevIntForeignExportEnums_436_436;
      next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_30 = STATE_VARIABLE_RevIntDeclPragmas_437_437;
      next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_32 = STATE_VARIABLE_RevIntImplPragmas_438_438;
      next_value_of_STATE_VARIABLE_IntBadClausePreds_0_34 = STATE_VARIABLE_IntBadClausePreds_439_439;
      next_value_of_STATE_VARIABLE_RevIntPromises_0_36 = STATE_VARIABLE_RevIntPromises_440_440;
      next_value_of_STATE_VARIABLE_RevIntInitialises_0_38 = STATE_VARIABLE_RevIntInitialises_441_441;
      next_value_of_STATE_VARIABLE_RevIntFinalises_0_40 = STATE_VARIABLE_RevIntFinalises_442_442;
      next_value_of_STATE_VARIABLE_RevIntMutables_0_42 = STATE_VARIABLE_RevIntMutables_443_443;
      next_value_of_STATE_VARIABLE_IntContents_0_44 = STATE_VARIABLE_IntContents_444_444;
      next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_46 = STATE_VARIABLE_IntImplicitAvailNeeds_445_445;
      next_value_of_STATE_VARIABLE_ImpIncls_0_48 = STATE_VARIABLE_ImpIncls_394_394;
      next_value_of_STATE_VARIABLE_ImpImportMap_0_50 = STATE_VARIABLE_ImpImportMap_395_395;
      next_value_of_STATE_VARIABLE_ImpUseMap_0_52 = STATE_VARIABLE_ImpUseMap_396_396;
      next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_54 = STATE_VARIABLE_ImpFIMSpecMap_398_398;
      next_value_of_STATE_VARIABLE_RevImpTypeDefnsAbs_0_56 = STATE_VARIABLE_RevImpTypeDefnsAbs_400_400;
      next_value_of_STATE_VARIABLE_RevImpTypeDefnsMer_0_58 = STATE_VARIABLE_RevImpTypeDefnsMer_401_401;
      next_value_of_STATE_VARIABLE_RevImpTypeDefnsForeign_0_60 = STATE_VARIABLE_RevImpTypeDefnsForeign_402_402;
      next_value_of_STATE_VARIABLE_RevImpInstDefns_0_62 = STATE_VARIABLE_RevImpInstDefns_403_403;
      next_value_of_STATE_VARIABLE_RevImpModeDefns_0_64 = STATE_VARIABLE_RevImpModeDefns_404_404;
      next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_66 = STATE_VARIABLE_RevImpTypeClasses_405_405;
      next_value_of_STATE_VARIABLE_RevImpInstances_0_68 = STATE_VARIABLE_RevImpInstances_406_406;
      next_value_of_STATE_VARIABLE_RevImpPredDecls_0_70 = STATE_VARIABLE_RevImpPredDecls_407_407;
      next_value_of_STATE_VARIABLE_RevImpModeDecls_0_72 = STATE_VARIABLE_RevImpModeDecls_408_408;
      next_value_of_STATE_VARIABLE_RevImpClauses_0_74 = STATE_VARIABLE_RevImpClauses_409_409;
      next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_76 = STATE_VARIABLE_RevImpForeignEnums_410_410;
      next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_78 = STATE_VARIABLE_RevImpForeignExportEnums_411_411;
      next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_80 = STATE_VARIABLE_RevImpDeclPragmas_412_412;
      next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_82 = STATE_VARIABLE_RevImpImplPragmas_413_413;
      next_value_of_STATE_VARIABLE_RevImpPromises_0_84 = STATE_VARIABLE_RevImpPromises_414_414;
      next_value_of_STATE_VARIABLE_RevImpInitialises_0_86 = STATE_VARIABLE_RevImpInitialises_415_415;
      next_value_of_STATE_VARIABLE_RevImpFinalises_0_88 = STATE_VARIABLE_RevImpFinalises_416_416;
      next_value_of_STATE_VARIABLE_RevImpMutables_0_90 = STATE_VARIABLE_RevImpMutables_417_417;
      next_value_of_STATE_VARIABLE_ImpContents_0_92 = STATE_VARIABLE_ImpContents_418_418;
      next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_94 = STATE_VARIABLE_ImpImplicitAvailNeeds_419_419;
      next_value_of_STATE_VARIABLE_Specs_0_96 = STATE_VARIABLE_Specs_446_446;
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
      STATE_VARIABLE_RevIntForeignExportEnums_0_28 = next_value_of_STATE_VARIABLE_RevIntForeignExportEnums_0_28;
      STATE_VARIABLE_RevIntDeclPragmas_0_30 = next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_30;
      STATE_VARIABLE_RevIntImplPragmas_0_32 = next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_32;
      STATE_VARIABLE_IntBadClausePreds_0_34 = next_value_of_STATE_VARIABLE_IntBadClausePreds_0_34;
      STATE_VARIABLE_RevIntPromises_0_36 = next_value_of_STATE_VARIABLE_RevIntPromises_0_36;
      STATE_VARIABLE_RevIntInitialises_0_38 = next_value_of_STATE_VARIABLE_RevIntInitialises_0_38;
      STATE_VARIABLE_RevIntFinalises_0_40 = next_value_of_STATE_VARIABLE_RevIntFinalises_0_40;
      STATE_VARIABLE_RevIntMutables_0_42 = next_value_of_STATE_VARIABLE_RevIntMutables_0_42;
      STATE_VARIABLE_IntContents_0_44 = next_value_of_STATE_VARIABLE_IntContents_0_44;
      STATE_VARIABLE_IntImplicitAvailNeeds_0_46 = next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_46;
      STATE_VARIABLE_ImpIncls_0_48 = next_value_of_STATE_VARIABLE_ImpIncls_0_48;
      STATE_VARIABLE_ImpImportMap_0_50 = next_value_of_STATE_VARIABLE_ImpImportMap_0_50;
      STATE_VARIABLE_ImpUseMap_0_52 = next_value_of_STATE_VARIABLE_ImpUseMap_0_52;
      STATE_VARIABLE_ImpFIMSpecMap_0_54 = next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_54;
      STATE_VARIABLE_RevImpTypeDefnsAbs_0_56 = next_value_of_STATE_VARIABLE_RevImpTypeDefnsAbs_0_56;
      STATE_VARIABLE_RevImpTypeDefnsMer_0_58 = next_value_of_STATE_VARIABLE_RevImpTypeDefnsMer_0_58;
      STATE_VARIABLE_RevImpTypeDefnsForeign_0_60 = next_value_of_STATE_VARIABLE_RevImpTypeDefnsForeign_0_60;
      STATE_VARIABLE_RevImpInstDefns_0_62 = next_value_of_STATE_VARIABLE_RevImpInstDefns_0_62;
      STATE_VARIABLE_RevImpModeDefns_0_64 = next_value_of_STATE_VARIABLE_RevImpModeDefns_0_64;
      STATE_VARIABLE_RevImpTypeClasses_0_66 = next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_66;
      STATE_VARIABLE_RevImpInstances_0_68 = next_value_of_STATE_VARIABLE_RevImpInstances_0_68;
      STATE_VARIABLE_RevImpPredDecls_0_70 = next_value_of_STATE_VARIABLE_RevImpPredDecls_0_70;
      STATE_VARIABLE_RevImpModeDecls_0_72 = next_value_of_STATE_VARIABLE_RevImpModeDecls_0_72;
      STATE_VARIABLE_RevImpClauses_0_74 = next_value_of_STATE_VARIABLE_RevImpClauses_0_74;
      STATE_VARIABLE_RevImpForeignEnums_0_76 = next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_76;
      STATE_VARIABLE_RevImpForeignExportEnums_0_78 = next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_78;
      STATE_VARIABLE_RevImpDeclPragmas_0_80 = next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_80;
      STATE_VARIABLE_RevImpImplPragmas_0_82 = next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_82;
      STATE_VARIABLE_RevImpPromises_0_84 = next_value_of_STATE_VARIABLE_RevImpPromises_0_84;
      STATE_VARIABLE_RevImpInitialises_0_86 = next_value_of_STATE_VARIABLE_RevImpInitialises_0_86;
      STATE_VARIABLE_RevImpFinalises_0_88 = next_value_of_STATE_VARIABLE_RevImpFinalises_0_88;
      STATE_VARIABLE_RevImpMutables_0_90 = next_value_of_STATE_VARIABLE_RevImpMutables_0_90;
      STATE_VARIABLE_ImpContents_0_92 = next_value_of_STATE_VARIABLE_ImpContents_0_92;
      STATE_VARIABLE_ImpImplicitAvailNeeds_0_94 = next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_94;
      STATE_VARIABLE_Specs_0_96 = next_value_of_STATE_VARIABLE_Specs_0_96;
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
      MR_Word STATE_VARIABLE_RevMutables_275_275;
      MR_Word STATE_VARIABLE_RevFinalises_279_279;
      MR_Word STATE_VARIABLE_RevInitialises_283_283;
      MR_Word STATE_VARIABLE_RevPromises_285_285;
      MR_Word STATE_VARIABLE_Specs_302_302;
      MR_Word STATE_VARIABLE_RevImplPragmas_303_303;
      MR_Word STATE_VARIABLE_RevDeclPragmas_315_315;
      MR_Word STATE_VARIABLE_RevForeignExportEnums_316_316;
      MR_Word STATE_VARIABLE_RevForeignEnums_318_318;
      MR_Word STATE_VARIABLE_RevClauses_320_320;
      MR_Word STATE_VARIABLE_RevModeDecls_321_321;
      MR_Word STATE_VARIABLE_RevPredDecls_322_322;
      MR_Word STATE_VARIABLE_RevInstances_324_324;
      MR_Word STATE_VARIABLE_RevTypeClasses_325_325;
      MR_Word STATE_VARIABLE_RevModeDefns_326_326;
      MR_Word STATE_VARIABLE_RevInstDefns_327_327;
      MR_Word STATE_VARIABLE_Contents_328_328;
      MR_Word STATE_VARIABLE_RevTypeDefnsForeign_329_329;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_331_331;
      MR_Word STATE_VARIABLE_RevTypeDefnsMer_332_332;
      MR_Word STATE_VARIABLE_RevTypeDefnsAbs_333_333;
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

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(ItemClauseInfo_148, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_331_331);
            {
              STATE_VARIABLE_RevClauses_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_320_320, 0) = ((MR_Box) (ItemClauseInfo_148));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_320_320, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_20));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
            STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
            STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
            STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
            STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
            STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
            STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
            STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
            STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefnInfo_142 = (MR_Word) (MR_body((MR_Word) (Item_107), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevInstDefns_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_327_327, 0) = ((MR_Box) (ItemInstDefnInfo_142));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_327_327, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_8));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
            STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
            STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
            STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
            STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
            STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
            STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
            STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
            STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefnInfo_143 = (MR_Word) (MR_body((MR_Word) (Item_107), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDefns_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_326_326, 0) = ((MR_Box) (ItemModeDefnInfo_143));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_326_326, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_10));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
            STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
            STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
            STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
            STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
            STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
            STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
            STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
            STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDeclInfo_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevPredDecls_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_322_322, 0) = ((MR_Box) (ItemPredDeclInfo_146));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_322_322, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_16));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDeclInfo_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_321_321, 0) = ((MR_Box) (ItemModeDeclInfo_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_321_321, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_18));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Lang_150 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_149, (MR_Integer) 0))) & (MR_Integer) 3);

                parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_150, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_328_328);
                {
                  STATE_VARIABLE_RevForeignEnums_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignEnums_318_318, 0) = ((MR_Box) (ItemForeignEnumInfo_149));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignEnums_318_318, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignEnums_0_22));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemFEEInfo_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevForeignExportEnums_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignExportEnums_316_316, 0) = ((MR_Box) (ItemFEEInfo_155));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignExportEnums_316_316, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignExportEnums_0_24));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromiseInfo_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_207, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_331_331);
                {
                  STATE_VARIABLE_RevPromises_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_285_285, 0) = ((MR_Box) (ItemPromiseInfo_207));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_285_285, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_30));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeclassInfo_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_325_325, 0) = ((MR_Box) (ItemTypeclassInfo_144));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_325_325, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_12));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_145, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_331_331);
                {
                  STATE_VARIABLE_RevInstances_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_324_324, 0) = ((MR_Box) (ItemInstanceInfo_145));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_324_324, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_14));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInitialiseInfo_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_281;
                MR_Box conv3_STATE_VARIABLE_Contents_328_328;

                Var_281 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[99]), Var_281, ((MR_Box) (STATE_VARIABLE_Contents_0_38)), &conv3_STATE_VARIABLE_Contents_328_328);
                STATE_VARIABLE_Contents_328_328 = ((MR_Word) (conv3_STATE_VARIABLE_Contents_328_328));
                {
                  STATE_VARIABLE_RevInitialises_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_283_283, 0) = ((MR_Box) (ItemInitialiseInfo_208));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_283_283, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_32));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemFinaliseInfo_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_277;
                MR_Box conv1_STATE_VARIABLE_Contents_328_328;

                Var_277 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[98]), Var_277, ((MR_Box) (STATE_VARIABLE_Contents_0_38)), &conv1_STATE_VARIABLE_Contents_328_328);
                STATE_VARIABLE_Contents_328_328 = ((MR_Word) (conv1_STATE_VARIABLE_Contents_328_328));
                {
                  STATE_VARIABLE_RevFinalises_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_279_279, 0) = ((MR_Box) (ItemFinaliseInfo_209));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_279_279, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_34));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_272;
                MR_Box conv5_STATE_VARIABLE_Contents_328_328;

                Var_272 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[100]), Var_272, ((MR_Box) (STATE_VARIABLE_Contents_0_38)), &conv5_STATE_VARIABLE_Contents_328_328);
                STATE_VARIABLE_Contents_328_328 = ((MR_Word) (conv5_STATE_VARIABLE_Contents_328_328));
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(ItemMutableInfo_210, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_331_331);
                {
                  STATE_VARIABLE_RevMutables_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_275_275, 0) = ((MR_Box) (ItemMutableInfo_210));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_275_275, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_36));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
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
                        STATE_VARIABLE_RevTypeDefnsMer_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_332_332, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_332_332, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                      STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DetailsSolver_138 = (MR_Word) (MR_body((MR_Word) (TypeDefn_133), (MR_Integer) 1));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_138, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_331_331);
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_332_332, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_332_332, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_332_332, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_332_332, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                      STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_133, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            STATE_VARIABLE_RevTypeDefnsAbs_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_333_333, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_333_333, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsAbs_0_2));
                          }
                          STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word DetailsForeign_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_133, (MR_Integer) 1))));

                          parse_tree__convert_parse_tree__accumulate_contents_foreign_type_3_p_0(DetailsForeign_141, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_328_328);
                          {
                            STATE_VARIABLE_RevTypeDefnsForeign_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_329_329, 0) = ((MR_Box) (ItemTypeDefnInfo_130));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_329_329, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsForeign_0_6));
                          }
                          STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                          STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_315_315, 0) = ((MR_Box) (ItemDeclPragma_156));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_315_315, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_26));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word ImplPragma_158;

                {
                  STATE_VARIABLE_RevImplPragmas_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_303_303, 0) = ((MR_Box) (ItemImplPragma_157));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_303_303, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_28));
                }
                ImplPragma_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_157, (MR_Integer) 0))));
                switch (MR_tag((MR_Word) ImplPragma_158)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_163 = (MR_Word) ((MR_Word) (ImplPragma_158));
                      MR_Word LiteralOrInclude_467 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_163, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Contents_313_473;
                      MR_Word Lang_474 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_163, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                      if (((MR_tag((MR_Word) LiteralOrInclude_467)) == (MR_Integer) 1))
                      {
                        MR_String FileName_436 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_467, (MR_Integer) 0))));
                        MR_Word InclFile_437;
                        MR_Word FIFOs0_438;
                        MR_Word FIFOs_439;
                        MR_Word Var_427;
                        MR_Word Var_428;
                        MR_Word Var_429;
                        MR_Word Var_430;

                        {
                          InclFile_437 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_437, 0) = (MR_Box) ((MR_Unsigned) (Lang_474));
                          MR_hl_field(MR_mktag(0), InclFile_437, 1) = ((MR_Box) (FileName_436));
                        }
                        FIFOs0_438 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 0))));
                        FIFOs_439 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), FIFOs0_438, ((MR_Box) (InclFile_437)));
                        Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 1))));
                        Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 2))));
                        Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 3))));
                        Var_430 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 4))) & (MR_Integer) 1);
                        {
                          STATE_VARIABLE_Contents_313_473 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_473, 0) = ((MR_Box) (FIFOs_439));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_473, 1) = ((MR_Box) (Var_427));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_473, 2) = ((MR_Box) (Var_428));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_473, 3) = ((MR_Box) (Var_429));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_473, 4) = (MR_Box) ((MR_Unsigned) (Var_430));
                        }
                      }
                      else
                        STATE_VARIABLE_Contents_313_473 = STATE_VARIABLE_Contents_0_38;
                      parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_474, STATE_VARIABLE_Contents_313_473, &STATE_VARIABLE_Contents_328_328);
                      STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FCInfo_161 = (MR_Word) (MR_body((MR_Word) (ImplPragma_158), (MR_Integer) 1));
                      MR_Word LiteralOrInclude_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_161, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Contents_313_313;
                      MR_Word Lang_355 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_161, (MR_Integer) 0))) & (MR_Integer) 3);

                      if (((MR_tag((MR_Word) LiteralOrInclude_162)) == (MR_Integer) 1))
                      {
                        MR_String FileName_166 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_162, (MR_Integer) 0))));
                        MR_Word InclFile_167;
                        MR_Word FIFOs0_168;
                        MR_Word FIFOs_169;
                        MR_Word Var_367;
                        MR_Word Var_368;
                        MR_Word Var_369;
                        MR_Word Var_370;

                        {
                          InclFile_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_167, 0) = (MR_Box) ((MR_Unsigned) (Lang_355));
                          MR_hl_field(MR_mktag(0), InclFile_167, 1) = ((MR_Box) (FileName_166));
                        }
                        FIFOs0_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 0))));
                        FIFOs_169 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), FIFOs0_168, ((MR_Box) (InclFile_167)));
                        Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 1))));
                        Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 2))));
                        Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 3))));
                        Var_370 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 4))) & (MR_Integer) 1);
                        {
                          STATE_VARIABLE_Contents_313_313 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_313, 0) = ((MR_Box) (FIFOs_169));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_313, 1) = ((MR_Box) (Var_367));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_313, 2) = ((MR_Box) (Var_368));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_313, 3) = ((MR_Box) (Var_369));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_313_313, 4) = (MR_Box) ((MR_Unsigned) (Var_370));
                        }
                      }
                      else
                        STATE_VARIABLE_Contents_313_313 = STATE_VARIABLE_Contents_0_38;
                      parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_355, STATE_VARIABLE_Contents_313_313, &STATE_VARIABLE_Contents_328_328);
                      STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPInfo_174 = (MR_Word) (MR_body((MR_Word) (ImplPragma_158), (MR_Integer) 2));
                      MR_Word Attrs_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_174, (MR_Integer) 0))));
                      MR_Word Var_309;

                      Var_309 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_175);
                      parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Var_309, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_328_328);
                      STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word FPEInfo_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 1))));
                          MR_Word STATE_VARIABLE_Contents_311_311;
                          MR_Word Lang_356 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_170, (MR_Integer) 1))) & (MR_Integer) 3);

                          parse_tree__convert_parse_tree__accumulate_foreign_export_lang_3_p_0(Lang_356, STATE_VARIABLE_Contents_0_38, &STATE_VARIABLE_Contents_311_311);
                          parse_tree__convert_parse_tree__accumulate_ic_lang_3_p_0(Lang_356, STATE_VARIABLE_Contents_311_311, &STATE_VARIABLE_Contents_328_328);
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word FactTableInfo_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 1))));
                          MR_Word FactTables0_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 1))));
                          MR_Word FactTables_185;
                          MR_String FileName_357 = ((MR_String) ((MR_hl_field(MR_mktag(0), FactTableInfo_182, (MR_Integer) 1))));
                          MR_Word Var_375;
                          MR_Word Var_377;
                          MR_Word Var_378;
                          MR_Word Var_379;

                          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FileName_357)), FactTables0_184, &FactTables_185);
                          Var_375 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 0))));
                          Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 2))));
                          Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 3))));
                          Var_379 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_38, (MR_Integer) 4))) & (MR_Integer) 1);
                          {
                            STATE_VARIABLE_Contents_328_328 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_328_328, 0) = ((MR_Box) (Var_375));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_328_328, 1) = ((MR_Box) (FactTables_185));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_328_328, 2) = ((MR_Box) (Var_377));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_328_328, 3) = ((MR_Box) (Var_378));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_328_328, 4) = (MR_Box) ((MR_Unsigned) (Var_379));
                          }
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word TableInfo_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_158, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_186, (MR_Integer) 3))));
                          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_304_304;
                          MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_40, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitAvailNeeds_304_304 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_304_304, 0) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_190 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_304_304;
                          else
                          {
                            MR_Word Attributes_191 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_190, (MR_Integer) 0))));
                            MR_Word StatsAttr_192 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_191, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);

                            switch (StatsAttr_192) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_304_304;
                                break;
                              case (MR_Integer) 0:
                                {
                                  STATE_VARIABLE_ImplicitAvailNeeds_331_331 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_331_331, 0) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                          STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Specs_302_302 = STATE_VARIABLE_Specs_0_42;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Pieces_205;
                MR_Word Spec_206;
                MR_Word Var_290;
                MR_Word Var_291;
                MR_Word Var_301;

                Var_291 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_107);
                Var_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_291, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[118])), Var_290);
                Var_301 = parse_tree__prog_item__get_item_context_1_f_0(Item_107);
                {
                  Spec_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/43"));
                  MR_hl_field(MR_mktag(1), Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_206, 3) = ((MR_Box) (Var_301));
                  MR_hl_field(MR_mktag(1), Spec_206, 4) = ((MR_Box) (Pieces_205));
                }
                {
                  STATE_VARIABLE_Specs_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_302_302, 0) = ((MR_Box) (Spec_206));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_302_302, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepnInfo_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_107, (MR_Integer) 1))));
                MR_Word Var_258;
                MR_Word Var_259;
                MR_Word Var_269;
                MR_Word Pieces_360;
                MR_Word Spec_361;

                Var_259 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_107);
                Var_258 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_259, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_360 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[118])), Var_258);
                Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_211, (MR_Integer) 4))));
                {
                  Spec_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_361, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/43"));
                  MR_hl_field(MR_mktag(1), Spec_361, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_361, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_361, 3) = ((MR_Box) (Var_269));
                  MR_hl_field(MR_mktag(1), Spec_361, 4) = ((MR_Box) (Pieces_360));
                }
                {
                  STATE_VARIABLE_Specs_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_302_302, 0) = ((MR_Box) (Spec_361));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_302_302, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_333_333 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_332_332 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_329_329 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_327_327 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_326_326 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_325_325 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_324_324 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_322_322 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_321_321 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevClauses_320_320 = STATE_VARIABLE_RevClauses_0_20;
                STATE_VARIABLE_RevForeignEnums_318_318 = STATE_VARIABLE_RevForeignEnums_0_22;
                STATE_VARIABLE_RevForeignExportEnums_316_316 = STATE_VARIABLE_RevForeignExportEnums_0_24;
                STATE_VARIABLE_RevDeclPragmas_315_315 = STATE_VARIABLE_RevDeclPragmas_0_26;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_285_285 = STATE_VARIABLE_RevPromises_0_30;
                STATE_VARIABLE_RevInitialises_283_283 = STATE_VARIABLE_RevInitialises_0_32;
                STATE_VARIABLE_RevFinalises_279_279 = STATE_VARIABLE_RevFinalises_0_34;
                STATE_VARIABLE_RevMutables_275_275 = STATE_VARIABLE_RevMutables_0_36;
                STATE_VARIABLE_Contents_328_328 = STATE_VARIABLE_Contents_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_331_331 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_108;
      next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2 = STATE_VARIABLE_RevTypeDefnsAbs_333_333;
      next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4 = STATE_VARIABLE_RevTypeDefnsMer_332_332;
      next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6 = STATE_VARIABLE_RevTypeDefnsForeign_329_329;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_8 = STATE_VARIABLE_RevInstDefns_327_327;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_10 = STATE_VARIABLE_RevModeDefns_326_326;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_12 = STATE_VARIABLE_RevTypeClasses_325_325;
      next_value_of_STATE_VARIABLE_RevInstances_0_14 = STATE_VARIABLE_RevInstances_324_324;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_16 = STATE_VARIABLE_RevPredDecls_322_322;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_18 = STATE_VARIABLE_RevModeDecls_321_321;
      next_value_of_STATE_VARIABLE_RevClauses_0_20 = STATE_VARIABLE_RevClauses_320_320;
      next_value_of_STATE_VARIABLE_RevForeignEnums_0_22 = STATE_VARIABLE_RevForeignEnums_318_318;
      next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_24 = STATE_VARIABLE_RevForeignExportEnums_316_316;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_26 = STATE_VARIABLE_RevDeclPragmas_315_315;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_28 = STATE_VARIABLE_RevImplPragmas_303_303;
      next_value_of_STATE_VARIABLE_RevPromises_0_30 = STATE_VARIABLE_RevPromises_285_285;
      next_value_of_STATE_VARIABLE_RevInitialises_0_32 = STATE_VARIABLE_RevInitialises_283_283;
      next_value_of_STATE_VARIABLE_RevFinalises_0_34 = STATE_VARIABLE_RevFinalises_279_279;
      next_value_of_STATE_VARIABLE_RevMutables_0_36 = STATE_VARIABLE_RevMutables_275_275;
      next_value_of_STATE_VARIABLE_Contents_0_38 = STATE_VARIABLE_Contents_328_328;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40 = STATE_VARIABLE_ImplicitAvailNeeds_331_331;
      next_value_of_STATE_VARIABLE_Specs_0_42 = STATE_VARIABLE_Specs_302_302;
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
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_4)), FELangs0_6, &FELangs_7);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 1))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 2))));
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FELangs_7));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_19));
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
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_4)), Langs0_6, &Langs_7);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 3))));
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_8, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Langs_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_19));
    }
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_41_p_0(
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
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_20,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_21,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_23,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevImplPragmas_25,
  MR_Word STATE_VARIABLE_BadClausePreds_0_26,
  MR_Word * STATE_VARIABLE_BadClausePreds_27,
  MR_Word STATE_VARIABLE_RevPromises_0_28,
  MR_Word * STATE_VARIABLE_RevPromises_29,
  MR_Word STATE_VARIABLE_RevInitialises_0_30,
  MR_Word * STATE_VARIABLE_RevInitialises_31,
  MR_Word STATE_VARIABLE_RevFinalises_0_32,
  MR_Word * STATE_VARIABLE_RevFinalises_33,
  MR_Word STATE_VARIABLE_RevMutables_0_34,
  MR_Word * STATE_VARIABLE_RevMutables_35,
  MR_Word STATE_VARIABLE_Contents_0_36,
  MR_Word * STATE_VARIABLE_Contents_37,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_38,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
      *STATE_VARIABLE_ImplicitAvailNeeds_39 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
      *STATE_VARIABLE_Contents_37 = STATE_VARIABLE_Contents_0_36;
      *STATE_VARIABLE_RevMutables_35 = STATE_VARIABLE_RevMutables_0_34;
      *STATE_VARIABLE_RevFinalises_33 = STATE_VARIABLE_RevFinalises_0_32;
      *STATE_VARIABLE_RevInitialises_31 = STATE_VARIABLE_RevInitialises_0_30;
      *STATE_VARIABLE_RevPromises_29 = STATE_VARIABLE_RevPromises_0_28;
      *STATE_VARIABLE_BadClausePreds_27 = STATE_VARIABLE_BadClausePreds_0_26;
      *STATE_VARIABLE_RevImplPragmas_25 = STATE_VARIABLE_RevImplPragmas_0_24;
      *STATE_VARIABLE_RevDeclPragmas_23 = STATE_VARIABLE_RevDeclPragmas_0_22;
      *STATE_VARIABLE_RevForeignExportEnums_21 = STATE_VARIABLE_RevForeignExportEnums_0_20;
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
      MR_Word Item_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMutables_269_269;
      MR_Word STATE_VARIABLE_RevFinalises_273_273;
      MR_Word STATE_VARIABLE_RevInitialises_277_277;
      MR_Word STATE_VARIABLE_RevPromises_282_282;
      MR_Word STATE_VARIABLE_RevImplPragmas_303_303;
      MR_Word STATE_VARIABLE_RevDeclPragmas_306_306;
      MR_Word STATE_VARIABLE_Specs_310_310;
      MR_Word STATE_VARIABLE_BadClausePreds_317_317;
      MR_Word STATE_VARIABLE_RevModeDecls_318_318;
      MR_Word STATE_VARIABLE_RevPredDecls_326_326;
      MR_Word STATE_VARIABLE_RevInstances_328_328;
      MR_Word STATE_VARIABLE_RevTypeClasses_329_329;
      MR_Word STATE_VARIABLE_RevModeDefns_330_330;
      MR_Word STATE_VARIABLE_RevInstDefns_331_331;
      MR_Word STATE_VARIABLE_Contents_332_332;
      MR_Word STATE_VARIABLE_RevTypeDefnsForeign_333_333;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_335_335;
      MR_Word STATE_VARIABLE_RevTypeDefnsMer_336_336;
      MR_Word STATE_VARIABLE_RevTypeDefnsAbs_337_337;
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
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_24;
      MR_Word next_value_of_STATE_VARIABLE_BadClausePreds_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevPromises_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevInitialises_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevFinalises_0_32;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_34;
      MR_Word next_value_of_STATE_VARIABLE_Contents_0_36;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_38;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_40;

      switch (MR_tag((MR_Word) Item_102)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_160 = (MR_Word) ((MR_Word) (Item_102));
            MR_Word PredSymName_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_160, (MR_Integer) 0))));
            MR_Word PredOrFunc_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_160, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgTerms_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_160, (MR_Integer) 2))));
            MR_Word Context_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_160, (MR_Integer) 6))));
            MR_Integer Arity_169;
            MR_Word UnqualPredSymName_170;
            MR_String PredName_171;
            MR_String Var_307;
            MR_Word Var_308;
            MR_Word Var_309;
            MR_Word Var_313;
            MR_Word Var_314;
            MR_Word Var_316;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[34]), ArgTerms_163, &Arity_169);
            Var_307 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_161);
            {
              UnqualPredSymName_170 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), UnqualPredSymName_170, 0) = ((MR_Box) (Var_307));
            }
            {
              Var_308 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_308, 0) = ((MR_Box) (UnqualPredSymName_170));
              MR_hl_field(MR_mktag(0), Var_308, 1) = ((MR_Box) (Arity_169));
            }
            PredName_171 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_2_f_0(PredOrFunc_162, Var_308);
            {
              Var_314 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_314, 0) = ((MR_Box) (PredName_171));
            }
            {
              Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_313, 0) = ((MR_Box) (Var_314));
              MR_hl_field(MR_mktag(1), Var_313, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_309, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[116])));
              MR_hl_field(MR_mktag(1), Var_309, 1) = ((MR_Box) (Var_313));
            }
            parse_tree__convert_parse_tree__error_is_exported_4_p_0(Context_167, Var_309, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_310_310);
            {
              Var_316 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_316, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_162));
              MR_hl_field(MR_mktag(0), Var_316, 1) = ((MR_Box) (PredSymName_161));
              MR_hl_field(MR_mktag(0), Var_316, 2) = ((MR_Box) (Arity_169));
            }
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), ((MR_Box) (Var_316)), STATE_VARIABLE_BadClausePreds_0_26, &STATE_VARIABLE_BadClausePreds_317_317);
            STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
            STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
            STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
            STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
            STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
            STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
            STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
            STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefnInfo_136 = (MR_Word) (MR_body((MR_Word) (Item_102), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevInstDefns_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_331_331, 0) = ((MR_Box) (ItemInstDefnInfo_136));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_331_331, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_8));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
            STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
            STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
            STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
            STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
            STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
            STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
            STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
            STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
            STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
            STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefnInfo_137 = (MR_Word) (MR_body((MR_Word) (Item_102), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDefns_330_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_330_330, 0) = ((MR_Box) (ItemModeDefnInfo_137));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_330_330, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_10));
            }
            STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
            STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
            STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
            STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
            STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
            STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
            STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
            STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
            STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
            STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
            STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
            STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
            STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
            STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
            STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
            STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
            STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
            STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDeclInfo_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word SymName_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_140, (MR_Integer) 0))));
                MR_Word PorF_142 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_140, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgTypes_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_140, (MR_Integer) 2))));
                MR_Word WithType_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_140, (MR_Integer) 4))));
                MR_Word Var_322;
                MR_Word Var_323;

                if (((MR_tag((MR_Word) SymName_141)) == (MR_Integer) 1))
                {
                  MR_String Var_319 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_141, (MR_Integer) 1))));

                  succeeded = (strcmp(Var_319, (MR_String) "main") == 0);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/41", (MR_String) "unqualified SymName");
                    return;
                  }
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = (PorF_142 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (WithType_145 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ArgTypes_143 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_143, (MR_Integer) 1))));
                        succeeded = (Var_322 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_323 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_322, (MR_Integer) 1))));
                          succeeded = (Var_323 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_36, (MR_Integer) 0))));
                  MR_Word Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_36, (MR_Integer) 1))));
                  MR_Word Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_36, (MR_Integer) 2))));
                  MR_Word Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_36, (MR_Integer) 3))));

                  {
                    STATE_VARIABLE_Contents_332_332 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_332_332, 0) = ((MR_Box) (Var_371));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_332_332, 1) = ((MR_Box) (Var_372));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_332_332, 2) = ((MR_Box) (Var_373));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_332_332, 3) = ((MR_Box) (Var_374));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_332_332, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                }
                else
                  STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                {
                  STATE_VARIABLE_RevPredDecls_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_326_326, 0) = ((MR_Box) (ItemPredDeclInfo_140));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_326_326, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_16));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDeclInfo_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_318_318, 0) = ((MR_Box) (ItemModeDeclInfo_159));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_318_318, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_18));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word Var_278;
                MR_Word Var_279;

                Var_278 = parse_tree__prog_item__get_item_context_1_f_0(Item_102);
                Var_279 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_278, Var_279, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_310_310);
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromiseInfo_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_202, STATE_VARIABLE_ImplicitAvailNeeds_0_38, &STATE_VARIABLE_ImplicitAvailNeeds_335_335);
                {
                  STATE_VARIABLE_RevPromises_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_282_282, 0) = ((MR_Box) (ItemPromiseInfo_202));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_282_282, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_28));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeclassInfo_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_329_329, 0) = ((MR_Box) (ItemTypeclassInfo_138));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_329_329, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_12));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_139, STATE_VARIABLE_ImplicitAvailNeeds_0_38, &STATE_VARIABLE_ImplicitAvailNeeds_335_335);
                {
                  STATE_VARIABLE_RevInstances_328_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_328_328, 0) = ((MR_Box) (ItemInstanceInfo_139));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_328_328, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_14));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInitialiseInfo_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word Var_274;
                MR_Word Var_275;

                Var_274 = parse_tree__prog_item__get_item_context_1_f_0(Item_102);
                Var_275 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_274, Var_275, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_310_310);
                {
                  STATE_VARIABLE_RevInitialises_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_277_277, 0) = ((MR_Box) (ItemInitialiseInfo_205));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_277_277, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_30));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemFinaliseInfo_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word Var_270;
                MR_Word Var_271;

                Var_270 = parse_tree__prog_item__get_item_context_1_f_0(Item_102);
                Var_271 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_270, Var_271, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_310_310);
                {
                  STATE_VARIABLE_RevFinalises_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_273_273, 0) = ((MR_Box) (ItemFinaliseInfo_206));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_273_273, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_32));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word Var_266;
                MR_Word Var_267;

                Var_266 = parse_tree__prog_item__get_item_context_1_f_0(Item_102);
                Var_267 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_266, Var_267, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_310_310);
                {
                  STATE_VARIABLE_RevMutables_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_269_269, 0) = ((MR_Box) (ItemMutableInfo_207));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_269_269, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_34));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefnInfo_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word TypeDefn_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_124, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) TypeDefn_127)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_336_336, 0) = ((MR_Box) (ItemTypeDefnInfo_124));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_336_336, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                      STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DetailsSolver_132 = (MR_Word) (MR_body((MR_Word) (TypeDefn_127), (MR_Integer) 1));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_132, STATE_VARIABLE_ImplicitAvailNeeds_0_38, &STATE_VARIABLE_ImplicitAvailNeeds_335_335);
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_336_336, 0) = ((MR_Box) (ItemTypeDefnInfo_124));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_336_336, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        STATE_VARIABLE_RevTypeDefnsMer_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_336_336, 0) = ((MR_Box) (ItemTypeDefnInfo_124));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsMer_336_336, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsMer_0_4));
                      }
                      STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                      STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                      STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                      STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_127, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            STATE_VARIABLE_RevTypeDefnsAbs_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_337_337, 0) = ((MR_Box) (ItemTypeDefnInfo_124));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsAbs_337_337, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsAbs_0_2));
                          }
                          STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                          STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                          STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word DetailsForeign_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_127, (MR_Integer) 1))));

                          parse_tree__convert_parse_tree__accumulate_contents_foreign_type_3_p_0(DetailsForeign_135, STATE_VARIABLE_Contents_0_36, &STATE_VARIABLE_Contents_332_332);
                          {
                            STATE_VARIABLE_RevTypeDefnsForeign_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_333_333, 0) = ((MR_Box) (ItemTypeDefnInfo_124));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefnsForeign_333_333, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefnsForeign_0_6));
                          }
                          STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                          STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                          STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_306_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_306_306, 0) = ((MR_Box) (ItemDeclPragma_172));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_306_306, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_22));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
                STATE_VARIABLE_Specs_310_310 = STATE_VARIABLE_Specs_0_40;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word ImplPragma_174;
                MR_Word Var_300;
                MR_Word Var_301;

                Var_300 = parse_tree__prog_item__get_item_context_1_f_0(Item_102);
                Var_301 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                parse_tree__convert_parse_tree__error_is_exported_4_p_0(Var_300, Var_301, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_310_310);
                {
                  STATE_VARIABLE_RevImplPragmas_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_303_303, 0) = ((MR_Box) (ItemImplPragma_173));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_303_303, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_24));
                }
                ImplPragma_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_173, (MR_Integer) 0))));
                switch (MR_tag((MR_Word) ImplPragma_174)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ForeignProcInfo_176 = (MR_Word) (MR_body((MR_Word) (ImplPragma_174), (MR_Integer) 2));
                      MR_Word Vars_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_176, (MR_Integer) 3))));
                      MR_Word Var_387;
                      MR_Word SymName_388 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_176, (MR_Integer) 1))));
                      MR_Word PredOrFunc_389 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_176, (MR_Integer) 2))) & (MR_Integer) 1);
                      MR_Integer Arity_390;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars_178, &Arity_390);
                      {
                        Var_387 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_387, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_389));
                        MR_hl_field(MR_mktag(0), Var_387, 1) = ((MR_Box) (SymName_388));
                        MR_hl_field(MR_mktag(0), Var_387, 2) = ((MR_Box) (Arity_390));
                      }
                      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), ((MR_Box) (Var_387)), STATE_VARIABLE_BadClausePreds_0_26, &STATE_VARIABLE_BadClausePreds_317_317);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_174, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ExternalProcInfo_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_174, (MR_Integer) 1))));
                          MR_Word Var_304;
                          MR_Word SymName_359 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalProcInfo_182, (MR_Integer) 0))));
                          MR_Word PredOrFunc_360 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExternalProcInfo_182, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_Integer Arity_361 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExternalProcInfo_182, (MR_Integer) 1))));

                          {
                            Var_304 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_304, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_360));
                            MR_hl_field(MR_mktag(0), Var_304, 1) = ((MR_Box) (SymName_359));
                            MR_hl_field(MR_mktag(0), Var_304, 2) = ((MR_Box) (Arity_361));
                          }
                          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), ((MR_Box) (Var_304)), STATE_VARIABLE_BadClausePreds_0_26, &STATE_VARIABLE_BadClausePreds_317_317);
                        }
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 3:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 6:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 7:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 8:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 9:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 10:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 11:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 12:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                      case (MR_Integer) 13:
                        STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Pieces_200;
                MR_Word Spec_201;
                MR_Word Var_287;
                MR_Word Var_288;
                MR_Word Var_298;

                Var_288 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_288, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[118])), Var_287);
                Var_298 = parse_tree__prog_item__get_item_context_1_f_0(Item_102);
                {
                  Spec_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_201, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/41"));
                  MR_hl_field(MR_mktag(1), Spec_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_201, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_201, 3) = ((MR_Box) (Var_298));
                  MR_hl_field(MR_mktag(1), Spec_201, 4) = ((MR_Box) (Pieces_200));
                }
                {
                  STATE_VARIABLE_Specs_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_310_310, 0) = ((MR_Box) (Spec_201));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_310_310, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepnInfo_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_102, (MR_Integer) 1))));
                MR_Word Var_253;
                MR_Word Var_254;
                MR_Word Var_264;
                MR_Word Pieces_369;
                MR_Word Spec_370;

                Var_254 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_102);
                Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_254, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_369 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[118])), Var_253);
                Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_208, (MR_Integer) 4))));
                {
                  Spec_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_370, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/41"));
                  MR_hl_field(MR_mktag(1), Spec_370, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_370, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_370, 3) = ((MR_Box) (Var_264));
                  MR_hl_field(MR_mktag(1), Spec_370, 4) = ((MR_Box) (Pieces_369));
                }
                {
                  STATE_VARIABLE_Specs_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_310_310, 0) = ((MR_Box) (Spec_370));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_310_310, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
                }
                STATE_VARIABLE_RevTypeDefnsAbs_337_337 = STATE_VARIABLE_RevTypeDefnsAbs_0_2;
                STATE_VARIABLE_RevTypeDefnsMer_336_336 = STATE_VARIABLE_RevTypeDefnsMer_0_4;
                STATE_VARIABLE_RevTypeDefnsForeign_333_333 = STATE_VARIABLE_RevTypeDefnsForeign_0_6;
                STATE_VARIABLE_RevInstDefns_331_331 = STATE_VARIABLE_RevInstDefns_0_8;
                STATE_VARIABLE_RevModeDefns_330_330 = STATE_VARIABLE_RevModeDefns_0_10;
                STATE_VARIABLE_RevTypeClasses_329_329 = STATE_VARIABLE_RevTypeClasses_0_12;
                STATE_VARIABLE_RevInstances_328_328 = STATE_VARIABLE_RevInstances_0_14;
                STATE_VARIABLE_RevPredDecls_326_326 = STATE_VARIABLE_RevPredDecls_0_16;
                STATE_VARIABLE_RevModeDecls_318_318 = STATE_VARIABLE_RevModeDecls_0_18;
                STATE_VARIABLE_RevDeclPragmas_306_306 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_303_303 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_BadClausePreds_317_317 = STATE_VARIABLE_BadClausePreds_0_26;
                STATE_VARIABLE_RevPromises_282_282 = STATE_VARIABLE_RevPromises_0_28;
                STATE_VARIABLE_RevInitialises_277_277 = STATE_VARIABLE_RevInitialises_0_30;
                STATE_VARIABLE_RevFinalises_273_273 = STATE_VARIABLE_RevFinalises_0_32;
                STATE_VARIABLE_RevMutables_269_269 = STATE_VARIABLE_RevMutables_0_34;
                STATE_VARIABLE_Contents_332_332 = STATE_VARIABLE_Contents_0_36;
                STATE_VARIABLE_ImplicitAvailNeeds_335_335 = STATE_VARIABLE_ImplicitAvailNeeds_0_38;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_103;
      next_value_of_STATE_VARIABLE_RevTypeDefnsAbs_0_2 = STATE_VARIABLE_RevTypeDefnsAbs_337_337;
      next_value_of_STATE_VARIABLE_RevTypeDefnsMer_0_4 = STATE_VARIABLE_RevTypeDefnsMer_336_336;
      next_value_of_STATE_VARIABLE_RevTypeDefnsForeign_0_6 = STATE_VARIABLE_RevTypeDefnsForeign_333_333;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_8 = STATE_VARIABLE_RevInstDefns_331_331;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_10 = STATE_VARIABLE_RevModeDefns_330_330;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_12 = STATE_VARIABLE_RevTypeClasses_329_329;
      next_value_of_STATE_VARIABLE_RevInstances_0_14 = STATE_VARIABLE_RevInstances_328_328;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_16 = STATE_VARIABLE_RevPredDecls_326_326;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_18 = STATE_VARIABLE_RevModeDecls_318_318;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_22 = STATE_VARIABLE_RevDeclPragmas_306_306;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_24 = STATE_VARIABLE_RevImplPragmas_303_303;
      next_value_of_STATE_VARIABLE_BadClausePreds_0_26 = STATE_VARIABLE_BadClausePreds_317_317;
      next_value_of_STATE_VARIABLE_RevPromises_0_28 = STATE_VARIABLE_RevPromises_282_282;
      next_value_of_STATE_VARIABLE_RevInitialises_0_30 = STATE_VARIABLE_RevInitialises_277_277;
      next_value_of_STATE_VARIABLE_RevFinalises_0_32 = STATE_VARIABLE_RevFinalises_273_273;
      next_value_of_STATE_VARIABLE_RevMutables_0_34 = STATE_VARIABLE_RevMutables_269_269;
      next_value_of_STATE_VARIABLE_Contents_0_36 = STATE_VARIABLE_Contents_332_332;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_38 = STATE_VARIABLE_ImplicitAvailNeeds_335_335;
      next_value_of_STATE_VARIABLE_Specs_0_40 = STATE_VARIABLE_Specs_310_310;
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
      STATE_VARIABLE_RevDeclPragmas_0_22 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_22;
      STATE_VARIABLE_RevImplPragmas_0_24 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_24;
      STATE_VARIABLE_BadClausePreds_0_26 = next_value_of_STATE_VARIABLE_BadClausePreds_0_26;
      STATE_VARIABLE_RevPromises_0_28 = next_value_of_STATE_VARIABLE_RevPromises_0_28;
      STATE_VARIABLE_RevInitialises_0_30 = next_value_of_STATE_VARIABLE_RevInitialises_0_30;
      STATE_VARIABLE_RevFinalises_0_32 = next_value_of_STATE_VARIABLE_RevFinalises_0_32;
      STATE_VARIABLE_RevMutables_0_34 = next_value_of_STATE_VARIABLE_RevMutables_0_34;
      STATE_VARIABLE_Contents_0_36 = next_value_of_STATE_VARIABLE_Contents_0_36;
      STATE_VARIABLE_ImplicitAvailNeeds_0_38 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_38;
      STATE_VARIABLE_Specs_0_40 = next_value_of_STATE_VARIABLE_Specs_0_40;
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

    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[99])));
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[115])), Var_16);
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;

    Var_11 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_6);
    Langs0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 2))));
    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_11)), Langs0_17, &Langs_18);
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 1))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 3))));
    Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_9, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Langs_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_28));
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
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntInstance_12, (MR_Integer) 8))));
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
parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_36(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv39_HeadVar__2_2;

    conv39_HeadVar__2_2 = parse_tree__item_util__wrap_mutable_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv39_HeadVar__2_2));
    return wrapper_arg_2;
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

    conv38_HeadVar__2_2 = parse_tree__item_util__wrap_finalise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv37_HeadVar__2_2 = parse_tree__item_util__wrap_initialise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv36_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv35_HeadVar__2_2 = parse_tree__item_util__wrap_impl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv34_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv33_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_export_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv32_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv31_HeadVar__2_2 = parse_tree__item_util__wrap_clause_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv30_HeadVar__2_2 = parse_tree__item_util__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv29_HeadVar__2_2 = parse_tree__item_util__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv28_HeadVar__2_2 = parse_tree__item_util__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv27_HeadVar__2_2 = parse_tree__item_util__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv26_HeadVar__2_2 = parse_tree__item_util__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv25_HeadVar__2_2 = parse_tree__item_util__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv24_HeadVar__2_2 = parse_tree__item_util__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv21_HeadVar__2_2 = parse_tree__item_util__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv20_HeadVar__2_2 = parse_tree__item_util__wrap_decl_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv19_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_export_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word IntForeignExportEnums_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 22))));
    MR_Word IntDeclPragmas_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 23))));
    MR_Word IntPromises_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsAbs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsMer_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 27))));
    MR_Word ImpTypeDefnsForeign_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 28))));
    MR_Word ImpInstDefns_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 29))));
    MR_Word ImpModeDefns_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 30))));
    MR_Word ImpTypeClasses_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 31))));
    MR_Word ImpInstances_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 32))));
    MR_Word ImpPredDecls_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 33))));
    MR_Word ImpModeDecls_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 34))));
    MR_Word ImpClauses_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 35))));
    MR_Word ImpForeignEnums_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 36))));
    MR_Word ImpForeignExportEnums_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 37))));
    MR_Word ImpDeclPragmas_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 38))));
    MR_Word ImpImplPragmas_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 39))));
    MR_Word ImpPromises_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 40))));
    MR_Word ImpInitialises_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 41))));
    MR_Word ImpFinalises_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 42))));
    MR_Word ImpMutables_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 43))));
    MR_Word IntIncls_49;
    MR_Word ImpIncls_50;
    MR_Word IntAvails0_51;
    MR_Word IntAvails1_52;
    MR_Word ImpAvails0_53;
    MR_Word ImpAvails1_54;
    MR_Word IntAvails_55;
    MR_Word ImpAvails_56;
    MR_Word IntFIMs_57;
    MR_Word ImpFIMs_61;
    MR_Word IntItems_62;
    MR_Word ImpItems_63;
    MR_Word SrcItemBlocks0_64;
    MR_Word SrcItemBlocks_65;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_168;
    MR_Box conv1_IntAvails0_51;
    MR_Box conv3_IntAvails1_52;
    MR_Box conv4_ImpAvails0_53;
    MR_Box conv5_ImpAvails1_54;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_9, &IntIncls_49, &ImpIncls_50);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[0]), IntImportMap_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_IntAvails0_51);
    IntAvails0_51 = ((MR_Word) (conv1_IntAvails0_51));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[1]), IntUseMap_11, ((MR_Box) (IntAvails0_51)), &conv3_IntAvails1_52);
    IntAvails1_52 = ((MR_Word) (conv3_IntAvails1_52));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[0]), ImpImportMap_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ImpAvails0_53);
    ImpAvails0_53 = ((MR_Word) (conv4_ImpAvails0_53));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_6[1]), ImpUseMap_13, ((MR_Box) (ImpAvails0_53)), &conv5_ImpAvails1_54);
    ImpAvails1_54 = ((MR_Word) (conv5_ImpAvails1_54));
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails1_52, &IntAvails_55);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvails1_54, &ImpAvails_56);
    if ((MaybeImplicitFIMLangs_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_81;

      Var_81 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_15);
      IntFIMs_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[63]), Var_81);
    }
    else
    {
      MR_Word ImplicitFIMLangs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_17, (MR_Integer) 0))));
      MR_Word ImplicitFIMSpecs_59;
      MR_Word IntFIMSpecs_60;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_79;

      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[10]));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__convert_parse_tree__convert_parse_tree_module_src_to_raw_comp_unit_2_p_0_4));
        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ModuleName_5));
      }
      ImplicitFIMSpecs_59 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_76, ImplicitFIMLangs_58);
      Var_77 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_15);
      mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_77, ImplicitFIMSpecs_59, &IntFIMSpecs_60);
      Var_79 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_60);
      IntFIMs_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[64]), Var_79);
    }
    Var_83 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_16);
    ImpFIMs_61 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[65]), Var_83);
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[66]), IntTypeDefnsAbs_18);
    Var_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[67]), IntTypeDefnsMer_19);
    Var_90 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[68]), IntTypeDefnsForeign_20);
    Var_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[69]), IntInstDefns_21);
    Var_96 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[70]), IntModeDefns_22);
    Var_99 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[71]), IntTypeClasses_23);
    Var_102 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[72]), IntInstances_24);
    Var_105 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[73]), IntPredDecls_25);
    Var_108 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[74]), IntModeDecls_26);
    Var_111 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[75]), IntForeignExportEnums_27);
    Var_114 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[76]), IntDeclPragmas_28);
    Var_116 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[77]), IntPromises_29);
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_114, Var_116);
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_111, Var_113);
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_108, Var_110);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_105, Var_107);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_102, Var_104);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_99, Var_101);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_96, Var_98);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_93, Var_95);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_90, Var_92);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_87, Var_89);
    IntItems_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_84, Var_86);
    Var_118 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[78]), ImpTypeDefnsAbs_31);
    Var_121 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[79]), ImpTypeDefnsMer_32);
    Var_124 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[80]), ImpTypeDefnsForeign_33);
    Var_127 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[81]), ImpInstDefns_34);
    Var_130 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[82]), ImpModeDefns_35);
    Var_133 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[83]), ImpTypeClasses_36);
    Var_136 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[84]), ImpInstances_37);
    Var_139 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[85]), ImpPredDecls_38);
    Var_142 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[86]), ImpModeDecls_39);
    Var_145 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[87]), ImpClauses_40);
    Var_148 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[88]), ImpForeignEnums_41);
    Var_151 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[89]), ImpForeignExportEnums_42);
    Var_154 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[90]), ImpDeclPragmas_43);
    Var_157 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[91]), ImpImplPragmas_44);
    Var_160 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[92]), ImpPromises_45);
    Var_163 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[93]), ImpInitialises_46);
    Var_166 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[94]), ImpFinalises_47);
    Var_168 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[95]), ImpMutables_48);
    Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_166, Var_168);
    Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_163, Var_165);
    Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_160, Var_162);
    Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_157, Var_159);
    Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_154, Var_156);
    Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_151, Var_153);
    Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_148, Var_150);
    Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_145, Var_147);
    Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_142, Var_144);
    Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_139, Var_141);
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_136, Var_138);
    Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_133, Var_135);
    Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_130, Var_132);
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_127, Var_129);
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_124, Var_126);
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_121, Var_123);
    ImpItems_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_118, Var_120);
    parse_tree__item_util__make_and_add_item_block_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 0)), IntIncls_49, IntAvails_55, IntFIMs_57, IntItems_62, (MR_Word) ((MR_Unsigned) 0U), &SrcItemBlocks0_64);
    parse_tree__item_util__make_and_add_item_block_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 1)), ImpIncls_50, ImpAvails_56, ImpFIMs_61, ImpItems_63, SrcItemBlocks0_64, &SrcItemBlocks_65);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *RawCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SrcItemBlocks_65));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1241__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4", (MR_String) "trying to convert non-ofk_trans_opt parse_tree_opt to parse_tree_trans_opt");
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
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
            Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[113])), Var_118);
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
                Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[113])), Var_118);
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
                MR_Integer SeqNum_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_52, (MR_Integer) 2))));

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
                      Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_173, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                      Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[113])), Var_172);
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
                          Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_173, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                          Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[113])), Var_172);
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
                Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_156, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[113])), Var_155);
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
                MR_Integer SeqNum_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemGenPragma_74, (MR_Integer) 2))));

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
                      Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_136, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                      Pieces_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[113])), Var_135);
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
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
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
    MR_Word RevClauses_24;
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
    MR_Word Clauses_45;
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
    MR_Word Var_60;
    MR_Word Var_66;
    MR_Word Var_67;

    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (OptFileKind_9));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_plain_opt\'/4", (MR_String) "trying to convert non-ofk_plain_opt parse_tree_opt to parse_tree_plain_opt");
    Var_66 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(Uses_11, Var_66, &UseMap_14);
    Var_67 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[62]), FIMs_12);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_67, &FIMSpecs_15);
    parse_tree__convert_parse_tree__classify_plain_opt_items_45_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TypeDefns0_16, (MR_Word) ((MR_Unsigned) 0U), &ForeignEnums0_17, (MR_Word) ((MR_Unsigned) 0U), &InstDefns0_18, (MR_Word) ((MR_Unsigned) 0U), &ModeDefns0_19, (MR_Word) ((MR_Unsigned) 0U), &TypeClasses0_20, (MR_Word) ((MR_Unsigned) 0U), &Instances0_21, (MR_Word) ((MR_Unsigned) 0U), &PredDecls0_22, (MR_Word) ((MR_Unsigned) 0U), &RevModeDecls_23, (MR_Word) ((MR_Unsigned) 0U), &RevClauses_24, (MR_Word) ((MR_Unsigned) 0U), &RevForeignProcs_25, (MR_Word) ((MR_Unsigned) 0U), &Promises0_26, (MR_Word) ((MR_Unsigned) 0U), &PredMarkers0_27, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs0_28, (MR_Word) ((MR_Unsigned) 0U), &UnusedArgs0_29, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_30, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_31, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_32, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_33, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_34, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_35, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_36, STATE_VARIABLE_Specs_0_58, STATE_VARIABLE_Specs_59);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), TypeDefns0_16, &TypeDefns_37);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnums0_17, &ForeignEnums_38);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), InstDefns0_18, &InstDefns_39);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ModeDefns0_19, &ModeDefns_40);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), TypeClasses0_20, &TypeClasses_41);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), Instances0_21, &Instances_42);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDecls0_22, &PredDecls_43);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevModeDecls_23, &ModeDecls_44);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevClauses_24, &Clauses_45);
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
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Clauses_45));
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
      MR_Word STATE_VARIABLE_MMTablings_259_259;
      MR_Word STATE_VARIABLE_Trailings_260_260;
      MR_Word STATE_VARIABLE_Exceptions_261_261;
      MR_Word STATE_VARIABLE_UnusedArgs_262_262;
      MR_Word STATE_VARIABLE_RevForeignProcs_280_280;
      MR_Word STATE_VARIABLE_Specs_298_298;
      MR_Word STATE_VARIABLE_Reuses_299_299;
      MR_Word STATE_VARIABLE_Sharings_300_300;
      MR_Word STATE_VARIABLE_Term2Infos_301_301;
      MR_Word STATE_VARIABLE_TermInfos_302_302;
      MR_Word STATE_VARIABLE_PredMarkers_303_303;
      MR_Word STATE_VARIABLE_TypeSpecs_304_304;
      MR_Word STATE_VARIABLE_Promises_305_305;
      MR_Word STATE_VARIABLE_RevClauses_306_306;
      MR_Word STATE_VARIABLE_RevModeDecls_307_307;
      MR_Word STATE_VARIABLE_PredDecls_308_308;
      MR_Word STATE_VARIABLE_Instances_309_309;
      MR_Word STATE_VARIABLE_TypeClasses_310_310;
      MR_Word STATE_VARIABLE_ModeDefns_311_311;
      MR_Word STATE_VARIABLE_InstDefns_312_312;
      MR_Word STATE_VARIABLE_ForeignEnums_313_313;
      MR_Word STATE_VARIABLE_TypeDefns_314_314;
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
              STATE_VARIABLE_RevClauses_306_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_306_306, 0) = ((MR_Box) (ItemClause_144));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_306_306, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_18));
            }
            STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
            STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
            STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
            STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
            STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
            STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
            STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
            STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
            STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
            STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
            STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_138 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_312_312, 0) = ((MR_Box) (ItemInstDefn_138));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_312_312, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
            STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
            STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
            STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
            STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
            STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
            STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
            STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
            STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
            STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
            STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_139 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_311_311, 0) = ((MR_Box) (ItemModeDefn_139));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_311_311, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_8));
            }
            STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
            STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
            STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
            STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
            STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
            STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
            STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
            STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
            STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
            STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
            STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_PredDecls_308_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_308_308, 0) = ((MR_Box) (ItemPredDecl_142));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_308_308, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_14));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_307_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_307_307, 0) = ((MR_Box) (ItemModeDecl_143));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_307_307, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_16));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_313_313, 0) = ((MR_Box) (ItemForeignEnum_137));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_313_313, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 14:
              {
                MR_Word Var_246;
                MR_Word Var_247;
                MR_Word Var_257;
                MR_Word Pieces_359;
                MR_Word Spec_360;

                Var_247 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                Var_246 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_247, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_359 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[111])), Var_246);
                Var_257 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                {
                  Spec_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_360, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                  MR_hl_field(MR_mktag(1), Spec_360, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_360, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_360, 3) = ((MR_Box) (Var_257));
                  MR_hl_field(MR_mktag(1), Spec_360, 4) = ((MR_Box) (Pieces_359));
                }
                {
                  STATE_VARIABLE_Specs_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 0) = ((MR_Box) (Spec_360));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Promises_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_305_305, 0) = ((MR_Box) (ItemPromise_145));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_310_310, 0) = ((MR_Box) (ItemTypeClass_140));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_310_310, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_10));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_309_309, 0) = ((MR_Box) (ItemInstance_141));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_309_309, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_12));
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_314_314, 0) = ((MR_Box) (ItemTypeDefn_136));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_314_314, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));
                MR_Word DeclPragma_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_146, (MR_Integer) 0))));
                MR_Word Context_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_146, (MR_Integer) 1))));
                MR_Integer SeqNum_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_146, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) DeclPragma_147)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Pieces_168;
                      MR_Word Spec_169;
                      MR_Word Var_286;
                      MR_Word Var_287;
                      MR_Word Var_297;

                      Var_287 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                      Var_286 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_287, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                      Pieces_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[111])), Var_286);
                      Var_297 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                      {
                        Spec_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_169, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                        MR_hl_field(MR_mktag(1), Spec_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_169, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_169, 3) = ((MR_Box) (Var_297));
                        MR_hl_field(MR_mktag(1), Spec_169, 4) = ((MR_Box) (Pieces_168));
                      }
                      {
                        STATE_VARIABLE_Specs_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 0) = ((MR_Box) (Spec_169));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                      }
                      STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                      STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                      STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                      STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                      STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                      STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
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
                        STATE_VARIABLE_TypeSpecs_304_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeSpecs_304_304, 0) = ((MR_Box) (ItemTypeSpec_151));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeSpecs_304_304, 1) = ((MR_Box) (STATE_VARIABLE_TypeSpecs_0_26));
                      }
                      STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                      STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                      STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                      STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                      STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                      STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 3:
                        {
                          MR_Word Pieces_168;
                          MR_Word Spec_169;
                          MR_Word Var_286;
                          MR_Word Var_287;
                          MR_Word Var_297;

                          Var_287 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                          Var_286 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_287, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                          Pieces_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[111])), Var_286);
                          Var_297 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                          {
                            Spec_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_169, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                            MR_hl_field(MR_mktag(1), Spec_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_169, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), Spec_169, 3) = ((MR_Box) (Var_297));
                            MR_hl_field(MR_mktag(1), Spec_169, 4) = ((MR_Box) (Pieces_168));
                          }
                          {
                            STATE_VARIABLE_Specs_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 0) = ((MR_Box) (Spec_169));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                          }
                          STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word SymNameArity_364 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word PredMarker_366;
                          MR_Word ItemPredMarker_367;

                          {
                            PredMarker_366 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_366, 0) = ((MR_Box) (SymNameArity_364));
                            MR_hl_field(MR_mktag(0), PredMarker_366, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                          }
                          {
                            ItemPredMarker_367 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_367, 0) = ((MR_Box) (PredMarker_366));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_367, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_367, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_367));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word SymNameArity_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word PredMarker_154;
                          MR_Word ItemPredMarker_155;

                          {
                            PredMarker_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_154, 0) = ((MR_Box) (SymNameArity_152));
                            MR_hl_field(MR_mktag(0), PredMarker_154, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                          }
                          {
                            ItemPredMarker_155 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_155, 0) = ((MR_Box) (PredMarker_154));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_155, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_155, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_155));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Term_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemTerm_157;

                          {
                            ItemTerm_157 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemTerm_157, 0) = ((MR_Box) (Term_156));
                            MR_hl_field(MR_mktag(0), ItemTerm_157, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemTerm_157, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_TermInfos_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TermInfos_302_302, 0) = ((MR_Box) (ItemTerm_157));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TermInfos_302_302, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_30));
                          }
                          STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Term2_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemTerm2_159;

                          {
                            ItemTerm2_159 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemTerm2_159, 0) = ((MR_Box) (Term2_158));
                            MR_hl_field(MR_mktag(0), ItemTerm2_159, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemTerm2_159, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_Term2Infos_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Term2Infos_301_301, 0) = ((MR_Box) (ItemTerm2_159));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Term2Infos_301_301, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_32));
                          }
                          STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Sharing_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemSharing_161;

                          {
                            ItemSharing_161 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemSharing_161, 0) = ((MR_Box) (Sharing_160));
                            MR_hl_field(MR_mktag(0), ItemSharing_161, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemSharing_161, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_Sharings_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sharings_300_300, 0) = ((MR_Box) (ItemSharing_161));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sharings_300_300, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_40));
                          }
                          STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word Reuse_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DeclPragma_147, (MR_Integer) 1))));
                          MR_Word ItemReuse_163;

                          {
                            ItemReuse_163 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemReuse_163, 0) = ((MR_Box) (Reuse_162));
                            MR_hl_field(MR_mktag(0), ItemReuse_163, 1) = ((MR_Box) (Context_148));
                            MR_hl_field(MR_mktag(0), ItemReuse_163, 2) = ((MR_Box) (SeqNum_149));
                          }
                          {
                            STATE_VARIABLE_Reuses_299_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Reuses_299_299, 0) = ((MR_Box) (ItemReuse_163));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Reuses_299_299, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_42));
                          }
                          STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                          STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                          STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                          STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                          STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));
                MR_Word ImplPragma_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_170, (MR_Integer) 0))));
                MR_Word Context_349 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_170, (MR_Integer) 1))));
                MR_Integer SeqNum_350 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemImplPragma_170, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) ImplPragma_171)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_267;
                      MR_Word Var_268;
                      MR_Word Var_278;
                      MR_Word Pieces_341;
                      MR_Word Spec_342;

                      Var_268 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                      Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_268, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                      Pieces_341 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[111])), Var_267);
                      Var_278 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                      {
                        Spec_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_342, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                        MR_hl_field(MR_mktag(1), Spec_342, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_342, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_342, 3) = ((MR_Box) (Var_278));
                        MR_hl_field(MR_mktag(1), Spec_342, 4) = ((MR_Box) (Pieces_341));
                      }
                      {
                        STATE_VARIABLE_Specs_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 0) = ((MR_Box) (Spec_342));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                      }
                      STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                      STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ForeignProc_172 = (MR_Word) (MR_body((MR_Word) (ImplPragma_171), (MR_Integer) 2));
                      MR_Word ItemForeignProc_173;

                      {
                        ItemForeignProc_173 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemForeignProc_173, 0) = ((MR_Box) (ForeignProc_172));
                        MR_hl_field(MR_mktag(0), ItemForeignProc_173, 1) = ((MR_Box) (Context_349));
                        MR_hl_field(MR_mktag(0), ItemForeignProc_173, 2) = ((MR_Box) (SeqNum_350));
                      }
                      {
                        STATE_VARIABLE_RevForeignProcs_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignProcs_280_280, 0) = ((MR_Box) (ItemForeignProc_173));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignProcs_280_280, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_20));
                      }
                      STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                      STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 0))))) {
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
                          MR_Word Var_267;
                          MR_Word Var_268;
                          MR_Word Var_278;
                          MR_Word Pieces_341;
                          MR_Word Spec_342;

                          Var_268 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                          Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_268, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                          Pieces_341 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[111])), Var_267);
                          Var_278 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                          {
                            Spec_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_342, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                            MR_hl_field(MR_mktag(1), Spec_342, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_342, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), Spec_342, 3) = ((MR_Box) (Var_278));
                            MR_hl_field(MR_mktag(1), Spec_342, 4) = ((MR_Box) (Pieces_341));
                          }
                          {
                            STATE_VARIABLE_Specs_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 0) = ((MR_Box) (Spec_342));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_298_298, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word SymNameArity_337 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 1))));
                          MR_Word PredMarker_339;
                          MR_Word ItemPredMarker_340;

                          {
                            PredMarker_339 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_339, 0) = ((MR_Box) (SymNameArity_337));
                            MR_hl_field(MR_mktag(0), PredMarker_339, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                          {
                            ItemPredMarker_340 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_340, 0) = ((MR_Box) (PredMarker_339));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_340, 1) = ((MR_Box) (Context_349));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_340, 2) = ((MR_Box) (SeqNum_350));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_340));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word SymNameArity_372 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 1))));
                          MR_Word PredMarker_374;
                          MR_Word ItemPredMarker_375;

                          {
                            PredMarker_374 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_374, 0) = ((MR_Box) (SymNameArity_372));
                            MR_hl_field(MR_mktag(0), PredMarker_374, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                          }
                          {
                            ItemPredMarker_375 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_375, 0) = ((MR_Box) (PredMarker_374));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_375, 1) = ((MR_Box) (Context_349));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_375, 2) = ((MR_Box) (SeqNum_350));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_375));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word SymNameArity_368 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 1))));
                          MR_Word PredMarker_370;
                          MR_Word ItemPredMarker_371;

                          {
                            PredMarker_370 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_370, 0) = ((MR_Box) (SymNameArity_368));
                            MR_hl_field(MR_mktag(0), PredMarker_370, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                          }
                          {
                            ItemPredMarker_371 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_371, 0) = ((MR_Box) (PredMarker_370));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_371, 1) = ((MR_Box) (Context_349));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_371, 2) = ((MR_Box) (SeqNum_350));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_371));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Word SymNameArity_380 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 1))));
                          MR_Word PredMarker_382;
                          MR_Word ItemPredMarker_383;

                          {
                            PredMarker_382 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_382, 0) = ((MR_Box) (SymNameArity_380));
                            MR_hl_field(MR_mktag(0), PredMarker_382, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                          }
                          {
                            ItemPredMarker_383 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_383, 0) = ((MR_Box) (PredMarker_382));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_383, 1) = ((MR_Box) (Context_349));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_383, 2) = ((MR_Box) (SeqNum_350));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_383));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          MR_Word SymNameArity_384 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 1))));
                          MR_Word PredMarker_386;
                          MR_Word ItemPredMarker_387;

                          {
                            PredMarker_386 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_386, 0) = ((MR_Box) (SymNameArity_384));
                            MR_hl_field(MR_mktag(0), PredMarker_386, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                          }
                          {
                            ItemPredMarker_387 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_387, 0) = ((MR_Box) (PredMarker_386));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_387, 1) = ((MR_Box) (Context_349));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_387, 2) = ((MR_Box) (SeqNum_350));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_387));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word SymNameArity_376 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_171, (MR_Integer) 1))));
                          MR_Word PredMarker_378;
                          MR_Word ItemPredMarker_379;

                          {
                            PredMarker_378 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PredMarker_378, 0) = ((MR_Box) (SymNameArity_376));
                            MR_hl_field(MR_mktag(0), PredMarker_378, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                          }
                          {
                            ItemPredMarker_379 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ItemPredMarker_379, 0) = ((MR_Box) (PredMarker_378));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_379, 1) = ((MR_Box) (Context_349));
                            MR_hl_field(MR_mktag(0), ItemPredMarker_379, 2) = ((MR_Box) (SeqNum_350));
                          }
                          {
                            STATE_VARIABLE_PredMarkers_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 0) = ((MR_Box) (ItemPredMarker_379));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredMarkers_303_303, 1) = ((MR_Box) (STATE_VARIABLE_PredMarkers_0_24));
                          }
                          STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                          STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemGenPragma_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));
                MR_Word GenPragma_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_184, (MR_Integer) 0))));
                MR_Word Context_357 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_184, (MR_Integer) 1))));
                MR_Integer SeqNum_358 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemGenPragma_184, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) GenPragma_185)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word UnusedArgs_127 = (MR_Word) ((MR_Word) (GenPragma_185));
                      MR_Word ItemUnusedArgs_186;

                      {
                        ItemUnusedArgs_186 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemUnusedArgs_186, 0) = ((MR_Box) (UnusedArgs_127));
                        MR_hl_field(MR_mktag(0), ItemUnusedArgs_186, 1) = ((MR_Box) (Context_357));
                        MR_hl_field(MR_mktag(0), ItemUnusedArgs_186, 2) = ((MR_Box) (SeqNum_358));
                      }
                      {
                        STATE_VARIABLE_UnusedArgs_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnusedArgs_262_262, 0) = ((MR_Box) (ItemUnusedArgs_186));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnusedArgs_262_262, 1) = ((MR_Box) (STATE_VARIABLE_UnusedArgs_0_28));
                      }
                      STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                      STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                      STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_187 = (MR_Word) (MR_body((MR_Word) (GenPragma_185), (MR_Integer) 1));
                      MR_Word ItemException_188;

                      {
                        ItemException_188 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemException_188, 0) = ((MR_Box) (Exception_187));
                        MR_hl_field(MR_mktag(0), ItemException_188, 1) = ((MR_Box) (Context_357));
                        MR_hl_field(MR_mktag(0), ItemException_188, 2) = ((MR_Box) (SeqNum_358));
                      }
                      {
                        STATE_VARIABLE_Exceptions_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Exceptions_261_261, 0) = ((MR_Box) (ItemException_188));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Exceptions_261_261, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_34));
                      }
                      STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                      STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                      STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_189 = (MR_Word) (MR_body((MR_Word) (GenPragma_185), (MR_Integer) 2));
                      MR_Word ItemTrailing_190;

                      {
                        ItemTrailing_190 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemTrailing_190, 0) = ((MR_Box) (Trailing_189));
                        MR_hl_field(MR_mktag(0), ItemTrailing_190, 1) = ((MR_Box) (Context_357));
                        MR_hl_field(MR_mktag(0), ItemTrailing_190, 2) = ((MR_Box) (SeqNum_358));
                      }
                      {
                        STATE_VARIABLE_Trailings_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Trailings_260_260, 0) = ((MR_Box) (ItemTrailing_190));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Trailings_260_260, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_36));
                      }
                      STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                      STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                      STATE_VARIABLE_MMTablings_259_259 = STATE_VARIABLE_MMTablings_0_38;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_191 = (MR_Word) (MR_body((MR_Word) (GenPragma_185), (MR_Integer) 3));
                      MR_Word ItemMMTabling_192;

                      {
                        ItemMMTabling_192 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemMMTabling_192, 0) = ((MR_Box) (MMTabling_191));
                        MR_hl_field(MR_mktag(0), ItemMMTabling_192, 1) = ((MR_Box) (Context_357));
                        MR_hl_field(MR_mktag(0), ItemMMTabling_192, 2) = ((MR_Box) (SeqNum_358));
                      }
                      {
                        STATE_VARIABLE_MMTablings_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MMTablings_259_259, 0) = ((MR_Box) (ItemMMTabling_192));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MMTablings_259_259, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_38));
                      }
                      STATE_VARIABLE_UnusedArgs_262_262 = STATE_VARIABLE_UnusedArgs_0_28;
                      STATE_VARIABLE_Exceptions_261_261 = STATE_VARIABLE_Exceptions_0_34;
                      STATE_VARIABLE_Trailings_260_260 = STATE_VARIABLE_Trailings_0_36;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_314_314 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_313_313 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_312_312 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_311_311 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_310_310 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_309_309 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_308_308 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_307_307 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_306_306 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_280_280 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_305_305 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_PredMarkers_303_303 = STATE_VARIABLE_PredMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_304_304 = STATE_VARIABLE_TypeSpecs_0_26;
                STATE_VARIABLE_TermInfos_302_302 = STATE_VARIABLE_TermInfos_0_30;
                STATE_VARIABLE_Term2Infos_301_301 = STATE_VARIABLE_Term2Infos_0_32;
                STATE_VARIABLE_Sharings_300_300 = STATE_VARIABLE_Sharings_0_40;
                STATE_VARIABLE_Reuses_299_299 = STATE_VARIABLE_Reuses_0_42;
                STATE_VARIABLE_Specs_298_298 = STATE_VARIABLE_Specs_0_44;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_113;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_314_314;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_313_313;
      next_value_of_STATE_VARIABLE_InstDefns_0_6 = STATE_VARIABLE_InstDefns_312_312;
      next_value_of_STATE_VARIABLE_ModeDefns_0_8 = STATE_VARIABLE_ModeDefns_311_311;
      next_value_of_STATE_VARIABLE_TypeClasses_0_10 = STATE_VARIABLE_TypeClasses_310_310;
      next_value_of_STATE_VARIABLE_Instances_0_12 = STATE_VARIABLE_Instances_309_309;
      next_value_of_STATE_VARIABLE_PredDecls_0_14 = STATE_VARIABLE_PredDecls_308_308;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_16 = STATE_VARIABLE_RevModeDecls_307_307;
      next_value_of_STATE_VARIABLE_RevClauses_0_18 = STATE_VARIABLE_RevClauses_306_306;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_20 = STATE_VARIABLE_RevForeignProcs_280_280;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_305_305;
      next_value_of_STATE_VARIABLE_PredMarkers_0_24 = STATE_VARIABLE_PredMarkers_303_303;
      next_value_of_STATE_VARIABLE_TypeSpecs_0_26 = STATE_VARIABLE_TypeSpecs_304_304;
      next_value_of_STATE_VARIABLE_UnusedArgs_0_28 = STATE_VARIABLE_UnusedArgs_262_262;
      next_value_of_STATE_VARIABLE_TermInfos_0_30 = STATE_VARIABLE_TermInfos_302_302;
      next_value_of_STATE_VARIABLE_Term2Infos_0_32 = STATE_VARIABLE_Term2Infos_301_301;
      next_value_of_STATE_VARIABLE_Exceptions_0_34 = STATE_VARIABLE_Exceptions_261_261;
      next_value_of_STATE_VARIABLE_Trailings_0_36 = STATE_VARIABLE_Trailings_260_260;
      next_value_of_STATE_VARIABLE_MMTablings_0_38 = STATE_VARIABLE_MMTablings_259_259;
      next_value_of_STATE_VARIABLE_Sharings_0_40 = STATE_VARIABLE_Sharings_300_300;
      next_value_of_STATE_VARIABLE_Reuses_0_42 = STATE_VARIABLE_Reuses_299_299;
      next_value_of_STATE_VARIABLE_Specs_0_44 = STATE_VARIABLE_Specs_298_298;
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__825__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
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
    MR_Word IntForeignEnumMap_51;
    MR_Word ImpForeignEnumMap_52;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_Specs_84_84;
    MR_Word STATE_VARIABLE_Specs_86_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word STATE_VARIABLE_Specs_108_108;
    MR_Word STATE_VARIABLE_Specs_124_124;
    MR_Word STATE_VARIABLE_Specs_131_131;
    MR_Word STATE_VARIABLE_Specs_133_133;
    MR_Word STATE_VARIABLE_ImpContexts_135_135;
    MR_Word STATE_VARIABLE_ImpContexts_137_137;
    MR_Word STATE_VARIABLE_ImpContexts_139_139;
    MR_Word STATE_VARIABLE_ImpContexts_141_141;
    MR_Word STATE_VARIABLE_ImpContexts_143_143;
    MR_Word _ImpInclMap_24;
    MR_Word _TypeDefnCheckedMap_53;

    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Integer) 3));
    }
    mercury__require__expect_3_p_0(Var_69, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4", (MR_String) "trying to convert non-ifk_int3 parse_tree_int to parse_tree_int3");
    if ((MaybeVersionNumbers_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_84_84 = STATE_VARIABLE_Specs_0_67;
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
        STATE_VARIABLE_Specs_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_84_84, 0) = ((MR_Box) (VNSpec_22));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_84_84, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
      }
    }
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_23, &_ImpInclMap_24, &InclMap_25, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_86_86);
    Var_87 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_88 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_87, &IntImportMap_26, Var_88, &IntUseMap_27);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), IntUseMap_27);
    if (succeeded)
      STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_86_86;
    else
    {
      MR_Word IntUseContextLists_28;
      MR_Word IntUseContexts_29;
      MR_Word IntUseSpec_31;
      MR_Word Var_103;
      MR_Box conv0_Var_103;

      IntUseContextLists_28 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), IntUseMap_27);
      mercury__one_or_more__condense_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseContextLists_28, &IntUseContexts_29);
      conv0_Var_103 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseContexts_29);
      Var_103 = ((MR_Word) (conv0_Var_103));
      {
        IntUseSpec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 3) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(1), IntUseSpec_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[63])));
      }
      {
        STATE_VARIABLE_Specs_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_104_104, 0) = ((MR_Box) (IntUseSpec_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_104_104, 1) = ((MR_Box) (STATE_VARIABLE_Specs_86_86));
      }
    }
    Var_105 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_106 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_107 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, IntImportMap_26, Var_105, Var_106, Var_107, &SectionImportUseMap_32, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_108_108);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_32, &ImportUseMap_33);
    if ((IntFIMs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_108_108;
    else
    {
      MR_Word FirstIntFIM_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntFIMs_16, (MR_Integer) 0))));
      MR_Word IntFIMSpec_37;
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstIntFIM_34, (MR_Integer) 2))));

      {
        IntFIMSpec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 3) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(1), IntFIMSpec_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[66])));
      }
      {
        STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (IntFIMSpec_37));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_Specs_108_108));
      }
    }
    parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_38, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_39, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_41, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_42, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_43, STATE_VARIABLE_Specs_124_124, &STATE_VARIABLE_Specs_131_131);
    IntTypeDefnMap_44 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_38);
    IntInstDefnMap_45 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_39);
    IntModeDefnMap_46 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_40);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_41, &IntTypeClasses_47);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_42, &IntInstances_48);
    IntTypeRepnMap_49 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_43);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), &ImpTypeDefnMap_50);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), &IntForeignEnumMap_51);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), &ImpForeignEnumMap_52);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_44, ImpTypeDefnMap_50, IntForeignEnumMap_51, ImpForeignEnumMap_52, &_TypeDefnCheckedMap_53, STATE_VARIABLE_Specs_131_131, &STATE_VARIABLE_Specs_133_133);
    if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_135_135 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadIncl_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadIncl_55, (MR_Integer) 1))));

      {
        STATE_VARIABLE_ImpContexts_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_135_135, 0) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_135_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_137_137 = STATE_VARIABLE_ImpContexts_135_135;
    else
    {
      MR_Word HeadAvail_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
      MR_Word Var_138;

      Var_138 = parse_tree__item_util__get_avail_context_1_f_0(HeadAvail_57);
      {
        STATE_VARIABLE_ImpContexts_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_137_137, 0) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_137_137, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_135_135));
      }
    }
    if ((ImpFIMs_17 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_139_139 = STATE_VARIABLE_ImpContexts_137_137;
    else
    {
      MR_Word HeadFIM_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpFIMs_17, (MR_Integer) 0))));
      MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFIM_59, (MR_Integer) 2))));

      {
        STATE_VARIABLE_ImpContexts_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_139_139, 0) = ((MR_Box) (Var_140));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_139_139, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_137_137));
      }
    }
    if ((ImpItems_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_141_141 = STATE_VARIABLE_ImpContexts_139_139;
    else
    {
      MR_Word HeadImpItem_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItems_19, (MR_Integer) 0))));
      MR_Word Var_142;

      Var_142 = parse_tree__prog_item__get_item_context_1_f_0(HeadImpItem_61);
      {
        STATE_VARIABLE_ImpContexts_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_141_141, 0) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_141_141, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_139_139));
      }
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), STATE_VARIABLE_ImpContexts_141_141, &STATE_VARIABLE_ImpContexts_143_143);
    if ((STATE_VARIABLE_ImpContexts_143_143 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_133_133;
    else
    {
      MR_Word FirstImpContext_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_143_143, (MR_Integer) 0))));
      MR_Word ImpItemSpec_66;

      {
        ImpItemSpec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpItemSpec_66, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
        MR_hl_field(MR_mktag(1), ImpItemSpec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImpItemSpec_66, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImpItemSpec_66, 3) = ((MR_Box) (FirstImpContext_63));
        MR_hl_field(MR_mktag(1), ImpItemSpec_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[70])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_68 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpItemSpec_66));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_133_133));
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
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
            Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[109])), Var_84);
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
                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[109])), Var_84);
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__647__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt2_6,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58)
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
    MR_Word IntForeignEnumMap_54;
    MR_Word ImpForeignEnumMap_55;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_Specs_81_81;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_Specs_100_100;
    MR_Word STATE_VARIABLE_Specs_122_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word STATE_VARIABLE_Specs_126_126;
    MR_Word Var_127;
    MR_Word Var_129;
    MR_Word STATE_VARIABLE_Specs_137_137;
    MR_Word STATE_VARIABLE_Specs_139_139;
    MR_Word _ImpInclMap_25;
    MR_Word FirstIntImportContext_29;
    MR_Word _TypeDefnCheckedMap_56;

    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4", (MR_String) "trying to convert non-ifk_int2 parse_tree_int to parse_tree_int2");
    if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_57;
    else
    {
      MR_Word FirstImpIncl_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
      MR_Word ImpInclSpec_23;
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstImpIncl_20, (MR_Integer) 1))));

      {
        ImpInclSpec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 3) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), ImpInclSpec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[48])));
      }
      {
        STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (ImpInclSpec_23));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
      }
    }
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_24, &_ImpInclMap_25, &InclMap_26, STATE_VARIABLE_Specs_81_81, &STATE_VARIABLE_Specs_83_83);
    Var_84 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_85 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_84, &IntImportMap_27, Var_85, &IntUseMap_28);
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
        STATE_VARIABLE_Specs_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_100_100, 0) = ((MR_Box) (IntImportSpec_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_Specs_83_83));
      }
    }
    else
      STATE_VARIABLE_Specs_100_100 = STATE_VARIABLE_Specs_83_83;
    if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_100_100;
    else
    {
      MR_Word FirstImpAvail_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
      MR_Word ImpAvailSpec_35;
      MR_Word Var_121;

      Var_121 = parse_tree__item_util__get_avail_context_1_f_0(FirstImpAvail_32);
      {
        ImpAvailSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 3) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[56])));
      }
      {
        STATE_VARIABLE_Specs_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_122_122, 0) = ((MR_Box) (ImpAvailSpec_35));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_122_122, 1) = ((MR_Box) (STATE_VARIABLE_Specs_100_100));
      }
    }
    Var_123 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_124 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_125 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, Var_123, IntUseMap_28, Var_124, Var_125, &SectionImportUseMap_36, STATE_VARIABLE_Specs_122_122, &STATE_VARIABLE_Specs_126_126);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_36, &ImportUseMap_37);
    Var_127 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[60]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_127, &IntFIMSpecs_38);
    Var_129 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[61]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_129, &ImpFIMSpecs_39);
    parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_41, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_42, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_43, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_44, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_45, STATE_VARIABLE_Specs_126_126, &STATE_VARIABLE_Specs_137_137);
    IntTypeDefnMap_46 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_40);
    IntInstDefnMap_47 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_41);
    IntModeDefnMap_48 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_42);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_43, &IntTypeClasses_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_44, &IntInstances_50);
    IntTypeRepnMap_51 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_45);
    parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_52, STATE_VARIABLE_Specs_137_137, &STATE_VARIABLE_Specs_139_139);
    ImpTypeDefnMap_53 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_52);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), &IntForeignEnumMap_54);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), &ImpForeignEnumMap_55);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_46, ImpTypeDefnMap_53, IntForeignEnumMap_54, ImpForeignEnumMap_55, &_TypeDefnCheckedMap_56, STATE_VARIABLE_Specs_139_139, STATE_VARIABLE_Specs_58);
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
            Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[107])), Var_44);
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
                Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[107])), Var_44);
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
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
            Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[107])), Var_84);
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
                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[107])), Var_84);
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
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
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
    MR_Word IntForeignEnums_41;
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
    MR_Word IntForeignEnumMap_52;
    MR_Word IntDeclPragmas_53;
    MR_Word IntPromises_54;
    MR_Word IntTypeRepnMap_55;
    MR_Word ImpTypeDefns0_56;
    MR_Word ImpForeignEnums0_57;
    MR_Word ImpTypeClasses0_58;
    MR_Word ImpTypeDefnMap_59;
    MR_Word ImpForeignEnumMap_60;
    MR_Word ImpTypeClasses_61;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Specs_69_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_Specs_88_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_Specs_91_91;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_Specs_107_107;
    MR_Word STATE_VARIABLE_Specs_111_111;
    MR_Word FirstImportContext_27;
    MR_Word _TypeDefnCheckedMap_62;

    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/4", (MR_String) "trying to convert non-ifk_int1 parse_tree_int to parse_tree_int1");
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, ImpIncls_13, &IntInclMap_20, &ImpInclMap_21, &InclMap_22, STATE_VARIABLE_Specs_0_63, &STATE_VARIABLE_Specs_69_69);
    Var_70 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_71 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_70, &IntImportMap_23, Var_71, &IntUseMap_24);
    Var_72 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_73 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_15, Var_72, &ImpImportMap_25, Var_73, &ImpUseMap_26);
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
        STATE_VARIABLE_Specs_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_88_88, 0) = ((MR_Box) (ImportSpec_29));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_88_88, 1) = ((MR_Box) (STATE_VARIABLE_Specs_69_69));
      }
    }
    else
      STATE_VARIABLE_Specs_88_88 = STATE_VARIABLE_Specs_69_69;
    Var_89 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    Var_90 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, Var_89, IntUseMap_24, Var_90, ImpUseMap_26, &SectionImportUseMap_30, STATE_VARIABLE_Specs_88_88, &STATE_VARIABLE_Specs_91_91);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_30, &ImportUseMap_31);
    Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[58]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_92, &IntFIMSpecs_32);
    Var_94 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[59]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_94, &ImpFIMSpecs_33);
    parse_tree__convert_parse_tree__classify_int1_items_int_25_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_35, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_36, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_37, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_38, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_39, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_40, (MR_Word) ((MR_Unsigned) 0U), &IntForeignEnums_41, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_42, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_43, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns_44, STATE_VARIABLE_Specs_91_91, &STATE_VARIABLE_Specs_107_107);
    IntTypeDefnMap_45 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_34);
    IntInstDefnMap_46 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_35);
    IntModeDefnMap_47 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_36);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_37, &IntTypeClasses_48);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_38, &IntInstances_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_39, &IntPredDecls_50);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_40, &IntModeDecls_51);
    IntForeignEnumMap_52 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(IntForeignEnums_41);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), IntDeclPragmas0_42, &IntDeclPragmas_53);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_43, &IntPromises_54);
    IntTypeRepnMap_55 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns_44);
    parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_56, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums0_57, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_58, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_111_111);
    ImpTypeDefnMap_59 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_56);
    ImpForeignEnumMap_60 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums0_57);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_58, &ImpTypeClasses_61);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_45, ImpTypeDefnMap_59, IntForeignEnumMap_52, ImpForeignEnumMap_60, &_TypeDefnCheckedMap_62, STATE_VARIABLE_Specs_111_111, STATE_VARIABLE_Specs_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntForeignEnumMap_52));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntDeclPragmas_53));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntPromises_54));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntTypeRepnMap_55));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeDefnMap_59));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpForeignEnumMap_60));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpTypeClasses_61));
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
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[105])), Var_60);
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
                Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[105])), Var_60);
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
            Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
            Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[103])), Var_130);
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
                Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[103])), Var_130);
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
                      Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_148, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[77])));
                      Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[103])), Var_147);
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__297__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
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
    MR_Word IntForeignEnums_38;
    MR_Word IntDeclPragmas0_39;
    MR_Word IntPromises0_40;
    MR_Word IntTypeDefnMap_41;
    MR_Word IntInstDefnMap_42;
    MR_Word IntModeDefnMap_43;
    MR_Word IntTypeClasses_44;
    MR_Word IntInstances_45;
    MR_Word IntPredDecls_46;
    MR_Word IntModeDecls_47;
    MR_Word IntForeignEnumMap_48;
    MR_Word IntDeclPragmas_49;
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
    MR_Word ImpPromises0_60;
    MR_Word ImpTypeDefnMap_61;
    MR_Word ImpInstDefnMap_62;
    MR_Word ImpModeDefnMap_63;
    MR_Word ImpTypeClasses_64;
    MR_Word ImpInstances_65;
    MR_Word ImpPredDecls_66;
    MR_Word ImpModeDecls_67;
    MR_Word ImpForeignEnumMap_68;
    MR_Word ImpDeclPragmas_69;
    MR_Word ImpPromises_70;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_Specs_78_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word STATE_VARIABLE_Specs_109_109;
    MR_Word _TypeDefnCheckedMap_71;

    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int0\'/4", (MR_String) "trying to convert non-ifk_int0 parse_tree_int to parse_tree_int0");
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, ImpIncls_13, &IntInclMap_20, &ImpInclMap_21, &InclMap_22, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_78_78);
    Var_79 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_80 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_79, &IntImportMap_23, Var_80, &IntUseMap_24);
    Var_81 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_82 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_15, Var_81, &ImpImportMap_25, Var_82, &ImpUseMap_26);
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, IntImportMap_23, IntUseMap_24, ImpImportMap_25, ImpUseMap_26, &SectionImportUseMap_27, STATE_VARIABLE_Specs_78_78, &STATE_VARIABLE_Specs_83_83);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_27, &ImportUseMap_28);
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[55]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_84, &IntFIMSpecs_29);
    Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[56]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_86, &ImpFIMSpecs_30);
    parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_32, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_33, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_35, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_37, (MR_Word) ((MR_Unsigned) 0U), &IntForeignEnums_38, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_39, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_40, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_98_98);
    IntTypeDefnMap_41 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_31);
    IntInstDefnMap_42 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_32);
    IntModeDefnMap_43 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_33);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_34, &IntTypeClasses_44);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_35, &IntInstances_45);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_36, &IntPredDecls_46);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_37, &IntModeDecls_47);
    IntForeignEnumMap_48 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(IntForeignEnums_38);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), IntDeclPragmas0_39, &IntDeclPragmas_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_40, &IntPromises_50);
    parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns_51, (MR_Word) ((MR_Unsigned) 0U), &ImpInstDefns_52, (MR_Word) ((MR_Unsigned) 0U), &ImpModeDefns_53, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_54, (MR_Word) ((MR_Unsigned) 0U), &ImpInstances0_55, (MR_Word) ((MR_Unsigned) 0U), &ImpPredDecls0_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_57, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums_58, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclPragmas0_59, (MR_Word) ((MR_Unsigned) 0U), &ImpPromises0_60, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_109_109);
    ImpTypeDefnMap_61 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_51);
    ImpInstDefnMap_62 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_52);
    ImpModeDefnMap_63 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_53);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_54, &ImpTypeClasses_64);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstances0_55, &ImpInstances_65);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_56, &ImpPredDecls_66);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_57, &ImpModeDecls_67);
    ImpForeignEnumMap_68 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_58);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), ImpDeclPragmas0_59, &ImpDeclPragmas_69);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises0_60, &ImpPromises_70);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_41, ImpTypeDefnMap_61, IntForeignEnumMap_48, ImpForeignEnumMap_68, &_TypeDefnCheckedMap_71, STATE_VARIABLE_Specs_109_109, STATE_VARIABLE_Specs_73);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntForeignEnumMap_48));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntDeclPragmas_49));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntPromises_50));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpTypeDefnMap_61));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpInstDefnMap_62));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpModeDefnMap_63));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeClasses_64));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpInstances_65));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpPredDecls_66));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpModeDecls_67));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpForeignEnumMap_68));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpDeclPragmas_69));
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ImpPromises_70));
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
            Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
            Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[101])), Var_116);
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
                Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])));
                Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[101])), Var_116);
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
    MR_Word conv0_STATE_VARIABLE_ForeignEnumMap_18;

    parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnumMap_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumMap_18));
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

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
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

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
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
    MR_Word conv0_STATE_VARIABLE_TypeDefnMap_44;

    parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefnMap_44);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_44));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__278__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int3_to_int__275__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__250__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__convert_parse_tree_int2_to_int__247__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word IntForeignEnumMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 18))));
    MR_Word IntDeclPragmas_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 19))));
    MR_Word IntPromises_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 20))));
    MR_Word IntTypeRepnMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 21))));
    MR_Word ImpTypeDefnMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 22))));
    MR_Word ImpForeignEnumMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 23))));
    MR_Word ImpTypeClasses_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 24))));
    MR_Word IntIncls_30;
    MR_Word ImpIncls_31;
    MR_Word IntAvails_32;
    MR_Word ImpAvails_33;
    MR_Word IntFIMs_34;
    MR_Word ImpFIMs_35;
    MR_Word IntItems_36;
    MR_Word ImpItems_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_10, &IntIncls_30, &ImpIncls_31);
    parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_13, &IntAvails_32, &ImpAvails_33);
    Var_39 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[30]), IntFIMSpecs_14);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_39, &IntFIMs_34);
    Var_41 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[31]), ImpFIMSpecs_15);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_41, &ImpFIMs_35);
    Var_43 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(IntTypeDefnMap_16);
    Var_45 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_17);
    Var_47 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_18);
    Var_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[32]), IntTypeClasses_19);
    Var_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[33]), IntInstances_20);
    Var_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[34]), IntPredDecls_21);
    Var_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[35]), IntModeDecls_22);
    Var_61 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(IntForeignEnumMap_23);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[36]), IntDeclPragmas_24);
    Var_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[37]), IntPromises_25);
    Var_68 = parse_tree__convert_parse_tree__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_26);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_66, Var_68);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_63, Var_65);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_61, Var_62);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_58, Var_60);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_55, Var_57);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_52, Var_54);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_49, Var_51);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_47, Var_48);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_45, Var_46);
    IntItems_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_43, Var_44);
    Var_69 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_27);
    Var_71 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(ImpForeignEnumMap_28);
    Var_72 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[38]), ImpTypeClasses_29);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_71, Var_72);
    ImpItems_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_69, Var_70);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_30));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) (ImpIncls_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_32));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) (ImpAvails_33));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_34));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_35));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_36));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_37));
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
    MR_Word IntForeignEnumMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 20))));
    MR_Word IntDeclPragmas_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 21))));
    MR_Word IntPromises_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 22))));
    MR_Word ImpTypeDefnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 23))));
    MR_Word ImpInstDefnMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 24))));
    MR_Word ImpModeDefnMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 25))));
    MR_Word ImpTypeClasses_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 26))));
    MR_Word ImpInstances_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 27))));
    MR_Word ImpPredDecls_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 28))));
    MR_Word ImpModeDecls_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 29))));
    MR_Word ImpForeignEnumMap_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 30))));
    MR_Word ImpDeclPragmas_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 31))));
    MR_Word ImpPromises_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 32))));
    MR_Word IntIncls_38;
    MR_Word ImpIncls_39;
    MR_Word IntAvails_40;
    MR_Word ImpAvails_41;
    MR_Word IntFIMs_42;
    MR_Word ImpFIMs_43;
    MR_Word IntItems_44;
    MR_Word ImpItems_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;

    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_10, &IntIncls_38, &ImpIncls_39);
    parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_15, &IntAvails_40, &ImpAvails_41);
    Var_47 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[14]), IntFIMSpecs_16);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_47, &IntFIMs_42);
    Var_49 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[15]), ImpFIMSpecs_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_49, &ImpFIMs_43);
    Var_51 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(IntTypeDefnMap_18);
    Var_53 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_19);
    Var_55 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_20);
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[16]), IntTypeClasses_21);
    Var_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[17]), IntInstances_22);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), IntPredDecls_23);
    Var_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[19]), IntModeDecls_24);
    Var_69 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(IntForeignEnumMap_25);
    Var_71 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[20]), IntDeclPragmas_26);
    Var_73 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[21]), IntPromises_27);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_71, Var_73);
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_69, Var_70);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_66, Var_68);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_63, Var_65);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_60, Var_62);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_57, Var_59);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_55, Var_56);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_53, Var_54);
    IntItems_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_51, Var_52);
    Var_75 = parse_tree__convert_parse_tree__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_28);
    Var_77 = parse_tree__convert_parse_tree__inst_ctor_defn_map_to_items_1_f_0(ImpInstDefnMap_29);
    Var_79 = parse_tree__convert_parse_tree__mode_ctor_defn_map_to_items_1_f_0(ImpModeDefnMap_30);
    Var_81 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[22]), ImpTypeClasses_31);
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[23]), ImpInstances_32);
    Var_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[24]), ImpPredDecls_33);
    Var_90 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]), ImpModeDecls_34);
    Var_93 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_map_to_items_1_f_0(ImpForeignEnumMap_35);
    Var_95 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]), ImpDeclPragmas_36);
    Var_97 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), ImpPromises_37);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_95, Var_97);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_93, Var_94);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_90, Var_92);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_87, Var_89);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_84, Var_86);
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_81, Var_83);
    Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_79, Var_80);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_77, Var_78);
    ImpItems_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_75, Var_76);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_38));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) (ImpIncls_39));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_40));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) (ImpAvails_41));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_42));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_43));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_44));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_45));
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
    MR_Word conv0_STATE_VARIABLE_ForeignEnums_11;

    parse_tree__convert_parse_tree__accumulate_foreign_enum_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnums_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnums_11));
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
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[23]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), ModeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_ModeDefnsCord_5);
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
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[22]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), InstCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_InstDefnsCord_5);
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
    MR_Word conv0_STATE_VARIABLE_TypeDefns_17;

    parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefns_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefns_17));
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
