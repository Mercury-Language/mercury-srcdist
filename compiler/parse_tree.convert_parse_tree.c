/*
** Automatically generated from `convert_parse_tree.m'
** by the Mercury compiler,
** version rotd-2024-01-30
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
#include "parse_tree.check_type_inst_mode_defns.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0;

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
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1324__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__1021__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__796__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__618__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__378__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_63);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__215__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_75);

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
parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9);

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
  MR_Word STATE_VARIABLE_ModeDefnMap_0_23,
  MR_Word * STATE_VARIABLE_ModeDefnMap_24);

static void MR_CALL 
parse_tree__convert_parse_tree__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_24,
  MR_Word * STATE_VARIABLE_InstDefnMap_25);

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_45,
  MR_Word * STATE_VARIABLE_TypeDefnMap_46);

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

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93);

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
parse_tree__convert_parse_tree__error_is_exported_4_p_0(
  MR_Word Context_5,
  MR_Word DescPieces_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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


static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[45][3];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[151][2];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[11][6];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[14][5];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[2][10];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[3][4];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_8[1][7];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_9[1][8];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_10[1][9];




static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[45][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[2]))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_8[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_8[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_int_39_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_9[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_9[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[11])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[12])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[13])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[151][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[3]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[4]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[5]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[6]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_2[17]))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in its implementation section."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain any"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "version number information."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain any"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an implementation section."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int3 file must not have"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[45])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain any"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[47])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int0 file may not contain"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a concrete instance declaration."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[63]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int file may not contain"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in its interface section."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a concrete instance declaration"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[71])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a concrete typeclass declaration."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[71])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[64])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not list any functional dependencies."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A typeclass declaration in a .int3 file"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or any functional dependencies"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not list any superclasses"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[88])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[74])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .opt file may not contain"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragma for"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragma for the same module/language combination"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because there is a"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant,"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragma in the interface section is here."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[110]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: duplicate"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clause for"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A Mercury source file may not contain"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[122]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[124]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [...]"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[128]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[130]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with its abstract version, which omits"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[132]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "replacing it in the interface section"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[134]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "move this declaration to the implementation section,"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[136]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you intend to export this instance,"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[138]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[140]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "file may not contain"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "any"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in its"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[146]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[31])))
  },
  /* row 148 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[139])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__convert_parse_tree_scalar_common_2[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[149])))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "implementation")) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[125]))) },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[11][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[14][5] = {
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
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".int"))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".int2"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".int3"))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0))
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
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  { (MR_TypeInfo) (&parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0) }
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_version_numbers_0),
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
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
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1324__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded = (OptFileKind_9 == HeadVar__2_41);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__1021__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded = (OptFileKind_9 == HeadVar__2_66);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__796__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_68)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_68);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__618__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_55)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_55);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__378__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_63)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_63);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__215__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_75)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_75);

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[30]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[30]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
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

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[29]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[29]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
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

          parse_tree__prog_item____Compare____maybe_version_numbers_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]), HeadVar__1_1, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__prog_item____Unify____maybe_version_numbers_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_32_32 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_37_37 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_38_38 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_39_39 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]);
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
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, SectionImportAndOrUse_10, (MR_Integer) 0))));
        MR_Word IntImport_14;

        {
          IntImport_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IntImport_14, 0) = ((MR_Box) (Context_13));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (IntImport_14)), STATE_VARIABLE_IntImportMap_0_17, STATE_VARIABLE_IntImportMap_18);
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_42 = ((MR_Word) ((MR_hl_field(1, SectionImportAndOrUse_10, (MR_Integer) 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "use_module", (MR_Word) ((MR_Unsigned) 0U), Context_42, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_36 = ((MR_Word) ((MR_hl_field(2, SectionImportAndOrUse_10, (MR_Integer) 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_3[0])), Context_36, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_37 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 1))));

            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "use_module", (MR_Word) ((MR_Unsigned) 0U), Context_37, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
            *STATE_VARIABLE_IntImportMap_18 = STATE_VARIABLE_IntImportMap_0_17;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_15 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 1))));
            MR_Word ImpContext_16 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Specs_31_31;

            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "use_module", (MR_Word) ((MR_Unsigned) 0U), IntContext_15, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_31_31);
            parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_3[0])), ImpContext_16, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_20);
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
        MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, SectionImportAndOrUse_10, (MR_Integer) 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) ((MR_Unsigned) 0U), Context_28, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        *STATE_VARIABLE_SectionUseMap_17 = STATE_VARIABLE_SectionUseMap_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_24 = ((MR_Word) ((MR_hl_field(1, SectionImportAndOrUse_10, (MR_Integer) 0))));
        MR_Word SectionUse_31;

        {
          SectionUse_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SectionUse_31, 0) = ((MR_Box) (Context_24));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (SectionUse_31)), STATE_VARIABLE_SectionUseMap_0_16, STATE_VARIABLE_SectionUseMap_17);
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(2, SectionImportAndOrUse_10, (MR_Integer) 0))));

        parse_tree__convert_parse_tree__report_forbidden_avail_6_p_0(Extension_8, (MR_String) "import_module", (MR_Word) ((MR_Unsigned) 0U), Context_13, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        *STATE_VARIABLE_SectionUseMap_17 = STATE_VARIABLE_SectionUseMap_0_16;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SectionUse_15;
            MR_Word Context_25 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 1))));

            {
              SectionUse_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SectionUse_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, SectionUse_15, 1) = ((MR_Box) (Context_25));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (SectionUse_15)), STATE_VARIABLE_SectionUseMap_0_16, STATE_VARIABLE_SectionUseMap_17);
            *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_34 = ((MR_Word) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 2))));

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
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (Extension_7));
    }
    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (Decl_8));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[45])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[144])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[143])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[142])));
      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_19));
    }
  }
  else
  {
    MR_String Section_13 = ((MR_String) ((MR_hl_field(1, MaybeSection_9, (MR_Integer) 0))));
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
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (Extension_7));
    }
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (Decl_8));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (Section_13));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[147])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[145])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[34])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[144])));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[143])));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[142])));
      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Var_37));
    }
  }
  {
    Spec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_forbidden_avail\'/6"));
    MR_hl_field(1, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(1, Spec_14, 4) = ((MR_Box) (Pieces_12));
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
  MR_Word STATE_VARIABLE_FIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_FIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word Lang_9 = ((MR_Unsigned) ((MR_hl_field(0, ItemFIM_6, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ItemFIM_6, (MR_Integer) 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, ItemFIM_6, (MR_Integer) 2))));
  MR_Word FIMSpec_13;
  MR_Word PrevContext_14;
  MR_Box conv0_PrevContext_14;

  {
    FIMSpec_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_13, 0) = (MR_Box) ((MR_Unsigned) (Lang_9));
    MR_hl_field(0, FIMSpec_13, 1) = ((MR_Box) (ModuleName_10));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_FIMSpecMap_0_20, ((MR_Box) (FIMSpec_13)), &conv0_PrevContext_14);
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
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (ModuleName_10));
    }
    Var_39 = libs__globals__foreign_language_string_1_f_0(Lang_9);
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[97])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[96])));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[46])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainPieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[112])));
      MR_hl_field(1, MainPieces_15, 1) = ((MR_Box) (Var_26));
    }
    {
      MainMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_16, 0) = ((MR_Box) (Context_11));
      MR_hl_field(0, MainMsg_16, 1) = ((MR_Box) (MainPieces_15));
    }
    {
      PrevMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrevMsg_18, 0) = ((MR_Box) (PrevContext_14));
      MR_hl_field(0, PrevMsg_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[118])));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (PrevMsg_18));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (MainMsg_16));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Spec_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_foreign_import_module\'/5"));
      MR_hl_field(3, Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(3, Spec_19, 4) = ((MR_Box) (Var_65));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
    }
    *STATE_VARIABLE_FIMSpecMap_21 = STATE_VARIABLE_FIMSpecMap_0_20;
  }
  else
  {
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (FIMSpec_13)), ((MR_Box) (Context_11)), STATE_VARIABLE_FIMSpecMap_0_20, STATE_VARIABLE_FIMSpecMap_21);
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
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
  MR_Word Lang_11 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, FIMSpec_8, (MR_Integer) 1))));
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

  mercury__map__det_remove_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (FIMSpec_8)), &conv0_ImpContext_13, STATE_VARIABLE_ImpFIMSpecMap_0_20, STATE_VARIABLE_ImpFIMSpecMap_21);
  ImpContext_13 = ((MR_Word) (conv0_ImpContext_13));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_7, ((MR_Box) (FIMSpec_8)), &conv1_IntContext_14);
  IntContext_14 = ((MR_Word) (conv1_IntContext_14));
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ModuleName_12));
  }
  Var_40 = libs__globals__foreign_language_string_1_f_0(Lang_11);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[106])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[97])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[96])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[46])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    ImpPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpPieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[95])));
    MR_hl_field(1, ImpPieces_15, 1) = ((MR_Box) (Var_27));
  }
  {
    ImpMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpMsg_17, 0) = ((MR_Box) (ImpContext_13));
    MR_hl_field(0, ImpMsg_17, 1) = ((MR_Box) (ImpPieces_15));
  }
  {
    IntMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntMsg_18, 0) = ((MR_Box) (IntContext_14));
    MR_hl_field(0, IntMsg_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[111])));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (IntMsg_18));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (ImpMsg_17));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    Spec_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_int_imp_fim\'/6"));
    MR_hl_field(3, Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(3, Spec_19, 4) = ((MR_Box) (Var_75));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_23 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7)
{
  *STATE_VARIABLE_TypeRepns_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), STATE_VARIABLE_TypeRepns_0_6, ((MR_Box) (TypeRepn_4)));
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9)
{
  MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 0))));
  MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 1))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[22]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[43]), AbstractDefns_6);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), Var_13);
  Var_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[23]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[44]), EqvDefns_7);
  Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), Var_16);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), Var_12, Var_15);
  *STATE_VARIABLE_ModeDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), STATE_VARIABLE_ModeDefns_0_8, Var_11);
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9)
{
  MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 0))));
  MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 1))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[20]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]), AbstractDefns_6);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), Var_13);
  Var_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[21]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]), EqvDefns_7);
  Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), Var_16);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), Var_12, Var_15);
  *STATE_VARIABLE_InstDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), STATE_VARIABLE_InstDefns_0_8, Var_11);
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = parse_tree__item_util__wrap_sub_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = parse_tree__item_util__wrap_du_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__wrap_solver_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_16,
  MR_Word * STATE_VARIABLE_TypeDefns_17)
{
  MR_Word AbstractSolverDefns_6 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 0))));
  MR_Word SolverDefns_7 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 1))));
  MR_Word AbstractStdDefns_8 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 2))));
  MR_Word EqvDefns_9 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 3))));
  MR_Word DuDefns_10 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 4))));
  MR_Word SubDefns_11 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 5))));
  MR_Word CJCsEDefns_12 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, (MR_Integer) 6))));
  MR_Word ForeignDefnsC_13 = ((MR_Word) ((MR_hl_field(0, CJCsEDefns_12, (MR_Integer) 0))));
  MR_Word ForeignDefnsJava_14 = ((MR_Word) ((MR_hl_field(0, CJCsEDefns_12, (MR_Integer) 1))));
  MR_Word ForeignDefnsCsharp_15 = ((MR_Word) ((MR_hl_field(0, CJCsEDefns_12, (MR_Integer) 2))));
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
    MR_Word X_67 = ((MR_Word) ((MR_hl_field(1, AbstractSolverDefns_6, (MR_Integer) 0))));

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (X_67));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), Var_23);
  Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[13]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[33]), SolverDefns_7);
  if ((AbstractStdDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_30 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_70 = ((MR_Word) ((MR_hl_field(1, AbstractStdDefns_8, (MR_Integer) 0))));

    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (X_70));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[34]), Var_30);
  Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[14]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[35]), EqvDefns_9);
  Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[15]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[36]), DuDefns_10);
  Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[16]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[37]), SubDefns_11);
  Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[38]), ForeignDefnsC_13);
  Var_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]), ForeignDefnsJava_14);
  Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]), ForeignDefnsCsharp_15);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_44, Var_46);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_41, Var_43);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_38, Var_40);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_35, Var_37);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_32, Var_34);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_28, Var_31);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_25, Var_27);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_21, Var_24);
  Var_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), Var_20);
  *STATE_VARIABLE_TypeDefns_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), STATE_VARIABLE_TypeDefns_0_16, Var_19);
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_17)
{
  MR_bool succeeded;
  MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(0, ForeignEnumInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(0, ForeignEnumInfo_4, (MR_Integer) 1))));
  MR_Word AllEnums_15;
  MR_Word STATE_VARIABLE_ForeignEnumsC_18_18;
  MR_Word STATE_VARIABLE_ForeignEnumsJava_19_19;
  MR_Word STATE_VARIABLE_ForeignEnumsCsharp_20_20;
  MR_Word STATE_VARIABLE_ForeignEnumsC_24_24;
  MR_Word STATE_VARIABLE_ForeignEnumsJava_27_27;
  MR_Word STATE_VARIABLE_ForeignEnumsCsharp_30_30;
  MR_Word AllEnums0_14;
  MR_Box conv0_AllEnums0_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), STATE_VARIABLE_ForeignEnumMap_0_16, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums0_14);
  if (succeeded)
  {
    AllEnums0_14 = ((MR_Word) (conv0_AllEnums0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    STATE_VARIABLE_ForeignEnumsC_18_18 = ((MR_Word) ((MR_hl_field(0, AllEnums0_14, (MR_Integer) 0))));
    STATE_VARIABLE_ForeignEnumsJava_19_19 = ((MR_Word) ((MR_hl_field(0, AllEnums0_14, (MR_Integer) 1))));
    STATE_VARIABLE_ForeignEnumsCsharp_20_20 = ((MR_Word) ((MR_hl_field(0, AllEnums0_14, (MR_Integer) 2))));
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
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (ForeignEnumInfo_4));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_ForeignEnumsC_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsC_18_18, Var_25);
        STATE_VARIABLE_ForeignEnumsJava_27_27 = STATE_VARIABLE_ForeignEnumsJava_19_19;
        STATE_VARIABLE_ForeignEnumsCsharp_30_30 = STATE_VARIABLE_ForeignEnumsCsharp_20_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (ForeignEnumInfo_4));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_ForeignEnumsCsharp_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsCsharp_20_20, Var_31);
        STATE_VARIABLE_ForeignEnumsC_24_24 = STATE_VARIABLE_ForeignEnumsC_18_18;
        STATE_VARIABLE_ForeignEnumsJava_27_27 = STATE_VARIABLE_ForeignEnumsJava_19_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (ForeignEnumInfo_4));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_ForeignEnumsJava_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsJava_19_19, Var_28);
        STATE_VARIABLE_ForeignEnumsC_24_24 = STATE_VARIABLE_ForeignEnumsC_18_18;
        STATE_VARIABLE_ForeignEnumsCsharp_30_30 = STATE_VARIABLE_ForeignEnumsCsharp_20_20;
      }
      break;
  }
  {
    AllEnums_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllEnums_15, 0) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsC_24_24));
    MR_hl_field(0, AllEnums_15, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsJava_27_27));
    MR_hl_field(0, AllEnums_15, 2) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsCsharp_30_30));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (AllEnums_15)), STATE_VARIABLE_ForeignEnumMap_0_16, STATE_VARIABLE_ForeignEnumMap_17);
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo_4, (MR_Integer) 1))));
  MR_Integer Arity_12;
  MR_Word TypeCtor_13;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), Params_7, &Arity_12);
  {
    TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (Arity_12));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), ((MR_Box) (TypeCtor_13)), ((MR_Box) (TypeRepnInfo_4)), STATE_VARIABLE_TypeRepnMap_0_14, STATE_VARIABLE_TypeRepnMap_15);
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_23,
  MR_Word * STATE_VARIABLE_ModeDefnMap_24)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn_8 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 2))));
  MR_Integer Arity_12;
  MR_Word ModeCtor_13;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word AllDefns0_14;
  MR_Box conv0_AllDefns0_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[19]), Params_7, &Arity_12);
  {
    ModeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, ModeCtor_13, 1) = ((MR_Box) (Arity_12));
  }
  Var_91 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 0))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 1))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 3))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 4))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, (MR_Integer) 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), STATE_VARIABLE_ModeDefnMap_0_23, ((MR_Box) (ModeCtor_13)), &conv0_AllDefns0_14);
  if (succeeded)
  {
    AllDefns0_14 = ((MR_Word) (conv0_AllDefns0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns0_15 = ((MR_Word) ((MR_hl_field(0, AllDefns0_14, (MR_Integer) 0))));
    MR_Word EqvDefns0_16 = ((MR_Word) ((MR_hl_field(0, AllDefns0_14, (MR_Integer) 1))));
    MR_Word AllDefns_19;

    if ((MaybeAbstractModeDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AbstractDefn_17;
      MR_Word AbstractDefns_18;

      {
        AbstractDefn_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AbstractDefn_17, 0) = ((MR_Box) (Var_91));
        MR_hl_field(0, AbstractDefn_17, 1) = ((MR_Box) (Var_90));
        MR_hl_field(0, AbstractDefn_17, 2) = NULL;
        MR_hl_field(0, AbstractDefn_17, 3) = ((MR_Box) (Var_88));
        MR_hl_field(0, AbstractDefn_17, 4) = ((MR_Box) (Var_87));
        MR_hl_field(0, AbstractDefn_17, 5) = ((MR_Box) (Var_86));
      }
      {
        AbstractDefns_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AbstractDefns_18, 0) = ((MR_Box) (AbstractDefn_17));
        MR_hl_field(1, AbstractDefns_18, 1) = ((MR_Box) (AbstractDefns0_15));
      }
      {
        AllDefns_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_19, 0) = ((MR_Box) (AbstractDefns_18));
        MR_hl_field(0, AllDefns_19, 1) = ((MR_Box) (EqvDefns0_16));
      }
    }
    else
    {
      MR_Word ModeDefn_20 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn_8, (MR_Integer) 0))));
      MR_Word EqvDefn_21;
      MR_Word EqvDefns_22;

      {
        EqvDefn_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EqvDefn_21, 0) = ((MR_Box) (Var_91));
        MR_hl_field(0, EqvDefn_21, 1) = ((MR_Box) (Var_90));
        MR_hl_field(0, EqvDefn_21, 2) = ((MR_Box) (ModeDefn_20));
        MR_hl_field(0, EqvDefn_21, 3) = ((MR_Box) (Var_88));
        MR_hl_field(0, EqvDefn_21, 4) = ((MR_Box) (Var_87));
        MR_hl_field(0, EqvDefn_21, 5) = ((MR_Box) (Var_86));
      }
      {
        EqvDefns_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EqvDefns_22, 0) = ((MR_Box) (EqvDefn_21));
        MR_hl_field(1, EqvDefns_22, 1) = ((MR_Box) (EqvDefns0_16));
      }
      {
        AllDefns_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_19, 0) = ((MR_Box) (AbstractDefns0_15));
        MR_hl_field(0, AllDefns_19, 1) = ((MR_Box) (EqvDefns_22));
      }
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (ModeCtor_13)), ((MR_Box) (AllDefns_19)), STATE_VARIABLE_ModeDefnMap_0_23, STATE_VARIABLE_ModeDefnMap_24);
  }
  else
  {
    MR_Word AllDefns_42;

    if ((MaybeAbstractModeDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_28;
      MR_Word AbstractDefn_35;

      {
        AbstractDefn_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AbstractDefn_35, 0) = ((MR_Box) (Var_91));
        MR_hl_field(0, AbstractDefn_35, 1) = ((MR_Box) (Var_90));
        MR_hl_field(0, AbstractDefn_35, 2) = NULL;
        MR_hl_field(0, AbstractDefn_35, 3) = ((MR_Box) (Var_88));
        MR_hl_field(0, AbstractDefn_35, 4) = ((MR_Box) (Var_87));
        MR_hl_field(0, AbstractDefn_35, 5) = ((MR_Box) (Var_86));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (AbstractDefn_35));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_42, 0) = ((MR_Box) (Var_28));
        MR_hl_field(0, AllDefns_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_32;
      MR_Word ModeDefn_36 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn_8, (MR_Integer) 0))));
      MR_Word EqvDefn_37;

      {
        EqvDefn_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EqvDefn_37, 0) = ((MR_Box) (Var_91));
        MR_hl_field(0, EqvDefn_37, 1) = ((MR_Box) (Var_90));
        MR_hl_field(0, EqvDefn_37, 2) = ((MR_Box) (ModeDefn_36));
        MR_hl_field(0, EqvDefn_37, 3) = ((MR_Box) (Var_88));
        MR_hl_field(0, EqvDefn_37, 4) = ((MR_Box) (Var_87));
        MR_hl_field(0, EqvDefn_37, 5) = ((MR_Box) (Var_86));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (EqvDefn_37));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, AllDefns_42, 1) = ((MR_Box) (Var_32));
      }
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (ModeCtor_13)), ((MR_Box) (AllDefns_42)), STATE_VARIABLE_ModeDefnMap_0_23, STATE_VARIABLE_ModeDefnMap_24);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_24,
  MR_Word * STATE_VARIABLE_InstDefnMap_25)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 1))));
  MR_Word MaybeAbstractInstDefn_9 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 3))));
  MR_Integer Arity_13;
  MR_Word InstCtor_14;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word AllDefns0_15;
  MR_Box conv0_AllDefns0_15;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[19]), Params_7, &Arity_13);
  {
    InstCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtor_14, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, InstCtor_14, 1) = ((MR_Box) (Arity_13));
  }
  Var_99 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 0))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 1))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 2))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 4))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 5))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, (MR_Integer) 6))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), STATE_VARIABLE_InstDefnMap_0_24, ((MR_Box) (InstCtor_14)), &conv0_AllDefns0_15);
  if (succeeded)
  {
    AllDefns0_15 = ((MR_Word) (conv0_AllDefns0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns0_16 = ((MR_Word) ((MR_hl_field(0, AllDefns0_15, (MR_Integer) 0))));
    MR_Word EqvDefns0_17 = ((MR_Word) ((MR_hl_field(0, AllDefns0_15, (MR_Integer) 1))));
    MR_Word AllDefns_20;

    if ((MaybeAbstractInstDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AbstractDefn_18;
      MR_Word AbstractDefns_19;

      {
        AbstractDefn_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AbstractDefn_18, 0) = ((MR_Box) (Var_99));
        MR_hl_field(0, AbstractDefn_18, 1) = ((MR_Box) (Var_98));
        MR_hl_field(0, AbstractDefn_18, 2) = ((MR_Box) (Var_97));
        MR_hl_field(0, AbstractDefn_18, 3) = NULL;
        MR_hl_field(0, AbstractDefn_18, 4) = ((MR_Box) (Var_95));
        MR_hl_field(0, AbstractDefn_18, 5) = ((MR_Box) (Var_94));
        MR_hl_field(0, AbstractDefn_18, 6) = ((MR_Box) (Var_93));
      }
      {
        AbstractDefns_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AbstractDefns_19, 0) = ((MR_Box) (AbstractDefn_18));
        MR_hl_field(1, AbstractDefns_19, 1) = ((MR_Box) (AbstractDefns0_16));
      }
      {
        AllDefns_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_20, 0) = ((MR_Box) (AbstractDefns_19));
        MR_hl_field(0, AllDefns_20, 1) = ((MR_Box) (EqvDefns0_17));
      }
    }
    else
    {
      MR_Word InstDefn_21 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_9, (MR_Integer) 0))));
      MR_Word EqvDefn_22;
      MR_Word EqvDefns_23;

      {
        EqvDefn_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EqvDefn_22, 0) = ((MR_Box) (Var_99));
        MR_hl_field(0, EqvDefn_22, 1) = ((MR_Box) (Var_98));
        MR_hl_field(0, EqvDefn_22, 2) = ((MR_Box) (Var_97));
        MR_hl_field(0, EqvDefn_22, 3) = ((MR_Box) (InstDefn_21));
        MR_hl_field(0, EqvDefn_22, 4) = ((MR_Box) (Var_95));
        MR_hl_field(0, EqvDefn_22, 5) = ((MR_Box) (Var_94));
        MR_hl_field(0, EqvDefn_22, 6) = ((MR_Box) (Var_93));
      }
      {
        EqvDefns_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, EqvDefns_23, 0) = ((MR_Box) (EqvDefn_22));
        MR_hl_field(1, EqvDefns_23, 1) = ((MR_Box) (EqvDefns0_17));
      }
      {
        AllDefns_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_20, 0) = ((MR_Box) (AbstractDefns0_16));
        MR_hl_field(0, AllDefns_20, 1) = ((MR_Box) (EqvDefns_23));
      }
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (InstCtor_14)), ((MR_Box) (AllDefns_20)), STATE_VARIABLE_InstDefnMap_0_24, STATE_VARIABLE_InstDefnMap_25);
  }
  else
  {
    MR_Word AllDefns_43;

    if ((MaybeAbstractInstDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_29;
      MR_Word AbstractDefn_36;

      {
        AbstractDefn_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AbstractDefn_36, 0) = ((MR_Box) (Var_99));
        MR_hl_field(0, AbstractDefn_36, 1) = ((MR_Box) (Var_98));
        MR_hl_field(0, AbstractDefn_36, 2) = ((MR_Box) (Var_97));
        MR_hl_field(0, AbstractDefn_36, 3) = NULL;
        MR_hl_field(0, AbstractDefn_36, 4) = ((MR_Box) (Var_95));
        MR_hl_field(0, AbstractDefn_36, 5) = ((MR_Box) (Var_94));
        MR_hl_field(0, AbstractDefn_36, 6) = ((MR_Box) (Var_93));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (AbstractDefn_36));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_43, 0) = ((MR_Box) (Var_29));
        MR_hl_field(0, AllDefns_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_33;
      MR_Word InstDefn_37 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_9, (MR_Integer) 0))));
      MR_Word EqvDefn_38;

      {
        EqvDefn_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EqvDefn_38, 0) = ((MR_Box) (Var_99));
        MR_hl_field(0, EqvDefn_38, 1) = ((MR_Box) (Var_98));
        MR_hl_field(0, EqvDefn_38, 2) = ((MR_Box) (Var_97));
        MR_hl_field(0, EqvDefn_38, 3) = ((MR_Box) (InstDefn_37));
        MR_hl_field(0, EqvDefn_38, 4) = ((MR_Box) (Var_95));
        MR_hl_field(0, EqvDefn_38, 5) = ((MR_Box) (Var_94));
        MR_hl_field(0, EqvDefn_38, 6) = ((MR_Box) (Var_93));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (EqvDefn_38));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllDefns_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, AllDefns_43, 1) = ((MR_Box) (Var_33));
      }
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (InstCtor_14)), ((MR_Box) (AllDefns_43)), STATE_VARIABLE_InstDefnMap_0_24, STATE_VARIABLE_InstDefnMap_25);
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_45,
  MR_Word * STATE_VARIABLE_TypeDefnMap_46)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 1))));
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 2))));
  MR_Integer Arity_12;
  MR_Word TypeCtor_13;
  MR_Word AllDefns_44;
  MR_Word STATE_VARIABLE_AbsSolverDefns_47_47;
  MR_Word STATE_VARIABLE_SolverDefns_48_48;
  MR_Word STATE_VARIABLE_AbsStdDefns_49_49;
  MR_Word STATE_VARIABLE_EqvDefns_50_50;
  MR_Word STATE_VARIABLE_DuDefns_51_51;
  MR_Word STATE_VARIABLE_SubDefns_52_52;
  MR_Word STATE_VARIABLE_ForeignDefnsC_54_54;
  MR_Word STATE_VARIABLE_ForeignDefnsJava_55_55;
  MR_Word STATE_VARIABLE_ForeignDefnsCsharp_56_56;
  MR_Word STATE_VARIABLE_AbsSolverDefns_66_66;
  MR_Word STATE_VARIABLE_AbsStdDefns_69_69;
  MR_Word STATE_VARIABLE_SolverDefns_72_72;
  MR_Word STATE_VARIABLE_EqvDefns_75_75;
  MR_Word STATE_VARIABLE_DuDefns_78_78;
  MR_Word STATE_VARIABLE_SubDefns_81_81;
  MR_Word STATE_VARIABLE_ForeignDefnsC_84_84;
  MR_Word STATE_VARIABLE_ForeignDefnsJava_87_87;
  MR_Word STATE_VARIABLE_ForeignDefnsCsharp_90_90;
  MR_Word Var_93;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word AllDefns0_23;
  MR_Box conv0_AllDefns0_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), Params_7, &Arity_12);
  {
    TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (Arity_12));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), STATE_VARIABLE_TypeDefnMap_0_45, ((MR_Box) (TypeCtor_13)), &conv0_AllDefns0_23);
  if (succeeded)
  {
    AllDefns0_23 = ((MR_Word) (conv0_AllDefns0_23));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_53;

    STATE_VARIABLE_AbsSolverDefns_47_47 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 0))));
    STATE_VARIABLE_SolverDefns_48_48 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 1))));
    STATE_VARIABLE_AbsStdDefns_49_49 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 2))));
    STATE_VARIABLE_EqvDefns_50_50 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 3))));
    STATE_VARIABLE_DuDefns_51_51 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 4))));
    STATE_VARIABLE_SubDefns_52_52 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 5))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, (MR_Integer) 6))));
    STATE_VARIABLE_ForeignDefnsC_54_54 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 0))));
    STATE_VARIABLE_ForeignDefnsJava_55_55 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 1))));
    STATE_VARIABLE_ForeignDefnsCsharp_56_56 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 2))));
  }
  else
  {
    STATE_VARIABLE_AbsSolverDefns_47_47 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_SolverDefns_48_48 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_AbsStdDefns_49_49 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_EqvDefns_50_50 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_DuDefns_51_51 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_SubDefns_52_52 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignDefnsC_54_54 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignDefnsJava_55_55 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignDefnsCsharp_56_56 = (MR_Word) ((MR_Unsigned) 0U);
  }
  Var_149 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 0))));
  Var_148 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 1))));
  Var_146 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 3))));
  Var_145 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 4))));
  Var_144 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 5))));
  switch (MR_tag((MR_Word) TypeDefn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_32 = (MR_Word) ((MR_Word) (TypeDefn_8));
        MR_Word DuDefnInfo_33;
        MR_Word Var_79;

        {
          DuDefnInfo_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DuDefnInfo_33, 0) = ((MR_Box) (Var_149));
          MR_hl_field(0, DuDefnInfo_33, 1) = ((MR_Box) (Var_148));
          MR_hl_field(0, DuDefnInfo_33, 2) = ((MR_Box) (DetailsDu_32));
          MR_hl_field(0, DuDefnInfo_33, 3) = ((MR_Box) (Var_146));
          MR_hl_field(0, DuDefnInfo_33, 4) = ((MR_Box) (Var_145));
          MR_hl_field(0, DuDefnInfo_33, 5) = ((MR_Box) (Var_144));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (DuDefnInfo_33));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_DuDefns_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[15]), STATE_VARIABLE_DuDefns_51_51, Var_79);
        STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
        STATE_VARIABLE_SolverDefns_72_72 = STATE_VARIABLE_SolverDefns_48_48;
        STATE_VARIABLE_AbsStdDefns_69_69 = STATE_VARIABLE_AbsStdDefns_49_49;
        STATE_VARIABLE_EqvDefns_75_75 = STATE_VARIABLE_EqvDefns_50_50;
        STATE_VARIABLE_SubDefns_81_81 = STATE_VARIABLE_SubDefns_52_52;
        STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
        STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
        STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_34 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 1));
        MR_Word SubDefnInfo_35;
        MR_Word Var_82;

        {
          SubDefnInfo_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubDefnInfo_35, 0) = ((MR_Box) (Var_149));
          MR_hl_field(0, SubDefnInfo_35, 1) = ((MR_Box) (Var_148));
          MR_hl_field(0, SubDefnInfo_35, 2) = ((MR_Box) (DetailsSub_34));
          MR_hl_field(0, SubDefnInfo_35, 3) = ((MR_Box) (Var_146));
          MR_hl_field(0, SubDefnInfo_35, 4) = ((MR_Box) (Var_145));
          MR_hl_field(0, SubDefnInfo_35, 5) = ((MR_Box) (Var_144));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (SubDefnInfo_35));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_SubDefns_81_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[16]), STATE_VARIABLE_SubDefns_52_52, Var_82);
        STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
        STATE_VARIABLE_SolverDefns_72_72 = STATE_VARIABLE_SolverDefns_48_48;
        STATE_VARIABLE_AbsStdDefns_69_69 = STATE_VARIABLE_AbsStdDefns_49_49;
        STATE_VARIABLE_EqvDefns_75_75 = STATE_VARIABLE_EqvDefns_50_50;
        STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
        STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
        STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
        STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver_28 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 2));
        MR_Word SolverDefnInfo_29;
        MR_Word Var_73;

        {
          SolverDefnInfo_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverDefnInfo_29, 0) = ((MR_Box) (Var_149));
          MR_hl_field(0, SolverDefnInfo_29, 1) = ((MR_Box) (Var_148));
          MR_hl_field(0, SolverDefnInfo_29, 2) = ((MR_Box) (DetailsSolver_28));
          MR_hl_field(0, SolverDefnInfo_29, 3) = ((MR_Box) (Var_146));
          MR_hl_field(0, SolverDefnInfo_29, 4) = ((MR_Box) (Var_145));
          MR_hl_field(0, SolverDefnInfo_29, 5) = ((MR_Box) (Var_144));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (SolverDefnInfo_29));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_SolverDefns_72_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[13]), STATE_VARIABLE_SolverDefns_48_48, Var_73);
        STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
        STATE_VARIABLE_AbsStdDefns_69_69 = STATE_VARIABLE_AbsStdDefns_49_49;
        STATE_VARIABLE_EqvDefns_75_75 = STATE_VARIABLE_EqvDefns_50_50;
        STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
        STATE_VARIABLE_SubDefns_81_81 = STATE_VARIABLE_SubDefns_52_52;
        STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
        STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
        STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv_30 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, (MR_Integer) 1))));
            MR_Word EqvDefnInfo_31;
            MR_Word Var_76;

            {
              EqvDefnInfo_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, EqvDefnInfo_31, 0) = ((MR_Box) (Var_149));
              MR_hl_field(0, EqvDefnInfo_31, 1) = ((MR_Box) (Var_148));
              MR_hl_field(0, EqvDefnInfo_31, 2) = ((MR_Box) (DetailsEqv_30));
              MR_hl_field(0, EqvDefnInfo_31, 3) = ((MR_Box) (Var_146));
              MR_hl_field(0, EqvDefnInfo_31, 4) = ((MR_Box) (Var_145));
              MR_hl_field(0, EqvDefnInfo_31, 5) = ((MR_Box) (Var_144));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (EqvDefnInfo_31));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            STATE_VARIABLE_EqvDefns_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[14]), STATE_VARIABLE_EqvDefns_50_50, Var_76);
            STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
            STATE_VARIABLE_SolverDefns_72_72 = STATE_VARIABLE_SolverDefns_48_48;
            STATE_VARIABLE_AbsStdDefns_69_69 = STATE_VARIABLE_AbsStdDefns_49_49;
            STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
            STATE_VARIABLE_SubDefns_81_81 = STATE_VARIABLE_SubDefns_52_52;
            STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
            STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
            STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DetailsAbs_24 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, (MR_Integer) 1))));
            MR_Word AbsDefnInfo_25;

            {
              AbsDefnInfo_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AbsDefnInfo_25, 0) = ((MR_Box) (Var_149));
              MR_hl_field(0, AbsDefnInfo_25, 1) = ((MR_Box) (Var_148));
              MR_hl_field(0, AbsDefnInfo_25, 2) = ((MR_Box) (DetailsAbs_24));
              MR_hl_field(0, AbsDefnInfo_25, 3) = ((MR_Box) (Var_146));
              MR_hl_field(0, AbsDefnInfo_25, 4) = ((MR_Box) (Var_145));
              MR_hl_field(0, AbsDefnInfo_25, 5) = ((MR_Box) (Var_144));
            }
            switch (MR_tag((MR_Word) DetailsAbs_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DetailsAbs_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_70;

                      {
                        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_70, 0) = ((MR_Box) (AbsDefnInfo_25));
                        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      STATE_VARIABLE_AbsStdDefns_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), STATE_VARIABLE_AbsStdDefns_49_49, Var_70);
                      STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_67;

                      {
                        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_67, 0) = ((MR_Box) (AbsDefnInfo_25));
                        MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      STATE_VARIABLE_AbsSolverDefns_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), STATE_VARIABLE_AbsSolverDefns_47_47, Var_67);
                      STATE_VARIABLE_AbsStdDefns_69_69 = STATE_VARIABLE_AbsStdDefns_49_49;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (AbsDefnInfo_25));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_AbsStdDefns_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), STATE_VARIABLE_AbsStdDefns_49_49, Var_70);
                  STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (AbsDefnInfo_25));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_AbsStdDefns_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), STATE_VARIABLE_AbsStdDefns_49_49, Var_70);
                  STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
                }
                break;
            }
            STATE_VARIABLE_SolverDefns_72_72 = STATE_VARIABLE_SolverDefns_48_48;
            STATE_VARIABLE_EqvDefns_75_75 = STATE_VARIABLE_EqvDefns_50_50;
            STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
            STATE_VARIABLE_SubDefns_81_81 = STATE_VARIABLE_SubDefns_52_52;
            STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
            STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
            STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_36 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, (MR_Integer) 1))));
            MR_Word ForeignDefnInfo_37;
            MR_Word LangType_38;

            {
              ForeignDefnInfo_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ForeignDefnInfo_37, 0) = ((MR_Box) (Var_149));
              MR_hl_field(0, ForeignDefnInfo_37, 1) = ((MR_Box) (Var_148));
              MR_hl_field(0, ForeignDefnInfo_37, 2) = ((MR_Box) (DetailsForeign_36));
              MR_hl_field(0, ForeignDefnInfo_37, 3) = ((MR_Box) (Var_146));
              MR_hl_field(0, ForeignDefnInfo_37, 4) = ((MR_Box) (Var_145));
              MR_hl_field(0, ForeignDefnInfo_37, 5) = ((MR_Box) (Var_144));
            }
            LangType_38 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_36, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) LangType_38)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_85;

                  {
                    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_85, 0) = ((MR_Box) (ForeignDefnInfo_37));
                    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_ForeignDefnsC_84_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), STATE_VARIABLE_ForeignDefnsC_54_54, Var_85);
                  STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
                  STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_88;

                  {
                    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_88, 0) = ((MR_Box) (ForeignDefnInfo_37));
                    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_ForeignDefnsJava_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), STATE_VARIABLE_ForeignDefnsJava_55_55, Var_88);
                  STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
                  STATE_VARIABLE_ForeignDefnsCsharp_90_90 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_91;

                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (ForeignDefnInfo_37));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_ForeignDefnsCsharp_90_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), STATE_VARIABLE_ForeignDefnsCsharp_56_56, Var_91);
                  STATE_VARIABLE_ForeignDefnsC_84_84 = STATE_VARIABLE_ForeignDefnsC_54_54;
                  STATE_VARIABLE_ForeignDefnsJava_87_87 = STATE_VARIABLE_ForeignDefnsJava_55_55;
                }
                break;
            }
            STATE_VARIABLE_AbsSolverDefns_66_66 = STATE_VARIABLE_AbsSolverDefns_47_47;
            STATE_VARIABLE_SolverDefns_72_72 = STATE_VARIABLE_SolverDefns_48_48;
            STATE_VARIABLE_AbsStdDefns_69_69 = STATE_VARIABLE_AbsStdDefns_49_49;
            STATE_VARIABLE_EqvDefns_75_75 = STATE_VARIABLE_EqvDefns_50_50;
            STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
            STATE_VARIABLE_SubDefns_81_81 = STATE_VARIABLE_SubDefns_52_52;
          }
          break;
      }
      break;
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsC_84_84));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsJava_87_87));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsCsharp_90_90));
  }
  {
    AllDefns_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllDefns_44, 0) = ((MR_Box) (STATE_VARIABLE_AbsSolverDefns_66_66));
    MR_hl_field(0, AllDefns_44, 1) = ((MR_Box) (STATE_VARIABLE_SolverDefns_72_72));
    MR_hl_field(0, AllDefns_44, 2) = ((MR_Box) (STATE_VARIABLE_AbsStdDefns_69_69));
    MR_hl_field(0, AllDefns_44, 3) = ((MR_Box) (STATE_VARIABLE_EqvDefns_75_75));
    MR_hl_field(0, AllDefns_44, 4) = ((MR_Box) (STATE_VARIABLE_DuDefns_78_78));
    MR_hl_field(0, AllDefns_44, 5) = ((MR_Box) (STATE_VARIABLE_SubDefns_81_81));
    MR_hl_field(0, AllDefns_44, 6) = ((MR_Box) (Var_93));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (AllDefns_44)), STATE_VARIABLE_TypeDefnMap_0_45, STATE_VARIABLE_TypeDefnMap_46);
}

static void MR_CALL 
parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(
  MR_Word Clause0_3,
  MR_Word * Clause_4)
{
  MR_Word VarSet0_5 = ((MR_Word) ((MR_hl_field(0, Clause0_3, (MR_Integer) 3))));
  MR_Word VarSet_6;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  mercury__varset__undo_default_names_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_5, &VarSet_6);
  Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Clause0_3, (MR_Integer) 0))) & (MR_Integer) 1);
  Var_14 = ((MR_Word) ((MR_hl_field(0, Clause0_3, (MR_Integer) 1))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, Clause0_3, (MR_Integer) 2))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, Clause0_3, (MR_Integer) 4))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, Clause0_3, (MR_Integer) 5))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, Clause0_3, (MR_Integer) 6))));
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
parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeRepns_7;

  parse_tree__convert_parse_tree__accumulate_type_ctor_repns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepns_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepns_7));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0(
  MR_Word TypeCtorRepnMap_3)
{
  MR_Word TypeRepns_4;
  MR_Word TypeRepnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_TypeRepnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[31]), TypeCtorRepnMap_3, ((MR_Box) (Var_7)), &conv1_TypeRepnsCord_5);
  TypeRepnsCord_5 = ((MR_Word) (conv1_TypeRepnsCord_5));
  TypeRepns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), TypeRepnsCord_5);
  return TypeRepns_4;
}

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModeDefns_9;

  parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefns_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefns_9));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0(
  MR_Word ModeCtorDefnMap_3)
{
  MR_Word ModeDefns_4;
  MR_Word ModeDefnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_ModeDefnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[30]), ModeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_ModeDefnsCord_5);
  ModeDefnsCord_5 = ((MR_Word) (conv1_ModeDefnsCord_5));
  ModeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), ModeDefnsCord_5);
  return ModeDefns_4;
}

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InstDefns_9;

  parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefns_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefns_9));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0(
  MR_Word InstCtorDefnMap_3)
{
  MR_Word InstDefns_4;
  MR_Word InstDefnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_InstDefnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), InstCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_InstDefnsCord_5);
  InstDefnsCord_5 = ((MR_Word) (conv1_InstDefnsCord_5));
  InstDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), InstDefnsCord_5);
  return InstDefns_4;
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeDefns_17;

  parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefns_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefns_17));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0(
  MR_Word TypeCtorDefnMap_3)
{
  MR_Word TypeDefns_4;
  MR_Word TypeDefnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_TypeDefnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), TypeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_TypeDefnsCord_5);
  TypeDefnsCord_5 = ((MR_Word) (conv1_TypeDefnsCord_5));
  TypeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), TypeDefnsCord_5);
  return TypeDefns_4;
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
  MR_Word conv1_STATE_VARIABLE_ImpFIMSpecMap_21;
  MR_Word conv0_STATE_VARIABLE_Specs_23;

  parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ImpFIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ImpFIMSpecMap_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word STATE_VARIABLE_Specs_0_123,
  MR_Word * STATE_VARIABLE_Specs_124)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, RawCompUnit_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(0, RawCompUnit_7, (MR_Integer) 1))));
  MR_Word ItemBlocks_12 = ((MR_Word) ((MR_hl_field(0, RawCompUnit_7, (MR_Integer) 2))));
  MR_Word IntFIMSpecMap0_13;
  MR_Word ImpFIMSpecMap0_14;
  MR_Word IntImplicitAvailNeeds0_15;
  MR_Word ImpImplicitAvailNeeds0_16;
  MR_Word IntIncls_17;
  MR_Word IntAvails_18;
  MR_Word IntFIMSpecMap_19;
  MR_Word RevIntTypeDefns_20;
  MR_Word RevIntInstDefns_21;
  MR_Word RevIntModeDefns_22;
  MR_Word RevIntTypeClasses_23;
  MR_Word RevIntInstances0_24;
  MR_Word RevIntPredDecls_25;
  MR_Word RevIntModeDecls_26;
  MR_Word RevIntDeclPragmas_27;
  MR_Word RevIntDeclMarkers_28;
  MR_Word RevIntImplPragmas_29;
  MR_Word RevIntImplMarkers_30;
  MR_Word IntBadClausePreds_31;
  MR_Word RevIntPromises_32;
  MR_Word RevIntInitialises_33;
  MR_Word RevIntFinalises_34;
  MR_Word RevIntMutables_35;
  MR_Word IntImplicitAvailNeeds_36;
  MR_Word IntSelfFIMLangs_37;
  MR_Word ImpIncls_38;
  MR_Word ImpAvails_39;
  MR_Word ImpFIMSpecMap1_40;
  MR_Word RevImpTypeDefns_41;
  MR_Word RevImpInstDefns_42;
  MR_Word RevImpModeDefns_43;
  MR_Word RevImpTypeClasses_44;
  MR_Word RevImpInstances0_45;
  MR_Word RevImpPredDecls_46;
  MR_Word RevImpModeDecls_47;
  MR_Word RevImpClauses_48;
  MR_Word RevImpForeignProcs_49;
  MR_Word RevImpForeignEnums_50;
  MR_Word RevImpForeignExportEnums_51;
  MR_Word RevImpDeclPragmas_52;
  MR_Word RevImpDeclMarkers_53;
  MR_Word RevImpImplPragmas_54;
  MR_Word RevImpImplMarkers_55;
  MR_Word RevImpPromises_56;
  MR_Word RevImpInitialises0_57;
  MR_Word RevImpFinalises0_58;
  MR_Word RevImpMutables0_59;
  MR_Word ImpImplicitAvailNeeds_60;
  MR_Word ImpSelfFIMLangs_61;
  MR_Word InclMap_62;
  MR_Word IntTypeDefns_63;
  MR_Word IntInstDefns_64;
  MR_Word IntModeDefns_65;
  MR_Word IntTypeClasses_66;
  MR_Word IntInstances0_67;
  MR_Word IntPredDecls_68;
  MR_Word IntModeDecls_69;
  MR_Word IntDeclPragmas_70;
  MR_Word IntDeclMarkers_71;
  MR_Word IntImplPragmas_72;
  MR_Word IntImplMarkers_73;
  MR_Word IntPromises_74;
  MR_Word IntInitialises_75;
  MR_Word IntFinalises_76;
  MR_Word IntMutables_77;
  MR_Word ImpTypeDefns_78;
  MR_Word ImpInstDefns_79;
  MR_Word ImpModeDefns_80;
  MR_Word ImpTypeClasses_81;
  MR_Word ImpInstances0_82;
  MR_Word ImpPredDecls_83;
  MR_Word ImpModeDecls_84;
  MR_Word ImpClauses_85;
  MR_Word ImpForeignProcs_86;
  MR_Word ImpForeignEnums_87;
  MR_Word ImpForeignExportEnums_88;
  MR_Word ImpDeclPragmas_89;
  MR_Word ImpDeclMarkers_90;
  MR_Word ImpImplPragmas0_91;
  MR_Word ImpImplMarkers0_92;
  MR_Word ImpPromises_93;
  MR_Word ImpInitialises0_94;
  MR_Word ImpFinalises0_95;
  MR_Word ImpMutables0_96;
  MR_Word IntInstances_97;
  MR_Word ImpInstances_98;
  MR_Word IntTypeDefnMap_100;
  MR_Word ImpTypeDefnMap_101;
  MR_Word ImpForeignEnumMap_102;
  MR_Word TypeCtorCheckedMap_103;
  MR_Word TypeSpecs_104;
  MR_Word IntInstDefnMap_105;
  MR_Word ImpInstDefnMap_106;
  MR_Word InstCtorCheckedMap_107;
  MR_Word InstSpecs_108;
  MR_Word IntModeDefnMap_109;
  MR_Word ImpModeDefnMap_110;
  MR_Word ModeCtorCheckedMap_111;
  MR_Word InstModeSpecs_112;
  MR_Word ImpImplPragmas_113;
  MR_Word ImpImplMarkers_114;
  MR_Word ImpInitialises_115;
  MR_Word ImpFinalises_116;
  MR_Word ImpMutables_117;
  MR_Word SectionImportUseMap_118;
  MR_Word ImportUseMap0_119;
  MR_Word ImportUseMap_120;
  MR_Word IntImpFIMSpecs_121;
  MR_Word ImpFIMSpecMap_122;
  MR_Word Var_138;
  MR_Word Var_143;
  MR_Word Var_165;
  MR_Word STATE_VARIABLE_Specs_166_166;
  MR_Word STATE_VARIABLE_Specs_167_167;
  MR_Word STATE_VARIABLE_Specs_173_173;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Word Var_176;
  MR_Box conv3_ImpFIMSpecMap_122;
  MR_Box conv2_STATE_VARIABLE_Specs_124;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &IntFIMSpecMap0_13);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &ImpFIMSpecMap0_14);
  IntImplicitAvailNeeds0_15 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
  ImpImplicitAvailNeeds0_16 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
  Var_138 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0));
  Var_143 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  Var_165 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0(ItemBlocks_12, (MR_Word) ((MR_Unsigned) 0U), &IntIncls_17, (MR_Word) ((MR_Unsigned) 0U), &IntAvails_18, IntFIMSpecMap0_13, &IntFIMSpecMap_19, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefns_20, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstDefns_21, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDefns_22, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeClasses_23, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstances0_24, (MR_Word) ((MR_Unsigned) 0U), &RevIntPredDecls_25, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_26, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclPragmas_27, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclMarkers_28, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplPragmas_29, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplMarkers_30, Var_138, &IntBadClausePreds_31, (MR_Word) ((MR_Unsigned) 0U), &RevIntPromises_32, (MR_Word) ((MR_Unsigned) 0U), &RevIntInitialises_33, (MR_Word) ((MR_Unsigned) 0U), &RevIntFinalises_34, (MR_Word) ((MR_Unsigned) 0U), &RevIntMutables_35, IntImplicitAvailNeeds0_15, &IntImplicitAvailNeeds_36, Var_143, &IntSelfFIMLangs_37, (MR_Word) ((MR_Unsigned) 0U), &ImpIncls_38, (MR_Word) ((MR_Unsigned) 0U), &ImpAvails_39, ImpFIMSpecMap0_14, &ImpFIMSpecMap1_40, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefns_41, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstDefns_42, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDefns_43, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeClasses_44, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstances0_45, (MR_Word) ((MR_Unsigned) 0U), &RevImpPredDecls_46, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_47, (MR_Word) ((MR_Unsigned) 0U), &RevImpClauses_48, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignProcs_49, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignEnums_50, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignExportEnums_51, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclPragmas_52, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclMarkers_53, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplPragmas_54, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplMarkers_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpPromises_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpInitialises0_57, (MR_Word) ((MR_Unsigned) 0U), &RevImpFinalises0_58, (MR_Word) ((MR_Unsigned) 0U), &RevImpMutables0_59, ImpImplicitAvailNeeds0_16, &ImpImplicitAvailNeeds_60, Var_165, &ImpSelfFIMLangs_61, STATE_VARIABLE_Specs_0_123, &STATE_VARIABLE_Specs_166_166);
  parse_tree__item_util__classify_include_modules_5_p_0(IntIncls_17, ImpIncls_38, &InclMap_62, STATE_VARIABLE_Specs_166_166, &STATE_VARIABLE_Specs_167_167);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), RevIntTypeDefns_20, &IntTypeDefns_63);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), RevIntInstDefns_21, &IntInstDefns_64);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), RevIntModeDefns_22, &IntModeDefns_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevIntTypeClasses_23, &IntTypeClasses_66);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevIntInstances0_24, &IntInstances0_67);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevIntPredDecls_25, &IntPredDecls_68);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_26, &IntModeDecls_69);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevIntDeclPragmas_27, &IntDeclPragmas_70);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), RevIntDeclMarkers_28, &IntDeclMarkers_71);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), RevIntImplPragmas_29, &IntImplPragmas_72);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), RevIntImplMarkers_30, &IntImplMarkers_73);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevIntPromises_32, &IntPromises_74);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevIntInitialises_33, &IntInitialises_75);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevIntFinalises_34, &IntFinalises_76);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevIntMutables_35, &IntMutables_77);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), RevImpTypeDefns_41, &ImpTypeDefns_78);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), RevImpInstDefns_42, &ImpInstDefns_79);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), RevImpModeDefns_43, &ImpModeDefns_80);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevImpTypeClasses_44, &ImpTypeClasses_81);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevImpInstances0_45, &ImpInstances0_82);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevImpPredDecls_46, &ImpPredDecls_83);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_47, &ImpModeDecls_84);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevImpClauses_48, &ImpClauses_85);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), RevImpForeignProcs_49, &ImpForeignProcs_86);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), RevImpForeignEnums_50, &ImpForeignEnums_87);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), RevImpForeignExportEnums_51, &ImpForeignExportEnums_88);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevImpDeclPragmas_52, &ImpDeclPragmas_89);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), RevImpDeclMarkers_53, &ImpDeclMarkers_90);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), RevImpImplPragmas_54, &ImpImplPragmas0_91);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), RevImpImplMarkers_55, &ImpImplMarkers0_92);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevImpPromises_56, &ImpPromises_93);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevImpInitialises0_57, &ImpInitialises0_94);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevImpFinalises0_58, &ImpFinalises0_95);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevImpMutables0_59, &ImpMutables0_96);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), InclMap_62);
  if (succeeded)
  {
    IntInstances_97 = IntInstances0_67;
    ImpInstances_98 = ImpInstances0_82;
  }
  else
  {
    MR_Word MovedImpInstances_99;

    parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(IntInstances0_67, &IntInstances_97, &MovedImpInstances_99);
    ImpInstances_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MovedImpInstances_99, ImpInstances0_82);
  }
  IntTypeDefnMap_100 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_63);
  ImpTypeDefnMap_101 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_78);
  ImpForeignEnumMap_102 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_87);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 1, IntTypeDefnMap_100, ImpTypeDefnMap_101, ImpForeignEnumMap_102, &TypeCtorCheckedMap_103, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs_104);
  IntInstDefnMap_105 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_64);
  ImpInstDefnMap_106 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_79);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 1, IntInstDefnMap_105, ImpInstDefnMap_106, &InstCtorCheckedMap_107, (MR_Word) ((MR_Unsigned) 0U), &InstSpecs_108);
  IntModeDefnMap_109 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_65);
  ImpModeDefnMap_110 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_80);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 1, IntModeDefnMap_109, ImpModeDefnMap_110, &ModeCtorCheckedMap_111, InstSpecs_108, &InstModeSpecs_112);
  ImpImplPragmas_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), IntImplPragmas_72, ImpImplPragmas0_91);
  ImpImplMarkers_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), IntImplMarkers_73, ImpImplMarkers0_92);
  ImpInitialises_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), IntInitialises_75, ImpInitialises0_94);
  ImpFinalises_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), IntFinalises_76, ImpFinalises0_95);
  ImpMutables_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), IntMutables_77, ImpMutables0_96);
  parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0(ModuleName_10, IntAvails_18, ImpAvails_39, &SectionImportUseMap_118, STATE_VARIABLE_Specs_167_167, &STATE_VARIABLE_Specs_173_173);
  parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_118, &ImportUseMap0_119);
  parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(Globals_6, IntImplicitAvailNeeds_36, ImpImplicitAvailNeeds_60, ImportUseMap0_119, &ImportUseMap_120);
  Var_174 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_19);
  Var_175 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap1_40);
  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_174, Var_175, &IntImpFIMSpecs_121);
  {
    Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_176, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_10[0]));
    MR_hl_field(0, Var_176, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1));
    MR_hl_field(0, Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_176, 3) = ((MR_Box) (IntFIMSpecMap_19));
  }
  mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), Var_176, IntImpFIMSpecs_121, ((MR_Box) (ImpFIMSpecMap1_40)), &conv3_ImpFIMSpecMap_122, ((MR_Box) (STATE_VARIABLE_Specs_173_173)), &conv2_STATE_VARIABLE_Specs_124);
  ImpFIMSpecMap_122 = ((MR_Word) (conv3_ImpFIMSpecMap_122));
  *STATE_VARIABLE_Specs_124 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_124));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_62));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_120));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_122));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_61));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_103));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_107));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_111));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeSpecs_104));
    MR_hl_field(0, base, 12) = ((MR_Box) (InstModeSpecs_112));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntTypeClasses_66));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntInstances_97));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPredDecls_68));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntModeDecls_69));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntDeclPragmas_70));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntDeclMarkers_71));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntPromises_74));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntBadClausePreds_31));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpTypeClasses_81));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpInstances_98));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPredDecls_83));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpModeDecls_84));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpClauses_85));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpForeignProcs_86));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpForeignExportEnums_88));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpDeclPragmas_89));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpDeclMarkers_90));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpImplPragmas_113));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpImplMarkers_114));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpPromises_93));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpInitialises_115));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpFinalises_116));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpMutables_117));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_FIMSpecMap_21;
  MR_Word conv4_STATE_VARIABLE_Specs_23;

  parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_FIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_FIMSpecMap_21));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FIMSpecMap_21;
  MR_Word conv0_STATE_VARIABLE_Specs_23;

  parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FIMSpecMap_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_93_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_93 = STATE_VARIABLE_Specs_0_92;
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
      MR_Word ItemBlock_232 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_233 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_281 = ((MR_Unsigned) ((MR_hl_field(0, ItemBlock_232, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Incls_282 = ((MR_Word) ((MR_hl_field(0, ItemBlock_232, (MR_Integer) 2))));
      MR_Word Avails_283 = ((MR_Word) ((MR_hl_field(0, ItemBlock_232, (MR_Integer) 3))));
      MR_Word FIMs_284 = ((MR_Word) ((MR_hl_field(0, ItemBlock_232, (MR_Integer) 4))));
      MR_Word Items_285 = ((MR_Word) ((MR_hl_field(0, ItemBlock_232, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_IntIncls_378_378;
      MR_Word STATE_VARIABLE_IntAvails_379_379;
      MR_Word STATE_VARIABLE_IntFIMSpecMap_381_381;
      MR_Word STATE_VARIABLE_RevIntTypeDefns_383_383;
      MR_Word STATE_VARIABLE_RevIntInstDefns_384_384;
      MR_Word STATE_VARIABLE_RevIntModeDefns_385_385;
      MR_Word STATE_VARIABLE_RevIntTypeClasses_386_386;
      MR_Word STATE_VARIABLE_RevIntInstances_387_387;
      MR_Word STATE_VARIABLE_RevIntPredDecls_388_388;
      MR_Word STATE_VARIABLE_RevIntModeDecls_389_389;
      MR_Word STATE_VARIABLE_RevIntDeclPragmas_390_390;
      MR_Word STATE_VARIABLE_RevIntDeclMarkers_391_391;
      MR_Word STATE_VARIABLE_RevIntImplPragmas_392_392;
      MR_Word STATE_VARIABLE_RevIntImplMarkers_393_393;
      MR_Word STATE_VARIABLE_IntBadClausePreds_394_394;
      MR_Word STATE_VARIABLE_RevIntPromises_395_395;
      MR_Word STATE_VARIABLE_RevIntInitialises_396_396;
      MR_Word STATE_VARIABLE_RevIntFinalises_397_397;
      MR_Word STATE_VARIABLE_RevIntMutables_398_398;
      MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_399_399;
      MR_Word STATE_VARIABLE_IntSelfFIMLangs_400_400;
      MR_Word STATE_VARIABLE_Specs_401_401;
      MR_Word STATE_VARIABLE_ImpIncls_402_402;
      MR_Word STATE_VARIABLE_ImpAvails_403_403;
      MR_Word STATE_VARIABLE_ImpFIMSpecMap_405_405;
      MR_Word STATE_VARIABLE_RevImpTypeDefns_407_407;
      MR_Word STATE_VARIABLE_RevImpInstDefns_408_408;
      MR_Word STATE_VARIABLE_RevImpModeDefns_409_409;
      MR_Word STATE_VARIABLE_RevImpTypeClasses_410_410;
      MR_Word STATE_VARIABLE_RevImpInstances_411_411;
      MR_Word STATE_VARIABLE_RevImpPredDecls_412_412;
      MR_Word STATE_VARIABLE_RevImpModeDecls_413_413;
      MR_Word STATE_VARIABLE_RevImpClauses_414_414;
      MR_Word STATE_VARIABLE_RevImpForeignProcs_415_415;
      MR_Word STATE_VARIABLE_RevImpForeignEnums_416_416;
      MR_Word STATE_VARIABLE_RevImpForeignExportEnums_417_417;
      MR_Word STATE_VARIABLE_RevImpDeclPragmas_418_418;
      MR_Word STATE_VARIABLE_RevImpDeclMarkers_419_419;
      MR_Word STATE_VARIABLE_RevImpImplPragmas_420_420;
      MR_Word STATE_VARIABLE_RevImpImplMarkers_421_421;
      MR_Word STATE_VARIABLE_RevImpPromises_422_422;
      MR_Word STATE_VARIABLE_RevImpInitialises_423_423;
      MR_Word STATE_VARIABLE_RevImpFinalises_424_424;
      MR_Word STATE_VARIABLE_RevImpMutables_425_425;
      MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_426_426;
      MR_Word STATE_VARIABLE_ImpSelfFIMLangs_427_427;
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
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_92;

      switch (Section_281) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Specs_406_406;
            MR_Box conv3_STATE_VARIABLE_ImpFIMSpecMap_405_405;
            MR_Box conv2_STATE_VARIABLE_Specs_406_406;

            STATE_VARIABLE_ImpIncls_402_402 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpIncls_0_44, Incls_282);
            STATE_VARIABLE_ImpAvails_403_403 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvails_0_46, Avails_283);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), FIMs_284, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecMap_0_48)), &conv3_STATE_VARIABLE_ImpFIMSpecMap_405_405, ((MR_Box) (STATE_VARIABLE_Specs_0_92)), &conv2_STATE_VARIABLE_Specs_406_406);
            STATE_VARIABLE_ImpFIMSpecMap_405_405 = ((MR_Word) (conv3_STATE_VARIABLE_ImpFIMSpecMap_405_405));
            STATE_VARIABLE_Specs_406_406 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_406_406));
            parse_tree__convert_parse_tree__classify_src_items_imp_45_p_0(Items_285, STATE_VARIABLE_RevImpTypeDefns_0_50, &STATE_VARIABLE_RevImpTypeDefns_407_407, STATE_VARIABLE_RevImpInstDefns_0_52, &STATE_VARIABLE_RevImpInstDefns_408_408, STATE_VARIABLE_RevImpModeDefns_0_54, &STATE_VARIABLE_RevImpModeDefns_409_409, STATE_VARIABLE_RevImpTypeClasses_0_56, &STATE_VARIABLE_RevImpTypeClasses_410_410, STATE_VARIABLE_RevImpInstances_0_58, &STATE_VARIABLE_RevImpInstances_411_411, STATE_VARIABLE_RevImpPredDecls_0_60, &STATE_VARIABLE_RevImpPredDecls_412_412, STATE_VARIABLE_RevImpModeDecls_0_62, &STATE_VARIABLE_RevImpModeDecls_413_413, STATE_VARIABLE_RevImpClauses_0_64, &STATE_VARIABLE_RevImpClauses_414_414, STATE_VARIABLE_RevImpForeignProcs_0_66, &STATE_VARIABLE_RevImpForeignProcs_415_415, STATE_VARIABLE_RevImpForeignEnums_0_68, &STATE_VARIABLE_RevImpForeignEnums_416_416, STATE_VARIABLE_RevImpForeignExportEnums_0_70, &STATE_VARIABLE_RevImpForeignExportEnums_417_417, STATE_VARIABLE_RevImpDeclPragmas_0_72, &STATE_VARIABLE_RevImpDeclPragmas_418_418, STATE_VARIABLE_RevImpDeclMarkers_0_74, &STATE_VARIABLE_RevImpDeclMarkers_419_419, STATE_VARIABLE_RevImpImplPragmas_0_76, &STATE_VARIABLE_RevImpImplPragmas_420_420, STATE_VARIABLE_RevImpImplMarkers_0_78, &STATE_VARIABLE_RevImpImplMarkers_421_421, STATE_VARIABLE_RevImpPromises_0_80, &STATE_VARIABLE_RevImpPromises_422_422, STATE_VARIABLE_RevImpInitialises_0_82, &STATE_VARIABLE_RevImpInitialises_423_423, STATE_VARIABLE_RevImpFinalises_0_84, &STATE_VARIABLE_RevImpFinalises_424_424, STATE_VARIABLE_RevImpMutables_0_86, &STATE_VARIABLE_RevImpMutables_425_425, STATE_VARIABLE_ImpImplicitAvailNeeds_0_88, &STATE_VARIABLE_ImpImplicitAvailNeeds_426_426, STATE_VARIABLE_ImpSelfFIMLangs_0_90, &STATE_VARIABLE_ImpSelfFIMLangs_427_427, STATE_VARIABLE_Specs_406_406, &STATE_VARIABLE_Specs_401_401);
            STATE_VARIABLE_IntIncls_378_378 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntAvails_379_379 = STATE_VARIABLE_IntAvails_0_4;
            STATE_VARIABLE_IntFIMSpecMap_381_381 = STATE_VARIABLE_IntFIMSpecMap_0_6;
            STATE_VARIABLE_RevIntTypeDefns_383_383 = STATE_VARIABLE_RevIntTypeDefns_0_8;
            STATE_VARIABLE_RevIntInstDefns_384_384 = STATE_VARIABLE_RevIntInstDefns_0_10;
            STATE_VARIABLE_RevIntModeDefns_385_385 = STATE_VARIABLE_RevIntModeDefns_0_12;
            STATE_VARIABLE_RevIntTypeClasses_386_386 = STATE_VARIABLE_RevIntTypeClasses_0_14;
            STATE_VARIABLE_RevIntInstances_387_387 = STATE_VARIABLE_RevIntInstances_0_16;
            STATE_VARIABLE_RevIntPredDecls_388_388 = STATE_VARIABLE_RevIntPredDecls_0_18;
            STATE_VARIABLE_RevIntModeDecls_389_389 = STATE_VARIABLE_RevIntModeDecls_0_20;
            STATE_VARIABLE_RevIntDeclPragmas_390_390 = STATE_VARIABLE_RevIntDeclPragmas_0_22;
            STATE_VARIABLE_RevIntDeclMarkers_391_391 = STATE_VARIABLE_RevIntDeclMarkers_0_24;
            STATE_VARIABLE_RevIntImplPragmas_392_392 = STATE_VARIABLE_RevIntImplPragmas_0_26;
            STATE_VARIABLE_RevIntImplMarkers_393_393 = STATE_VARIABLE_RevIntImplMarkers_0_28;
            STATE_VARIABLE_IntBadClausePreds_394_394 = STATE_VARIABLE_IntBadClausePreds_0_30;
            STATE_VARIABLE_RevIntPromises_395_395 = STATE_VARIABLE_RevIntPromises_0_32;
            STATE_VARIABLE_RevIntInitialises_396_396 = STATE_VARIABLE_RevIntInitialises_0_34;
            STATE_VARIABLE_RevIntFinalises_397_397 = STATE_VARIABLE_RevIntFinalises_0_36;
            STATE_VARIABLE_RevIntMutables_398_398 = STATE_VARIABLE_RevIntMutables_0_38;
            STATE_VARIABLE_IntImplicitAvailNeeds_399_399 = STATE_VARIABLE_IntImplicitAvailNeeds_0_40;
            STATE_VARIABLE_IntSelfFIMLangs_400_400 = STATE_VARIABLE_IntSelfFIMLangs_0_42;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_382_382;
            MR_Box conv7_STATE_VARIABLE_IntFIMSpecMap_381_381;
            MR_Box conv6_STATE_VARIABLE_Specs_382_382;

            STATE_VARIABLE_IntIncls_378_378 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Incls_282);
            STATE_VARIABLE_IntAvails_379_379 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvails_0_4, Avails_283);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), FIMs_284, ((MR_Box) (STATE_VARIABLE_IntFIMSpecMap_0_6)), &conv7_STATE_VARIABLE_IntFIMSpecMap_381_381, ((MR_Box) (STATE_VARIABLE_Specs_0_92)), &conv6_STATE_VARIABLE_Specs_382_382);
            STATE_VARIABLE_IntFIMSpecMap_381_381 = ((MR_Word) (conv7_STATE_VARIABLE_IntFIMSpecMap_381_381));
            STATE_VARIABLE_Specs_382_382 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_382_382));
            parse_tree__convert_parse_tree__classify_src_items_int_39_p_0(Items_285, STATE_VARIABLE_RevIntTypeDefns_0_8, &STATE_VARIABLE_RevIntTypeDefns_383_383, STATE_VARIABLE_RevIntInstDefns_0_10, &STATE_VARIABLE_RevIntInstDefns_384_384, STATE_VARIABLE_RevIntModeDefns_0_12, &STATE_VARIABLE_RevIntModeDefns_385_385, STATE_VARIABLE_RevIntTypeClasses_0_14, &STATE_VARIABLE_RevIntTypeClasses_386_386, STATE_VARIABLE_RevIntInstances_0_16, &STATE_VARIABLE_RevIntInstances_387_387, STATE_VARIABLE_RevIntPredDecls_0_18, &STATE_VARIABLE_RevIntPredDecls_388_388, STATE_VARIABLE_RevIntModeDecls_0_20, &STATE_VARIABLE_RevIntModeDecls_389_389, STATE_VARIABLE_RevIntDeclPragmas_0_22, &STATE_VARIABLE_RevIntDeclPragmas_390_390, STATE_VARIABLE_RevIntDeclMarkers_0_24, &STATE_VARIABLE_RevIntDeclMarkers_391_391, STATE_VARIABLE_RevIntImplPragmas_0_26, &STATE_VARIABLE_RevIntImplPragmas_392_392, STATE_VARIABLE_RevIntImplMarkers_0_28, &STATE_VARIABLE_RevIntImplMarkers_393_393, STATE_VARIABLE_IntBadClausePreds_0_30, &STATE_VARIABLE_IntBadClausePreds_394_394, STATE_VARIABLE_RevIntPromises_0_32, &STATE_VARIABLE_RevIntPromises_395_395, STATE_VARIABLE_RevIntInitialises_0_34, &STATE_VARIABLE_RevIntInitialises_396_396, STATE_VARIABLE_RevIntFinalises_0_36, &STATE_VARIABLE_RevIntFinalises_397_397, STATE_VARIABLE_RevIntMutables_0_38, &STATE_VARIABLE_RevIntMutables_398_398, STATE_VARIABLE_IntImplicitAvailNeeds_0_40, &STATE_VARIABLE_IntImplicitAvailNeeds_399_399, STATE_VARIABLE_IntSelfFIMLangs_0_42, &STATE_VARIABLE_IntSelfFIMLangs_400_400, STATE_VARIABLE_Specs_382_382, &STATE_VARIABLE_Specs_401_401);
            STATE_VARIABLE_ImpIncls_402_402 = STATE_VARIABLE_ImpIncls_0_44;
            STATE_VARIABLE_ImpAvails_403_403 = STATE_VARIABLE_ImpAvails_0_46;
            STATE_VARIABLE_ImpFIMSpecMap_405_405 = STATE_VARIABLE_ImpFIMSpecMap_0_48;
            STATE_VARIABLE_RevImpTypeDefns_407_407 = STATE_VARIABLE_RevImpTypeDefns_0_50;
            STATE_VARIABLE_RevImpInstDefns_408_408 = STATE_VARIABLE_RevImpInstDefns_0_52;
            STATE_VARIABLE_RevImpModeDefns_409_409 = STATE_VARIABLE_RevImpModeDefns_0_54;
            STATE_VARIABLE_RevImpTypeClasses_410_410 = STATE_VARIABLE_RevImpTypeClasses_0_56;
            STATE_VARIABLE_RevImpInstances_411_411 = STATE_VARIABLE_RevImpInstances_0_58;
            STATE_VARIABLE_RevImpPredDecls_412_412 = STATE_VARIABLE_RevImpPredDecls_0_60;
            STATE_VARIABLE_RevImpModeDecls_413_413 = STATE_VARIABLE_RevImpModeDecls_0_62;
            STATE_VARIABLE_RevImpClauses_414_414 = STATE_VARIABLE_RevImpClauses_0_64;
            STATE_VARIABLE_RevImpForeignProcs_415_415 = STATE_VARIABLE_RevImpForeignProcs_0_66;
            STATE_VARIABLE_RevImpForeignEnums_416_416 = STATE_VARIABLE_RevImpForeignEnums_0_68;
            STATE_VARIABLE_RevImpForeignExportEnums_417_417 = STATE_VARIABLE_RevImpForeignExportEnums_0_70;
            STATE_VARIABLE_RevImpDeclPragmas_418_418 = STATE_VARIABLE_RevImpDeclPragmas_0_72;
            STATE_VARIABLE_RevImpDeclMarkers_419_419 = STATE_VARIABLE_RevImpDeclMarkers_0_74;
            STATE_VARIABLE_RevImpImplPragmas_420_420 = STATE_VARIABLE_RevImpImplPragmas_0_76;
            STATE_VARIABLE_RevImpImplMarkers_421_421 = STATE_VARIABLE_RevImpImplMarkers_0_78;
            STATE_VARIABLE_RevImpPromises_422_422 = STATE_VARIABLE_RevImpPromises_0_80;
            STATE_VARIABLE_RevImpInitialises_423_423 = STATE_VARIABLE_RevImpInitialises_0_82;
            STATE_VARIABLE_RevImpFinalises_424_424 = STATE_VARIABLE_RevImpFinalises_0_84;
            STATE_VARIABLE_RevImpMutables_425_425 = STATE_VARIABLE_RevImpMutables_0_86;
            STATE_VARIABLE_ImpImplicitAvailNeeds_426_426 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_88;
            STATE_VARIABLE_ImpSelfFIMLangs_427_427 = STATE_VARIABLE_ImpSelfFIMLangs_0_90;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_233;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_378_378;
      next_value_of_STATE_VARIABLE_IntAvails_0_4 = STATE_VARIABLE_IntAvails_379_379;
      next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_6 = STATE_VARIABLE_IntFIMSpecMap_381_381;
      next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_8 = STATE_VARIABLE_RevIntTypeDefns_383_383;
      next_value_of_STATE_VARIABLE_RevIntInstDefns_0_10 = STATE_VARIABLE_RevIntInstDefns_384_384;
      next_value_of_STATE_VARIABLE_RevIntModeDefns_0_12 = STATE_VARIABLE_RevIntModeDefns_385_385;
      next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_14 = STATE_VARIABLE_RevIntTypeClasses_386_386;
      next_value_of_STATE_VARIABLE_RevIntInstances_0_16 = STATE_VARIABLE_RevIntInstances_387_387;
      next_value_of_STATE_VARIABLE_RevIntPredDecls_0_18 = STATE_VARIABLE_RevIntPredDecls_388_388;
      next_value_of_STATE_VARIABLE_RevIntModeDecls_0_20 = STATE_VARIABLE_RevIntModeDecls_389_389;
      next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_22 = STATE_VARIABLE_RevIntDeclPragmas_390_390;
      next_value_of_STATE_VARIABLE_RevIntDeclMarkers_0_24 = STATE_VARIABLE_RevIntDeclMarkers_391_391;
      next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26 = STATE_VARIABLE_RevIntImplPragmas_392_392;
      next_value_of_STATE_VARIABLE_RevIntImplMarkers_0_28 = STATE_VARIABLE_RevIntImplMarkers_393_393;
      next_value_of_STATE_VARIABLE_IntBadClausePreds_0_30 = STATE_VARIABLE_IntBadClausePreds_394_394;
      next_value_of_STATE_VARIABLE_RevIntPromises_0_32 = STATE_VARIABLE_RevIntPromises_395_395;
      next_value_of_STATE_VARIABLE_RevIntInitialises_0_34 = STATE_VARIABLE_RevIntInitialises_396_396;
      next_value_of_STATE_VARIABLE_RevIntFinalises_0_36 = STATE_VARIABLE_RevIntFinalises_397_397;
      next_value_of_STATE_VARIABLE_RevIntMutables_0_38 = STATE_VARIABLE_RevIntMutables_398_398;
      next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_40 = STATE_VARIABLE_IntImplicitAvailNeeds_399_399;
      next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_42 = STATE_VARIABLE_IntSelfFIMLangs_400_400;
      next_value_of_STATE_VARIABLE_ImpIncls_0_44 = STATE_VARIABLE_ImpIncls_402_402;
      next_value_of_STATE_VARIABLE_ImpAvails_0_46 = STATE_VARIABLE_ImpAvails_403_403;
      next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48 = STATE_VARIABLE_ImpFIMSpecMap_405_405;
      next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50 = STATE_VARIABLE_RevImpTypeDefns_407_407;
      next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52 = STATE_VARIABLE_RevImpInstDefns_408_408;
      next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54 = STATE_VARIABLE_RevImpModeDefns_409_409;
      next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56 = STATE_VARIABLE_RevImpTypeClasses_410_410;
      next_value_of_STATE_VARIABLE_RevImpInstances_0_58 = STATE_VARIABLE_RevImpInstances_411_411;
      next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60 = STATE_VARIABLE_RevImpPredDecls_412_412;
      next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62 = STATE_VARIABLE_RevImpModeDecls_413_413;
      next_value_of_STATE_VARIABLE_RevImpClauses_0_64 = STATE_VARIABLE_RevImpClauses_414_414;
      next_value_of_STATE_VARIABLE_RevImpForeignProcs_0_66 = STATE_VARIABLE_RevImpForeignProcs_415_415;
      next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_68 = STATE_VARIABLE_RevImpForeignEnums_416_416;
      next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_70 = STATE_VARIABLE_RevImpForeignExportEnums_417_417;
      next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_72 = STATE_VARIABLE_RevImpDeclPragmas_418_418;
      next_value_of_STATE_VARIABLE_RevImpDeclMarkers_0_74 = STATE_VARIABLE_RevImpDeclMarkers_419_419;
      next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_76 = STATE_VARIABLE_RevImpImplPragmas_420_420;
      next_value_of_STATE_VARIABLE_RevImpImplMarkers_0_78 = STATE_VARIABLE_RevImpImplMarkers_421_421;
      next_value_of_STATE_VARIABLE_RevImpPromises_0_80 = STATE_VARIABLE_RevImpPromises_422_422;
      next_value_of_STATE_VARIABLE_RevImpInitialises_0_82 = STATE_VARIABLE_RevImpInitialises_423_423;
      next_value_of_STATE_VARIABLE_RevImpFinalises_0_84 = STATE_VARIABLE_RevImpFinalises_424_424;
      next_value_of_STATE_VARIABLE_RevImpMutables_0_86 = STATE_VARIABLE_RevImpMutables_425_425;
      next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_88 = STATE_VARIABLE_ImpImplicitAvailNeeds_426_426;
      next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_90 = STATE_VARIABLE_ImpSelfFIMLangs_427_427;
      next_value_of_STATE_VARIABLE_Specs_0_92 = STATE_VARIABLE_Specs_401_401;
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
      STATE_VARIABLE_Specs_0_92 = next_value_of_STATE_VARIABLE_Specs_0_92;
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
      MR_Word Item_112 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_113 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevTypeDefns_260_260;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_261_261;
      MR_Word STATE_VARIABLE_SelfFIMLangs_263_263;
      MR_Word STATE_VARIABLE_RevInstDefns_264_264;
      MR_Word STATE_VARIABLE_RevModeDefns_265_265;
      MR_Word STATE_VARIABLE_RevTypeClasses_266_266;
      MR_Word STATE_VARIABLE_RevInstances_268_268;
      MR_Word STATE_VARIABLE_RevPredDecls_269_269;
      MR_Word STATE_VARIABLE_RevModeDecls_270_270;
      MR_Word STATE_VARIABLE_RevClauses_272_272;
      MR_Word STATE_VARIABLE_RevForeignProcs_275_275;
      MR_Word STATE_VARIABLE_RevForeignEnums_277_277;
      MR_Word STATE_VARIABLE_RevForeignExportEnums_278_278;
      MR_Word STATE_VARIABLE_RevDeclPragmas_279_279;
      MR_Word STATE_VARIABLE_RevDeclMarkers_280_280;
      MR_Word STATE_VARIABLE_RevImplPragmas_281_281;
      MR_Word STATE_VARIABLE_RevImplMarkers_288_288;
      MR_Word STATE_VARIABLE_Specs_305_305;
      MR_Word STATE_VARIABLE_RevPromises_307_307;
      MR_Word STATE_VARIABLE_RevInitialises_308_308;
      MR_Word STATE_VARIABLE_RevFinalises_309_309;
      MR_Word STATE_VARIABLE_RevMutables_313_313;
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

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(ItemClauseInfo_158, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_261_261);
            {
              STATE_VARIABLE_RevClauses_272_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_272_272, 0) = ((MR_Box) (ItemClauseInfo_158));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_272_272, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_16));
            }
            STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
            STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
            STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
            STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
            STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
            STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
            STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
            STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
            STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
            STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
            STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDeclInfo_156 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevPredDecls_269_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_269_269, 0) = ((MR_Box) (ItemPredDeclInfo_156));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_269_269, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_12));
            }
            STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
            STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
            STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
            STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
            STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
            STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
            STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
            STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
            STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
            STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
            STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDeclInfo_157 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_270_270 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_270_270, 0) = ((MR_Box) (ItemModeDeclInfo_157));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_270_270, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
            STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
            STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
            STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
            STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
            STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
            STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
            STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
            STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
            STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
            STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
            STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
            STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
            STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_112, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignProcInfo_159 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));
                MR_Word Attrs_160 = ((MR_Word) ((MR_hl_field(0, ItemForeignProcInfo_159, (MR_Integer) 0))));
                MR_Word Var_273;

                Var_273 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_160);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_273)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                {
                  STATE_VARIABLE_RevForeignProcs_275_275 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_275_275, 0) = ((MR_Box) (ItemForeignProcInfo_159));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_275_275, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_18));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnumInfo_169 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));
                MR_Word Lang_170 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnumInfo_169, (MR_Integer) 0))) & (MR_Integer) 3);

                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_170)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                {
                  STATE_VARIABLE_RevForeignEnums_277_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignEnums_277_277, 0) = ((MR_Box) (ItemForeignEnumInfo_169));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignEnums_277_277, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignEnums_0_20));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemFEEInfo_175 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevForeignExportEnums_278_278 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignExportEnums_278_278, 0) = ((MR_Box) (ItemFEEInfo_175));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignExportEnums_278_278, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignExportEnums_0_22));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_177 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclMarkers_280_280 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_280_280, 0) = ((MR_Box) (ItemDeclMarker_177));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_280_280, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_26));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemImplMarker_207 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevImplMarkers_288_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_288_288, 0) = ((MR_Box) (ItemImplMarker_207));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_288_288, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_30));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromiseInfo_211 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_211, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_261_261);
                {
                  STATE_VARIABLE_RevPromises_307_307 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_307_307, 0) = ((MR_Box) (ItemPromiseInfo_211));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_307_307, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_32));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeclassInfo_154 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_266_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_266_266, 0) = ((MR_Box) (ItemTypeclassInfo_154));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_266_266, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_8));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstanceInfo_155 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_155, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_261_261);
                {
                  STATE_VARIABLE_RevInstances_268_268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_268_268, 0) = ((MR_Box) (ItemInstanceInfo_155));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_268_268, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_10));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemInitialiseInfo_212 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInitialises_308_308 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_308_308, 0) = ((MR_Box) (ItemInitialiseInfo_212));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_308_308, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_34));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemFinaliseInfo_213 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevFinalises_309_309 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_309_309, 0) = ((MR_Box) (ItemFinaliseInfo_213));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_309_309, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_36));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemMutableInfo_214 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));
                MR_Word Var_310;

                Var_310 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_310, STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(ItemMutableInfo_214, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_261_261);
                {
                  STATE_VARIABLE_RevMutables_313_313 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_313_313, 0) = ((MR_Box) (ItemMutableInfo_214));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_313_313, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_38));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_136 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));
                MR_Word TypeDefn_139;

                {
                  STATE_VARIABLE_RevTypeDefns_260_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_260_260, 0) = ((MR_Box) (ItemTypeDefnInfo_136));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_260_260, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefns_0_2));
                }
                TypeDefn_139 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_136, (MR_Integer) 2))));
                switch (MR_tag((MR_Word) TypeDefn_139)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                      STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                      STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word DetailsSolver_147 = (MR_Word) (MR_body((MR_Word) (TypeDefn_139), (MR_Integer) 2));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_147, STATE_VARIABLE_ImplicitAvailNeeds_0_40, &STATE_VARIABLE_ImplicitAvailNeeds_261_261);
                      STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_139, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word DetailsForeign_148 = ((MR_Word) ((MR_hl_field(3, TypeDefn_139, (MR_Integer) 1))));
                          MR_Word ForeignType_149 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_148, (MR_Integer) 0))));
                          MR_Word Var_262;

                          Var_262 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_149);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_262)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefnInfo_152 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstDefns_264_264 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_264_264, 0) = ((MR_Box) (ItemInstDefnInfo_152));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_264_264, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_4));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefnInfo_153 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDefns_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_265_265, 0) = ((MR_Box) (ItemModeDefnInfo_153));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_265_265, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_6));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_176 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_279_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_279_279, 0) = ((MR_Box) (ItemDeclPragma_176));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_279_279, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_24));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word ItemImplPragma_178 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevImplPragmas_281_281 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_281_281, 0) = ((MR_Box) (ItemImplPragma_178));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_281_281, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_28));
                }
                switch (MR_tag((MR_Word) ItemImplPragma_178)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_183 = (MR_Word) ((MR_Word) (ItemImplPragma_178));
                      MR_Word Lang_390 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_183, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_390)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                      STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FCInfo_179 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_178), (MR_Integer) 1));
                      MR_Word Lang_353 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_179, (MR_Integer) 0))) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_353)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                      STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPEInfo_188 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_178), (MR_Integer) 2));
                      MR_Word Lang_354 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_188, (MR_Integer) 1))) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_354)), STATE_VARIABLE_SelfFIMLangs_0_42, &STATE_VARIABLE_SelfFIMLangs_263_263);
                      STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ItemImplPragma_178, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word TableInfo_195 = ((MR_Word) ((MR_hl_field(3, ItemImplPragma_178, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_198 = ((MR_Word) ((MR_hl_field(0, TableInfo_195, (MR_Integer) 2))));
                          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_284_284;
                          MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_40, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitAvailNeeds_284_284 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_284_284, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_198 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_284_284;
                          else
                          {
                            MR_Word Attributes_201 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_198, (MR_Integer) 0))));
                            MR_Word StatsAttr_202 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_201, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);

                            switch (StatsAttr_202) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_284_284;
                                break;
                              case (MR_Integer) 0:
                                {
                                  STATE_VARIABLE_ImplicitAvailNeeds_261_261 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_261_261, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                          STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_0_44;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word Pieces_209;
                MR_Word Spec_210;
                MR_Word Var_293;
                MR_Word Var_294;
                MR_Word Var_304;

                Var_294 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_294, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[121])), Var_293);
                Var_304 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                {
                  Spec_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_210, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/45"));
                  MR_hl_field(1, Spec_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_210, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_210, 3) = ((MR_Box) (Var_304));
                  MR_hl_field(1, Spec_210, 4) = ((MR_Box) (Pieces_209));
                }
                {
                  STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_210));
                  MR_hl_field(1, STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepnInfo_215 = ((MR_Word) ((MR_hl_field(3, Item_112, (MR_Integer) 1))));
                MR_Word Var_318;
                MR_Word Var_319;
                MR_Word Var_329;
                MR_Word Pieces_357;
                MR_Word Spec_358;

                Var_319 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                Var_318 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_319, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_357 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[121])), Var_318);
                Var_329 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo_215, (MR_Integer) 4))));
                {
                  Spec_358 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_358, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/45"));
                  MR_hl_field(1, Spec_358, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_358, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_358, 3) = ((MR_Box) (Var_329));
                  MR_hl_field(1, Spec_358, 4) = ((MR_Box) (Pieces_357));
                }
                {
                  STATE_VARIABLE_Specs_305_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_305_305, 0) = ((MR_Box) (Spec_358));
                  MR_hl_field(1, STATE_VARIABLE_Specs_305_305, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
                }
                STATE_VARIABLE_RevTypeDefns_260_260 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_264_264 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_265_265 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_266_266 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_268_268 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_269_269 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_270_270 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_272_272 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignProcs_275_275 = STATE_VARIABLE_RevForeignProcs_0_18;
                STATE_VARIABLE_RevForeignEnums_277_277 = STATE_VARIABLE_RevForeignEnums_0_20;
                STATE_VARIABLE_RevForeignExportEnums_278_278 = STATE_VARIABLE_RevForeignExportEnums_0_22;
                STATE_VARIABLE_RevDeclPragmas_279_279 = STATE_VARIABLE_RevDeclPragmas_0_24;
                STATE_VARIABLE_RevDeclMarkers_280_280 = STATE_VARIABLE_RevDeclMarkers_0_26;
                STATE_VARIABLE_RevImplPragmas_281_281 = STATE_VARIABLE_RevImplPragmas_0_28;
                STATE_VARIABLE_RevImplMarkers_288_288 = STATE_VARIABLE_RevImplMarkers_0_30;
                STATE_VARIABLE_RevPromises_307_307 = STATE_VARIABLE_RevPromises_0_32;
                STATE_VARIABLE_RevInitialises_308_308 = STATE_VARIABLE_RevInitialises_0_34;
                STATE_VARIABLE_RevFinalises_309_309 = STATE_VARIABLE_RevFinalises_0_36;
                STATE_VARIABLE_RevMutables_313_313 = STATE_VARIABLE_RevMutables_0_38;
                STATE_VARIABLE_ImplicitAvailNeeds_261_261 = STATE_VARIABLE_ImplicitAvailNeeds_0_40;
                STATE_VARIABLE_SelfFIMLangs_263_263 = STATE_VARIABLE_SelfFIMLangs_0_42;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_113;
      next_value_of_STATE_VARIABLE_RevTypeDefns_0_2 = STATE_VARIABLE_RevTypeDefns_260_260;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_4 = STATE_VARIABLE_RevInstDefns_264_264;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_6 = STATE_VARIABLE_RevModeDefns_265_265;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_8 = STATE_VARIABLE_RevTypeClasses_266_266;
      next_value_of_STATE_VARIABLE_RevInstances_0_10 = STATE_VARIABLE_RevInstances_268_268;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_12 = STATE_VARIABLE_RevPredDecls_269_269;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_270_270;
      next_value_of_STATE_VARIABLE_RevClauses_0_16 = STATE_VARIABLE_RevClauses_272_272;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_18 = STATE_VARIABLE_RevForeignProcs_275_275;
      next_value_of_STATE_VARIABLE_RevForeignEnums_0_20 = STATE_VARIABLE_RevForeignEnums_277_277;
      next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_22 = STATE_VARIABLE_RevForeignExportEnums_278_278;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_24 = STATE_VARIABLE_RevDeclPragmas_279_279;
      next_value_of_STATE_VARIABLE_RevDeclMarkers_0_26 = STATE_VARIABLE_RevDeclMarkers_280_280;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_28 = STATE_VARIABLE_RevImplPragmas_281_281;
      next_value_of_STATE_VARIABLE_RevImplMarkers_0_30 = STATE_VARIABLE_RevImplMarkers_288_288;
      next_value_of_STATE_VARIABLE_RevPromises_0_32 = STATE_VARIABLE_RevPromises_307_307;
      next_value_of_STATE_VARIABLE_RevInitialises_0_34 = STATE_VARIABLE_RevInitialises_308_308;
      next_value_of_STATE_VARIABLE_RevFinalises_0_36 = STATE_VARIABLE_RevFinalises_309_309;
      next_value_of_STATE_VARIABLE_RevMutables_0_38 = STATE_VARIABLE_RevMutables_313_313;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_40 = STATE_VARIABLE_ImplicitAvailNeeds_261_261;
      next_value_of_STATE_VARIABLE_SelfFIMLangs_0_42 = STATE_VARIABLE_SelfFIMLangs_263_263;
      next_value_of_STATE_VARIABLE_Specs_0_44 = STATE_VARIABLE_Specs_305_305;
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
      MR_Word Item_97 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_98 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevTypeDefns_234_234;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_235_235;
      MR_Word STATE_VARIABLE_SelfFIMLangs_237_237;
      MR_Word STATE_VARIABLE_RevInstDefns_238_238;
      MR_Word STATE_VARIABLE_RevModeDefns_239_239;
      MR_Word STATE_VARIABLE_RevTypeClasses_240_240;
      MR_Word STATE_VARIABLE_Specs_286_286;
      MR_Word STATE_VARIABLE_RevInstances_287_287;
      MR_Word STATE_VARIABLE_RevPredDecls_288_288;
      MR_Word STATE_VARIABLE_RevModeDecls_289_289;
      MR_Word STATE_VARIABLE_BadClausePreds_297_297;
      MR_Word STATE_VARIABLE_RevDeclPragmas_301_301;
      MR_Word STATE_VARIABLE_RevDeclMarkers_302_302;
      MR_Word STATE_VARIABLE_RevImplPragmas_304_304;
      MR_Word STATE_VARIABLE_RevImplMarkers_311_311;
      MR_Word STATE_VARIABLE_RevPromises_330_330;
      MR_Word STATE_VARIABLE_RevInitialises_333_333;
      MR_Word STATE_VARIABLE_RevFinalises_335_335;
      MR_Word STATE_VARIABLE_RevMutables_337_337;
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
            MR_Word PredOrFunc_147 = ((MR_Unsigned) ((MR_hl_field(0, ItemClauseInfo_146, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredSymName_148 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_146, (MR_Integer) 1))));
            MR_Word ArgTerms_149 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_146, (MR_Integer) 2))));
            MR_Word Context_152 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_146, (MR_Integer) 5))));
            MR_Word PredFormArity_154;
            MR_Word UserArity_155;
            MR_Word PredPfNameArity_156;
            MR_Word Var_290;
            MR_Word Var_294;
            MR_Word Var_295;

            PredFormArity_154 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[24]), ArgTerms_149);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_147, &UserArity_155, PredFormArity_154);
            {
              PredPfNameArity_156 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredPfNameArity_156, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_147));
              MR_hl_field(0, PredPfNameArity_156, 1) = ((MR_Box) (PredSymName_148));
              MR_hl_field(0, PredPfNameArity_156, 2) = ((MR_Box) (UserArity_155));
            }
            {
              Var_295 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_295, 0) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(3, Var_295, 1) = ((MR_Box) (PredPfNameArity_156));
            }
            {
              Var_294 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_294, 0) = ((MR_Box) (Var_295));
              MR_hl_field(1, Var_294, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_290, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_parse_tree_scalar_common_2[119])));
              MR_hl_field(1, Var_290, 1) = ((MR_Box) (Var_294));
            }
            parse_tree__convert_parse_tree__error_is_exported_4_p_0(Context_152, Var_290, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_156)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_297_297);
            STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
            STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
            STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
            STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDeclInfo_144 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevPredDecls_288_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_288_288, 0) = ((MR_Box) (ItemPredDeclInfo_144));
              MR_hl_field(1, STATE_VARIABLE_RevPredDecls_288_288, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_12));
            }
            STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
            STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
            STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
            STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
            STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDeclInfo_145 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_289_289 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_289_289, 0) = ((MR_Box) (ItemModeDeclInfo_145));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_289_289, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
            STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
            STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
            STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
            STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_97, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignProcInfo_157 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));
                MR_Word SymName_159;
                MR_Word Vars_160;
                MR_Integer Arity_166;
                MR_Word Var_299;
                MR_Word PredOrFunc_374;
                MR_Word UserArity_375;
                MR_Word PredPfNameArity_376;

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                SymName_159 = ((MR_Word) ((MR_hl_field(0, ItemForeignProcInfo_157, (MR_Integer) 1))));
                PredOrFunc_374 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignProcInfo_157, (MR_Integer) 2))) & (MR_Integer) 1);
                Vars_160 = ((MR_Word) ((MR_hl_field(0, ItemForeignProcInfo_157, (MR_Integer) 3))));
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars_160, &Arity_166);
                Var_299 = (MR_Word) (Arity_166);
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_374, &UserArity_375, Var_299);
                {
                  PredPfNameArity_376 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredPfNameArity_376, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_374));
                  MR_hl_field(0, PredPfNameArity_376, 1) = ((MR_Box) (SymName_159));
                  MR_hl_field(0, PredPfNameArity_376, 2) = ((MR_Box) (UserArity_375));
                }
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_376)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_297_297);
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_168 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclMarkers_302_302 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_302_302, 0) = ((MR_Box) (ItemDeclMarker_168));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_302_302, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_18));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemImplMarker_186 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevImplMarkers_311_311 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_311_311, 0) = ((MR_Box) (ItemImplMarker_186));
                  MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_311_311, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_22));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromiseInfo_189 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_189, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_235_235);
                {
                  STATE_VARIABLE_RevPromises_330_330 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_330_330, 0) = ((MR_Box) (ItemPromiseInfo_189));
                  MR_hl_field(1, STATE_VARIABLE_RevPromises_330_330, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_26));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeclassInfo_136 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_240_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_240_240, 0) = ((MR_Box) (ItemTypeclassInfo_136));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeClasses_240_240, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_8));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstanceInfo_137 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));
                MR_Word InstanceBody_138 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_137, (MR_Integer) 4))));

                if ((InstanceBody_138 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                  STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
                }
                else
                {
                  MR_Word InstanceMethods_139 = ((MR_Word) ((MR_hl_field(1, InstanceBody_138, (MR_Integer) 0))));
                  MR_Word Msg_142;
                  MR_Word Spec_143;
                  MR_Word Var_274;
                  MR_Word Var_284;
                  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_235_235;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[25]), InstanceMethods_139, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_34)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_235_235);
                  STATE_VARIABLE_ImplicitAvailNeeds_235_235 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_235_235));
                  Var_274 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_137, (MR_Integer) 7))));
                  {
                    Msg_142 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Msg_142, 0) = ((MR_Box) (Var_274));
                    MR_hl_field(2, Msg_142, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[150])));
                  }
                  {
                    Var_284 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_284, 0) = ((MR_Box) (Msg_142));
                    MR_hl_field(1, Var_284, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_143 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_143, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
                    MR_hl_field(0, Spec_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_143, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_143, 3) = ((MR_Box) (Var_284));
                  }
                  {
                    STATE_VARIABLE_Specs_286_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_286_286, 0) = ((MR_Box) (Spec_143));
                    MR_hl_field(1, STATE_VARIABLE_Specs_286_286, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                  }
                }
                {
                  STATE_VARIABLE_RevInstances_287_287 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_287_287, 0) = ((MR_Box) (ItemInstanceInfo_137));
                  MR_hl_field(1, STATE_VARIABLE_RevInstances_287_287, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_10));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemInitialiseInfo_192 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevInitialises_333_333 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_333_333, 0) = ((MR_Box) (ItemInitialiseInfo_192));
                  MR_hl_field(1, STATE_VARIABLE_RevInitialises_333_333, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_28));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemFinaliseInfo_193 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevFinalises_335_335 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_335_335, 0) = ((MR_Box) (ItemFinaliseInfo_193));
                  MR_hl_field(1, STATE_VARIABLE_RevFinalises_335_335, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_30));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemMutableInfo_194 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevMutables_337_337 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_337_337, 0) = ((MR_Box) (ItemMutableInfo_194));
                  MR_hl_field(1, STATE_VARIABLE_RevMutables_337_337, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_32));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_118 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));
                MR_Word TypeDefn_121;

                {
                  STATE_VARIABLE_RevTypeDefns_234_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_234_234, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                  MR_hl_field(1, STATE_VARIABLE_RevTypeDefns_234_234, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefns_0_2));
                }
                TypeDefn_121 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_118, (MR_Integer) 2))));
                switch (MR_tag((MR_Word) TypeDefn_121)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                      STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                      STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word DetailsSolver_129 = (MR_Word) (MR_body((MR_Word) (TypeDefn_121), (MR_Integer) 2));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_129, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_235_235);
                      STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_121, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word DetailsForeign_130 = ((MR_Word) ((MR_hl_field(3, TypeDefn_121, (MR_Integer) 1))));
                          MR_Word ForeignType_131 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_130, (MR_Integer) 0))));
                          MR_Word Var_236;

                          Var_236 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_131);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_236)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_237_237);
                          STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefnInfo_134 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstDefns_238_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_238_238, 0) = ((MR_Box) (ItemInstDefnInfo_134));
                  MR_hl_field(1, STATE_VARIABLE_RevInstDefns_238_238, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_4));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefnInfo_135 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDefns_239_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_239_239, 0) = ((MR_Box) (ItemModeDefnInfo_135));
                  MR_hl_field(1, STATE_VARIABLE_RevModeDefns_239_239, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_6));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_167 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_301_301 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_301_301, 0) = ((MR_Box) (ItemDeclPragma_167));
                  MR_hl_field(1, STATE_VARIABLE_RevDeclPragmas_301_301, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_16));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word ItemImplPragma_169 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_286_286);
                {
                  STATE_VARIABLE_RevImplPragmas_304_304 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_304_304, 0) = ((MR_Box) (ItemImplPragma_169));
                  MR_hl_field(1, STATE_VARIABLE_RevImplPragmas_304_304, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_20));
                }
                switch (MR_tag((MR_Word) ItemImplPragma_169)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ItemImplPragma_169, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ExternalProc_170 = ((MR_Word) ((MR_hl_field(3, ItemImplPragma_169, (MR_Integer) 1))));
                          MR_Word PredPfNameArity_377 = ((MR_Word) ((MR_hl_field(0, ExternalProc_170, (MR_Integer) 0))));

                          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_377)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_297_297);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word FactTable_174 = ((MR_Word) ((MR_hl_field(3, ItemImplPragma_169, (MR_Integer) 1))));
                          MR_Word PredSpec_175 = ((MR_Word) ((MR_hl_field(0, FactTable_174, (MR_Integer) 0))));
                          MR_Word PFU_179 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_175, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word UserArity_381 = ((MR_Word) ((MR_hl_field(0, PredSpec_175, (MR_Integer) 2))));
                          MR_Word SymName_383 = ((MR_Word) ((MR_hl_field(0, PredSpec_175, (MR_Integer) 1))));

                          switch (PFU_179) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                MR_Word PredPfNameArity_379;

                                {
                                  PredPfNameArity_379 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, PredPfNameArity_379, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                                  MR_hl_field(0, PredPfNameArity_379, 1) = ((MR_Box) (SymName_383));
                                  MR_hl_field(0, PredPfNameArity_379, 2) = ((MR_Box) (UserArity_381));
                                }
                                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_379)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_297_297);
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                MR_Word PredPfNameArity_378;

                                {
                                  PredPfNameArity_378 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, PredPfNameArity_378, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                  MR_hl_field(0, PredPfNameArity_378, 1) = ((MR_Box) (SymName_383));
                                  MR_hl_field(0, PredPfNameArity_378, 2) = ((MR_Box) (UserArity_381));
                                }
                                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_378)), STATE_VARIABLE_BadClausePreds_0_24, &STATE_VARIABLE_BadClausePreds_297_297);
                              }
                              break;
                            case (MR_Integer) 2:
                              STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 3:
                        STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word Pieces_188;
                MR_Word Var_316;
                MR_Word Var_317;
                MR_Word Var_327;
                MR_Word Spec_390;

                Var_317 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                Var_316 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_317, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[121])), Var_316);
                Var_327 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                {
                  Spec_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_390, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
                  MR_hl_field(1, Spec_390, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_390, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_390, 3) = ((MR_Box) (Var_327));
                  MR_hl_field(1, Spec_390, 4) = ((MR_Box) (Pieces_188));
                }
                {
                  STATE_VARIABLE_Specs_286_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_286_286, 0) = ((MR_Box) (Spec_390));
                  MR_hl_field(1, STATE_VARIABLE_Specs_286_286, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepnInfo_195 = ((MR_Word) ((MR_hl_field(3, Item_97, (MR_Integer) 1))));
                MR_Word Var_342;
                MR_Word Var_343;
                MR_Word Var_353;
                MR_Word Spec_391;
                MR_Word Pieces_392;

                Var_343 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                Var_342 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_343, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_392 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[121])), Var_342);
                Var_353 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo_195, (MR_Integer) 4))));
                {
                  Spec_391 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_391, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/39"));
                  MR_hl_field(1, Spec_391, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_391, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_391, 3) = ((MR_Box) (Var_353));
                  MR_hl_field(1, Spec_391, 4) = ((MR_Box) (Pieces_392));
                }
                {
                  STATE_VARIABLE_Specs_286_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_286_286, 0) = ((MR_Box) (Spec_391));
                  MR_hl_field(1, STATE_VARIABLE_Specs_286_286, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                }
                STATE_VARIABLE_RevTypeDefns_234_234 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_238_238 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_239_239 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_240_240 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_287_287 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_288_288 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_289_289 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_301_301 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevDeclMarkers_302_302 = STATE_VARIABLE_RevDeclMarkers_0_18;
                STATE_VARIABLE_RevImplPragmas_304_304 = STATE_VARIABLE_RevImplPragmas_0_20;
                STATE_VARIABLE_RevImplMarkers_311_311 = STATE_VARIABLE_RevImplMarkers_0_22;
                STATE_VARIABLE_BadClausePreds_297_297 = STATE_VARIABLE_BadClausePreds_0_24;
                STATE_VARIABLE_RevPromises_330_330 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_333_333 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_335_335 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_337_337 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_235_235 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_237_237 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_98;
      next_value_of_STATE_VARIABLE_RevTypeDefns_0_2 = STATE_VARIABLE_RevTypeDefns_234_234;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_4 = STATE_VARIABLE_RevInstDefns_238_238;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_6 = STATE_VARIABLE_RevModeDefns_239_239;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_8 = STATE_VARIABLE_RevTypeClasses_240_240;
      next_value_of_STATE_VARIABLE_RevInstances_0_10 = STATE_VARIABLE_RevInstances_287_287;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_12 = STATE_VARIABLE_RevPredDecls_288_288;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_289_289;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16 = STATE_VARIABLE_RevDeclPragmas_301_301;
      next_value_of_STATE_VARIABLE_RevDeclMarkers_0_18 = STATE_VARIABLE_RevDeclMarkers_302_302;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_20 = STATE_VARIABLE_RevImplPragmas_304_304;
      next_value_of_STATE_VARIABLE_RevImplMarkers_0_22 = STATE_VARIABLE_RevImplMarkers_311_311;
      next_value_of_STATE_VARIABLE_BadClausePreds_0_24 = STATE_VARIABLE_BadClausePreds_297_297;
      next_value_of_STATE_VARIABLE_RevPromises_0_26 = STATE_VARIABLE_RevPromises_330_330;
      next_value_of_STATE_VARIABLE_RevInitialises_0_28 = STATE_VARIABLE_RevInitialises_333_333;
      next_value_of_STATE_VARIABLE_RevFinalises_0_30 = STATE_VARIABLE_RevFinalises_335_335;
      next_value_of_STATE_VARIABLE_RevMutables_0_32 = STATE_VARIABLE_RevMutables_337_337;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_34 = STATE_VARIABLE_ImplicitAvailNeeds_235_235;
      next_value_of_STATE_VARIABLE_SelfFIMLangs_0_36 = STATE_VARIABLE_SelfFIMLangs_237_237;
      next_value_of_STATE_VARIABLE_Specs_0_38 = STATE_VARIABLE_Specs_286_286;
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
parse_tree__convert_parse_tree__error_is_exported_4_p_0(
  MR_Word Context_5,
  MR_Word DescPieces_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_16;

  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DescPieces_6, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[123])));
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[141])), Var_16);
  {
    Spec_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
    MR_hl_field(1, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(1, Spec_9, 3) = ((MR_Box) (Context_5));
    MR_hl_field(1, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
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

  Var_8 = parse_tree__prog_item__get_item_context_1_f_0(Item_4);
  Var_9 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_4);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[123])));
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[141])), Var_16);
  {
    Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
    MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Var_8));
    MR_hl_field(1, Spec_11, 4) = ((MR_Box) (Pieces_10));
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
  MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(0, ItemPromiseInfo_4, (MR_Integer) 1))));

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
  MR_Word SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_4, (MR_Integer) 0))));
  MR_Word MutableItems_11 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_6, (MR_Integer) 3))));
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_13;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[24]), MutableItems_11, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_13);
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
      MR_Word IntInstance_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word IntInstances_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Body_16 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_IntInstanceCord_24_24;
      MR_Word STATE_VARIABLE_ImpInstanceCord_25_25;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 0))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 2))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 3))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 5))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 6))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 7))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, IntInstance_12, (MR_Integer) 8))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInstanceCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4;

      if ((Body_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (IntInstance_12)), STATE_VARIABLE_IntInstanceCord_0_2, &STATE_VARIABLE_IntInstanceCord_24_24);
        STATE_VARIABLE_ImpInstanceCord_25_25 = STATE_VARIABLE_ImpInstanceCord_0_4;
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
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractIntInstance_18)), STATE_VARIABLE_IntInstanceCord_0_2, &STATE_VARIABLE_IntInstanceCord_24_24);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (IntInstance_12)), STATE_VARIABLE_ImpInstanceCord_0_4, &STATE_VARIABLE_ImpInstanceCord_25_25);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = IntInstances_13;
      next_value_of_STATE_VARIABLE_IntInstanceCord_0_2 = STATE_VARIABLE_IntInstanceCord_24_24;
      next_value_of_STATE_VARIABLE_ImpInstanceCord_0_4 = STATE_VARIABLE_ImpInstanceCord_25_25;
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

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1324__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 0))));
  MR_Word OptFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 2))));
  MR_Word Uses_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 3))));
  MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 4))));
  MR_Word Items_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 5))));
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
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[2]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (OptFileKind_9));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4", (MR_String) "trying to convert non-ofk_trans_opt parse_tree_opt to parse_tree_trans_opt");
  if ((Uses_11 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_0_36;
  else
  {
    MR_Word FirstUse_14 = ((MR_Word) ((MR_hl_field(1, Uses_11, (MR_Integer) 0))));
    MR_Word UseSpec_17;
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, FirstUse_14, (MR_Integer) 1))));

    {
      UseSpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UseSpec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4"));
      MR_hl_field(1, UseSpec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, UseSpec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, UseSpec_17, 3) = ((MR_Box) (Var_58));
      MR_hl_field(1, UseSpec_17, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[57])));
    }
    {
      STATE_VARIABLE_Specs_59_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_59_59, 0) = ((MR_Box) (UseSpec_17));
      MR_hl_field(1, STATE_VARIABLE_Specs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
    }
  }
  if ((FIMs_12 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_59_59;
  else
  {
    MR_Word FirstFIM_18 = ((MR_Word) ((MR_hl_field(1, FIMs_12, (MR_Integer) 0))));
    MR_Word FIMSpec_21;
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, FirstFIM_18, (MR_Integer) 2))));

    {
      FIMSpec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FIMSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_trans_opt\'/4"));
      MR_hl_field(1, FIMSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, FIMSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, FIMSpec_21, 3) = ((MR_Box) (Var_74));
      MR_hl_field(1, FIMSpec_21, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[58])));
    }
    {
      STATE_VARIABLE_Specs_75_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_75_75, 0) = ((MR_Box) (FIMSpec_21));
      MR_hl_field(1, STATE_VARIABLE_Specs_75_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_59_59));
    }
  }
  parse_tree__convert_parse_tree__classify_trans_opt_items_17_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_22, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_23, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_24, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_25, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_26, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_27, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_28, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_37);
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
      MR_Word Item_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TermInfos_104_104;
      MR_Word STATE_VARIABLE_Term2Infos_105_105;
      MR_Word STATE_VARIABLE_Sharings_106_106;
      MR_Word STATE_VARIABLE_Reuses_107_107;
      MR_Word STATE_VARIABLE_Specs_124_124;
      MR_Word STATE_VARIABLE_Exceptions_125_125;
      MR_Word STATE_VARIABLE_Trailings_126_126;
      MR_Word STATE_VARIABLE_MMTablings_127_127;
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
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_160;
            MR_Word Pieces_176;
            MR_Word Spec_177;

            Var_150 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
            Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
            Pieces_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[94])), Var_149);
            Var_160 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
            {
              Spec_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_177, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
              MR_hl_field(1, Spec_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_177, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_177, 3) = ((MR_Box) (Var_160));
              MR_hl_field(1, Spec_177, 4) = ((MR_Box) (Pieces_176));
            }
            {
              STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (Spec_177));
              MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
            }
            STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
            STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
            STATE_VARIABLE_Exceptions_125_125 = STATE_VARIABLE_Exceptions_0_6;
            STATE_VARIABLE_Trailings_126_126 = STATE_VARIABLE_Trailings_0_8;
            STATE_VARIABLE_MMTablings_127_127 = STATE_VARIABLE_MMTablings_0_10;
            STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
            STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_42, (MR_Integer) 0))))) {
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
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_160;
                MR_Word Pieces_176;
                MR_Word Spec_177;

                Var_150 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[94])), Var_149);
                Var_160 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                {
                  Spec_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_177, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                  MR_hl_field(1, Spec_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_177, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_177, 3) = ((MR_Box) (Var_160));
                  MR_hl_field(1, Spec_177, 4) = ((MR_Box) (Pieces_176));
                }
                {
                  STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (Spec_177));
                  MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                }
                STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Exceptions_125_125 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_126_126 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_127_127 = STATE_VARIABLE_MMTablings_0_10;
                STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word DeclPragma_52 = ((MR_Word) ((MR_hl_field(3, Item_42, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) DeclPragma_52)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Pieces_62;
                      MR_Word Spec_63;
                      MR_Word Var_112;
                      MR_Word Var_113;
                      MR_Word Var_123;

                      Var_113 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                      Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                      Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[94])), Var_112);
                      Var_123 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Var_123));
                        MR_hl_field(1, Spec_63, 4) = ((MR_Box) (Pieces_62));
                      }
                      {
                        STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (Spec_63));
                        MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                      }
                      STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                      STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                      STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                      STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_52, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          MR_Word Pieces_62;
                          MR_Word Spec_63;
                          MR_Word Var_112;
                          MR_Word Var_113;
                          MR_Word Var_123;

                          Var_113 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                          Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[94])), Var_112);
                          Var_123 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                          {
                            Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                            MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                            MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Var_123));
                            MR_hl_field(1, Spec_63, 4) = ((MR_Box) (Pieces_62));
                          }
                          {
                            STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (Spec_63));
                            MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                          }
                          STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Term_53 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_TermInfos_104_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_104_104, 0) = ((MR_Box) (Term_53));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_104_104, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_2));
                          }
                          STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Term2_54 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_Term2Infos_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_105_105, 0) = ((MR_Box) (Term2_54));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_4));
                          }
                          STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Sharing_55 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_Sharings_106_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_106_106, 0) = ((MR_Box) (Sharing_55));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_12));
                          }
                          STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
                          STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Reuse_56 = ((MR_Word) ((MR_hl_field(3, DeclPragma_52, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_Reuses_107_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_107_107, 0) = ((MR_Box) (Reuse_56));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_107_107, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_14));
                          }
                          STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                          STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                          STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                          STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_Exceptions_125_125 = STATE_VARIABLE_Exceptions_0_6;
                STATE_VARIABLE_Trailings_126_126 = STATE_VARIABLE_Trailings_0_8;
                STATE_VARIABLE_MMTablings_127_127 = STATE_VARIABLE_MMTablings_0_10;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word GenPragma_64 = ((MR_Word) ((MR_hl_field(3, Item_42, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) GenPragma_64)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_132;
                      MR_Word Var_133;
                      MR_Word Var_143;
                      MR_Word Pieces_170;
                      MR_Word Spec_171;

                      Var_133 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_42);
                      Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_133, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                      Pieces_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[94])), Var_132);
                      Var_143 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_171, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(1, Spec_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_171, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_171, 3) = ((MR_Box) (Var_143));
                        MR_hl_field(1, Spec_171, 4) = ((MR_Box) (Pieces_170));
                      }
                      {
                        STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (Spec_171));
                        MR_hl_field(1, STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
                      }
                      STATE_VARIABLE_Exceptions_125_125 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_Trailings_126_126 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_MMTablings_127_127 = STATE_VARIABLE_MMTablings_0_10;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_65 = (MR_Word) (MR_body((MR_Word) (GenPragma_64), (MR_Integer) 1));

                      {
                        STATE_VARIABLE_Exceptions_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_125_125, 0) = ((MR_Box) (Exception_65));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_6));
                      }
                      STATE_VARIABLE_Trailings_126_126 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_MMTablings_127_127 = STATE_VARIABLE_MMTablings_0_10;
                      STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_66 = (MR_Word) (MR_body((MR_Word) (GenPragma_64), (MR_Integer) 2));

                      {
                        STATE_VARIABLE_Trailings_126_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_126_126, 0) = ((MR_Box) (Trailing_66));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_126_126, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_8));
                      }
                      STATE_VARIABLE_Exceptions_125_125 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_MMTablings_127_127 = STATE_VARIABLE_MMTablings_0_10;
                      STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_67 = (MR_Word) (MR_body((MR_Word) (GenPragma_64), (MR_Integer) 3));

                      {
                        STATE_VARIABLE_MMTablings_127_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_127_127, 0) = ((MR_Box) (MMTabling_67));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_127_127, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_10));
                      }
                      STATE_VARIABLE_Exceptions_125_125 = STATE_VARIABLE_Exceptions_0_6;
                      STATE_VARIABLE_Trailings_126_126 = STATE_VARIABLE_Trailings_0_8;
                      STATE_VARIABLE_Specs_124_124 = STATE_VARIABLE_Specs_0_16;
                    }
                    break;
                }
                STATE_VARIABLE_TermInfos_104_104 = STATE_VARIABLE_TermInfos_0_2;
                STATE_VARIABLE_Term2Infos_105_105 = STATE_VARIABLE_Term2Infos_0_4;
                STATE_VARIABLE_Sharings_106_106 = STATE_VARIABLE_Sharings_0_12;
                STATE_VARIABLE_Reuses_107_107 = STATE_VARIABLE_Reuses_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_43;
      next_value_of_STATE_VARIABLE_TermInfos_0_2 = STATE_VARIABLE_TermInfos_104_104;
      next_value_of_STATE_VARIABLE_Term2Infos_0_4 = STATE_VARIABLE_Term2Infos_105_105;
      next_value_of_STATE_VARIABLE_Exceptions_0_6 = STATE_VARIABLE_Exceptions_125_125;
      next_value_of_STATE_VARIABLE_Trailings_0_8 = STATE_VARIABLE_Trailings_126_126;
      next_value_of_STATE_VARIABLE_MMTablings_0_10 = STATE_VARIABLE_MMTablings_127_127;
      next_value_of_STATE_VARIABLE_Sharings_0_12 = STATE_VARIABLE_Sharings_106_106;
      next_value_of_STATE_VARIABLE_Reuses_0_14 = STATE_VARIABLE_Reuses_107_107;
      next_value_of_STATE_VARIABLE_Specs_0_16 = STATE_VARIABLE_Specs_124_124;
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

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__1021__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 0))));
  MR_Word OptFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 2))));
  MR_Word Uses_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 3))));
  MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 4))));
  MR_Word Items_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeOpt_5, (MR_Integer) 5))));
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
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[2]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (OptFileKind_9));
    MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_plain_opt\'/4", (MR_String) "trying to convert non-ofk_plain_opt parse_tree_opt to parse_tree_plain_opt");
  Var_69 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(Uses_11, Var_69, &UseMap_14);
  Var_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[22]), FIMs_12);
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
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[23]), Clauses0_46, &Clauses_60);
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
      MR_Word Use_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Uses_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Use_7, (MR_Integer) 0))));
      MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Use_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UseMap_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (Context_11)), HeadVar__2_2, &STATE_VARIABLE_UseMap_15_15);
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
      MR_Word Item_117 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_118 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_233_233;
      MR_Word STATE_VARIABLE_ForeignEnums_234_234;
      MR_Word STATE_VARIABLE_InstDefns_235_235;
      MR_Word STATE_VARIABLE_ModeDefns_236_236;
      MR_Word STATE_VARIABLE_TypeClasses_237_237;
      MR_Word STATE_VARIABLE_Instances_238_238;
      MR_Word STATE_VARIABLE_PredDecls_239_239;
      MR_Word STATE_VARIABLE_RevModeDecls_240_240;
      MR_Word STATE_VARIABLE_RevClauses_241_241;
      MR_Word STATE_VARIABLE_RevForeignProcs_242_242;
      MR_Word STATE_VARIABLE_Promises_243_243;
      MR_Word STATE_VARIABLE_TypeSpecs_244_244;
      MR_Word STATE_VARIABLE_TermInfos_245_245;
      MR_Word STATE_VARIABLE_Term2Infos_246_246;
      MR_Word STATE_VARIABLE_Sharings_247_247;
      MR_Word STATE_VARIABLE_Reuses_248_248;
      MR_Word STATE_VARIABLE_Specs_265_265;
      MR_Word STATE_VARIABLE_DeclMarkers_268_268;
      MR_Word STATE_VARIABLE_ImplMarkers_306_306;
      MR_Word STATE_VARIABLE_UnusedArgs_325_325;
      MR_Word STATE_VARIABLE_Exceptions_326_326;
      MR_Word STATE_VARIABLE_Trailings_327_327;
      MR_Word STATE_VARIABLE_MMTablings_328_328;
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
              STATE_VARIABLE_RevClauses_241_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_241_241, 0) = ((MR_Box) (ItemClause_150));
              MR_hl_field(1, STATE_VARIABLE_RevClauses_241_241, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_18));
            }
            STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
            STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
            STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
            STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
            STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
            STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
            STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
            STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
            STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
            STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
            STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
            STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl_148 = (MR_Word) (MR_body((MR_Word) (Item_117), (MR_Integer) 1));

            {
              STATE_VARIABLE_PredDecls_239_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_239_239, 0) = ((MR_Box) (ItemPredDecl_148));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_239_239, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_14));
            }
            STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
            STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
            STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
            STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
            STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
            STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
            STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
            STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
            STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
            STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
            STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
            STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
            STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_149 = (MR_Word) (MR_body((MR_Word) (Item_117), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_240_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_240_240, 0) = ((MR_Box) (ItemModeDecl_149));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_240_240, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_16));
            }
            STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
            STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
            STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
            STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
            STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
            STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
            STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
            STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
            STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
            STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
            STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
            STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
            STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
            STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
            STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
            STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
            STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
            STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
            STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_117, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignProc_151 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevForeignProcs_242_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_242_242, 0) = ((MR_Box) (ItemForeignProc_151));
                  MR_hl_field(1, STATE_VARIABLE_RevForeignProcs_242_242, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_20));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_143 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_234_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_234_234, 0) = ((MR_Box) (ItemForeignEnum_143));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_234_234, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 17:
              {
                MR_Word Var_333;
                MR_Word Var_334;
                MR_Word Var_344;
                MR_Word Pieces_399;
                MR_Word Spec_400;

                Var_334 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_117);
                Var_333 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_334, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_399 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[92])), Var_333);
                Var_344 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                {
                  Spec_400 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_400, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                  MR_hl_field(1, Spec_400, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_400, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_400, 3) = ((MR_Box) (Var_344));
                  MR_hl_field(1, Spec_400, 4) = ((MR_Box) (Pieces_399));
                }
                {
                  STATE_VARIABLE_Specs_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 0) = ((MR_Box) (Spec_400));
                  MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word DeclMarker_165 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));
                MR_Word Marker_166 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker_165, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word SymNameArityMaybePF_167 = ((MR_Word) ((MR_hl_field(0, DeclMarker_165, (MR_Integer) 1))));

                switch (Marker_166) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_274;
                      MR_Word Var_275;
                      MR_Word Var_285;
                      MR_Word Pieces_369;
                      MR_Word Spec_370;

                      Var_275 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_117);
                      Var_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_275, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                      Pieces_369 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[92])), Var_274);
                      Var_285 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                      {
                        Spec_370 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_370, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                        MR_hl_field(1, Spec_370, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_370, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_370, 3) = ((MR_Box) (Var_285));
                        MR_hl_field(1, Spec_370, 4) = ((MR_Box) (Pieces_369));
                      }
                      {
                        STATE_VARIABLE_Specs_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 0) = ((MR_Box) (Spec_370));
                        MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                      }
                      STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 0:
                    {
                      MR_Word PFU_170 = ((MR_Unsigned) ((MR_hl_field(0, SymNameArityMaybePF_167, (MR_Integer) 0))) & (MR_Integer) 3);
                      MR_Word Var_269;

                      switch (PFU_170) {
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
                      Var_269 = (MR_Word) (DeclMarker_165);
                      {
                        STATE_VARIABLE_DeclMarkers_268_268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_DeclMarkers_268_268, 0) = ((MR_Box) (Var_269));
                        MR_hl_field(1, STATE_VARIABLE_DeclMarkers_268_268, 1) = ((MR_Box) (STATE_VARIABLE_DeclMarkers_0_24));
                      }
                      STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ImplMarker_176 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));
                MR_Word Marker_391 = ((MR_Unsigned) ((MR_hl_field(0, ImplMarker_176, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Word SymNameArityMaybePF_392 = ((MR_Word) ((MR_hl_field(0, ImplMarker_176, (MR_Integer) 1))));

                switch (Marker_391) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 4:
                    {
                      MR_Word Var_312;
                      MR_Word Var_313;
                      MR_Word Var_323;
                      MR_Word Pieces_381;
                      MR_Word Spec_382;

                      Var_313 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_117);
                      Var_312 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_313, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                      Pieces_381 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[92])), Var_312);
                      Var_323 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                      {
                        Spec_382 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_382, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                        MR_hl_field(1, Spec_382, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_382, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_382, 3) = ((MR_Box) (Var_323));
                        MR_hl_field(1, Spec_382, 4) = ((MR_Box) (Pieces_381));
                      }
                      {
                        STATE_VARIABLE_Specs_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 0) = ((MR_Box) (Spec_382));
                        MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                      }
                      STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 3:
                  case (MR_Integer) 1:
                  case (MR_Integer) 7:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_307;
                      MR_Word PFU_377 = ((MR_Unsigned) ((MR_hl_field(0, SymNameArityMaybePF_392, (MR_Integer) 0))) & (MR_Integer) 3);

                      switch (PFU_377) {
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
                      Var_307 = (MR_Word) (ImplMarker_176);
                      {
                        STATE_VARIABLE_ImplMarkers_306_306 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_ImplMarkers_306_306, 0) = ((MR_Box) (Var_307));
                        MR_hl_field(1, STATE_VARIABLE_ImplMarkers_306_306, 1) = ((MR_Box) (STATE_VARIABLE_ImplMarkers_0_26));
                      }
                      STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_152 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Promises_243_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Promises_243_243, 0) = ((MR_Box) (ItemPromise_152));
                  MR_hl_field(1, STATE_VARIABLE_Promises_243_243, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_146 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_237_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_237_237, 0) = ((MR_Box) (ItemTypeClass_146));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_237_237, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_10));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_147 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_238_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Instances_238_238, 0) = ((MR_Box) (ItemInstance_147));
                  MR_hl_field(1, STATE_VARIABLE_Instances_238_238, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_12));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_142 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_233_233 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_233_233, 0) = ((MR_Box) (ItemTypeDefn_142));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_233_233, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_144 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_InstDefns_235_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_235_235, 0) = ((MR_Box) (ItemInstDefn_144));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_235_235, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_145 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDefns_236_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_236_236, 0) = ((MR_Box) (ItemModeDefn_145));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_236_236, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_8));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word DeclPragma_153 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) DeclPragma_153)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Pieces_163;
                      MR_Word Spec_164;
                      MR_Word Var_253;
                      MR_Word Var_254;
                      MR_Word Var_264;

                      Var_254 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_117);
                      Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_254, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                      Pieces_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[92])), Var_253);
                      Var_264 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                      {
                        Spec_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_164, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                        MR_hl_field(1, Spec_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_164, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_164, 3) = ((MR_Box) (Var_264));
                        MR_hl_field(1, Spec_164, 4) = ((MR_Box) (Pieces_163));
                      }
                      {
                        STATE_VARIABLE_Specs_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 0) = ((MR_Box) (Spec_164));
                        MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                      }
                      STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                      STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                      STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                      STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                      STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_153, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeSpec_154 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_TypeSpecs_244_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_TypeSpecs_244_244, 0) = ((MR_Box) (TypeSpec_154));
                            MR_hl_field(1, STATE_VARIABLE_TypeSpecs_244_244, 1) = ((MR_Box) (STATE_VARIABLE_TypeSpecs_0_28));
                          }
                          STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Pieces_163;
                          MR_Word Spec_164;
                          MR_Word Var_253;
                          MR_Word Var_254;
                          MR_Word Var_264;

                          Var_254 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_117);
                          Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_254, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                          Pieces_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[92])), Var_253);
                          Var_264 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                          {
                            Spec_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Spec_164, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                            MR_hl_field(1, Spec_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, Spec_164, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                            MR_hl_field(1, Spec_164, 3) = ((MR_Box) (Var_264));
                            MR_hl_field(1, Spec_164, 4) = ((MR_Box) (Pieces_163));
                          }
                          {
                            STATE_VARIABLE_Specs_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 0) = ((MR_Box) (Spec_164));
                            MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                          }
                          STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Term_155 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_TermInfos_245_245 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_245_245, 0) = ((MR_Box) (Term_155));
                            MR_hl_field(1, STATE_VARIABLE_TermInfos_245_245, 1) = ((MR_Box) (STATE_VARIABLE_TermInfos_0_32));
                          }
                          STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Term2_156 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_Term2Infos_246_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_246_246, 0) = ((MR_Box) (Term2_156));
                            MR_hl_field(1, STATE_VARIABLE_Term2Infos_246_246, 1) = ((MR_Box) (STATE_VARIABLE_Term2Infos_0_34));
                          }
                          STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Sharing_157 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_Sharings_247_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_247_247, 0) = ((MR_Box) (Sharing_157));
                            MR_hl_field(1, STATE_VARIABLE_Sharings_247_247, 1) = ((MR_Box) (STATE_VARIABLE_Sharings_0_42));
                          }
                          STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                          STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Reuse_158 = ((MR_Word) ((MR_hl_field(3, DeclPragma_153, (MR_Integer) 1))));

                          {
                            STATE_VARIABLE_Reuses_248_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_248_248, 0) = ((MR_Box) (Reuse_158));
                            MR_hl_field(1, STATE_VARIABLE_Reuses_248_248, 1) = ((MR_Box) (STATE_VARIABLE_Reuses_0_44));
                          }
                          STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                          STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                          STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                          STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                          STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word Var_291;
                MR_Word Var_292;
                MR_Word Var_302;
                MR_Word Pieces_375;
                MR_Word Spec_376;

                Var_292 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_117);
                Var_291 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_292, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_375 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[92])), Var_291);
                Var_302 = parse_tree__prog_item__get_item_context_1_f_0(Item_117);
                {
                  Spec_376 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_376, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/47"));
                  MR_hl_field(1, Spec_376, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_376, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_376, 3) = ((MR_Box) (Var_302));
                  MR_hl_field(1, Spec_376, 4) = ((MR_Box) (Pieces_375));
                }
                {
                  STATE_VARIABLE_Specs_265_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 0) = ((MR_Box) (Spec_376));
                  MR_hl_field(1, STATE_VARIABLE_Specs_265_265, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word GenPragma_178 = ((MR_Word) ((MR_hl_field(3, Item_117, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) GenPragma_178)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word UnusedArgs_133 = (MR_Word) ((MR_Word) (GenPragma_178));

                      {
                        STATE_VARIABLE_UnusedArgs_325_325 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_UnusedArgs_325_325, 0) = ((MR_Box) (UnusedArgs_133));
                        MR_hl_field(1, STATE_VARIABLE_UnusedArgs_325_325, 1) = ((MR_Box) (STATE_VARIABLE_UnusedArgs_0_30));
                      }
                      STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                      STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                      STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Exception_179 = (MR_Word) (MR_body((MR_Word) (GenPragma_178), (MR_Integer) 1));

                      {
                        STATE_VARIABLE_Exceptions_326_326 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_326_326, 0) = ((MR_Box) (Exception_179));
                        MR_hl_field(1, STATE_VARIABLE_Exceptions_326_326, 1) = ((MR_Box) (STATE_VARIABLE_Exceptions_0_36));
                      }
                      STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                      STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                      STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Trailing_180 = (MR_Word) (MR_body((MR_Word) (GenPragma_178), (MR_Integer) 2));

                      {
                        STATE_VARIABLE_Trailings_327_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_327_327, 0) = ((MR_Box) (Trailing_180));
                        MR_hl_field(1, STATE_VARIABLE_Trailings_327_327, 1) = ((MR_Box) (STATE_VARIABLE_Trailings_0_38));
                      }
                      STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                      STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                      STATE_VARIABLE_MMTablings_328_328 = STATE_VARIABLE_MMTablings_0_40;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MMTabling_181 = (MR_Word) (MR_body((MR_Word) (GenPragma_178), (MR_Integer) 3));

                      {
                        STATE_VARIABLE_MMTablings_328_328 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_328_328, 0) = ((MR_Box) (MMTabling_181));
                        MR_hl_field(1, STATE_VARIABLE_MMTablings_328_328, 1) = ((MR_Box) (STATE_VARIABLE_MMTablings_0_40));
                      }
                      STATE_VARIABLE_UnusedArgs_325_325 = STATE_VARIABLE_UnusedArgs_0_30;
                      STATE_VARIABLE_Exceptions_326_326 = STATE_VARIABLE_Exceptions_0_36;
                      STATE_VARIABLE_Trailings_327_327 = STATE_VARIABLE_Trailings_0_38;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_233_233 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_234_234 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_InstDefns_235_235 = STATE_VARIABLE_InstDefns_0_6;
                STATE_VARIABLE_ModeDefns_236_236 = STATE_VARIABLE_ModeDefns_0_8;
                STATE_VARIABLE_TypeClasses_237_237 = STATE_VARIABLE_TypeClasses_0_10;
                STATE_VARIABLE_Instances_238_238 = STATE_VARIABLE_Instances_0_12;
                STATE_VARIABLE_PredDecls_239_239 = STATE_VARIABLE_PredDecls_0_14;
                STATE_VARIABLE_RevModeDecls_240_240 = STATE_VARIABLE_RevModeDecls_0_16;
                STATE_VARIABLE_RevClauses_241_241 = STATE_VARIABLE_RevClauses_0_18;
                STATE_VARIABLE_RevForeignProcs_242_242 = STATE_VARIABLE_RevForeignProcs_0_20;
                STATE_VARIABLE_Promises_243_243 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_DeclMarkers_268_268 = STATE_VARIABLE_DeclMarkers_0_24;
                STATE_VARIABLE_ImplMarkers_306_306 = STATE_VARIABLE_ImplMarkers_0_26;
                STATE_VARIABLE_TypeSpecs_244_244 = STATE_VARIABLE_TypeSpecs_0_28;
                STATE_VARIABLE_TermInfos_245_245 = STATE_VARIABLE_TermInfos_0_32;
                STATE_VARIABLE_Term2Infos_246_246 = STATE_VARIABLE_Term2Infos_0_34;
                STATE_VARIABLE_Sharings_247_247 = STATE_VARIABLE_Sharings_0_42;
                STATE_VARIABLE_Reuses_248_248 = STATE_VARIABLE_Reuses_0_44;
                STATE_VARIABLE_Specs_265_265 = STATE_VARIABLE_Specs_0_46;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_118;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_233_233;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_234_234;
      next_value_of_STATE_VARIABLE_InstDefns_0_6 = STATE_VARIABLE_InstDefns_235_235;
      next_value_of_STATE_VARIABLE_ModeDefns_0_8 = STATE_VARIABLE_ModeDefns_236_236;
      next_value_of_STATE_VARIABLE_TypeClasses_0_10 = STATE_VARIABLE_TypeClasses_237_237;
      next_value_of_STATE_VARIABLE_Instances_0_12 = STATE_VARIABLE_Instances_238_238;
      next_value_of_STATE_VARIABLE_PredDecls_0_14 = STATE_VARIABLE_PredDecls_239_239;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_16 = STATE_VARIABLE_RevModeDecls_240_240;
      next_value_of_STATE_VARIABLE_RevClauses_0_18 = STATE_VARIABLE_RevClauses_241_241;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_20 = STATE_VARIABLE_RevForeignProcs_242_242;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_243_243;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_24 = STATE_VARIABLE_DeclMarkers_268_268;
      next_value_of_STATE_VARIABLE_ImplMarkers_0_26 = STATE_VARIABLE_ImplMarkers_306_306;
      next_value_of_STATE_VARIABLE_TypeSpecs_0_28 = STATE_VARIABLE_TypeSpecs_244_244;
      next_value_of_STATE_VARIABLE_UnusedArgs_0_30 = STATE_VARIABLE_UnusedArgs_325_325;
      next_value_of_STATE_VARIABLE_TermInfos_0_32 = STATE_VARIABLE_TermInfos_245_245;
      next_value_of_STATE_VARIABLE_Term2Infos_0_34 = STATE_VARIABLE_Term2Infos_246_246;
      next_value_of_STATE_VARIABLE_Exceptions_0_36 = STATE_VARIABLE_Exceptions_326_326;
      next_value_of_STATE_VARIABLE_Trailings_0_38 = STATE_VARIABLE_Trailings_327_327;
      next_value_of_STATE_VARIABLE_MMTablings_0_40 = STATE_VARIABLE_MMTablings_328_328;
      next_value_of_STATE_VARIABLE_Sharings_0_42 = STATE_VARIABLE_Sharings_247_247;
      next_value_of_STATE_VARIABLE_Reuses_0_44 = STATE_VARIABLE_Reuses_248_248;
      next_value_of_STATE_VARIABLE_Specs_0_46 = STATE_VARIABLE_Specs_265_265;
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_3(
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

  parse_tree__convert_parse_tree__restrict_to_int_import_map_entry_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_IntImportMap_18, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_20);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportMap_18));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__796__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 0))));
  MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 2))));
  MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 3))));
  MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 4))));
  MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 5))));
  MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 6))));
  MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 7))));
  MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 8))));
  MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 9))));
  MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 10))));
  MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 11))));
  MR_Word InclMap_23;
  MR_Word IntInclMap_24;
  MR_Word SectionImportUseMap_25;
  MR_Word IntImportMap_26;
  MR_Word IntTypeDefns0_31;
  MR_Word IntInstDefns0_32;
  MR_Word IntModeDefns0_33;
  MR_Word IntTypeClasses0_34;
  MR_Word IntInstances0_35;
  MR_Word IntTypeRepns0_36;
  MR_Word IntTypeDefnMap_37;
  MR_Word IntInstDefnMap_38;
  MR_Word IntModeDefnMap_39;
  MR_Word IntTypeClasses_40;
  MR_Word IntInstances_41;
  MR_Word IntTypeRepnMap_42;
  MR_Word ImpTypeDefnMap_43;
  MR_Word ImpForeignEnumMap_44;
  MR_Word IntTypeCheckedMap_45;
  MR_Word ImpInstDefnMap_46;
  MR_Word IntInstCheckedMap_47;
  MR_Word ImpModeDefnMap_48;
  MR_Word IntModeCheckedMap_49;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_Specs_80_80;
  MR_Word STATE_VARIABLE_Specs_82_82;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_Specs_85_85;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Specs_88_88;
  MR_Word STATE_VARIABLE_Specs_105_105;
  MR_Word STATE_VARIABLE_Specs_112_112;
  MR_Word STATE_VARIABLE_Specs_114_114;
  MR_Word STATE_VARIABLE_Specs_116_116;
  MR_Word STATE_VARIABLE_Specs_118_118;
  MR_Word STATE_VARIABLE_ImpContexts_120_120;
  MR_Word STATE_VARIABLE_ImpContexts_122_122;
  MR_Word STATE_VARIABLE_ImpContexts_124_124;
  MR_Word STATE_VARIABLE_ImpContexts_126_126;
  MR_Word STATE_VARIABLE_ImpContexts_128_128;
  MR_Box conv1_IntInclMap_24;
  MR_Box conv5_IntImportMap_26;
  MR_Box conv4_STATE_VARIABLE_Specs_88_88;

  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) ((MR_Integer) 3));
  }
  mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4", (MR_String) "trying to convert non-ifk_int3 parse_tree_int to parse_tree_int3");
  if ((MaybeVersionNumbers_11 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_80_80 = STATE_VARIABLE_Specs_0_63;
  else
  {
    MR_Word VNSpec_22;

    {
      VNSpec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VNSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(1, VNSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, VNSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, VNSpec_22, 3) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(1, VNSpec_22, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[43])));
    }
    {
      STATE_VARIABLE_Specs_80_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_80_80, 0) = ((MR_Box) (VNSpec_22));
      MR_hl_field(1, STATE_VARIABLE_Specs_80_80, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_63));
    }
  }
  parse_tree__item_util__classify_include_modules_5_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &InclMap_23, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_82_82);
  Var_84 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[21]), InclMap_23, ((MR_Box) (Var_84)), &conv1_IntInclMap_24);
  IntInclMap_24 = ((MR_Word) (conv1_IntInclMap_24));
  parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0(ModuleName_8, IntAvails_14, ImpAvails_15, &SectionImportUseMap_25, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_85_85);
  Var_87 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_7[2]), SectionImportUseMap_25, ((MR_Box) (Var_87)), &conv5_IntImportMap_26, ((MR_Box) (STATE_VARIABLE_Specs_85_85)), &conv4_STATE_VARIABLE_Specs_88_88);
  IntImportMap_26 = ((MR_Word) (conv5_IntImportMap_26));
  STATE_VARIABLE_Specs_88_88 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_88_88));
  if ((IntFIMs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_88_88;
  else
  {
    MR_Word FirstIntFIM_27 = ((MR_Word) ((MR_hl_field(1, IntFIMs_16, (MR_Integer) 0))));
    MR_Word IntFIMSpec_30;
    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, FirstIntFIM_27, (MR_Integer) 2))));

    {
      IntFIMSpec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IntFIMSpec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(1, IntFIMSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, IntFIMSpec_30, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, IntFIMSpec_30, 3) = ((MR_Box) (Var_104));
      MR_hl_field(1, IntFIMSpec_30, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[49])));
    }
    {
      STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (IntFIMSpec_30));
      MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_88_88));
    }
  }
  parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_31, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_32, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_33, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_35, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_36, STATE_VARIABLE_Specs_105_105, &STATE_VARIABLE_Specs_112_112);
  IntTypeDefnMap_37 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_31);
  IntInstDefnMap_38 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_32);
  IntModeDefnMap_39 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_33);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), IntTypeClasses0_34, &IntTypeClasses_40);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_35, &IntInstances_41);
  IntTypeRepnMap_42 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_36);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), &ImpTypeDefnMap_43);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), &ImpForeignEnumMap_44);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_37, ImpTypeDefnMap_43, ImpForeignEnumMap_44, &IntTypeCheckedMap_45, STATE_VARIABLE_Specs_112_112, &STATE_VARIABLE_Specs_114_114);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_46);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_38, ImpInstDefnMap_46, &IntInstCheckedMap_47, STATE_VARIABLE_Specs_114_114, &STATE_VARIABLE_Specs_116_116);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_48);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_39, ImpModeDefnMap_48, &IntModeCheckedMap_49, STATE_VARIABLE_Specs_116_116, &STATE_VARIABLE_Specs_118_118);
  if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_120_120 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadIncl_51 = ((MR_Word) ((MR_hl_field(1, ImpIncls_13, (MR_Integer) 0))));
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, HeadIncl_51, (MR_Integer) 1))));

    {
      STATE_VARIABLE_ImpContexts_120_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_120_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_120_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_122_122 = STATE_VARIABLE_ImpContexts_120_120;
  else
  {
    MR_Word HeadAvail_53 = ((MR_Word) ((MR_hl_field(1, ImpAvails_15, (MR_Integer) 0))));
    MR_Word Var_123;

    Var_123 = parse_tree__item_util__get_avail_context_1_f_0(HeadAvail_53);
    {
      STATE_VARIABLE_ImpContexts_122_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_122_122, 0) = ((MR_Box) (Var_123));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_122_122, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_120_120));
    }
  }
  if ((ImpFIMs_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_124_124 = STATE_VARIABLE_ImpContexts_122_122;
  else
  {
    MR_Word HeadFIM_55 = ((MR_Word) ((MR_hl_field(1, ImpFIMs_17, (MR_Integer) 0))));
    MR_Word Var_125 = ((MR_Word) ((MR_hl_field(0, HeadFIM_55, (MR_Integer) 2))));

    {
      STATE_VARIABLE_ImpContexts_124_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_124_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_124_124, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_122_122));
    }
  }
  if ((ImpItems_19 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_126_126 = STATE_VARIABLE_ImpContexts_124_124;
  else
  {
    MR_Word HeadImpItem_57 = ((MR_Word) ((MR_hl_field(1, ImpItems_19, (MR_Integer) 0))));
    MR_Word Var_127;

    Var_127 = parse_tree__prog_item__get_item_context_1_f_0(HeadImpItem_57);
    {
      STATE_VARIABLE_ImpContexts_126_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_126_126, 0) = ((MR_Box) (Var_127));
      MR_hl_field(1, STATE_VARIABLE_ImpContexts_126_126, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_124_124));
    }
  }
  mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_ImpContexts_126_126, &STATE_VARIABLE_ImpContexts_128_128);
  if ((STATE_VARIABLE_ImpContexts_128_128 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_118_118;
  else
  {
    MR_Word FirstImpContext_59 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ImpContexts_128_128, (MR_Integer) 0))));
    MR_Word ImpItemSpec_62;

    {
      ImpItemSpec_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpItemSpec_62, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(1, ImpItemSpec_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, ImpItemSpec_62, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, ImpItemSpec_62, 3) = ((MR_Box) (FirstImpContext_59));
      MR_hl_field(1, ImpItemSpec_62, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[53])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_64 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ImpItemSpec_62));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_118_118));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt3_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (IntInclMap_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntImportMap_26));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntTypeCheckedMap_45));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntInstCheckedMap_47));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntModeCheckedMap_49));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeClasses_40));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstances_41));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntTypeRepnMap_42));
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
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_107_107;
      MR_Word STATE_VARIABLE_InstDefns_108_108;
      MR_Word STATE_VARIABLE_ModeDefns_109_109;
      MR_Word STATE_VARIABLE_TypeClasses_113_113;
      MR_Word STATE_VARIABLE_Specs_125_125;
      MR_Word STATE_VARIABLE_Instances_160_160;
      MR_Word STATE_VARIABLE_TypeRepns_173_173;
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
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word Var_189;
            MR_Word Pieces_212;
            MR_Word Spec_213;

            Var_179 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
            Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
            Pieces_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[79])), Var_178);
            Var_189 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_213, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
              MR_hl_field(1, Spec_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_213, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_213, 3) = ((MR_Box) (Var_189));
              MR_hl_field(1, Spec_213, 4) = ((MR_Box) (Pieces_212));
            }
            {
              STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (Spec_213));
              MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
            }
            STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_37, (MR_Integer) 0))))) {
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

                Var_179 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
                Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
                Pieces_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[79])), Var_178);
                Var_189 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_213, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                  MR_hl_field(1, Spec_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_213, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_213, 3) = ((MR_Box) (Var_189));
                  MR_hl_field(1, Spec_213, 4) = ((MR_Box) (Pieces_212));
                }
                {
                  STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (Spec_213));
                  MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                }
                STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));
                MR_Word ClassName_50 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 0))));
                MR_Word Params_51 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 1))));
                MR_Word Supers_52 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 2))));
                MR_Word Fundeps_53 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 3))));
                MR_Word Interface_54 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 4))));
                MR_Word TVarSet_55 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 5))));
                MR_Word Context_56 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 6))));
                MR_Word SeqNum_57 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_49, (MR_Integer) 7))));

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
                        STATE_VARIABLE_TypeClasses_113_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_TypeClasses_113_113, 0) = ((MR_Box) (ItemAbstractTypeClass_58));
                        MR_hl_field(1, STATE_VARIABLE_TypeClasses_113_113, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                      }
                      STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_0_14;
                    }
                    else
                    {
                      MR_Word Spec_62;

                      {
                        Spec_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_62, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                        MR_hl_field(1, Spec_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_62, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_62, 3) = ((MR_Box) (Context_56));
                        MR_hl_field(1, Spec_62, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[84])));
                      }
                      {
                        STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (Spec_62));
                        MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                      }
                      STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                    }
                  else
                  {
                    MR_Word FunDepPieces_65;
                    MR_Word Var_136;
                    MR_Word Pieces_198;
                    MR_Word Spec_199;

                    if ((Fundeps_53 == (MR_Word) ((MR_Unsigned) 0U)))
                      FunDepPieces_65 = (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[86]));
                    else
                      FunDepPieces_65 = (MR_Word) ((MR_Unsigned) 0U);
                    Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunDepPieces_65, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                    Pieces_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[89])), Var_136);
                    {
                      Spec_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Spec_199, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                      MR_hl_field(1, Spec_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, Spec_199, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                      MR_hl_field(1, Spec_199, 3) = ((MR_Box) (Context_56));
                      MR_hl_field(1, Spec_199, 4) = ((MR_Box) (Pieces_198));
                    }
                    {
                      STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (Spec_199));
                      MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                    }
                    STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                  }
                else
                {
                  MR_Word Spec_201;

                  {
                    Spec_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_201, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                    MR_hl_field(1, Spec_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_201, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_201, 3) = ((MR_Box) (Context_56));
                    MR_hl_field(1, Spec_201, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[90])));
                  }
                  {
                    STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (Spec_201));
                    MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                  }
                  STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                }
                STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_69 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));
                MR_Word Types_70 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 1))));
                MR_Word OrigTypes_71 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 2))));
                MR_Word Constraints_72 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 3))));
                MR_Word Body_73 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 4))));
                MR_Word Module_74 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 6))));
                MR_Word ClassName_206 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 0))));
                MR_Word TVarSet_207 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 5))));
                MR_Word Context_208 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 7))));
                MR_Word SeqNum_209 = ((MR_Word) ((MR_hl_field(0, ItemInstance_69, (MR_Integer) 8))));

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
                    STATE_VARIABLE_Instances_160_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_160_160, 0) = ((MR_Box) (ItemAbstractInstance_75));
                    MR_hl_field(1, STATE_VARIABLE_Instances_160_160, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_0_14;
                }
                else
                {
                  MR_Word Spec_203;

                  {
                    Spec_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_203, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                    MR_hl_field(1, Spec_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_203, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_203, 3) = ((MR_Box) (Context_208));
                    MR_hl_field(1, Spec_203, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[80])));
                  }
                  {
                    STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (Spec_203));
                    MR_hl_field(1, STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                  }
                  STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_107_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_107_107, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_107_107, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_47 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_InstDefns_108_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_108_108, 0) = ((MR_Box) (ItemInstDefn_47));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_108_108, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_48 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDefns_109_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_109_109, 0) = ((MR_Box) (ItemModeDefn_48));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_109_109, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_173_173 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepn_77 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_173_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_173_173, 0) = ((MR_Box) (ItemTypeRepn_77));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_173_173, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_107_107 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_108_108 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_109_109 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_113_113 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_160_160 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_107_107;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_108_108;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_109_109;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_113_113;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_160_160;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_173_173;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_125_125;
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_5(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_4(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3(
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

  parse_tree__convert_parse_tree__restrict_to_section_use_map_entry_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_SectionUseMap_17, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_SectionUseMap_17));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_19));
}

static void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__618__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt2_6,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 0))));
  MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 2))));
  MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 3))));
  MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 4))));
  MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 5))));
  MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 6))));
  MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 7))));
  MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 8))));
  MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 9))));
  MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 10))));
  MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 11))));
  MR_Word InclMap_24;
  MR_Word IntInclMap_25;
  MR_Word SectionImportUseMap_26;
  MR_Word SectionUseMap_27;
  MR_Word IntFIMSpecs_28;
  MR_Word ImpFIMSpecs_29;
  MR_Word IntTypeDefns0_30;
  MR_Word IntInstDefns0_31;
  MR_Word IntModeDefns0_32;
  MR_Word IntTypeClasses0_33;
  MR_Word IntInstances0_34;
  MR_Word IntTypeRepns0_35;
  MR_Word IntTypeDefnMap_36;
  MR_Word IntInstDefnMap_37;
  MR_Word IntModeDefnMap_38;
  MR_Word IntTypeClasses_39;
  MR_Word IntInstances_40;
  MR_Word IntTypeRepnMap_41;
  MR_Word ImpTypeDefns0_42;
  MR_Word ImpTypeDefnMap_43;
  MR_Word ImpForeignEnumMap_44;
  MR_Word IntTypeCheckedMap_45;
  MR_Word ImpInstDefnMap_46;
  MR_Word IntInstCheckedMap_47;
  MR_Word ImpModeDefnMap_48;
  MR_Word IntModeCheckedMap_49;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_Specs_74_74;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_Specs_79_79;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_Specs_82_82;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_Specs_94_94;
  MR_Word STATE_VARIABLE_Specs_96_96;
  MR_Word STATE_VARIABLE_Specs_98_98;
  MR_Word STATE_VARIABLE_Specs_100_100;
  MR_Box conv1_IntInclMap_25;
  MR_Box conv5_SectionUseMap_27;
  MR_Box conv4_STATE_VARIABLE_Specs_82_82;

  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) ((MR_Integer) 2));
  }
  mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4", (MR_String) "trying to convert non-ifk_int2 parse_tree_int to parse_tree_int2");
  if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_50;
  else
  {
    MR_Word FirstImpIncl_20 = ((MR_Word) ((MR_hl_field(1, ImpIncls_13, (MR_Integer) 0))));
    MR_Word ImpInclSpec_23;
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, FirstImpIncl_20, (MR_Integer) 1))));

    {
      ImpInclSpec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpInclSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
      MR_hl_field(1, ImpInclSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, ImpInclSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, ImpInclSpec_23, 3) = ((MR_Box) (Var_73));
      MR_hl_field(1, ImpInclSpec_23, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[39])));
    }
    {
      STATE_VARIABLE_Specs_74_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_74_74, 0) = ((MR_Box) (ImpInclSpec_23));
      MR_hl_field(1, STATE_VARIABLE_Specs_74_74, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
    }
  }
  parse_tree__item_util__classify_include_modules_5_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &InclMap_24, STATE_VARIABLE_Specs_74_74, &STATE_VARIABLE_Specs_76_76);
  Var_78 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), InclMap_24, ((MR_Box) (Var_78)), &conv1_IntInclMap_25);
  IntInclMap_25 = ((MR_Word) (conv1_IntInclMap_25));
  parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0(ModuleName_8, IntAvails_14, ImpAvails_15, &SectionImportUseMap_26, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_79_79);
  Var_81 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_7[1]), SectionImportUseMap_26, ((MR_Box) (Var_81)), &conv5_SectionUseMap_27, ((MR_Box) (STATE_VARIABLE_Specs_79_79)), &conv4_STATE_VARIABLE_Specs_82_82);
  SectionUseMap_27 = ((MR_Word) (conv5_SectionUseMap_27));
  STATE_VARIABLE_Specs_82_82 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_82_82));
  Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), IntFIMs_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_84, &IntFIMSpecs_28);
  Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), ImpFIMs_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_86, &ImpFIMSpecs_29);
  parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_30, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_31, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_32, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_33, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_34, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_35, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_94_94);
  IntTypeDefnMap_36 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_30);
  IntInstDefnMap_37 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_31);
  IntModeDefnMap_38 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_32);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_33, &IntTypeClasses_39);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_34, &IntInstances_40);
  IntTypeRepnMap_41 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_35);
  parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_42, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_96_96);
  ImpTypeDefnMap_43 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_42);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), &ImpForeignEnumMap_44);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_36, ImpTypeDefnMap_43, ImpForeignEnumMap_44, &IntTypeCheckedMap_45, STATE_VARIABLE_Specs_96_96, &STATE_VARIABLE_Specs_98_98);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_46);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_37, ImpInstDefnMap_46, &IntInstCheckedMap_47, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_100_100);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_48);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_38, ImpModeDefnMap_48, &IntModeCheckedMap_49, STATE_VARIABLE_Specs_100_100, STATE_VARIABLE_Specs_51);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt2_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntInclMap_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionUseMap_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeCheckedMap_45));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstCheckedMap_47));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntModeCheckedMap_49));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_39));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_40));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntTypeRepnMap_41));
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
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_43_43;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

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

            Var_49 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_12);
            Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[33])));
            Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[77])), Var_48);
            Var_59 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
            {
              Spec_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
              MR_hl_field(1, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_38, 3) = ((MR_Box) (Var_59));
              MR_hl_field(1, Spec_38, 4) = ((MR_Box) (Pieces_37));
            }
            {
              STATE_VARIABLE_Specs_60_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_60_60, 0) = ((MR_Box) (Spec_38));
              MR_hl_field(1, STATE_VARIABLE_Specs_60_60, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
            }
            STATE_VARIABLE_TypeDefns_43_43 = STATE_VARIABLE_TypeDefns_0_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_12, (MR_Integer) 0))))) {
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

                Var_49 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_12);
                Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[33])));
                Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[77])), Var_48);
                Var_59 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
                {
                  Spec_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
                  MR_hl_field(1, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_38, 3) = ((MR_Box) (Var_59));
                  MR_hl_field(1, Spec_38, 4) = ((MR_Box) (Pieces_37));
                }
                {
                  STATE_VARIABLE_Specs_60_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_60_60, 0) = ((MR_Box) (Spec_38));
                  MR_hl_field(1, STATE_VARIABLE_Specs_60_60, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                }
                STATE_VARIABLE_TypeDefns_43_43 = STATE_VARIABLE_TypeDefns_0_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_16 = ((MR_Word) ((MR_hl_field(3, Item_12, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_43_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_43_43, 0) = ((MR_Box) (ItemTypeDefn_16));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_43_43, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_43_43;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_60_60;
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
      MR_Word Item_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_94_94;
      MR_Word STATE_VARIABLE_InstDefns_95_95;
      MR_Word STATE_VARIABLE_ModeDefns_96_96;
      MR_Word STATE_VARIABLE_TypeClasses_97_97;
      MR_Word STATE_VARIABLE_Instances_99_99;
      MR_Word STATE_VARIABLE_Specs_114_114;
      MR_Word STATE_VARIABLE_TypeRepns_115_115;
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
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_131;
            MR_Word Pieces_140;
            MR_Word Spec_141;

            Var_121 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
            Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
            Pieces_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[77])), Var_120);
            Var_131 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
              MR_hl_field(1, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_141, 3) = ((MR_Box) (Var_131));
              MR_hl_field(1, Spec_141, 4) = ((MR_Box) (Pieces_140));
            }
            {
              STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (Spec_141));
              MR_hl_field(1, STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
            }
            STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_37, (MR_Integer) 0))))) {
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

                Var_121 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
                Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
                Pieces_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[77])), Var_120);
                Var_131 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
                  MR_hl_field(1, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_141, 3) = ((MR_Box) (Var_131));
                  MR_hl_field(1, Spec_141, 4) = ((MR_Box) (Pieces_140));
                }
                {
                  STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (Spec_141));
                  MR_hl_field(1, STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                }
                STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_97_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_97_97, 0) = ((MR_Box) (ItemTypeClass_49));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_97_97, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_114_114 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_50 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));
                MR_Word ClassName_51 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 0))));
                MR_Word Types_52 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 1))));
                MR_Word OrigTypes_53 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 2))));
                MR_Word Constraints_54 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 3))));
                MR_Word Body_55 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 4))));
                MR_Word TVarSet_56 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 5))));
                MR_Word Module_57 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 6))));
                MR_Word Context_58 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 7))));
                MR_Word SeqNum_59 = ((MR_Word) ((MR_hl_field(0, ItemInstance_50, (MR_Integer) 8))));

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
                    STATE_VARIABLE_Instances_99_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_99_99, 0) = ((MR_Box) (ItemAbstractInstance_60));
                    MR_hl_field(1, STATE_VARIABLE_Instances_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_Specs_114_114 = STATE_VARIABLE_Specs_0_14;
                }
                else
                {
                  MR_Word Spec_63;

                  {
                    Spec_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
                    MR_hl_field(1, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_63, 3) = ((MR_Box) (Context_58));
                    MR_hl_field(1, Spec_63, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[78])));
                  }
                  {
                    STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (Spec_63));
                    MR_hl_field(1, STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                  }
                  STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_94_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_94_94, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_94_94, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_114_114 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_47 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_InstDefns_95_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_95_95, 0) = ((MR_Box) (ItemInstDefn_47));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_95_95, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_114_114 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_48 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDefns_96_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_96_96, 0) = ((MR_Box) (ItemModeDefn_48));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_96_96, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_115_115 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_114_114 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepn_64 = ((MR_Word) ((MR_hl_field(3, Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_115_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_115_115, 0) = ((MR_Box) (ItemTypeRepn_64));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_115_115, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_94_94 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_95_95 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_96_96 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_97_97 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_99_99 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_Specs_114_114 = STATE_VARIABLE_Specs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_94_94;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_95_95;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_96_96;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_97_97;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_99_99;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_115_115;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_114_114;
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_4(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2(
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

  parse_tree__convert_parse_tree__restrict_to_section_use_map_entry_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SectionUseMap_17, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SectionUseMap_17));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__378__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt1_6,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 0))));
  MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 2))));
  MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 3))));
  MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 4))));
  MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 5))));
  MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 6))));
  MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 7))));
  MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 8))));
  MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 9))));
  MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 10))));
  MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 11))));
  MR_Word InclMap_20;
  MR_Word SectionImportUseMap_21;
  MR_Word SectionUseMap_22;
  MR_Word IntFIMSpecs_23;
  MR_Word ImpFIMSpecs_24;
  MR_Word IntTypeDefns_25;
  MR_Word IntInstDefns_26;
  MR_Word IntModeDefns_27;
  MR_Word IntTypeClasses0_28;
  MR_Word IntInstances0_29;
  MR_Word IntPredDecls0_30;
  MR_Word RevIntModeDecls_31;
  MR_Word IntDeclPragmas0_33;
  MR_Word IntDeclMarkers_34;
  MR_Word IntPromises0_35;
  MR_Word IntTypeRepns_36;
  MR_Word IntTypeDefnMap_37;
  MR_Word IntInstDefnMap_38;
  MR_Word IntModeDefnMap_39;
  MR_Word IntTypeClasses_40;
  MR_Word IntInstances_41;
  MR_Word IntPredDecls_42;
  MR_Word IntModeDecls_43;
  MR_Word IntDeclPragmas_44;
  MR_Word IntPromises_45;
  MR_Word IntTypeRepnMap_46;
  MR_Word ImpTypeDefns0_47;
  MR_Word ImpForeignEnums0_48;
  MR_Word ImpTypeClasses0_49;
  MR_Word ImpTypeDefnMap_50;
  MR_Word ImpForeignEnumMap_51;
  MR_Word ImpTypeClasses_52;
  MR_Word IntTypeCheckedMap_53;
  MR_Word ImpInstDefnMap_54;
  MR_Word IntInstCheckedMap_55;
  MR_Word ImpModeDefnMap_56;
  MR_Word IntModeCheckedMap_57;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_Specs_64_64;
  MR_Word STATE_VARIABLE_Specs_65_65;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Specs_68_68;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_Specs_86_86;
  MR_Word STATE_VARIABLE_Specs_90_90;
  MR_Word STATE_VARIABLE_Specs_92_92;
  MR_Word STATE_VARIABLE_Specs_94_94;
  MR_Box conv3_SectionUseMap_22;
  MR_Box conv2_STATE_VARIABLE_Specs_68_68;
  MR_Word _IntForeignEnums_32;

  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(0, Var_60, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/4", (MR_String) "trying to convert non-ifk_int1 parse_tree_int to parse_tree_int1");
  parse_tree__item_util__classify_include_modules_5_p_0(IntIncls_12, ImpIncls_13, &InclMap_20, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_64_64);
  parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0(ModuleName_8, IntAvails_14, ImpAvails_15, &SectionImportUseMap_21, STATE_VARIABLE_Specs_64_64, &STATE_VARIABLE_Specs_65_65);
  Var_67 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_7[0]), SectionImportUseMap_21, ((MR_Box) (Var_67)), &conv3_SectionUseMap_22, ((MR_Box) (STATE_VARIABLE_Specs_65_65)), &conv2_STATE_VARIABLE_Specs_68_68);
  SectionUseMap_22 = ((MR_Word) (conv3_SectionUseMap_22));
  STATE_VARIABLE_Specs_68_68 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_68_68));
  Var_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[16]), IntFIMs_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_70, &IntFIMSpecs_23);
  Var_72 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[17]), ImpFIMs_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_72, &ImpFIMSpecs_24);
  parse_tree__convert_parse_tree__classify_int1_items_int_27_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_25, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_26, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_27, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_28, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_29, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_30, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_31, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_32, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_33, (MR_Word) ((MR_Unsigned) 0U), &IntDeclMarkers_34, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_35, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns_36, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_86_86);
  IntTypeDefnMap_37 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_25);
  IntInstDefnMap_38 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_26);
  IntModeDefnMap_39 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_27);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_28, &IntTypeClasses_40);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_29, &IntInstances_41);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_30, &IntPredDecls_42);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_31, &IntModeDecls_43);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntDeclPragmas0_33, &IntDeclPragmas_44);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_35, &IntPromises_45);
  IntTypeRepnMap_46 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns_36);
  parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_47, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums0_48, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_49, STATE_VARIABLE_Specs_86_86, &STATE_VARIABLE_Specs_90_90);
  ImpTypeDefnMap_50 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_47);
  ImpForeignEnumMap_51 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums0_48);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), ImpTypeClasses0_49, &ImpTypeClasses_52);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_37, ImpTypeDefnMap_50, ImpForeignEnumMap_51, &IntTypeCheckedMap_53, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_92_92);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_54);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_38, ImpInstDefnMap_54, &IntInstCheckedMap_55, STATE_VARIABLE_Specs_92_92, &STATE_VARIABLE_Specs_94_94);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_56);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_39, ImpModeDefnMap_56, &IntModeCheckedMap_57, STATE_VARIABLE_Specs_94_94, STATE_VARIABLE_Specs_59);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt1_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionUseMap_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeCheckedMap_53));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstCheckedMap_55));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntModeCheckedMap_57));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_41));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_42));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_43));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_44));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers_34));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_45));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntTypeRepnMap_46));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpTypeClasses_52));
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
      MR_Word Item_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_69_69;
      MR_Word STATE_VARIABLE_TypeClasses_71_71;
      MR_Word STATE_VARIABLE_Specs_83_83;
      MR_Word STATE_VARIABLE_ForeignEnums_84_84;
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
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_100;
            MR_Word Pieces_106;
            MR_Word Spec_107;

            Var_90 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_22);
            Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[33])));
            Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[67])), Var_89);
            Var_100 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
            {
              Spec_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
              MR_hl_field(1, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_107, 3) = ((MR_Box) (Var_100));
              MR_hl_field(1, Spec_107, 4) = ((MR_Box) (Pieces_106));
            }
            {
              STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (Spec_107));
              MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
            }
            STATE_VARIABLE_TypeDefns_69_69 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_84_84 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_TypeClasses_71_71 = STATE_VARIABLE_TypeClasses_0_6;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_22, (MR_Integer) 0))))) {
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

                Var_90 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_22);
                Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[33])));
                Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[67])), Var_89);
                Var_100 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
                {
                  Spec_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
                  MR_hl_field(1, Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_107, 3) = ((MR_Box) (Var_100));
                  MR_hl_field(1, Spec_107, 4) = ((MR_Box) (Pieces_106));
                }
                {
                  STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (Spec_107));
                  MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                }
                STATE_VARIABLE_TypeDefns_69_69 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_84_84 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_71_71 = STATE_VARIABLE_TypeClasses_0_6;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_42 = ((MR_Word) ((MR_hl_field(3, Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_84_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_84_84, 0) = ((MR_Box) (ItemForeignEnum_42));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_84_84, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_69_69 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_TypeClasses_71_71 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_8;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_29 = ((MR_Word) ((MR_hl_field(3, Item_22, (MR_Integer) 1))));
                MR_Word ClassName_30 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 0))));
                MR_Word Params_31 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 1))));
                MR_Word Supers_32 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 2))));
                MR_Word Fundeps_33 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 3))));
                MR_Word Interface_34 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 4))));
                MR_Word TVarSet_35 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 5))));
                MR_Word Context_36 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 6))));
                MR_Word SeqNum_37 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_29, (MR_Integer) 7))));

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
                    STATE_VARIABLE_TypeClasses_71_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_TypeClasses_71_71, 0) = ((MR_Box) (AbstractItemTypeClass_38));
                    MR_hl_field(1, STATE_VARIABLE_TypeClasses_71_71, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_6));
                  }
                  STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_8;
                }
                else
                {
                  MR_Word Spec_41;

                  {
                    Spec_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
                    MR_hl_field(1, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_41, 3) = ((MR_Box) (Context_36));
                    MR_hl_field(1, Spec_41, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[75])));
                  }
                  {
                    STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (Spec_41));
                    MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                  }
                  STATE_VARIABLE_TypeClasses_71_71 = STATE_VARIABLE_TypeClasses_0_6;
                }
                STATE_VARIABLE_TypeDefns_69_69 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_84_84 = STATE_VARIABLE_ForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_28 = ((MR_Word) ((MR_hl_field(3, Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_69_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_69_69, 0) = ((MR_Box) (ItemTypeDefn_28));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_69_69, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_84_84 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_71_71 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_8;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_23;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_69_69;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_84_84;
      next_value_of_STATE_VARIABLE_TypeClasses_0_6 = STATE_VARIABLE_TypeClasses_71_71;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_83_83;
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
      MR_Word Item_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_68 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_147_147;
      MR_Word STATE_VARIABLE_InstDefns_148_148;
      MR_Word STATE_VARIABLE_ModeDefns_149_149;
      MR_Word STATE_VARIABLE_TypeClasses_150_150;
      MR_Word STATE_VARIABLE_Instances_152_152;
      MR_Word STATE_VARIABLE_Specs_167_167;
      MR_Word STATE_VARIABLE_TypeRepns_168_168;
      MR_Word STATE_VARIABLE_PredDecls_169_169;
      MR_Word STATE_VARIABLE_ModeDecls_170_170;
      MR_Word STATE_VARIABLE_ForeignEnums_171_171;
      MR_Word STATE_VARIABLE_DeclPragmas_172_172;
      MR_Word STATE_VARIABLE_DeclMarkers_173_173;
      MR_Word STATE_VARIABLE_Promises_174_174;
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
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_26;

      switch (MR_tag((MR_Word) Item_67)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_195;
            MR_Word Var_196;
            MR_Word Var_206;
            MR_Word Pieces_228;
            MR_Word Spec_229;

            Var_196 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_67);
            Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
            Pieces_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[67])), Var_195);
            Var_206 = parse_tree__prog_item__get_item_context_1_f_0(Item_67);
            {
              Spec_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
              MR_hl_field(1, Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_229, 3) = ((MR_Box) (Var_206));
              MR_hl_field(1, Spec_229, 4) = ((MR_Box) (Pieces_228));
            }
            {
              STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (Spec_229));
              MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
            }
            STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl_101 = (MR_Word) (MR_body((MR_Word) (Item_67), (MR_Integer) 1));

            {
              STATE_VARIABLE_PredDecls_169_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_169_169, 0) = ((MR_Box) (ItemPredDecl_101));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_169_169, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
            }
            STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
            STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_102 = (MR_Word) (MR_body((MR_Word) (Item_67), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDecls_170_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ModeDecls_170_170, 0) = ((MR_Box) (ItemModeDecl_102));
              MR_hl_field(1, STATE_VARIABLE_ModeDecls_170_170, 1) = ((MR_Box) (STATE_VARIABLE_ModeDecls_0_14));
            }
            STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
            STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_67, (MR_Integer) 0))))) {
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

                Var_196 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_67);
                Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
                Pieces_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[67])), Var_195);
                Var_206 = parse_tree__prog_item__get_item_context_1_f_0(Item_67);
                {
                  Spec_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
                  MR_hl_field(1, Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_229, 3) = ((MR_Box) (Var_206));
                  MR_hl_field(1, Spec_229, 4) = ((MR_Box) (Pieces_228));
                }
                {
                  STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (Spec_229));
                  MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_103 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_171_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_171_171, 0) = ((MR_Box) (ItemForeignEnum_103));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_171_171, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_105 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_DeclMarkers_173_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_173_173, 0) = ((MR_Box) (ItemDeclMarker_105));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_173_173, 1) = ((MR_Box) (STATE_VARIABLE_DeclMarkers_0_20));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_106 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));
                MR_Word PromiseType_107 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromise_106, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Context_225 = ((MR_Word) ((MR_hl_field(0, ItemPromise_106, (MR_Integer) 4))));

                switch (PromiseType_107) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_Promises_174_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Promises_174_174, 0) = ((MR_Box) (ItemPromise_106));
                        MR_hl_field(1, STATE_VARIABLE_Promises_174_174, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                      }
                      STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_179;
                      MR_Word Var_180;
                      MR_Word Pieces_221;
                      MR_Word Spec_222;

                      Var_180 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_67);
                      Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_180, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[69])));
                      Pieces_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[67])), Var_179);
                      {
                        Spec_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Spec_222, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
                        MR_hl_field(1, Spec_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, Spec_222, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, Spec_222, 3) = ((MR_Box) (Context_225));
                        MR_hl_field(1, Spec_222, 4) = ((MR_Box) (Pieces_221));
                      }
                      {
                        STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (Spec_222));
                        MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
                      }
                      STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_85 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_150_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_150_150, 0) = ((MR_Box) (ItemTypeClass_85));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_150_150, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_86 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));
                MR_Word ClassName_87 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 0))));
                MR_Word Types_88 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 1))));
                MR_Word OrigTypes_89 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 2))));
                MR_Word Constraints_90 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 3))));
                MR_Word Body_91 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 4))));
                MR_Word TVarSet_92 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 5))));
                MR_Word Module_93 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 6))));
                MR_Word Context_94 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 7))));
                MR_Word SeqNum_95 = ((MR_Word) ((MR_hl_field(0, ItemInstance_86, (MR_Integer) 8))));

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
                    STATE_VARIABLE_Instances_152_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_152_152, 0) = ((MR_Box) (ItemAbstractInstance_96));
                    MR_hl_field(1, STATE_VARIABLE_Instances_152_152, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
                }
                else
                {
                  MR_Word Spec_99;

                  {
                    Spec_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/27"));
                    MR_hl_field(1, Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_99, 3) = ((MR_Box) (Context_94));
                    MR_hl_field(1, Spec_99, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[72])));
                  }
                  {
                    STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (Spec_99));
                    MR_hl_field(1, STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
                  }
                  STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_82 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_147_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_147_147, 0) = ((MR_Box) (ItemTypeDefn_82));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_147_147, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_83 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_InstDefns_148_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_148_148, 0) = ((MR_Box) (ItemInstDefn_83));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_148_148, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_84 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDefns_149_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_149_149, 0) = ((MR_Box) (ItemModeDefn_84));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_149_149, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_104 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_DeclPragmas_172_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_172_172, 0) = ((MR_Box) (ItemDeclPragma_104));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_172_172, 1) = ((MR_Box) (STATE_VARIABLE_DeclPragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_TypeRepns_168_168 = STATE_VARIABLE_TypeRepns_0_24;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ItemTypeRepn_100 = ((MR_Word) ((MR_hl_field(3, Item_67, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_168_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_168_168, 0) = ((MR_Box) (ItemTypeRepn_100));
                  MR_hl_field(1, STATE_VARIABLE_TypeRepns_168_168, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_24));
                }
                STATE_VARIABLE_TypeDefns_147_147 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_148_148 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_149_149 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_150_150 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_152_152 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_169_169 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_171_171 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_172_172 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_173_173 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_174_174 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_167_167 = STATE_VARIABLE_Specs_0_26;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_68;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_147_147;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_148_148;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_149_149;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_150_150;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_152_152;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_169_169;
      next_value_of_STATE_VARIABLE_ModeDecls_0_14 = STATE_VARIABLE_ModeDecls_170_170;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_171_171;
      next_value_of_STATE_VARIABLE_DeclPragmas_0_18 = STATE_VARIABLE_DeclPragmas_172_172;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_20 = STATE_VARIABLE_DeclMarkers_173_173;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_174_174;
      next_value_of_STATE_VARIABLE_TypeRepns_0_24 = STATE_VARIABLE_TypeRepns_168_168;
      next_value_of_STATE_VARIABLE_Specs_0_26 = STATE_VARIABLE_Specs_167_167;
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
      STATE_VARIABLE_Specs_0_26 = next_value_of_STATE_VARIABLE_Specs_0_26;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeRepnMap_15;

  parse_tree__convert_parse_tree__add_type_repn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepnMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepnMap_15));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(
  MR_Word TypeRepnInfos_3)
{
  MR_Word TypeRepnMap_4;
  MR_Word Var_6;
  MR_Box conv1_TypeRepnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[7]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[15]), TypeRepnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeRepnMap_4);
  TypeRepnMap_4 = ((MR_Word) (conv1_TypeRepnMap_4));
  return TypeRepnMap_4;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_3(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_2(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__215__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 0))));
  MR_Word IntFileKind_9 = ((MR_Unsigned) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 2))));
  MR_Word MaybeVersionNumbers_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 3))));
  MR_Word IntIncls_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 4))));
  MR_Word ImpIncls_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 5))));
  MR_Word IntAvails_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 6))));
  MR_Word ImpAvails_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 7))));
  MR_Word IntFIMs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 8))));
  MR_Word ImpFIMs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 9))));
  MR_Word IntItems_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 10))));
  MR_Word ImpItems_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt_5, (MR_Integer) 11))));
  MR_Word InclMap_20;
  MR_Word SectionImportUseMap_21;
  MR_Word IntFIMSpecs_22;
  MR_Word ImpFIMSpecs_23;
  MR_Word IntTypeDefns_24;
  MR_Word IntInstDefns_25;
  MR_Word IntModeDefns_26;
  MR_Word IntTypeClasses0_27;
  MR_Word IntInstances0_28;
  MR_Word IntPredDecls0_29;
  MR_Word RevIntModeDecls_30;
  MR_Word IntDeclPragmas0_32;
  MR_Word IntDeclMarkers0_33;
  MR_Word IntPromises0_34;
  MR_Word IntTypeDefnMap_35;
  MR_Word IntInstDefnMap_36;
  MR_Word IntModeDefnMap_37;
  MR_Word IntTypeClasses_38;
  MR_Word IntInstances_39;
  MR_Word IntPredDecls_40;
  MR_Word IntModeDecls_41;
  MR_Word IntDeclPragmas_42;
  MR_Word IntDeclMarkers_43;
  MR_Word IntPromises_44;
  MR_Word ImpTypeDefns_45;
  MR_Word ImpInstDefns_46;
  MR_Word ImpModeDefns_47;
  MR_Word ImpTypeClasses0_48;
  MR_Word ImpInstances0_49;
  MR_Word ImpPredDecls0_50;
  MR_Word RevImpModeDecls_51;
  MR_Word ImpForeignEnums_52;
  MR_Word ImpDeclPragmas0_53;
  MR_Word ImpDeclMarkers0_54;
  MR_Word ImpPromises0_55;
  MR_Word ImpTypeDefnMap_56;
  MR_Word ImpInstDefnMap_57;
  MR_Word ImpModeDefnMap_58;
  MR_Word ImpTypeClasses_59;
  MR_Word ImpInstances_60;
  MR_Word ImpPredDecls_61;
  MR_Word ImpModeDecls_62;
  MR_Word ImpForeignEnumMap_63;
  MR_Word ImpDeclPragmas_64;
  MR_Word ImpDeclMarkers_65;
  MR_Word ImpPromises_66;
  MR_Word TypeCtorCheckedMap_67;
  MR_Word InstCtorCheckedMap_68;
  MR_Word ModeCtorCheckedMap_69;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word STATE_VARIABLE_Specs_77_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_Specs_93_93;
  MR_Word STATE_VARIABLE_Specs_105_105;
  MR_Word STATE_VARIABLE_Specs_107_107;
  MR_Word STATE_VARIABLE_Specs_109_109;
  MR_Word _IntForeignEnums_31;

  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(0, Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int0\'/4", (MR_String) "trying to convert non-ifk_int0 parse_tree_int to parse_tree_int0");
  parse_tree__item_util__classify_include_modules_5_p_0(IntIncls_12, ImpIncls_13, &InclMap_20, STATE_VARIABLE_Specs_0_70, &STATE_VARIABLE_Specs_76_76);
  parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0(ModuleName_8, IntAvails_14, ImpAvails_15, &SectionImportUseMap_21, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_77_77);
  Var_78 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[13]), IntFIMs_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_78, &IntFIMSpecs_22);
  Var_80 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[14]), ImpFIMs_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_80, &ImpFIMSpecs_23);
  parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_25_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_24, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_25, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_26, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_27, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_28, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_29, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_30, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_31, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_32, (MR_Word) ((MR_Unsigned) 0U), &IntDeclMarkers0_33, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_34, STATE_VARIABLE_Specs_77_77, &STATE_VARIABLE_Specs_93_93);
  IntTypeDefnMap_35 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_24);
  IntInstDefnMap_36 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_25);
  IntModeDefnMap_37 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_26);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_27, &IntTypeClasses_38);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntInstances0_28, &IntInstances_39);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_29, &IntPredDecls_40);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_30, &IntModeDecls_41);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntDeclPragmas0_32, &IntDeclPragmas_42);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntDeclMarkers0_33, &IntDeclMarkers_43);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_34, &IntPromises_44);
  parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_25_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns_45, (MR_Word) ((MR_Unsigned) 0U), &ImpInstDefns_46, (MR_Word) ((MR_Unsigned) 0U), &ImpModeDefns_47, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_48, (MR_Word) ((MR_Unsigned) 0U), &ImpInstances0_49, (MR_Word) ((MR_Unsigned) 0U), &ImpPredDecls0_50, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_51, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums_52, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclPragmas0_53, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclMarkers0_54, (MR_Word) ((MR_Unsigned) 0U), &ImpPromises0_55, STATE_VARIABLE_Specs_93_93, &STATE_VARIABLE_Specs_105_105);
  ImpTypeDefnMap_56 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_45);
  ImpInstDefnMap_57 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_46);
  ImpModeDefnMap_58 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_48, &ImpTypeClasses_59);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), ImpInstances0_49, &ImpInstances_60);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_50, &ImpPredDecls_61);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_51, &ImpModeDecls_62);
  ImpForeignEnumMap_63 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_52);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), ImpDeclPragmas0_53, &ImpDeclPragmas_64);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ImpDeclMarkers0_54, &ImpDeclMarkers_65);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises0_55, &ImpPromises_66);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_35, ImpTypeDefnMap_56, ImpForeignEnumMap_63, &TypeCtorCheckedMap_67, STATE_VARIABLE_Specs_105_105, &STATE_VARIABLE_Specs_107_107);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_36, ImpInstDefnMap_57, &InstCtorCheckedMap_68, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_109_109);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_37, ImpModeDefnMap_58, &ModeCtorCheckedMap_69, STATE_VARIABLE_Specs_109_109, STATE_VARIABLE_Specs_71);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt0_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionImportUseMap_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_22));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_67));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_68));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_69));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_38));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_39));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_40));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_41));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_42));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers_43));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_44));
    MR_hl_field(0, base, 17) = ((MR_Box) (ImpTypeClasses_59));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpInstances_60));
    MR_hl_field(0, base, 19) = ((MR_Box) (ImpPredDecls_61));
    MR_hl_field(0, base, 20) = ((MR_Box) (ImpModeDecls_62));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpDeclPragmas_64));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpDeclMarkers_65));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPromises_66));
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
      MR_Word Item_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeDefns_134_134;
      MR_Word STATE_VARIABLE_InstDefns_135_135;
      MR_Word STATE_VARIABLE_ModeDefns_136_136;
      MR_Word STATE_VARIABLE_TypeClasses_137_137;
      MR_Word STATE_VARIABLE_Instances_139_139;
      MR_Word STATE_VARIABLE_Specs_151_151;
      MR_Word STATE_VARIABLE_PredDecls_152_152;
      MR_Word STATE_VARIABLE_RevModeDecls_153_153;
      MR_Word STATE_VARIABLE_ForeignEnums_154_154;
      MR_Word STATE_VARIABLE_DeclPragmas_155_155;
      MR_Word STATE_VARIABLE_DeclMarkers_156_156;
      MR_Word STATE_VARIABLE_Promises_157_157;
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
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

      switch (MR_tag((MR_Word) Item_62)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_173;
            MR_Word Pieces_187;
            MR_Word Spec_188;

            Var_163 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_62);
            Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_163, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
            Pieces_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[60])), Var_162);
            Var_173 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
            {
              Spec_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_188, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/25"));
              MR_hl_field(1, Spec_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_188, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_188, 3) = ((MR_Box) (Var_173));
              MR_hl_field(1, Spec_188, 4) = ((MR_Box) (Pieces_187));
            }
            {
              STATE_VARIABLE_Specs_151_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_151_151, 0) = ((MR_Box) (Spec_188));
              MR_hl_field(1, STATE_VARIABLE_Specs_151_151, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
            STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl_94 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 1));

            {
              STATE_VARIABLE_PredDecls_152_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_152_152, 0) = ((MR_Box) (ItemPredDecl_94));
              MR_hl_field(1, STATE_VARIABLE_PredDecls_152_152, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
            }
            STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_95 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_153_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_153_153, 0) = ((MR_Box) (ItemModeDecl_95));
              MR_hl_field(1, STATE_VARIABLE_RevModeDecls_153_153, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
            STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
            STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
            STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Item_62, (MR_Integer) 0))))) {
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

                Var_163 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_62);
                Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_163, (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[62])));
                Pieces_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[60])), Var_162);
                Var_173 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
                {
                  Spec_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_188, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/25"));
                  MR_hl_field(1, Spec_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_188, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_188, 3) = ((MR_Box) (Var_173));
                  MR_hl_field(1, Spec_188, 4) = ((MR_Box) (Pieces_187));
                }
                {
                  STATE_VARIABLE_Specs_151_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_151_151, 0) = ((MR_Box) (Spec_188));
                  MR_hl_field(1, STATE_VARIABLE_Specs_151_151, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemForeignEnum_96 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_154_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_154_154, 0) = ((MR_Box) (ItemForeignEnum_96));
                  MR_hl_field(1, STATE_VARIABLE_ForeignEnums_154_154, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemDeclMarker_98 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_DeclMarkers_156_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_156_156, 0) = ((MR_Box) (ItemDeclMarker_98));
                  MR_hl_field(1, STATE_VARIABLE_DeclMarkers_156_156, 1) = ((MR_Box) (STATE_VARIABLE_DeclMarkers_0_20));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_99 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Promises_157_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Promises_157_157, 0) = ((MR_Box) (ItemPromise_99));
                  MR_hl_field(1, STATE_VARIABLE_Promises_157_157, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_22));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_79 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_137_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_137_137, 0) = ((MR_Box) (ItemTypeClass_79));
                  MR_hl_field(1, STATE_VARIABLE_TypeClasses_137_137, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_80 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));
                MR_Word ClassName_81 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 0))));
                MR_Word Types_82 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 1))));
                MR_Word OrigTypes_83 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 2))));
                MR_Word Constraints_84 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 3))));
                MR_Word Body_85 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 4))));
                MR_Word TVarSet_86 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 5))));
                MR_Word Module_87 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 6))));
                MR_Word Context_88 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 7))));
                MR_Word SeqNum_89 = ((MR_Word) ((MR_hl_field(0, ItemInstance_80, (MR_Integer) 8))));

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
                    STATE_VARIABLE_Instances_139_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Instances_139_139, 0) = ((MR_Box) (ItemAbstractInstance_90));
                    MR_hl_field(1, STATE_VARIABLE_Instances_139_139, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                  }
                  STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
                }
                else
                {
                  MR_Word Spec_93;

                  {
                    Spec_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/25"));
                    MR_hl_field(1, Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, Spec_93, 3) = ((MR_Box) (Context_88));
                    MR_hl_field(1, Spec_93, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_parse_tree_scalar_common_2[65])));
                  }
                  {
                    STATE_VARIABLE_Specs_151_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_151_151, 0) = ((MR_Box) (Spec_93));
                    MR_hl_field(1, STATE_VARIABLE_Specs_151_151, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                  }
                  STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_76 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_134_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_134_134, 0) = ((MR_Box) (ItemTypeDefn_76));
                  MR_hl_field(1, STATE_VARIABLE_TypeDefns_134_134, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemInstDefn_77 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_InstDefns_135_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_135_135, 0) = ((MR_Box) (ItemInstDefn_77));
                  MR_hl_field(1, STATE_VARIABLE_InstDefns_135_135, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ItemModeDefn_78 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDefns_136_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_136_136, 0) = ((MR_Box) (ItemModeDefn_78));
                  MR_hl_field(1, STATE_VARIABLE_ModeDefns_136_136, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclPragmas_155_155 = STATE_VARIABLE_DeclPragmas_0_18;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemDeclPragma_97 = ((MR_Word) ((MR_hl_field(3, Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_DeclPragmas_155_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_155_155, 0) = ((MR_Box) (ItemDeclPragma_97));
                  MR_hl_field(1, STATE_VARIABLE_DeclPragmas_155_155, 1) = ((MR_Box) (STATE_VARIABLE_DeclPragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_134_134 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_135_135 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_136_136 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_137_137 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_139_139 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_152_152 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_153_153 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_154_154 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_DeclMarkers_156_156 = STATE_VARIABLE_DeclMarkers_0_20;
                STATE_VARIABLE_Promises_157_157 = STATE_VARIABLE_Promises_0_22;
                STATE_VARIABLE_Specs_151_151 = STATE_VARIABLE_Specs_0_24;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_63;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_134_134;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_135_135;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_136_136;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_137_137;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_139_139;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_152_152;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_153_153;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_154_154;
      next_value_of_STATE_VARIABLE_DeclPragmas_0_18 = STATE_VARIABLE_DeclPragmas_155_155;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_20 = STATE_VARIABLE_DeclMarkers_156_156;
      next_value_of_STATE_VARIABLE_Promises_0_22 = STATE_VARIABLE_Promises_157_157;
      next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_151_151;
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
      STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ForeignEnumMap_17;

  parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnumMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumMap_17));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(
  MR_Word ForeignEnums_3)
{
  MR_Word ForeignEnumMap_4;
  MR_Word Var_6;
  MR_Box conv1_ForeignEnumMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[8]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[12]), ForeignEnums_3, ((MR_Box) (Var_6)), &conv1_ForeignEnumMap_4);
  ForeignEnumMap_4 = ((MR_Word) (conv1_ForeignEnumMap_4));
  return ForeignEnumMap_4;
}

static void MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModeDefnMap_24;

  parse_tree__convert_parse_tree__add_mode_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefnMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefnMap_24));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(
  MR_Word ModeDefnInfos_3)
{
  MR_Word ModeDefnMap_4;
  MR_Word Var_6;
  MR_Box conv1_ModeDefnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[11]), ModeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_ModeDefnMap_4);
  ModeDefnMap_4 = ((MR_Word) (conv1_ModeDefnMap_4));
  return ModeDefnMap_4;
}

static void MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InstDefnMap_25;

  parse_tree__convert_parse_tree__add_inst_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefnMap_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefnMap_25));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(
  MR_Word InstDefnInfos_3)
{
  MR_Word InstDefnMap_4;
  MR_Word Var_6;
  MR_Box conv1_InstDefnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[10]), InstDefnInfos_3, ((MR_Box) (Var_6)), &conv1_InstDefnMap_4);
  InstDefnMap_4 = ((MR_Word) (conv1_InstDefnMap_4));
  return InstDefnMap_4;
}

static void MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeDefnMap_46;

  parse_tree__convert_parse_tree__add_type_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefnMap_46);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_46));
}

MR_Word MR_CALL 
parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(
  MR_Word TypeDefnInfos_3)
{
  MR_Word TypeDefnMap_4;
  MR_Word Var_6;
  MR_Box conv1_TypeDefnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[9]), TypeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeDefnMap_4);
  TypeDefnMap_4 = ((MR_Word) (conv1_TypeDefnMap_4));
  return TypeDefnMap_4;
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
