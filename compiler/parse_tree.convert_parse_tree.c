/*
** Automatically generated from `convert_parse_tree.m'
** by the Mercury compiler,
** version rotd-2022-04-06
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
#include "parse_tree.check_type_inst_mode_defns.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

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
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1246__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__933__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__758__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__577__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__363__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__216__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_78);

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
parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImportMap_0_4,
  MR_Word * STATE_VARIABLE_IntImportMap_5,
  MR_Word STATE_VARIABLE_IntUseMap_0_6,
  MR_Word * STATE_VARIABLE_IntUseMap_7,
  MR_Word STATE_VARIABLE_IntFIMSpecMap_0_8,
  MR_Word * STATE_VARIABLE_IntFIMSpecMap_9,
  MR_Word STATE_VARIABLE_RevIntTypeDefns_0_10,
  MR_Word * STATE_VARIABLE_RevIntTypeDefns_11,
  MR_Word STATE_VARIABLE_RevIntInstDefns_0_12,
  MR_Word * STATE_VARIABLE_RevIntInstDefns_13,
  MR_Word STATE_VARIABLE_RevIntModeDefns_0_14,
  MR_Word * STATE_VARIABLE_RevIntModeDefns_15,
  MR_Word STATE_VARIABLE_RevIntTypeClasses_0_16,
  MR_Word * STATE_VARIABLE_RevIntTypeClasses_17,
  MR_Word STATE_VARIABLE_RevIntInstances_0_18,
  MR_Word * STATE_VARIABLE_RevIntInstances_19,
  MR_Word STATE_VARIABLE_RevIntPredDecls_0_20,
  MR_Word * STATE_VARIABLE_RevIntPredDecls_21,
  MR_Word STATE_VARIABLE_RevIntModeDecls_0_22,
  MR_Word * STATE_VARIABLE_RevIntModeDecls_23,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_25,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_26,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_27,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_28,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_29,
  MR_Word STATE_VARIABLE_RevIntPromises_0_30,
  MR_Word * STATE_VARIABLE_RevIntPromises_31,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_32,
  MR_Word * STATE_VARIABLE_RevIntInitialises_33,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_34,
  MR_Word * STATE_VARIABLE_RevIntFinalises_35,
  MR_Word STATE_VARIABLE_RevIntMutables_0_36,
  MR_Word * STATE_VARIABLE_RevIntMutables_37,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_38,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_39,
  MR_Word STATE_VARIABLE_IntSelfFIMLangs_0_40,
  MR_Word * STATE_VARIABLE_IntSelfFIMLangs_41,
  MR_Word STATE_VARIABLE_ImpIncls_0_42,
  MR_Word * STATE_VARIABLE_ImpIncls_43,
  MR_Word STATE_VARIABLE_ImpImportMap_0_44,
  MR_Word * STATE_VARIABLE_ImpImportMap_45,
  MR_Word STATE_VARIABLE_ImpUseMap_0_46,
  MR_Word * STATE_VARIABLE_ImpUseMap_47,
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
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_66,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_67,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_68,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_69,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_70,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_71,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_72,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_73,
  MR_Word STATE_VARIABLE_RevImpPromises_0_74,
  MR_Word * STATE_VARIABLE_RevImpPromises_75,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_76,
  MR_Word * STATE_VARIABLE_RevImpInitialises_77,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_78,
  MR_Word * STATE_VARIABLE_RevImpFinalises_79,
  MR_Word STATE_VARIABLE_RevImpMutables_0_80,
  MR_Word * STATE_VARIABLE_RevImpMutables_81,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_82,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_83,
  MR_Word STATE_VARIABLE_ImpSelfFIMLangs_0_84,
  MR_Word * STATE_VARIABLE_ImpSelfFIMLangs_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_39_p_0(
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
  MR_Word STATE_VARIABLE_RevForeignEnums_0_18,
  MR_Word * STATE_VARIABLE_RevForeignEnums_19,
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_20,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_21,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_23,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevImplPragmas_25,
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
parse_tree__convert_parse_tree__classify_src_items_int_35_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_int_35_p_0(
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
  MR_Word STATE_VARIABLE_RevImplPragmas_0_18,
  MR_Word * STATE_VARIABLE_RevImplPragmas_19,
  MR_Word STATE_VARIABLE_BadClausePreds_0_20,
  MR_Word * STATE_VARIABLE_BadClausePreds_21,
  MR_Word STATE_VARIABLE_RevPromises_0_22,
  MR_Word * STATE_VARIABLE_RevPromises_23,
  MR_Word STATE_VARIABLE_RevInitialises_0_24,
  MR_Word * STATE_VARIABLE_RevInitialises_25,
  MR_Word STATE_VARIABLE_RevFinalises_0_26,
  MR_Word * STATE_VARIABLE_RevFinalises_27,
  MR_Word STATE_VARIABLE_RevMutables_0_28,
  MR_Word * STATE_VARIABLE_RevMutables_29,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_30,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_31,
  MR_Word STATE_VARIABLE_SelfFIMLangs_0_32,
  MR_Word * STATE_VARIABLE_SelfFIMLangs_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

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


static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[151][2];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[40][3];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[11][6];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[14][5];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[1][1];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[1][8];

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][9];




static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_1[151][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[4]))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[5]))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[6]))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[20]))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row  28 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row  30 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0))
  },
  /* row  31 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row  32 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[31]))
  },
  /* row  33 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  34 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row  35 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row  36 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row  37 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
  /* row  38 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  39 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row  40 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row  41 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row  42 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row  43 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0))
  },
  /* row  44 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain any"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its implementation section."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations in its implementation section."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "version number information."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[47])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain any"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[47])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an implementation section."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file must not have"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain any"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[71])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[75])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int0 file may not contain"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int1 file may not contain"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int file may not contain"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .opt file may not contain"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .trans_opt file may not contain"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma for"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma for the same module/language combination"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because there is a"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant,"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma in the interface section is here."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause for"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A Mercury source file may not contain"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[45])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [...]"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with its abstract version, which omits"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "replacing it in the interface section"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "move this declaration to the implementation section,"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you intend to export this instance,"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[146]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 148 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[145])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__convert_parse_tree_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_5[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[149])))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_2[40][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[20]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_1[3]))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[2])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_int_35_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_6[0])),
    ((MR_Box) (parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_defn_map_to_type_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__inst_ctor_defn_map_to_inst_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__mode_ctor_defn_map_to_mode_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_3[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__type_ctor_repn_map_to_type_repns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_type_ctor_defns_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[11])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_inst_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[12])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[13])),
    ((MR_Box) (parse_tree__convert_parse_tree__accumulate_mode_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_3[11][6] = {
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

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_4[14][5] = {
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

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_5[1][1] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[131])))
  },
};

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_6[1][8] = {
  /* row   0 */
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

static /* final */ const MR_Box parse_tree__convert_parse_tree_scalar_common_7[1][9] = {
  /* row   0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
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

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_parse_tree__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_parse_tree__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_fim_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_parse_tree__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_int_0_0[12] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_int_0_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_int_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_int_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_int_0_0
};

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_int_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_parse_tree_opt_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_parse_tree_opt_0_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_opt_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_parse_tree_opt_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_parse_tree_opt_0_0
};

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_parse_tree_opt_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__field_types_raw_compilation_unit_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_compilation_unit_0_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_compilation_unit_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_compilation_unit_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_compilation_unit_0_0
};

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_compilation_unit_0[1] = {
  (MR_Integer) 0
};

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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_stag_ordered_raw_item_block_0_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_item_block_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_name_ordered_raw_item_block_0[1] = {
  &parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__du_functor_desc_raw_item_block_0_0
};

static const MR_Integer parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__functor_number_map_raw_item_block_0[1] = {
  (MR_Integer) 0
};

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
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1246__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded = (OptFileKind_9 == HeadVar__2_41);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__933__1_2_p_0(
  MR_Word OptFileKind_9,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded = (OptFileKind_9 == HeadVar__2_64);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__758__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_75)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_75);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__577__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_65);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__363__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_71)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_71);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__216__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_78)
{
  MR_bool succeeded = (IntFileKind_9 == HeadVar__2_78);

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[44]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[44]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
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

        mercury__term____Compare____context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[43]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[43]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
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

        mercury__term____Compare____context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]), HeadVar__1_1, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__prog_item____Unify____maybe_version_numbers_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_32_32 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[39]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[40]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_37_37 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[41]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_38_38 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_39_39 = (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[42]);
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
parse_tree__convert_parse_tree__classify_foreign_import_module_5_p_0(
  MR_Word ItemFIM_6,
  MR_Word STATE_VARIABLE_FIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_FIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
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
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[103])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[102])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[118])));
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
      MR_hl_field(MR_mktag(0), PrevMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[124])));
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
      Spec_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_foreign_import_module\'/5"));
      MR_hl_field(MR_mktag(3), Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(3), Spec_19, 4) = ((MR_Box) (Var_65));
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

static void MR_CALL 
parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(
  MR_Word IntFIMSpecMap_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ImpFIMSpecMap_0_20,
  MR_Word * STATE_VARIABLE_ImpFIMSpecMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
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
    MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[112])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[103])));
    MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[102])));
    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[74])));
    MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    ImpPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ImpPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[101])));
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
    MR_hl_field(MR_mktag(0), IntMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[117])));
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
    Spec_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.report_int_imp_fim\'/6"));
    MR_hl_field(MR_mktag(3), Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(MR_mktag(3), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(3), Spec_19, 4) = ((MR_Box) (Var_75));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_23 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
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
  MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 0))));
  MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 1))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[36]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[38]), AbstractDefns_6);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_13);
  Var_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[37]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[39]), EqvDefns_7);
  Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_16);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), Var_12, Var_15);
  *STATE_VARIABLE_ModeDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), STATE_VARIABLE_ModeDefns_0_8, Var_11);
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
  MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 0))));
  MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 1))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[34]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[36]), AbstractDefns_6);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), Var_13);
  Var_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[35]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[37]), EqvDefns_7);
  Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), Var_16);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), Var_12, Var_15);
  *STATE_VARIABLE_InstDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), STATE_VARIABLE_InstDefns_0_8, Var_11);
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
  MR_Word AbstractSolverDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 0))));
  MR_Word SolverDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 1))));
  MR_Word AbstractStdDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 2))));
  MR_Word EqvDefns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 3))));
  MR_Word DuDefns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 4))));
  MR_Word SubDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 5))));
  MR_Word CJCsEDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorAllDefns_4, (MR_Integer) 6))));
  MR_Word ForeignDefnsC_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_12, (MR_Integer) 0))));
  MR_Word ForeignDefnsJava_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_12, (MR_Integer) 1))));
  MR_Word ForeignDefnsCsharp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEDefns_12, (MR_Integer) 2))));
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
    MR_Word X_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractSolverDefns_6, (MR_Integer) 0))));

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (X_73));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[27]), Var_23);
  Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[28]), SolverDefns_7);
  if ((AbstractStdDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_30 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractStdDefns_8, (MR_Integer) 0))));

    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (X_76));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[29]), Var_30);
  Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[30]), EqvDefns_9);
  Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[31]), DuDefns_10);
  Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[30]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[32]), SubDefns_11);
  Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[33]), ForeignDefnsC_13);
  Var_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[34]), ForeignDefnsJava_14);
  Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[35]), ForeignDefnsCsharp_15);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_44, Var_46);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_41, Var_43);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_38, Var_40);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_35, Var_37);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_32, Var_34);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_28, Var_31);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_25, Var_27);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_21, Var_24);
  Var_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), Var_20);
  *STATE_VARIABLE_TypeDefns_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), STATE_VARIABLE_TypeDefns_0_16, Var_19);
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_17)
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

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), STATE_VARIABLE_ForeignEnumMap_0_16, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums0_14);
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
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (AllEnums_15)), STATE_VARIABLE_ForeignEnumMap_0_16, STATE_VARIABLE_ForeignEnumMap_17);
}

static void MR_CALL 
parse_tree__convert_parse_tree__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15)
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

static void MR_CALL 
parse_tree__convert_parse_tree__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_23,
  MR_Word * STATE_VARIABLE_ModeDefnMap_24)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 2))));
  MR_Integer Arity_12;
  MR_Word ModeCtor_13;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word AllDefns0_14;
  MR_Box conv0_AllDefns0_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[33]), Params_7, &Arity_12);
  {
    ModeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ModeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(MR_mktag(0), ModeCtor_13, 1) = ((MR_Box) (Arity_12));
  }
  Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 0))));
  Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 1))));
  Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 3))));
  Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 4))));
  Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_4, (MR_Integer) 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), STATE_VARIABLE_ModeDefnMap_0_23, ((MR_Box) (ModeCtor_13)), &conv0_AllDefns0_14);
  if (succeeded)
  {
    AllDefns0_14 = ((MR_Word) (conv0_AllDefns0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_14, (MR_Integer) 0))));
    MR_Word EqvDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_14, (MR_Integer) 1))));
    MR_Word AllDefns_19;

    if ((MaybeAbstractModeDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AbstractDefn_17;
      MR_Word AbstractDefns_18;

      {
        AbstractDefn_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractDefn_17, 0) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), AbstractDefn_17, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), AbstractDefn_17, 2) = NULL;
        MR_hl_field(MR_mktag(0), AbstractDefn_17, 3) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), AbstractDefn_17, 4) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), AbstractDefn_17, 5) = ((MR_Box) (Var_88));
      }
      {
        AbstractDefns_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AbstractDefns_18, 0) = ((MR_Box) (AbstractDefn_17));
        MR_hl_field(MR_mktag(1), AbstractDefns_18, 1) = ((MR_Box) (AbstractDefns0_15));
      }
      {
        AllDefns_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_19, 0) = ((MR_Box) (AbstractDefns_18));
        MR_hl_field(MR_mktag(0), AllDefns_19, 1) = ((MR_Box) (EqvDefns0_16));
      }
    }
    else
    {
      MR_Word ModeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_8, (MR_Integer) 0))));
      MR_Word EqvDefn_21;
      MR_Word EqvDefns_22;

      {
        EqvDefn_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EqvDefn_21, 0) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), EqvDefn_21, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), EqvDefn_21, 2) = ((MR_Box) (ModeDefn_20));
        MR_hl_field(MR_mktag(0), EqvDefn_21, 3) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), EqvDefn_21, 4) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), EqvDefn_21, 5) = ((MR_Box) (Var_88));
      }
      {
        EqvDefns_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EqvDefns_22, 0) = ((MR_Box) (EqvDefn_21));
        MR_hl_field(MR_mktag(1), EqvDefns_22, 1) = ((MR_Box) (EqvDefns0_16));
      }
      {
        AllDefns_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_19, 0) = ((MR_Box) (AbstractDefns0_15));
        MR_hl_field(MR_mktag(0), AllDefns_19, 1) = ((MR_Box) (EqvDefns_22));
      }
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (ModeCtor_13)), ((MR_Box) (AllDefns_19)), STATE_VARIABLE_ModeDefnMap_0_23, STATE_VARIABLE_ModeDefnMap_24);
  }
  else
  {
    MR_Word AllDefns_42;

    if ((MaybeAbstractModeDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_31;
      MR_Word AbstractDefn_35;

      {
        AbstractDefn_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractDefn_35, 0) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), AbstractDefn_35, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), AbstractDefn_35, 2) = NULL;
        MR_hl_field(MR_mktag(0), AbstractDefn_35, 3) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), AbstractDefn_35, 4) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), AbstractDefn_35, 5) = ((MR_Box) (Var_88));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (AbstractDefn_35));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_42, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), AllDefns_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_28;
      MR_Word ModeDefn_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_8, (MR_Integer) 0))));
      MR_Word EqvDefn_37;

      {
        EqvDefn_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EqvDefn_37, 0) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), EqvDefn_37, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), EqvDefn_37, 2) = ((MR_Box) (ModeDefn_36));
        MR_hl_field(MR_mktag(0), EqvDefn_37, 3) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), EqvDefn_37, 4) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), EqvDefn_37, 5) = ((MR_Box) (Var_88));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (EqvDefn_37));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), AllDefns_42, 1) = ((MR_Box) (Var_28));
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
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 1))));
  MR_Word MaybeAbstractInstDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 3))));
  MR_Integer Arity_13;
  MR_Word InstCtor_14;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word AllDefns0_15;
  MR_Box conv0_AllDefns0_15;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[33]), Params_7, &Arity_13);
  {
    InstCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), InstCtor_14, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(MR_mktag(0), InstCtor_14, 1) = ((MR_Box) (Arity_13));
  }
  Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 0))));
  Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 1))));
  Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 2))));
  Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 4))));
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 5))));
  Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_4, (MR_Integer) 6))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), STATE_VARIABLE_InstDefnMap_0_24, ((MR_Box) (InstCtor_14)), &conv0_AllDefns0_15);
  if (succeeded)
  {
    AllDefns0_15 = ((MR_Word) (conv0_AllDefns0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_15, (MR_Integer) 0))));
    MR_Word EqvDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_15, (MR_Integer) 1))));
    MR_Word AllDefns_20;

    if ((MaybeAbstractInstDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AbstractDefn_18;
      MR_Word AbstractDefns_19;

      {
        AbstractDefn_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 1) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 2) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 3) = NULL;
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 4) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 5) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), AbstractDefn_18, 6) = ((MR_Box) (Var_95));
      }
      {
        AbstractDefns_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AbstractDefns_19, 0) = ((MR_Box) (AbstractDefn_18));
        MR_hl_field(MR_mktag(1), AbstractDefns_19, 1) = ((MR_Box) (AbstractDefns0_16));
      }
      {
        AllDefns_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_20, 0) = ((MR_Box) (AbstractDefns_19));
        MR_hl_field(MR_mktag(0), AllDefns_20, 1) = ((MR_Box) (EqvDefns0_17));
      }
    }
    else
    {
      MR_Word InstDefn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_9, (MR_Integer) 0))));
      MR_Word EqvDefn_22;
      MR_Word EqvDefns_23;

      {
        EqvDefn_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EqvDefn_22, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), EqvDefn_22, 1) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), EqvDefn_22, 2) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), EqvDefn_22, 3) = ((MR_Box) (InstDefn_21));
        MR_hl_field(MR_mktag(0), EqvDefn_22, 4) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), EqvDefn_22, 5) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), EqvDefn_22, 6) = ((MR_Box) (Var_95));
      }
      {
        EqvDefns_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EqvDefns_23, 0) = ((MR_Box) (EqvDefn_22));
        MR_hl_field(MR_mktag(1), EqvDefns_23, 1) = ((MR_Box) (EqvDefns0_17));
      }
      {
        AllDefns_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_20, 0) = ((MR_Box) (AbstractDefns0_16));
        MR_hl_field(MR_mktag(0), AllDefns_20, 1) = ((MR_Box) (EqvDefns_23));
      }
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (InstCtor_14)), ((MR_Box) (AllDefns_20)), STATE_VARIABLE_InstDefnMap_0_24, STATE_VARIABLE_InstDefnMap_25);
  }
  else
  {
    MR_Word AllDefns_43;

    if ((MaybeAbstractInstDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_32;
      MR_Word AbstractDefn_36;

      {
        AbstractDefn_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 1) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 2) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 3) = NULL;
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 4) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 5) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), AbstractDefn_36, 6) = ((MR_Box) (Var_95));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (AbstractDefn_36));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_43, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), AllDefns_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_29;
      MR_Word InstDefn_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_9, (MR_Integer) 0))));
      MR_Word EqvDefn_38;

      {
        EqvDefn_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EqvDefn_38, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), EqvDefn_38, 1) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), EqvDefn_38, 2) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), EqvDefn_38, 3) = ((MR_Box) (InstDefn_37));
        MR_hl_field(MR_mktag(0), EqvDefn_38, 4) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), EqvDefn_38, 5) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), EqvDefn_38, 6) = ((MR_Box) (Var_95));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (EqvDefn_38));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AllDefns_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AllDefns_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), AllDefns_43, 1) = ((MR_Box) (Var_29));
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
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 1))));
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 2))));
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
  MR_Word STATE_VARIABLE_ForeignDefnsCsharp_66_66;
  MR_Word STATE_VARIABLE_ForeignDefnsJava_69_69;
  MR_Word STATE_VARIABLE_ForeignDefnsC_72_72;
  MR_Word STATE_VARIABLE_SubDefns_75_75;
  MR_Word STATE_VARIABLE_DuDefns_78_78;
  MR_Word STATE_VARIABLE_EqvDefns_81_81;
  MR_Word STATE_VARIABLE_SolverDefns_84_84;
  MR_Word STATE_VARIABLE_AbsStdDefns_87_87;
  MR_Word STATE_VARIABLE_AbsSolverDefns_90_90;
  MR_Word Var_93;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word AllDefns0_23;
  MR_Box conv0_AllDefns0_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[25]), Params_7, &Arity_12);
  {
    TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(MR_mktag(0), TypeCtor_13, 1) = ((MR_Box) (Arity_12));
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

    STATE_VARIABLE_AbsSolverDefns_47_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 0))));
    STATE_VARIABLE_SolverDefns_48_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 1))));
    STATE_VARIABLE_AbsStdDefns_49_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 2))));
    STATE_VARIABLE_EqvDefns_50_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 3))));
    STATE_VARIABLE_DuDefns_51_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 4))));
    STATE_VARIABLE_SubDefns_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 5))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_23, (MR_Integer) 6))));
    STATE_VARIABLE_ForeignDefnsC_54_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));
    STATE_VARIABLE_ForeignDefnsJava_55_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 1))));
    STATE_VARIABLE_ForeignDefnsCsharp_56_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 2))));
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
  Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 0))));
  Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 1))));
  Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 3))));
  Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 4))));
  Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 5))));
  switch (MR_tag((MR_Word) TypeDefn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_32 = (MR_Word) ((MR_Word) (TypeDefn_8));
        MR_Word DuDefnInfo_33;
        MR_Word Var_79;

        {
          DuDefnInfo_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DuDefnInfo_33, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), DuDefnInfo_33, 1) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(0), DuDefnInfo_33, 2) = ((MR_Box) (DetailsDu_32));
          MR_hl_field(MR_mktag(0), DuDefnInfo_33, 3) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), DuDefnInfo_33, 4) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), DuDefnInfo_33, 5) = ((MR_Box) (Var_145));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (DuDefnInfo_33));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_DuDefns_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[29]), STATE_VARIABLE_DuDefns_51_51, Var_79);
        STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
        STATE_VARIABLE_SolverDefns_84_84 = STATE_VARIABLE_SolverDefns_48_48;
        STATE_VARIABLE_AbsStdDefns_87_87 = STATE_VARIABLE_AbsStdDefns_49_49;
        STATE_VARIABLE_EqvDefns_81_81 = STATE_VARIABLE_EqvDefns_50_50;
        STATE_VARIABLE_SubDefns_75_75 = STATE_VARIABLE_SubDefns_52_52;
        STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
        STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
        STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_34 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 1));
        MR_Word SubDefnInfo_35;
        MR_Word Var_76;

        {
          SubDefnInfo_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubDefnInfo_35, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), SubDefnInfo_35, 1) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(0), SubDefnInfo_35, 2) = ((MR_Box) (DetailsSub_34));
          MR_hl_field(MR_mktag(0), SubDefnInfo_35, 3) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), SubDefnInfo_35, 4) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), SubDefnInfo_35, 5) = ((MR_Box) (Var_145));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (SubDefnInfo_35));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_SubDefns_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[30]), STATE_VARIABLE_SubDefns_52_52, Var_76);
        STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
        STATE_VARIABLE_SolverDefns_84_84 = STATE_VARIABLE_SolverDefns_48_48;
        STATE_VARIABLE_AbsStdDefns_87_87 = STATE_VARIABLE_AbsStdDefns_49_49;
        STATE_VARIABLE_EqvDefns_81_81 = STATE_VARIABLE_EqvDefns_50_50;
        STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
        STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
        STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
        STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver_28 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 2));
        MR_Word SolverDefnInfo_29;
        MR_Word Var_85;

        {
          SolverDefnInfo_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverDefnInfo_29, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), SolverDefnInfo_29, 1) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(0), SolverDefnInfo_29, 2) = ((MR_Box) (DetailsSolver_28));
          MR_hl_field(MR_mktag(0), SolverDefnInfo_29, 3) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), SolverDefnInfo_29, 4) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), SolverDefnInfo_29, 5) = ((MR_Box) (Var_145));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (SolverDefnInfo_29));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_SolverDefns_84_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[27]), STATE_VARIABLE_SolverDefns_48_48, Var_85);
        STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
        STATE_VARIABLE_AbsStdDefns_87_87 = STATE_VARIABLE_AbsStdDefns_49_49;
        STATE_VARIABLE_EqvDefns_81_81 = STATE_VARIABLE_EqvDefns_50_50;
        STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
        STATE_VARIABLE_SubDefns_75_75 = STATE_VARIABLE_SubDefns_52_52;
        STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
        STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
        STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
            MR_Word EqvDefnInfo_31;
            MR_Word Var_82;

            {
              EqvDefnInfo_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), EqvDefnInfo_31, 0) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(0), EqvDefnInfo_31, 1) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(0), EqvDefnInfo_31, 2) = ((MR_Box) (DetailsEqv_30));
              MR_hl_field(MR_mktag(0), EqvDefnInfo_31, 3) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(0), EqvDefnInfo_31, 4) = ((MR_Box) (Var_146));
              MR_hl_field(MR_mktag(0), EqvDefnInfo_31, 5) = ((MR_Box) (Var_145));
            }
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (EqvDefnInfo_31));
              MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            STATE_VARIABLE_EqvDefns_81_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[28]), STATE_VARIABLE_EqvDefns_50_50, Var_82);
            STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
            STATE_VARIABLE_SolverDefns_84_84 = STATE_VARIABLE_SolverDefns_48_48;
            STATE_VARIABLE_AbsStdDefns_87_87 = STATE_VARIABLE_AbsStdDefns_49_49;
            STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
            STATE_VARIABLE_SubDefns_75_75 = STATE_VARIABLE_SubDefns_52_52;
            STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
            STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
            STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DetailsAbs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
            MR_Word AbsDefnInfo_25;

            {
              AbsDefnInfo_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbsDefnInfo_25, 0) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(0), AbsDefnInfo_25, 1) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(0), AbsDefnInfo_25, 2) = ((MR_Box) (DetailsAbs_24));
              MR_hl_field(MR_mktag(0), AbsDefnInfo_25, 3) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(0), AbsDefnInfo_25, 4) = ((MR_Box) (Var_146));
              MR_hl_field(MR_mktag(0), AbsDefnInfo_25, 5) = ((MR_Box) (Var_145));
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
                      MR_Word Var_88;

                      {
                        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (AbsDefnInfo_25));
                        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      STATE_VARIABLE_AbsStdDefns_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbsStdDefns_49_49, Var_88);
                      STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_91;

                      {
                        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (AbsDefnInfo_25));
                        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      STATE_VARIABLE_AbsSolverDefns_90_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbsSolverDefns_47_47, Var_91);
                      STATE_VARIABLE_AbsStdDefns_87_87 = STATE_VARIABLE_AbsStdDefns_49_49;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_88;

                  {
                    Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (AbsDefnInfo_25));
                    MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_AbsStdDefns_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbsStdDefns_49_49, Var_88);
                  STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_88;

                  {
                    Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (AbsDefnInfo_25));
                    MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_AbsStdDefns_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[26]), STATE_VARIABLE_AbsStdDefns_49_49, Var_88);
                  STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
                }
                break;
            }
            STATE_VARIABLE_SolverDefns_84_84 = STATE_VARIABLE_SolverDefns_48_48;
            STATE_VARIABLE_EqvDefns_81_81 = STATE_VARIABLE_EqvDefns_50_50;
            STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
            STATE_VARIABLE_SubDefns_75_75 = STATE_VARIABLE_SubDefns_52_52;
            STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
            STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
            STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
            MR_Word ForeignDefnInfo_37;
            MR_Word LangType_38;

            {
              ForeignDefnInfo_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignDefnInfo_37, 0) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(0), ForeignDefnInfo_37, 1) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(0), ForeignDefnInfo_37, 2) = ((MR_Box) (DetailsForeign_36));
              MR_hl_field(MR_mktag(0), ForeignDefnInfo_37, 3) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(0), ForeignDefnInfo_37, 4) = ((MR_Box) (Var_146));
              MR_hl_field(MR_mktag(0), ForeignDefnInfo_37, 5) = ((MR_Box) (Var_145));
            }
            LangType_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_36, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) LangType_38)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_73;

                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ForeignDefnInfo_37));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_ForeignDefnsC_72_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), STATE_VARIABLE_ForeignDefnsC_54_54, Var_73);
                  STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
                  STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (ForeignDefnInfo_37));
                    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_ForeignDefnsJava_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), STATE_VARIABLE_ForeignDefnsJava_55_55, Var_70);
                  STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
                  STATE_VARIABLE_ForeignDefnsCsharp_66_66 = STATE_VARIABLE_ForeignDefnsCsharp_56_56;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_67;

                  {
                    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ForeignDefnInfo_37));
                    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_ForeignDefnsCsharp_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[32]), STATE_VARIABLE_ForeignDefnsCsharp_56_56, Var_67);
                  STATE_VARIABLE_ForeignDefnsC_72_72 = STATE_VARIABLE_ForeignDefnsC_54_54;
                  STATE_VARIABLE_ForeignDefnsJava_69_69 = STATE_VARIABLE_ForeignDefnsJava_55_55;
                }
                break;
            }
            STATE_VARIABLE_AbsSolverDefns_90_90 = STATE_VARIABLE_AbsSolverDefns_47_47;
            STATE_VARIABLE_SolverDefns_84_84 = STATE_VARIABLE_SolverDefns_48_48;
            STATE_VARIABLE_AbsStdDefns_87_87 = STATE_VARIABLE_AbsStdDefns_49_49;
            STATE_VARIABLE_EqvDefns_81_81 = STATE_VARIABLE_EqvDefns_50_50;
            STATE_VARIABLE_DuDefns_78_78 = STATE_VARIABLE_DuDefns_51_51;
            STATE_VARIABLE_SubDefns_75_75 = STATE_VARIABLE_SubDefns_52_52;
          }
          break;
      }
      break;
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsC_72_72));
    MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsJava_69_69));
    MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsCsharp_66_66));
  }
  {
    AllDefns_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), AllDefns_44, 0) = ((MR_Box) (STATE_VARIABLE_AbsSolverDefns_90_90));
    MR_hl_field(MR_mktag(0), AllDefns_44, 1) = ((MR_Box) (STATE_VARIABLE_SolverDefns_84_84));
    MR_hl_field(MR_mktag(0), AllDefns_44, 2) = ((MR_Box) (STATE_VARIABLE_AbsStdDefns_87_87));
    MR_hl_field(MR_mktag(0), AllDefns_44, 3) = ((MR_Box) (STATE_VARIABLE_EqvDefns_81_81));
    MR_hl_field(MR_mktag(0), AllDefns_44, 4) = ((MR_Box) (STATE_VARIABLE_DuDefns_78_78));
    MR_hl_field(MR_mktag(0), AllDefns_44, 5) = ((MR_Box) (STATE_VARIABLE_SubDefns_75_75));
    MR_hl_field(MR_mktag(0), AllDefns_44, 6) = ((MR_Box) (Var_93));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (AllDefns_44)), STATE_VARIABLE_TypeDefnMap_0_45, STATE_VARIABLE_TypeDefnMap_46);
}

static void MR_CALL 
parse_tree__convert_parse_tree__undo_default_names_in_clause_2_p_0(
  MR_Word Clause0_3,
  MR_Word * Clause_4)
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

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[24]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[26]), TypeCtorRepnMap_3, ((MR_Box) (Var_7)), &conv1_TypeRepnsCord_5);
  TypeRepnsCord_5 = ((MR_Word) (conv1_TypeRepnsCord_5));
  TypeRepns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), TypeRepnsCord_5);
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

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[23]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[25]), ModeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_ModeDefnsCord_5);
  ModeDefnsCord_5 = ((MR_Word) (conv1_ModeDefnsCord_5));
  ModeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), ModeDefnsCord_5);
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

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[22]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[24]), InstCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_InstDefnsCord_5);
  InstDefnsCord_5 = ((MR_Word) (conv1_InstDefnsCord_5));
  InstDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), InstDefnsCord_5);
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

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[21]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[23]), TypeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_TypeDefnsCord_5);
  TypeDefnsCord_5 = ((MR_Word) (conv1_TypeDefnsCord_5));
  TypeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), TypeDefnsCord_5);
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

  parse_tree__convert_parse_tree__report_int_imp_fim_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ImpFIMSpecMap_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ImpFIMSpecMap_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word STATE_VARIABLE_Specs_0_120,
  MR_Word * STATE_VARIABLE_Specs_121)
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
  MR_Word IntImplicitAvailNeeds0_19;
  MR_Word ImpImplicitAvailNeeds0_20;
  MR_Word IntIncls_21;
  MR_Word IntImportMap_22;
  MR_Word IntUseMap_23;
  MR_Word IntFIMSpecMap_24;
  MR_Word RevIntTypeDefns_25;
  MR_Word RevIntInstDefns_26;
  MR_Word RevIntModeDefns_27;
  MR_Word RevIntTypeClasses_28;
  MR_Word RevIntInstances0_29;
  MR_Word RevIntPredDecls_30;
  MR_Word RevIntModeDecls_31;
  MR_Word RevIntDeclPragmas_32;
  MR_Word RevIntImplPragmas_33;
  MR_Word IntBadClausePreds_34;
  MR_Word RevIntPromises_35;
  MR_Word RevIntInitialises_36;
  MR_Word RevIntFinalises_37;
  MR_Word RevIntMutables_38;
  MR_Word IntImplicitAvailNeeds_39;
  MR_Word IntSelfFIMLangs_40;
  MR_Word ImpIncls_41;
  MR_Word ImpImportMap_42;
  MR_Word ImpUseMap_43;
  MR_Word ImpFIMSpecMap1_44;
  MR_Word RevImpTypeDefns_45;
  MR_Word RevImpInstDefns_46;
  MR_Word RevImpModeDefns_47;
  MR_Word RevImpTypeClasses_48;
  MR_Word RevImpInstances0_49;
  MR_Word RevImpPredDecls_50;
  MR_Word RevImpModeDecls_51;
  MR_Word RevImpClauses_52;
  MR_Word RevImpForeignEnums_53;
  MR_Word RevImpForeignExportEnums_54;
  MR_Word RevImpDeclPragmas_55;
  MR_Word RevImpImplPragmas_56;
  MR_Word RevImpPromises_57;
  MR_Word RevImpInitialises0_58;
  MR_Word RevImpFinalises0_59;
  MR_Word RevImpMutables0_60;
  MR_Word ImpImplicitAvailNeeds_61;
  MR_Word ImpSelfFIMLangs_62;
  MR_Word IntInclMap_63;
  MR_Word ImpInclMap_64;
  MR_Word InclMap_65;
  MR_Word IntTypeDefns_66;
  MR_Word IntInstDefns_67;
  MR_Word IntModeDefns_68;
  MR_Word IntTypeClasses_69;
  MR_Word IntInstances0_70;
  MR_Word IntPredDecls_71;
  MR_Word IntModeDecls_72;
  MR_Word IntDeclPragmas_73;
  MR_Word IntImplPragmas_74;
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
  MR_Word ImpForeignEnums_87;
  MR_Word ImpForeignExportEnums_88;
  MR_Word ImpDeclPragmas_89;
  MR_Word ImpImplPragmas0_90;
  MR_Word ImpPromises_91;
  MR_Word ImpInitialises0_92;
  MR_Word ImpFinalises0_93;
  MR_Word ImpMutables0_94;
  MR_Word IntInstances_95;
  MR_Word ImpInstances_96;
  MR_Word IntTypeDefnMap_98;
  MR_Word ImpTypeDefnMap_99;
  MR_Word ImpForeignEnumMap_100;
  MR_Word TypeCtorCheckedMap_101;
  MR_Word TypeSpecs_102;
  MR_Word IntInstDefnMap_103;
  MR_Word ImpInstDefnMap_104;
  MR_Word InstCtorCheckedMap_105;
  MR_Word InstSpecs_106;
  MR_Word IntModeDefnMap_107;
  MR_Word ImpModeDefnMap_108;
  MR_Word ModeCtorCheckedMap_109;
  MR_Word InstModeSpecs_110;
  MR_Word ImpImplPragmas_111;
  MR_Word ImpInitialises_112;
  MR_Word ImpFinalises_113;
  MR_Word ImpMutables_114;
  MR_Word SectionImportUseMap_115;
  MR_Word ImportUseMap0_116;
  MR_Word ImportUseMap_117;
  MR_Word IntImpFIMSpecs_118;
  MR_Word ImpFIMSpecMap_119;
  MR_Word Var_132;
  MR_Word Var_137;
  MR_Word Var_155;
  MR_Word STATE_VARIABLE_Specs_156_156;
  MR_Word STATE_VARIABLE_Specs_157_157;
  MR_Word STATE_VARIABLE_Specs_163_163;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Box conv3_ImpFIMSpecMap_119;
  MR_Box conv2_STATE_VARIABLE_Specs_121;

  mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntImportMap0_13);
  mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntUseMap0_14);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntFIMSpecMap0_15);
  mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &ImpImportMap0_16);
  mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &ImpUseMap0_17);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &ImpFIMSpecMap0_18);
  IntImplicitAvailNeeds0_19 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
  ImpImplicitAvailNeeds0_20 = parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0();
  Var_132 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0));
  Var_137 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  Var_155 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0(ItemBlocks_12, (MR_Word) ((MR_Unsigned) 0U), &IntIncls_21, IntImportMap0_13, &IntImportMap_22, IntUseMap0_14, &IntUseMap_23, IntFIMSpecMap0_15, &IntFIMSpecMap_24, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeDefns_25, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstDefns_26, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDefns_27, (MR_Word) ((MR_Unsigned) 0U), &RevIntTypeClasses_28, (MR_Word) ((MR_Unsigned) 0U), &RevIntInstances0_29, (MR_Word) ((MR_Unsigned) 0U), &RevIntPredDecls_30, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_31, (MR_Word) ((MR_Unsigned) 0U), &RevIntDeclPragmas_32, (MR_Word) ((MR_Unsigned) 0U), &RevIntImplPragmas_33, Var_132, &IntBadClausePreds_34, (MR_Word) ((MR_Unsigned) 0U), &RevIntPromises_35, (MR_Word) ((MR_Unsigned) 0U), &RevIntInitialises_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntFinalises_37, (MR_Word) ((MR_Unsigned) 0U), &RevIntMutables_38, IntImplicitAvailNeeds0_19, &IntImplicitAvailNeeds_39, Var_137, &IntSelfFIMLangs_40, (MR_Word) ((MR_Unsigned) 0U), &ImpIncls_41, ImpImportMap0_16, &ImpImportMap_42, ImpUseMap0_17, &ImpUseMap_43, ImpFIMSpecMap0_18, &ImpFIMSpecMap1_44, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeDefns_45, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstDefns_46, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDefns_47, (MR_Word) ((MR_Unsigned) 0U), &RevImpTypeClasses_48, (MR_Word) ((MR_Unsigned) 0U), &RevImpInstances0_49, (MR_Word) ((MR_Unsigned) 0U), &RevImpPredDecls_50, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_51, (MR_Word) ((MR_Unsigned) 0U), &RevImpClauses_52, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignEnums_53, (MR_Word) ((MR_Unsigned) 0U), &RevImpForeignExportEnums_54, (MR_Word) ((MR_Unsigned) 0U), &RevImpDeclPragmas_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpImplPragmas_56, (MR_Word) ((MR_Unsigned) 0U), &RevImpPromises_57, (MR_Word) ((MR_Unsigned) 0U), &RevImpInitialises0_58, (MR_Word) ((MR_Unsigned) 0U), &RevImpFinalises0_59, (MR_Word) ((MR_Unsigned) 0U), &RevImpMutables0_60, ImpImplicitAvailNeeds0_20, &ImpImplicitAvailNeeds_61, Var_155, &ImpSelfFIMLangs_62, STATE_VARIABLE_Specs_0_120, &STATE_VARIABLE_Specs_156_156);
  parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_21, ImpIncls_41, &IntInclMap_63, &ImpInclMap_64, &InclMap_65, STATE_VARIABLE_Specs_156_156, &STATE_VARIABLE_Specs_157_157);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), RevIntTypeDefns_25, &IntTypeDefns_66);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), RevIntInstDefns_26, &IntInstDefns_67);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevIntModeDefns_27, &IntModeDefns_68);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevIntTypeClasses_28, &IntTypeClasses_69);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevIntInstances0_29, &IntInstances0_70);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevIntPredDecls_30, &IntPredDecls_71);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_31, &IntModeDecls_72);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), RevIntDeclPragmas_32, &IntDeclPragmas_73);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), RevIntImplPragmas_33, &IntImplPragmas_74);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevIntPromises_35, &IntPromises_75);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevIntInitialises_36, &IntInitialises_76);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevIntFinalises_37, &IntFinalises_77);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevIntMutables_38, &IntMutables_78);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), RevImpTypeDefns_45, &ImpTypeDefns_79);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), RevImpInstDefns_46, &ImpInstDefns_80);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), RevImpModeDefns_47, &ImpModeDefns_81);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevImpTypeClasses_48, &ImpTypeClasses_82);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevImpInstances0_49, &ImpInstances0_83);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevImpPredDecls_50, &ImpPredDecls_84);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_51, &ImpModeDecls_85);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), RevImpClauses_52, &ImpClauses_86);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), RevImpForeignEnums_53, &ImpForeignEnums_87);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), RevImpForeignExportEnums_54, &ImpForeignExportEnums_88);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), RevImpDeclPragmas_55, &ImpDeclPragmas_89);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), RevImpImplPragmas_56, &ImpImplPragmas0_90);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), RevImpPromises_57, &ImpPromises_91);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), RevImpInitialises0_58, &ImpInitialises0_92);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), RevImpFinalises0_59, &ImpFinalises0_93);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevImpMutables0_60, &ImpMutables0_94);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), InclMap_65);
  if (succeeded)
  {
    IntInstances_95 = IntInstances0_70;
    ImpInstances_96 = ImpInstances0_83;
  }
  else
  {
    MR_Word MovedImpInstances_97;

    parse_tree__convert_parse_tree__split_concrete_int_instances_3_p_0(IntInstances0_70, &IntInstances_95, &MovedImpInstances_97);
    ImpInstances_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MovedImpInstances_97, ImpInstances0_83);
  }
  IntTypeDefnMap_98 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_66);
  ImpTypeDefnMap_99 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_79);
  ImpForeignEnumMap_100 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_87);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 1, IntTypeDefnMap_98, ImpTypeDefnMap_99, ImpForeignEnumMap_100, &TypeCtorCheckedMap_101, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs_102);
  IntInstDefnMap_103 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_67);
  ImpInstDefnMap_104 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_80);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 1, IntInstDefnMap_103, ImpInstDefnMap_104, &InstCtorCheckedMap_105, (MR_Word) ((MR_Unsigned) 0U), &InstSpecs_106);
  IntModeDefnMap_107 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_68);
  ImpModeDefnMap_108 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_81);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 1, IntModeDefnMap_107, ImpModeDefnMap_108, &ModeCtorCheckedMap_109, InstSpecs_106, &InstModeSpecs_110);
  ImpImplPragmas_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[18]), IntImplPragmas_74, ImpImplPragmas0_90);
  ImpInitialises_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), IntInitialises_76, ImpInitialises0_92);
  ImpFinalises_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), IntFinalises_77, ImpFinalises0_93);
  ImpMutables_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), IntMutables_78, ImpMutables0_94);
  parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_10, IntImportMap_22, IntUseMap_23, ImpImportMap_42, ImpUseMap_43, &SectionImportUseMap_115, STATE_VARIABLE_Specs_157_157, &STATE_VARIABLE_Specs_163_163);
  parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_115, &ImportUseMap0_116);
  parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(Globals_6, IntImplicitAvailNeeds_39, ImpImplicitAvailNeeds_61, ImportUseMap0_116, &ImportUseMap_117);
  Var_164 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_24);
  Var_165 = mercury__map__keys_as_set_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap1_44);
  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_164, Var_165, &IntImpFIMSpecs_118);
  {
    Var_166 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (IntFIMSpecMap_24));
  }
  mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), Var_166, IntImpFIMSpecs_118, ((MR_Box) (ImpFIMSpecMap1_44)), &conv3_ImpFIMSpecMap_119, ((MR_Box) (STATE_VARIABLE_Specs_163_163)), &conv2_STATE_VARIABLE_Specs_121);
  ImpFIMSpecMap_119 = ((MR_Word) (conv3_ImpFIMSpecMap_119));
  *STATE_VARIABLE_Specs_121 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_121));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_63));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_64));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_65));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_22));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_23));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_42));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_43));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_117));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_24));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_119));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntSelfFIMLangs_40));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ImpSelfFIMLangs_62));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (TypeCtorCheckedMap_101));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (InstCtorCheckedMap_105));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (ModeCtorCheckedMap_109));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (TypeSpecs_102));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (InstModeSpecs_110));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntTypeClasses_69));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntInstances_95));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPredDecls_71));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntModeDecls_72));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntDeclPragmas_73));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntPromises_75));
    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (IntBadClausePreds_34));
    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeClasses_82));
    MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpInstances_96));
    MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpPredDecls_84));
    MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpModeDecls_85));
    MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpClauses_86));
    MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpForeignExportEnums_88));
    MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ImpDeclPragmas_89));
    MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ImpImplPragmas_111));
    MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ImpPromises_91));
    MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ImpInitialises_112));
    MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ImpFinalises_113));
    MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ImpMutables_114));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0_2(
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
parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0_1(
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
parse_tree__convert_parse_tree__classify_src_items_in_blocks_87_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImportMap_0_4,
  MR_Word * STATE_VARIABLE_IntImportMap_5,
  MR_Word STATE_VARIABLE_IntUseMap_0_6,
  MR_Word * STATE_VARIABLE_IntUseMap_7,
  MR_Word STATE_VARIABLE_IntFIMSpecMap_0_8,
  MR_Word * STATE_VARIABLE_IntFIMSpecMap_9,
  MR_Word STATE_VARIABLE_RevIntTypeDefns_0_10,
  MR_Word * STATE_VARIABLE_RevIntTypeDefns_11,
  MR_Word STATE_VARIABLE_RevIntInstDefns_0_12,
  MR_Word * STATE_VARIABLE_RevIntInstDefns_13,
  MR_Word STATE_VARIABLE_RevIntModeDefns_0_14,
  MR_Word * STATE_VARIABLE_RevIntModeDefns_15,
  MR_Word STATE_VARIABLE_RevIntTypeClasses_0_16,
  MR_Word * STATE_VARIABLE_RevIntTypeClasses_17,
  MR_Word STATE_VARIABLE_RevIntInstances_0_18,
  MR_Word * STATE_VARIABLE_RevIntInstances_19,
  MR_Word STATE_VARIABLE_RevIntPredDecls_0_20,
  MR_Word * STATE_VARIABLE_RevIntPredDecls_21,
  MR_Word STATE_VARIABLE_RevIntModeDecls_0_22,
  MR_Word * STATE_VARIABLE_RevIntModeDecls_23,
  MR_Word STATE_VARIABLE_RevIntDeclPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevIntDeclPragmas_25,
  MR_Word STATE_VARIABLE_RevIntImplPragmas_0_26,
  MR_Word * STATE_VARIABLE_RevIntImplPragmas_27,
  MR_Word STATE_VARIABLE_IntBadClausePreds_0_28,
  MR_Word * STATE_VARIABLE_IntBadClausePreds_29,
  MR_Word STATE_VARIABLE_RevIntPromises_0_30,
  MR_Word * STATE_VARIABLE_RevIntPromises_31,
  MR_Word STATE_VARIABLE_RevIntInitialises_0_32,
  MR_Word * STATE_VARIABLE_RevIntInitialises_33,
  MR_Word STATE_VARIABLE_RevIntFinalises_0_34,
  MR_Word * STATE_VARIABLE_RevIntFinalises_35,
  MR_Word STATE_VARIABLE_RevIntMutables_0_36,
  MR_Word * STATE_VARIABLE_RevIntMutables_37,
  MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_0_38,
  MR_Word * STATE_VARIABLE_IntImplicitAvailNeeds_39,
  MR_Word STATE_VARIABLE_IntSelfFIMLangs_0_40,
  MR_Word * STATE_VARIABLE_IntSelfFIMLangs_41,
  MR_Word STATE_VARIABLE_ImpIncls_0_42,
  MR_Word * STATE_VARIABLE_ImpIncls_43,
  MR_Word STATE_VARIABLE_ImpImportMap_0_44,
  MR_Word * STATE_VARIABLE_ImpImportMap_45,
  MR_Word STATE_VARIABLE_ImpUseMap_0_46,
  MR_Word * STATE_VARIABLE_ImpUseMap_47,
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
  MR_Word STATE_VARIABLE_RevImpForeignEnums_0_66,
  MR_Word * STATE_VARIABLE_RevImpForeignEnums_67,
  MR_Word STATE_VARIABLE_RevImpForeignExportEnums_0_68,
  MR_Word * STATE_VARIABLE_RevImpForeignExportEnums_69,
  MR_Word STATE_VARIABLE_RevImpDeclPragmas_0_70,
  MR_Word * STATE_VARIABLE_RevImpDeclPragmas_71,
  MR_Word STATE_VARIABLE_RevImpImplPragmas_0_72,
  MR_Word * STATE_VARIABLE_RevImpImplPragmas_73,
  MR_Word STATE_VARIABLE_RevImpPromises_0_74,
  MR_Word * STATE_VARIABLE_RevImpPromises_75,
  MR_Word STATE_VARIABLE_RevImpInitialises_0_76,
  MR_Word * STATE_VARIABLE_RevImpInitialises_77,
  MR_Word STATE_VARIABLE_RevImpFinalises_0_78,
  MR_Word * STATE_VARIABLE_RevImpFinalises_79,
  MR_Word STATE_VARIABLE_RevImpMutables_0_80,
  MR_Word * STATE_VARIABLE_RevImpMutables_81,
  MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_0_82,
  MR_Word * STATE_VARIABLE_ImpImplicitAvailNeeds_83,
  MR_Word STATE_VARIABLE_ImpSelfFIMLangs_0_84,
  MR_Word * STATE_VARIABLE_ImpSelfFIMLangs_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_87 = STATE_VARIABLE_Specs_0_86;
      *STATE_VARIABLE_ImpSelfFIMLangs_85 = STATE_VARIABLE_ImpSelfFIMLangs_0_84;
      *STATE_VARIABLE_ImpImplicitAvailNeeds_83 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_82;
      *STATE_VARIABLE_RevImpMutables_81 = STATE_VARIABLE_RevImpMutables_0_80;
      *STATE_VARIABLE_RevImpFinalises_79 = STATE_VARIABLE_RevImpFinalises_0_78;
      *STATE_VARIABLE_RevImpInitialises_77 = STATE_VARIABLE_RevImpInitialises_0_76;
      *STATE_VARIABLE_RevImpPromises_75 = STATE_VARIABLE_RevImpPromises_0_74;
      *STATE_VARIABLE_RevImpImplPragmas_73 = STATE_VARIABLE_RevImpImplPragmas_0_72;
      *STATE_VARIABLE_RevImpDeclPragmas_71 = STATE_VARIABLE_RevImpDeclPragmas_0_70;
      *STATE_VARIABLE_RevImpForeignExportEnums_69 = STATE_VARIABLE_RevImpForeignExportEnums_0_68;
      *STATE_VARIABLE_RevImpForeignEnums_67 = STATE_VARIABLE_RevImpForeignEnums_0_66;
      *STATE_VARIABLE_RevImpClauses_65 = STATE_VARIABLE_RevImpClauses_0_64;
      *STATE_VARIABLE_RevImpModeDecls_63 = STATE_VARIABLE_RevImpModeDecls_0_62;
      *STATE_VARIABLE_RevImpPredDecls_61 = STATE_VARIABLE_RevImpPredDecls_0_60;
      *STATE_VARIABLE_RevImpInstances_59 = STATE_VARIABLE_RevImpInstances_0_58;
      *STATE_VARIABLE_RevImpTypeClasses_57 = STATE_VARIABLE_RevImpTypeClasses_0_56;
      *STATE_VARIABLE_RevImpModeDefns_55 = STATE_VARIABLE_RevImpModeDefns_0_54;
      *STATE_VARIABLE_RevImpInstDefns_53 = STATE_VARIABLE_RevImpInstDefns_0_52;
      *STATE_VARIABLE_RevImpTypeDefns_51 = STATE_VARIABLE_RevImpTypeDefns_0_50;
      *STATE_VARIABLE_ImpFIMSpecMap_49 = STATE_VARIABLE_ImpFIMSpecMap_0_48;
      *STATE_VARIABLE_ImpUseMap_47 = STATE_VARIABLE_ImpUseMap_0_46;
      *STATE_VARIABLE_ImpImportMap_45 = STATE_VARIABLE_ImpImportMap_0_44;
      *STATE_VARIABLE_ImpIncls_43 = STATE_VARIABLE_ImpIncls_0_42;
      *STATE_VARIABLE_IntSelfFIMLangs_41 = STATE_VARIABLE_IntSelfFIMLangs_0_40;
      *STATE_VARIABLE_IntImplicitAvailNeeds_39 = STATE_VARIABLE_IntImplicitAvailNeeds_0_38;
      *STATE_VARIABLE_RevIntMutables_37 = STATE_VARIABLE_RevIntMutables_0_36;
      *STATE_VARIABLE_RevIntFinalises_35 = STATE_VARIABLE_RevIntFinalises_0_34;
      *STATE_VARIABLE_RevIntInitialises_33 = STATE_VARIABLE_RevIntInitialises_0_32;
      *STATE_VARIABLE_RevIntPromises_31 = STATE_VARIABLE_RevIntPromises_0_30;
      *STATE_VARIABLE_IntBadClausePreds_29 = STATE_VARIABLE_IntBadClausePreds_0_28;
      *STATE_VARIABLE_RevIntImplPragmas_27 = STATE_VARIABLE_RevIntImplPragmas_0_26;
      *STATE_VARIABLE_RevIntDeclPragmas_25 = STATE_VARIABLE_RevIntDeclPragmas_0_24;
      *STATE_VARIABLE_RevIntModeDecls_23 = STATE_VARIABLE_RevIntModeDecls_0_22;
      *STATE_VARIABLE_RevIntPredDecls_21 = STATE_VARIABLE_RevIntPredDecls_0_20;
      *STATE_VARIABLE_RevIntInstances_19 = STATE_VARIABLE_RevIntInstances_0_18;
      *STATE_VARIABLE_RevIntTypeClasses_17 = STATE_VARIABLE_RevIntTypeClasses_0_16;
      *STATE_VARIABLE_RevIntModeDefns_15 = STATE_VARIABLE_RevIntModeDefns_0_14;
      *STATE_VARIABLE_RevIntInstDefns_13 = STATE_VARIABLE_RevIntInstDefns_0_12;
      *STATE_VARIABLE_RevIntTypeDefns_11 = STATE_VARIABLE_RevIntTypeDefns_0_10;
      *STATE_VARIABLE_IntFIMSpecMap_9 = STATE_VARIABLE_IntFIMSpecMap_0_8;
      *STATE_VARIABLE_IntUseMap_7 = STATE_VARIABLE_IntUseMap_0_6;
      *STATE_VARIABLE_IntImportMap_5 = STATE_VARIABLE_IntImportMap_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word ItemBlock_217 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_263 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemBlock_217, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Incls_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_217, (MR_Integer) 2))));
      MR_Word Avails_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_217, (MR_Integer) 3))));
      MR_Word FIMs_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_217, (MR_Integer) 4))));
      MR_Word Items_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_217, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_354_354;
      MR_Word STATE_VARIABLE_ImpImportMap_355_355;
      MR_Word STATE_VARIABLE_ImpUseMap_356_356;
      MR_Word STATE_VARIABLE_ImpFIMSpecMap_358_358;
      MR_Word STATE_VARIABLE_RevImpTypeDefns_360_360;
      MR_Word STATE_VARIABLE_RevImpInstDefns_361_361;
      MR_Word STATE_VARIABLE_RevImpModeDefns_362_362;
      MR_Word STATE_VARIABLE_RevImpTypeClasses_363_363;
      MR_Word STATE_VARIABLE_RevImpInstances_364_364;
      MR_Word STATE_VARIABLE_RevImpPredDecls_365_365;
      MR_Word STATE_VARIABLE_RevImpModeDecls_366_366;
      MR_Word STATE_VARIABLE_RevImpClauses_367_367;
      MR_Word STATE_VARIABLE_RevImpForeignEnums_368_368;
      MR_Word STATE_VARIABLE_RevImpForeignExportEnums_369_369;
      MR_Word STATE_VARIABLE_RevImpDeclPragmas_370_370;
      MR_Word STATE_VARIABLE_RevImpImplPragmas_371_371;
      MR_Word STATE_VARIABLE_RevImpPromises_372_372;
      MR_Word STATE_VARIABLE_RevImpInitialises_373_373;
      MR_Word STATE_VARIABLE_RevImpFinalises_374_374;
      MR_Word STATE_VARIABLE_RevImpMutables_375_375;
      MR_Word STATE_VARIABLE_ImpImplicitAvailNeeds_376_376;
      MR_Word STATE_VARIABLE_ImpSelfFIMLangs_377_377;
      MR_Word STATE_VARIABLE_IntIncls_379_379;
      MR_Word STATE_VARIABLE_IntImportMap_380_380;
      MR_Word STATE_VARIABLE_IntUseMap_381_381;
      MR_Word STATE_VARIABLE_IntFIMSpecMap_383_383;
      MR_Word STATE_VARIABLE_RevIntTypeDefns_385_385;
      MR_Word STATE_VARIABLE_RevIntInstDefns_386_386;
      MR_Word STATE_VARIABLE_RevIntModeDefns_387_387;
      MR_Word STATE_VARIABLE_RevIntTypeClasses_388_388;
      MR_Word STATE_VARIABLE_RevIntInstances_389_389;
      MR_Word STATE_VARIABLE_RevIntPredDecls_390_390;
      MR_Word STATE_VARIABLE_RevIntModeDecls_391_391;
      MR_Word STATE_VARIABLE_RevIntDeclPragmas_392_392;
      MR_Word STATE_VARIABLE_RevIntImplPragmas_393_393;
      MR_Word STATE_VARIABLE_IntBadClausePreds_394_394;
      MR_Word STATE_VARIABLE_RevIntPromises_395_395;
      MR_Word STATE_VARIABLE_RevIntInitialises_396_396;
      MR_Word STATE_VARIABLE_RevIntFinalises_397_397;
      MR_Word STATE_VARIABLE_RevIntMutables_398_398;
      MR_Word STATE_VARIABLE_IntImplicitAvailNeeds_399_399;
      MR_Word STATE_VARIABLE_IntSelfFIMLangs_400_400;
      MR_Word STATE_VARIABLE_Specs_401_401;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntImportMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntUseMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInstDefns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevIntModeDefns_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInstances_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPredDecls_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevIntModeDecls_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26;
      MR_Word next_value_of_STATE_VARIABLE_IntBadClausePreds_0_28;
      MR_Word next_value_of_STATE_VARIABLE_RevIntPromises_0_30;
      MR_Word next_value_of_STATE_VARIABLE_RevIntInitialises_0_32;
      MR_Word next_value_of_STATE_VARIABLE_RevIntFinalises_0_34;
      MR_Word next_value_of_STATE_VARIABLE_RevIntMutables_0_36;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_38;
      MR_Word next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_40;
      MR_Word next_value_of_STATE_VARIABLE_ImpIncls_0_42;
      MR_Word next_value_of_STATE_VARIABLE_ImpImportMap_0_44;
      MR_Word next_value_of_STATE_VARIABLE_ImpUseMap_0_46;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInstances_0_58;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60;
      MR_Word next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62;
      MR_Word next_value_of_STATE_VARIABLE_RevImpClauses_0_64;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_66;
      MR_Word next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_68;
      MR_Word next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_70;
      MR_Word next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_72;
      MR_Word next_value_of_STATE_VARIABLE_RevImpPromises_0_74;
      MR_Word next_value_of_STATE_VARIABLE_RevImpInitialises_0_76;
      MR_Word next_value_of_STATE_VARIABLE_RevImpFinalises_0_78;
      MR_Word next_value_of_STATE_VARIABLE_RevImpMutables_0_80;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_82;
      MR_Word next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_84;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_86;

      switch (Section_263) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Specs_359_359;
            MR_Box conv3_STATE_VARIABLE_ImpFIMSpecMap_358_358;
            MR_Box conv2_STATE_VARIABLE_Specs_359_359;

            STATE_VARIABLE_ImpIncls_354_354 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpIncls_0_42, Incls_264);
            parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_265, STATE_VARIABLE_ImpImportMap_0_44, &STATE_VARIABLE_ImpImportMap_355_355, STATE_VARIABLE_ImpUseMap_0_46, &STATE_VARIABLE_ImpUseMap_356_356);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[21]), FIMs_266, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecMap_0_48)), &conv3_STATE_VARIABLE_ImpFIMSpecMap_358_358, ((MR_Box) (STATE_VARIABLE_Specs_0_86)), &conv2_STATE_VARIABLE_Specs_359_359);
            STATE_VARIABLE_ImpFIMSpecMap_358_358 = ((MR_Word) (conv3_STATE_VARIABLE_ImpFIMSpecMap_358_358));
            STATE_VARIABLE_Specs_359_359 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_359_359));
            parse_tree__convert_parse_tree__classify_src_items_imp_39_p_0(Items_267, STATE_VARIABLE_RevImpTypeDefns_0_50, &STATE_VARIABLE_RevImpTypeDefns_360_360, STATE_VARIABLE_RevImpInstDefns_0_52, &STATE_VARIABLE_RevImpInstDefns_361_361, STATE_VARIABLE_RevImpModeDefns_0_54, &STATE_VARIABLE_RevImpModeDefns_362_362, STATE_VARIABLE_RevImpTypeClasses_0_56, &STATE_VARIABLE_RevImpTypeClasses_363_363, STATE_VARIABLE_RevImpInstances_0_58, &STATE_VARIABLE_RevImpInstances_364_364, STATE_VARIABLE_RevImpPredDecls_0_60, &STATE_VARIABLE_RevImpPredDecls_365_365, STATE_VARIABLE_RevImpModeDecls_0_62, &STATE_VARIABLE_RevImpModeDecls_366_366, STATE_VARIABLE_RevImpClauses_0_64, &STATE_VARIABLE_RevImpClauses_367_367, STATE_VARIABLE_RevImpForeignEnums_0_66, &STATE_VARIABLE_RevImpForeignEnums_368_368, STATE_VARIABLE_RevImpForeignExportEnums_0_68, &STATE_VARIABLE_RevImpForeignExportEnums_369_369, STATE_VARIABLE_RevImpDeclPragmas_0_70, &STATE_VARIABLE_RevImpDeclPragmas_370_370, STATE_VARIABLE_RevImpImplPragmas_0_72, &STATE_VARIABLE_RevImpImplPragmas_371_371, STATE_VARIABLE_RevImpPromises_0_74, &STATE_VARIABLE_RevImpPromises_372_372, STATE_VARIABLE_RevImpInitialises_0_76, &STATE_VARIABLE_RevImpInitialises_373_373, STATE_VARIABLE_RevImpFinalises_0_78, &STATE_VARIABLE_RevImpFinalises_374_374, STATE_VARIABLE_RevImpMutables_0_80, &STATE_VARIABLE_RevImpMutables_375_375, STATE_VARIABLE_ImpImplicitAvailNeeds_0_82, &STATE_VARIABLE_ImpImplicitAvailNeeds_376_376, STATE_VARIABLE_ImpSelfFIMLangs_0_84, &STATE_VARIABLE_ImpSelfFIMLangs_377_377, STATE_VARIABLE_Specs_359_359, &STATE_VARIABLE_Specs_401_401);
            STATE_VARIABLE_IntIncls_379_379 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImportMap_380_380 = STATE_VARIABLE_IntImportMap_0_4;
            STATE_VARIABLE_IntUseMap_381_381 = STATE_VARIABLE_IntUseMap_0_6;
            STATE_VARIABLE_IntFIMSpecMap_383_383 = STATE_VARIABLE_IntFIMSpecMap_0_8;
            STATE_VARIABLE_RevIntTypeDefns_385_385 = STATE_VARIABLE_RevIntTypeDefns_0_10;
            STATE_VARIABLE_RevIntInstDefns_386_386 = STATE_VARIABLE_RevIntInstDefns_0_12;
            STATE_VARIABLE_RevIntModeDefns_387_387 = STATE_VARIABLE_RevIntModeDefns_0_14;
            STATE_VARIABLE_RevIntTypeClasses_388_388 = STATE_VARIABLE_RevIntTypeClasses_0_16;
            STATE_VARIABLE_RevIntInstances_389_389 = STATE_VARIABLE_RevIntInstances_0_18;
            STATE_VARIABLE_RevIntPredDecls_390_390 = STATE_VARIABLE_RevIntPredDecls_0_20;
            STATE_VARIABLE_RevIntModeDecls_391_391 = STATE_VARIABLE_RevIntModeDecls_0_22;
            STATE_VARIABLE_RevIntDeclPragmas_392_392 = STATE_VARIABLE_RevIntDeclPragmas_0_24;
            STATE_VARIABLE_RevIntImplPragmas_393_393 = STATE_VARIABLE_RevIntImplPragmas_0_26;
            STATE_VARIABLE_IntBadClausePreds_394_394 = STATE_VARIABLE_IntBadClausePreds_0_28;
            STATE_VARIABLE_RevIntPromises_395_395 = STATE_VARIABLE_RevIntPromises_0_30;
            STATE_VARIABLE_RevIntInitialises_396_396 = STATE_VARIABLE_RevIntInitialises_0_32;
            STATE_VARIABLE_RevIntFinalises_397_397 = STATE_VARIABLE_RevIntFinalises_0_34;
            STATE_VARIABLE_RevIntMutables_398_398 = STATE_VARIABLE_RevIntMutables_0_36;
            STATE_VARIABLE_IntImplicitAvailNeeds_399_399 = STATE_VARIABLE_IntImplicitAvailNeeds_0_38;
            STATE_VARIABLE_IntSelfFIMLangs_400_400 = STATE_VARIABLE_IntSelfFIMLangs_0_40;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_384_384;
            MR_Box conv7_STATE_VARIABLE_IntFIMSpecMap_383_383;
            MR_Box conv6_STATE_VARIABLE_Specs_384_384;

            STATE_VARIABLE_IntIncls_379_379 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Incls_264);
            parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_265, STATE_VARIABLE_IntImportMap_0_4, &STATE_VARIABLE_IntImportMap_380_380, STATE_VARIABLE_IntUseMap_0_6, &STATE_VARIABLE_IntUseMap_381_381);
            mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[19]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[22]), FIMs_266, ((MR_Box) (STATE_VARIABLE_IntFIMSpecMap_0_8)), &conv7_STATE_VARIABLE_IntFIMSpecMap_383_383, ((MR_Box) (STATE_VARIABLE_Specs_0_86)), &conv6_STATE_VARIABLE_Specs_384_384);
            STATE_VARIABLE_IntFIMSpecMap_383_383 = ((MR_Word) (conv7_STATE_VARIABLE_IntFIMSpecMap_383_383));
            STATE_VARIABLE_Specs_384_384 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_384_384));
            parse_tree__convert_parse_tree__classify_src_items_int_35_p_0(Items_267, STATE_VARIABLE_RevIntTypeDefns_0_10, &STATE_VARIABLE_RevIntTypeDefns_385_385, STATE_VARIABLE_RevIntInstDefns_0_12, &STATE_VARIABLE_RevIntInstDefns_386_386, STATE_VARIABLE_RevIntModeDefns_0_14, &STATE_VARIABLE_RevIntModeDefns_387_387, STATE_VARIABLE_RevIntTypeClasses_0_16, &STATE_VARIABLE_RevIntTypeClasses_388_388, STATE_VARIABLE_RevIntInstances_0_18, &STATE_VARIABLE_RevIntInstances_389_389, STATE_VARIABLE_RevIntPredDecls_0_20, &STATE_VARIABLE_RevIntPredDecls_390_390, STATE_VARIABLE_RevIntModeDecls_0_22, &STATE_VARIABLE_RevIntModeDecls_391_391, STATE_VARIABLE_RevIntDeclPragmas_0_24, &STATE_VARIABLE_RevIntDeclPragmas_392_392, STATE_VARIABLE_RevIntImplPragmas_0_26, &STATE_VARIABLE_RevIntImplPragmas_393_393, STATE_VARIABLE_IntBadClausePreds_0_28, &STATE_VARIABLE_IntBadClausePreds_394_394, STATE_VARIABLE_RevIntPromises_0_30, &STATE_VARIABLE_RevIntPromises_395_395, STATE_VARIABLE_RevIntInitialises_0_32, &STATE_VARIABLE_RevIntInitialises_396_396, STATE_VARIABLE_RevIntFinalises_0_34, &STATE_VARIABLE_RevIntFinalises_397_397, STATE_VARIABLE_RevIntMutables_0_36, &STATE_VARIABLE_RevIntMutables_398_398, STATE_VARIABLE_IntImplicitAvailNeeds_0_38, &STATE_VARIABLE_IntImplicitAvailNeeds_399_399, STATE_VARIABLE_IntSelfFIMLangs_0_40, &STATE_VARIABLE_IntSelfFIMLangs_400_400, STATE_VARIABLE_Specs_384_384, &STATE_VARIABLE_Specs_401_401);
            STATE_VARIABLE_ImpIncls_354_354 = STATE_VARIABLE_ImpIncls_0_42;
            STATE_VARIABLE_ImpImportMap_355_355 = STATE_VARIABLE_ImpImportMap_0_44;
            STATE_VARIABLE_ImpUseMap_356_356 = STATE_VARIABLE_ImpUseMap_0_46;
            STATE_VARIABLE_ImpFIMSpecMap_358_358 = STATE_VARIABLE_ImpFIMSpecMap_0_48;
            STATE_VARIABLE_RevImpTypeDefns_360_360 = STATE_VARIABLE_RevImpTypeDefns_0_50;
            STATE_VARIABLE_RevImpInstDefns_361_361 = STATE_VARIABLE_RevImpInstDefns_0_52;
            STATE_VARIABLE_RevImpModeDefns_362_362 = STATE_VARIABLE_RevImpModeDefns_0_54;
            STATE_VARIABLE_RevImpTypeClasses_363_363 = STATE_VARIABLE_RevImpTypeClasses_0_56;
            STATE_VARIABLE_RevImpInstances_364_364 = STATE_VARIABLE_RevImpInstances_0_58;
            STATE_VARIABLE_RevImpPredDecls_365_365 = STATE_VARIABLE_RevImpPredDecls_0_60;
            STATE_VARIABLE_RevImpModeDecls_366_366 = STATE_VARIABLE_RevImpModeDecls_0_62;
            STATE_VARIABLE_RevImpClauses_367_367 = STATE_VARIABLE_RevImpClauses_0_64;
            STATE_VARIABLE_RevImpForeignEnums_368_368 = STATE_VARIABLE_RevImpForeignEnums_0_66;
            STATE_VARIABLE_RevImpForeignExportEnums_369_369 = STATE_VARIABLE_RevImpForeignExportEnums_0_68;
            STATE_VARIABLE_RevImpDeclPragmas_370_370 = STATE_VARIABLE_RevImpDeclPragmas_0_70;
            STATE_VARIABLE_RevImpImplPragmas_371_371 = STATE_VARIABLE_RevImpImplPragmas_0_72;
            STATE_VARIABLE_RevImpPromises_372_372 = STATE_VARIABLE_RevImpPromises_0_74;
            STATE_VARIABLE_RevImpInitialises_373_373 = STATE_VARIABLE_RevImpInitialises_0_76;
            STATE_VARIABLE_RevImpFinalises_374_374 = STATE_VARIABLE_RevImpFinalises_0_78;
            STATE_VARIABLE_RevImpMutables_375_375 = STATE_VARIABLE_RevImpMutables_0_80;
            STATE_VARIABLE_ImpImplicitAvailNeeds_376_376 = STATE_VARIABLE_ImpImplicitAvailNeeds_0_82;
            STATE_VARIABLE_ImpSelfFIMLangs_377_377 = STATE_VARIABLE_ImpSelfFIMLangs_0_84;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_218;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_379_379;
      next_value_of_STATE_VARIABLE_IntImportMap_0_4 = STATE_VARIABLE_IntImportMap_380_380;
      next_value_of_STATE_VARIABLE_IntUseMap_0_6 = STATE_VARIABLE_IntUseMap_381_381;
      next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8 = STATE_VARIABLE_IntFIMSpecMap_383_383;
      next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_10 = STATE_VARIABLE_RevIntTypeDefns_385_385;
      next_value_of_STATE_VARIABLE_RevIntInstDefns_0_12 = STATE_VARIABLE_RevIntInstDefns_386_386;
      next_value_of_STATE_VARIABLE_RevIntModeDefns_0_14 = STATE_VARIABLE_RevIntModeDefns_387_387;
      next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_16 = STATE_VARIABLE_RevIntTypeClasses_388_388;
      next_value_of_STATE_VARIABLE_RevIntInstances_0_18 = STATE_VARIABLE_RevIntInstances_389_389;
      next_value_of_STATE_VARIABLE_RevIntPredDecls_0_20 = STATE_VARIABLE_RevIntPredDecls_390_390;
      next_value_of_STATE_VARIABLE_RevIntModeDecls_0_22 = STATE_VARIABLE_RevIntModeDecls_391_391;
      next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_24 = STATE_VARIABLE_RevIntDeclPragmas_392_392;
      next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26 = STATE_VARIABLE_RevIntImplPragmas_393_393;
      next_value_of_STATE_VARIABLE_IntBadClausePreds_0_28 = STATE_VARIABLE_IntBadClausePreds_394_394;
      next_value_of_STATE_VARIABLE_RevIntPromises_0_30 = STATE_VARIABLE_RevIntPromises_395_395;
      next_value_of_STATE_VARIABLE_RevIntInitialises_0_32 = STATE_VARIABLE_RevIntInitialises_396_396;
      next_value_of_STATE_VARIABLE_RevIntFinalises_0_34 = STATE_VARIABLE_RevIntFinalises_397_397;
      next_value_of_STATE_VARIABLE_RevIntMutables_0_36 = STATE_VARIABLE_RevIntMutables_398_398;
      next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_38 = STATE_VARIABLE_IntImplicitAvailNeeds_399_399;
      next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_40 = STATE_VARIABLE_IntSelfFIMLangs_400_400;
      next_value_of_STATE_VARIABLE_ImpIncls_0_42 = STATE_VARIABLE_ImpIncls_354_354;
      next_value_of_STATE_VARIABLE_ImpImportMap_0_44 = STATE_VARIABLE_ImpImportMap_355_355;
      next_value_of_STATE_VARIABLE_ImpUseMap_0_46 = STATE_VARIABLE_ImpUseMap_356_356;
      next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48 = STATE_VARIABLE_ImpFIMSpecMap_358_358;
      next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50 = STATE_VARIABLE_RevImpTypeDefns_360_360;
      next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52 = STATE_VARIABLE_RevImpInstDefns_361_361;
      next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54 = STATE_VARIABLE_RevImpModeDefns_362_362;
      next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56 = STATE_VARIABLE_RevImpTypeClasses_363_363;
      next_value_of_STATE_VARIABLE_RevImpInstances_0_58 = STATE_VARIABLE_RevImpInstances_364_364;
      next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60 = STATE_VARIABLE_RevImpPredDecls_365_365;
      next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62 = STATE_VARIABLE_RevImpModeDecls_366_366;
      next_value_of_STATE_VARIABLE_RevImpClauses_0_64 = STATE_VARIABLE_RevImpClauses_367_367;
      next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_66 = STATE_VARIABLE_RevImpForeignEnums_368_368;
      next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_68 = STATE_VARIABLE_RevImpForeignExportEnums_369_369;
      next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_70 = STATE_VARIABLE_RevImpDeclPragmas_370_370;
      next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_72 = STATE_VARIABLE_RevImpImplPragmas_371_371;
      next_value_of_STATE_VARIABLE_RevImpPromises_0_74 = STATE_VARIABLE_RevImpPromises_372_372;
      next_value_of_STATE_VARIABLE_RevImpInitialises_0_76 = STATE_VARIABLE_RevImpInitialises_373_373;
      next_value_of_STATE_VARIABLE_RevImpFinalises_0_78 = STATE_VARIABLE_RevImpFinalises_374_374;
      next_value_of_STATE_VARIABLE_RevImpMutables_0_80 = STATE_VARIABLE_RevImpMutables_375_375;
      next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_82 = STATE_VARIABLE_ImpImplicitAvailNeeds_376_376;
      next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_84 = STATE_VARIABLE_ImpSelfFIMLangs_377_377;
      next_value_of_STATE_VARIABLE_Specs_0_86 = STATE_VARIABLE_Specs_401_401;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntImportMap_0_4 = next_value_of_STATE_VARIABLE_IntImportMap_0_4;
      STATE_VARIABLE_IntUseMap_0_6 = next_value_of_STATE_VARIABLE_IntUseMap_0_6;
      STATE_VARIABLE_IntFIMSpecMap_0_8 = next_value_of_STATE_VARIABLE_IntFIMSpecMap_0_8;
      STATE_VARIABLE_RevIntTypeDefns_0_10 = next_value_of_STATE_VARIABLE_RevIntTypeDefns_0_10;
      STATE_VARIABLE_RevIntInstDefns_0_12 = next_value_of_STATE_VARIABLE_RevIntInstDefns_0_12;
      STATE_VARIABLE_RevIntModeDefns_0_14 = next_value_of_STATE_VARIABLE_RevIntModeDefns_0_14;
      STATE_VARIABLE_RevIntTypeClasses_0_16 = next_value_of_STATE_VARIABLE_RevIntTypeClasses_0_16;
      STATE_VARIABLE_RevIntInstances_0_18 = next_value_of_STATE_VARIABLE_RevIntInstances_0_18;
      STATE_VARIABLE_RevIntPredDecls_0_20 = next_value_of_STATE_VARIABLE_RevIntPredDecls_0_20;
      STATE_VARIABLE_RevIntModeDecls_0_22 = next_value_of_STATE_VARIABLE_RevIntModeDecls_0_22;
      STATE_VARIABLE_RevIntDeclPragmas_0_24 = next_value_of_STATE_VARIABLE_RevIntDeclPragmas_0_24;
      STATE_VARIABLE_RevIntImplPragmas_0_26 = next_value_of_STATE_VARIABLE_RevIntImplPragmas_0_26;
      STATE_VARIABLE_IntBadClausePreds_0_28 = next_value_of_STATE_VARIABLE_IntBadClausePreds_0_28;
      STATE_VARIABLE_RevIntPromises_0_30 = next_value_of_STATE_VARIABLE_RevIntPromises_0_30;
      STATE_VARIABLE_RevIntInitialises_0_32 = next_value_of_STATE_VARIABLE_RevIntInitialises_0_32;
      STATE_VARIABLE_RevIntFinalises_0_34 = next_value_of_STATE_VARIABLE_RevIntFinalises_0_34;
      STATE_VARIABLE_RevIntMutables_0_36 = next_value_of_STATE_VARIABLE_RevIntMutables_0_36;
      STATE_VARIABLE_IntImplicitAvailNeeds_0_38 = next_value_of_STATE_VARIABLE_IntImplicitAvailNeeds_0_38;
      STATE_VARIABLE_IntSelfFIMLangs_0_40 = next_value_of_STATE_VARIABLE_IntSelfFIMLangs_0_40;
      STATE_VARIABLE_ImpIncls_0_42 = next_value_of_STATE_VARIABLE_ImpIncls_0_42;
      STATE_VARIABLE_ImpImportMap_0_44 = next_value_of_STATE_VARIABLE_ImpImportMap_0_44;
      STATE_VARIABLE_ImpUseMap_0_46 = next_value_of_STATE_VARIABLE_ImpUseMap_0_46;
      STATE_VARIABLE_ImpFIMSpecMap_0_48 = next_value_of_STATE_VARIABLE_ImpFIMSpecMap_0_48;
      STATE_VARIABLE_RevImpTypeDefns_0_50 = next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_50;
      STATE_VARIABLE_RevImpInstDefns_0_52 = next_value_of_STATE_VARIABLE_RevImpInstDefns_0_52;
      STATE_VARIABLE_RevImpModeDefns_0_54 = next_value_of_STATE_VARIABLE_RevImpModeDefns_0_54;
      STATE_VARIABLE_RevImpTypeClasses_0_56 = next_value_of_STATE_VARIABLE_RevImpTypeClasses_0_56;
      STATE_VARIABLE_RevImpInstances_0_58 = next_value_of_STATE_VARIABLE_RevImpInstances_0_58;
      STATE_VARIABLE_RevImpPredDecls_0_60 = next_value_of_STATE_VARIABLE_RevImpPredDecls_0_60;
      STATE_VARIABLE_RevImpModeDecls_0_62 = next_value_of_STATE_VARIABLE_RevImpModeDecls_0_62;
      STATE_VARIABLE_RevImpClauses_0_64 = next_value_of_STATE_VARIABLE_RevImpClauses_0_64;
      STATE_VARIABLE_RevImpForeignEnums_0_66 = next_value_of_STATE_VARIABLE_RevImpForeignEnums_0_66;
      STATE_VARIABLE_RevImpForeignExportEnums_0_68 = next_value_of_STATE_VARIABLE_RevImpForeignExportEnums_0_68;
      STATE_VARIABLE_RevImpDeclPragmas_0_70 = next_value_of_STATE_VARIABLE_RevImpDeclPragmas_0_70;
      STATE_VARIABLE_RevImpImplPragmas_0_72 = next_value_of_STATE_VARIABLE_RevImpImplPragmas_0_72;
      STATE_VARIABLE_RevImpPromises_0_74 = next_value_of_STATE_VARIABLE_RevImpPromises_0_74;
      STATE_VARIABLE_RevImpInitialises_0_76 = next_value_of_STATE_VARIABLE_RevImpInitialises_0_76;
      STATE_VARIABLE_RevImpFinalises_0_78 = next_value_of_STATE_VARIABLE_RevImpFinalises_0_78;
      STATE_VARIABLE_RevImpMutables_0_80 = next_value_of_STATE_VARIABLE_RevImpMutables_0_80;
      STATE_VARIABLE_ImpImplicitAvailNeeds_0_82 = next_value_of_STATE_VARIABLE_ImpImplicitAvailNeeds_0_82;
      STATE_VARIABLE_ImpSelfFIMLangs_0_84 = next_value_of_STATE_VARIABLE_ImpSelfFIMLangs_0_84;
      STATE_VARIABLE_Specs_0_86 = next_value_of_STATE_VARIABLE_Specs_0_86;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__classify_src_items_imp_39_p_0(
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
  MR_Word STATE_VARIABLE_RevForeignEnums_0_18,
  MR_Word * STATE_VARIABLE_RevForeignEnums_19,
  MR_Word STATE_VARIABLE_RevForeignExportEnums_0_20,
  MR_Word * STATE_VARIABLE_RevForeignExportEnums_21,
  MR_Word STATE_VARIABLE_RevDeclPragmas_0_22,
  MR_Word * STATE_VARIABLE_RevDeclPragmas_23,
  MR_Word STATE_VARIABLE_RevImplPragmas_0_24,
  MR_Word * STATE_VARIABLE_RevImplPragmas_25,
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
      *STATE_VARIABLE_RevImplPragmas_25 = STATE_VARIABLE_RevImplPragmas_0_24;
      *STATE_VARIABLE_RevDeclPragmas_23 = STATE_VARIABLE_RevDeclPragmas_0_22;
      *STATE_VARIABLE_RevForeignExportEnums_21 = STATE_VARIABLE_RevForeignExportEnums_0_20;
      *STATE_VARIABLE_RevForeignEnums_19 = STATE_VARIABLE_RevForeignEnums_0_18;
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
      MR_Word Item_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMutables_255_255;
      MR_Word STATE_VARIABLE_RevFinalises_256_256;
      MR_Word STATE_VARIABLE_RevInitialises_257_257;
      MR_Word STATE_VARIABLE_RevPromises_259_259;
      MR_Word STATE_VARIABLE_Specs_276_276;
      MR_Word STATE_VARIABLE_RevImplPragmas_277_277;
      MR_Word STATE_VARIABLE_RevDeclPragmas_286_286;
      MR_Word STATE_VARIABLE_RevForeignExportEnums_287_287;
      MR_Word STATE_VARIABLE_RevForeignEnums_289_289;
      MR_Word STATE_VARIABLE_RevClauses_291_291;
      MR_Word STATE_VARIABLE_RevModeDecls_292_292;
      MR_Word STATE_VARIABLE_RevPredDecls_293_293;
      MR_Word STATE_VARIABLE_RevInstances_295_295;
      MR_Word STATE_VARIABLE_RevTypeClasses_296_296;
      MR_Word STATE_VARIABLE_RevModeDefns_297_297;
      MR_Word STATE_VARIABLE_RevInstDefns_298_298;
      MR_Word STATE_VARIABLE_RevTypeDefns_299_299;
      MR_Word STATE_VARIABLE_SelfFIMLangs_301_301;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_302_302;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevInstances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignEnums_0_18;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_24;
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
            MR_Word ItemClauseInfo_140 = (MR_Word) ((MR_Word) (Item_97));

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(ItemClauseInfo_140, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_302_302);
            {
              STATE_VARIABLE_RevClauses_291_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_291_291, 0) = ((MR_Box) (ItemClauseInfo_140));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_291_291, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_16));
            }
            STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
            STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
            STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
            STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
            STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDeclInfo_138 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevPredDecls_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_293_293, 0) = ((MR_Box) (ItemPredDeclInfo_138));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_293_293, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_12));
            }
            STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
            STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
            STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
            STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
            STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
            STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDeclInfo_139 = (MR_Word) (MR_body((MR_Word) (Item_97), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_292_292, 0) = ((MR_Box) (ItemModeDeclInfo_139));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_292_292, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
            STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
            STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
            STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
            STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
            STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
            STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
            STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
            STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
            STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
            STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
            STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemForeignEnumInfo_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Lang_142 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_141, (MR_Integer) 0))) & (MR_Integer) 3);

                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_142)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                {
                  STATE_VARIABLE_RevForeignEnums_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignEnums_289_289, 0) = ((MR_Box) (ItemForeignEnumInfo_141));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignEnums_289_289, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignEnums_0_18));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemFEEInfo_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevForeignExportEnums_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignExportEnums_287_287, 0) = ((MR_Box) (ItemFEEInfo_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevForeignExportEnums_287_287, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignExportEnums_0_20));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemPromiseInfo_192 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_192, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_302_302);
                {
                  STATE_VARIABLE_RevPromises_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_259_259, 0) = ((MR_Box) (ItemPromiseInfo_192));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_259_259, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_26));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemTypeclassInfo_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_296_296, 0) = ((MR_Box) (ItemTypeclassInfo_136));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_296_296, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_8));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemInstanceInfo_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(ItemInstanceInfo_137, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_302_302);
                {
                  STATE_VARIABLE_RevInstances_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_295_295, 0) = ((MR_Box) (ItemInstanceInfo_137));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_295_295, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_10));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemInitialiseInfo_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInitialises_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_257_257, 0) = ((MR_Box) (ItemInitialiseInfo_193));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_257_257, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_28));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemFinaliseInfo_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevFinalises_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_256_256, 0) = ((MR_Box) (ItemFinaliseInfo_194));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_256_256, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_30));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemMutableInfo_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Var_252;

                Var_252 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_252, STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(ItemMutableInfo_195, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_302_302);
                {
                  STATE_VARIABLE_RevMutables_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_255_255, 0) = ((MR_Box) (ItemMutableInfo_195));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_255_255, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_32));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemTypeDefnInfo_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word TypeDefn_121;

                {
                  STATE_VARIABLE_RevTypeDefns_299_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefns_299_299, 0) = ((MR_Box) (ItemTypeDefnInfo_118));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefns_299_299, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefns_0_2));
                }
                TypeDefn_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_118, (MR_Integer) 2))));
                switch (MR_tag((MR_Word) TypeDefn_121)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                      STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                      STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word DetailsSolver_129 = (MR_Word) (MR_body((MR_Word) (TypeDefn_121), (MR_Integer) 2));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_129, STATE_VARIABLE_ImplicitAvailNeeds_0_34, &STATE_VARIABLE_ImplicitAvailNeeds_302_302);
                      STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_121, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word DetailsForeign_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_121, (MR_Integer) 1))));
                          MR_Word ForeignType_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_130, (MR_Integer) 0))));
                          MR_Word Var_300;

                          Var_300 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_131);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_300)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefnInfo_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstDefns_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_298_298, 0) = ((MR_Box) (ItemInstDefnInfo_134));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_298_298, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_4));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefnInfo_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDefns_297_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_297_297, 0) = ((MR_Box) (ItemModeDefnInfo_135));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_297_297, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_6));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_286_286, 0) = ((MR_Box) (ItemDeclPragma_148));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_286_286, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_22));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word ImplPragma_150;

                {
                  STATE_VARIABLE_RevImplPragmas_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_277_277, 0) = ((MR_Box) (ItemImplPragma_149));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_277_277, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_24));
                }
                ImplPragma_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_149, (MR_Integer) 0))));
                switch (MR_tag((MR_Word) ImplPragma_150)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_155 = (MR_Word) ((MR_Word) (ImplPragma_150));
                      MR_Word Lang_359 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_155, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_359)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                      STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FCInfo_153 = (MR_Word) (MR_body((MR_Word) (ImplPragma_150), (MR_Integer) 1));
                      MR_Word Lang_322 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_153, (MR_Integer) 0))) & (MR_Integer) 3);

                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_322)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                      STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPInfo_163 = (MR_Word) (MR_body((MR_Word) (ImplPragma_150), (MR_Integer) 2));
                      MR_Word Attrs_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_163, (MR_Integer) 0))));
                      MR_Word Var_282;

                      Var_282 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_164);
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_282)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                      STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_150, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word FPEInfo_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_150, (MR_Integer) 1))));
                          MR_Word Lang_323 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_158, (MR_Integer) 1))) & (MR_Integer) 3);

                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_323)), STATE_VARIABLE_SelfFIMLangs_0_36, &STATE_VARIABLE_SelfFIMLangs_301_301);
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word TableInfo_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_150, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_171, (MR_Integer) 2))));
                          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_278_278;
                          MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_34, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitAvailNeeds_278_278 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_278_278, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_174 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_278_278;
                          else
                          {
                            MR_Word Attributes_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_174, (MR_Integer) 0))));
                            MR_Word StatsAttr_176 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_175, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);

                            switch (StatsAttr_176) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_278_278;
                                break;
                              case (MR_Integer) 0:
                                {
                                  STATE_VARIABLE_ImplicitAvailNeeds_302_302 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_302_302, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                          STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_0_38;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Pieces_190;
                MR_Word Spec_191;
                MR_Word Var_264;
                MR_Word Var_265;
                MR_Word Var_275;

                Var_265 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                Var_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_265, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[127])), Var_264);
                Var_275 = parse_tree__prog_item__get_item_context_1_f_0(Item_97);
                {
                  Spec_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_191, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/39"));
                  MR_hl_field(MR_mktag(1), Spec_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_191, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_191, 3) = ((MR_Box) (Var_275));
                  MR_hl_field(MR_mktag(1), Spec_191, 4) = ((MR_Box) (Pieces_190));
                }
                {
                  STATE_VARIABLE_Specs_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_276_276, 0) = ((MR_Box) (Spec_191));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_276_276, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepnInfo_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_97, (MR_Integer) 1))));
                MR_Word Var_239;
                MR_Word Var_240;
                MR_Word Var_250;
                MR_Word Pieces_326;
                MR_Word Spec_327;

                Var_240 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_97);
                Var_239 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_240, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_326 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[127])), Var_239);
                Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_196, (MR_Integer) 4))));
                {
                  Spec_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_327, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_imp\'/39"));
                  MR_hl_field(MR_mktag(1), Spec_327, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_327, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_327, 3) = ((MR_Box) (Var_250));
                  MR_hl_field(MR_mktag(1), Spec_327, 4) = ((MR_Box) (Pieces_326));
                }
                {
                  STATE_VARIABLE_Specs_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_276_276, 0) = ((MR_Box) (Spec_327));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_276_276, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
                }
                STATE_VARIABLE_RevTypeDefns_299_299 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_298_298 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_297_297 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_296_296 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_295_295 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_293_293 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_292_292 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevClauses_291_291 = STATE_VARIABLE_RevClauses_0_16;
                STATE_VARIABLE_RevForeignEnums_289_289 = STATE_VARIABLE_RevForeignEnums_0_18;
                STATE_VARIABLE_RevForeignExportEnums_287_287 = STATE_VARIABLE_RevForeignExportEnums_0_20;
                STATE_VARIABLE_RevDeclPragmas_286_286 = STATE_VARIABLE_RevDeclPragmas_0_22;
                STATE_VARIABLE_RevImplPragmas_277_277 = STATE_VARIABLE_RevImplPragmas_0_24;
                STATE_VARIABLE_RevPromises_259_259 = STATE_VARIABLE_RevPromises_0_26;
                STATE_VARIABLE_RevInitialises_257_257 = STATE_VARIABLE_RevInitialises_0_28;
                STATE_VARIABLE_RevFinalises_256_256 = STATE_VARIABLE_RevFinalises_0_30;
                STATE_VARIABLE_RevMutables_255_255 = STATE_VARIABLE_RevMutables_0_32;
                STATE_VARIABLE_ImplicitAvailNeeds_302_302 = STATE_VARIABLE_ImplicitAvailNeeds_0_34;
                STATE_VARIABLE_SelfFIMLangs_301_301 = STATE_VARIABLE_SelfFIMLangs_0_36;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_98;
      next_value_of_STATE_VARIABLE_RevTypeDefns_0_2 = STATE_VARIABLE_RevTypeDefns_299_299;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_4 = STATE_VARIABLE_RevInstDefns_298_298;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_6 = STATE_VARIABLE_RevModeDefns_297_297;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_8 = STATE_VARIABLE_RevTypeClasses_296_296;
      next_value_of_STATE_VARIABLE_RevInstances_0_10 = STATE_VARIABLE_RevInstances_295_295;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_12 = STATE_VARIABLE_RevPredDecls_293_293;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_292_292;
      next_value_of_STATE_VARIABLE_RevClauses_0_16 = STATE_VARIABLE_RevClauses_291_291;
      next_value_of_STATE_VARIABLE_RevForeignEnums_0_18 = STATE_VARIABLE_RevForeignEnums_289_289;
      next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_20 = STATE_VARIABLE_RevForeignExportEnums_287_287;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_22 = STATE_VARIABLE_RevDeclPragmas_286_286;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_24 = STATE_VARIABLE_RevImplPragmas_277_277;
      next_value_of_STATE_VARIABLE_RevPromises_0_26 = STATE_VARIABLE_RevPromises_259_259;
      next_value_of_STATE_VARIABLE_RevInitialises_0_28 = STATE_VARIABLE_RevInitialises_257_257;
      next_value_of_STATE_VARIABLE_RevFinalises_0_30 = STATE_VARIABLE_RevFinalises_256_256;
      next_value_of_STATE_VARIABLE_RevMutables_0_32 = STATE_VARIABLE_RevMutables_255_255;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_34 = STATE_VARIABLE_ImplicitAvailNeeds_302_302;
      next_value_of_STATE_VARIABLE_SelfFIMLangs_0_36 = STATE_VARIABLE_SelfFIMLangs_301_301;
      next_value_of_STATE_VARIABLE_Specs_0_38 = STATE_VARIABLE_Specs_276_276;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTypeDefns_0_2 = next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      STATE_VARIABLE_RevInstDefns_0_4 = next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      STATE_VARIABLE_RevModeDefns_0_6 = next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      STATE_VARIABLE_RevTypeClasses_0_8 = next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      STATE_VARIABLE_RevInstances_0_10 = next_value_of_STATE_VARIABLE_RevInstances_0_10;
      STATE_VARIABLE_RevPredDecls_0_12 = next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      STATE_VARIABLE_RevModeDecls_0_14 = next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      STATE_VARIABLE_RevClauses_0_16 = next_value_of_STATE_VARIABLE_RevClauses_0_16;
      STATE_VARIABLE_RevForeignEnums_0_18 = next_value_of_STATE_VARIABLE_RevForeignEnums_0_18;
      STATE_VARIABLE_RevForeignExportEnums_0_20 = next_value_of_STATE_VARIABLE_RevForeignExportEnums_0_20;
      STATE_VARIABLE_RevDeclPragmas_0_22 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_22;
      STATE_VARIABLE_RevImplPragmas_0_24 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_24;
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
parse_tree__convert_parse_tree__classify_src_items_int_35_p_0_1(
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
parse_tree__convert_parse_tree__classify_src_items_int_35_p_0(
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
  MR_Word STATE_VARIABLE_RevImplPragmas_0_18,
  MR_Word * STATE_VARIABLE_RevImplPragmas_19,
  MR_Word STATE_VARIABLE_BadClausePreds_0_20,
  MR_Word * STATE_VARIABLE_BadClausePreds_21,
  MR_Word STATE_VARIABLE_RevPromises_0_22,
  MR_Word * STATE_VARIABLE_RevPromises_23,
  MR_Word STATE_VARIABLE_RevInitialises_0_24,
  MR_Word * STATE_VARIABLE_RevInitialises_25,
  MR_Word STATE_VARIABLE_RevFinalises_0_26,
  MR_Word * STATE_VARIABLE_RevFinalises_27,
  MR_Word STATE_VARIABLE_RevMutables_0_28,
  MR_Word * STATE_VARIABLE_RevMutables_29,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_30,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_31,
  MR_Word STATE_VARIABLE_SelfFIMLangs_0_32,
  MR_Word * STATE_VARIABLE_SelfFIMLangs_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
      *STATE_VARIABLE_SelfFIMLangs_33 = STATE_VARIABLE_SelfFIMLangs_0_32;
      *STATE_VARIABLE_ImplicitAvailNeeds_31 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
      *STATE_VARIABLE_RevMutables_29 = STATE_VARIABLE_RevMutables_0_28;
      *STATE_VARIABLE_RevFinalises_27 = STATE_VARIABLE_RevFinalises_0_26;
      *STATE_VARIABLE_RevInitialises_25 = STATE_VARIABLE_RevInitialises_0_24;
      *STATE_VARIABLE_RevPromises_23 = STATE_VARIABLE_RevPromises_0_22;
      *STATE_VARIABLE_BadClausePreds_21 = STATE_VARIABLE_BadClausePreds_0_20;
      *STATE_VARIABLE_RevImplPragmas_19 = STATE_VARIABLE_RevImplPragmas_0_18;
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
      MR_Word Item_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMutables_239_239;
      MR_Word STATE_VARIABLE_RevFinalises_241_241;
      MR_Word STATE_VARIABLE_RevInitialises_243_243;
      MR_Word STATE_VARIABLE_RevPromises_246_246;
      MR_Word STATE_VARIABLE_RevImplPragmas_265_265;
      MR_Word STATE_VARIABLE_RevDeclPragmas_272_272;
      MR_Word STATE_VARIABLE_BadClausePreds_283_283;
      MR_Word STATE_VARIABLE_RevModeDecls_284_284;
      MR_Word STATE_VARIABLE_RevPredDecls_285_285;
      MR_Word STATE_VARIABLE_Specs_331_331;
      MR_Word STATE_VARIABLE_RevInstances_332_332;
      MR_Word STATE_VARIABLE_RevTypeClasses_333_333;
      MR_Word STATE_VARIABLE_RevModeDefns_334_334;
      MR_Word STATE_VARIABLE_RevInstDefns_335_335;
      MR_Word STATE_VARIABLE_RevTypeDefns_336_336;
      MR_Word STATE_VARIABLE_SelfFIMLangs_338_338;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_339_339;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevInstances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RevImplPragmas_0_18;
      MR_Word next_value_of_STATE_VARIABLE_BadClausePreds_0_20;
      MR_Word next_value_of_STATE_VARIABLE_RevPromises_0_22;
      MR_Word next_value_of_STATE_VARIABLE_RevInitialises_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevFinalises_0_26;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_28;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_30;
      MR_Word next_value_of_STATE_VARIABLE_SelfFIMLangs_0_32;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_34;

      switch (MR_tag((MR_Word) Item_87)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_134 = (MR_Word) ((MR_Word) (Item_87));
            MR_Word PredOrFunc_135 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_134, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredSymName_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_134, (MR_Integer) 1))));
            MR_Word ArgTerms_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_134, (MR_Integer) 2))));
            MR_Word Context_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_134, (MR_Integer) 5))));
            MR_Integer Arity_142;
            MR_Word UnqualPredSymName_143;
            MR_String PredName_144;
            MR_Word UserArity_145;
            MR_Word PredPfNameArity_146;
            MR_String Var_273;
            MR_Word Var_274;
            MR_Word Var_275;
            MR_Word Var_279;
            MR_Word Var_280;
            MR_Word Var_282;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[38]), ArgTerms_137, &Arity_142);
            Var_273 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_136);
            {
              UnqualPredSymName_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), UnqualPredSymName_143, 0) = ((MR_Box) (Var_273));
            }
            {
              Var_274 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_274, 0) = ((MR_Box) (UnqualPredSymName_143));
              MR_hl_field(MR_mktag(0), Var_274, 1) = ((MR_Box) (Arity_142));
            }
            PredName_144 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_2_f_0(PredOrFunc_135, Var_274);
            {
              Var_280 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_280, 0) = ((MR_Box) (PredName_144));
            }
            {
              Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (Var_280));
              MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_parse_tree_scalar_common_1[125])));
              MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) (Var_279));
            }
            parse_tree__convert_parse_tree__error_is_exported_4_p_0(Context_140, Var_275, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_331_331);
            Var_282 = (MR_Word) (Arity_142);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_135, &UserArity_145, Var_282);
            {
              PredPfNameArity_146 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredPfNameArity_146, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_135));
              MR_hl_field(MR_mktag(0), PredPfNameArity_146, 1) = ((MR_Box) (PredSymName_136));
              MR_hl_field(MR_mktag(0), PredPfNameArity_146, 2) = ((MR_Box) (UserArity_145));
            }
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_146)), STATE_VARIABLE_BadClausePreds_0_20, &STATE_VARIABLE_BadClausePreds_283_283);
            STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
            STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
            STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
            STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
            STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
            STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
            STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDeclInfo_132 = (MR_Word) (MR_body((MR_Word) (Item_87), (MR_Integer) 1));

            {
              STATE_VARIABLE_RevPredDecls_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_285_285, 0) = ((MR_Box) (ItemPredDeclInfo_132));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPredDecls_285_285, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_12));
            }
            STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
            STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
            STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
            STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
            STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
            STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
            STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
            STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
            STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDeclInfo_133 = (MR_Word) (MR_body((MR_Word) (Item_87), (MR_Integer) 2));

            {
              STATE_VARIABLE_RevModeDecls_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_284_284, 0) = ((MR_Box) (ItemModeDeclInfo_133));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_284_284, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
            }
            STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
            STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
            STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
            STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
            STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
            STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
            STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
            STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
            STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
            STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
            STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
            STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
            STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
            STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
            STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
            STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_87, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_331_331);
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemPromiseInfo_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(ItemPromiseInfo_180, STATE_VARIABLE_ImplicitAvailNeeds_0_30, &STATE_VARIABLE_ImplicitAvailNeeds_339_339);
                {
                  STATE_VARIABLE_RevPromises_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_246_246, 0) = ((MR_Box) (ItemPromiseInfo_180));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPromises_246_246, 1) = ((MR_Box) (STATE_VARIABLE_RevPromises_0_22));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemTypeclassInfo_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevTypeClasses_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_333_333, 0) = ((MR_Box) (ItemTypeclassInfo_124));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeClasses_333_333, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeClasses_0_8));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemInstanceInfo_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));
                MR_Word InstanceBody_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_125, (MR_Integer) 4))));

                if ((InstanceBody_126 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                  STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
                }
                else
                {
                  MR_Word InstanceMethods_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_126, (MR_Integer) 0))));
                  MR_Word Msg_130;
                  MR_Word Spec_131;
                  MR_Word Var_319;
                  MR_Word Var_329;
                  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_339_339;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[20]), InstanceMethods_127, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_30)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_339_339);
                  STATE_VARIABLE_ImplicitAvailNeeds_339_339 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_339_339));
                  Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_125, (MR_Integer) 7))));
                  {
                    Msg_130 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Msg_130, 0) = ((MR_Box) (Var_319));
                    MR_hl_field(MR_mktag(2), Msg_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[150])));
                  }
                  {
                    Var_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_329, 0) = ((MR_Box) (Msg_130));
                    MR_hl_field(MR_mktag(1), Var_329, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_131 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_131, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/35"));
                    MR_hl_field(MR_mktag(0), Spec_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_131, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                    MR_hl_field(MR_mktag(0), Spec_131, 3) = ((MR_Box) (Var_329));
                  }
                  {
                    STATE_VARIABLE_Specs_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_331_331, 0) = ((MR_Box) (Spec_131));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_331_331, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
                  }
                }
                {
                  STATE_VARIABLE_RevInstances_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_332_332, 0) = ((MR_Box) (ItemInstanceInfo_125));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstances_332_332, 1) = ((MR_Box) (STATE_VARIABLE_RevInstances_0_10));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemInitialiseInfo_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_87, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_331_331);
                {
                  STATE_VARIABLE_RevInitialises_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_243_243, 0) = ((MR_Box) (ItemInitialiseInfo_183));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInitialises_243_243, 1) = ((MR_Box) (STATE_VARIABLE_RevInitialises_0_24));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemFinaliseInfo_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_87, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_331_331);
                {
                  STATE_VARIABLE_RevFinalises_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_241_241, 0) = ((MR_Box) (ItemFinaliseInfo_184));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFinalises_241_241, 1) = ((MR_Box) (STATE_VARIABLE_RevFinalises_0_26));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemMutableInfo_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_87, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_331_331);
                {
                  STATE_VARIABLE_RevMutables_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_239_239, 0) = ((MR_Box) (ItemMutableInfo_185));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMutables_239_239, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_28));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemTypeDefnInfo_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));
                MR_Word TypeDefn_109;

                {
                  STATE_VARIABLE_RevTypeDefns_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefns_336_336, 0) = ((MR_Box) (ItemTypeDefnInfo_106));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypeDefns_336_336, 1) = ((MR_Box) (STATE_VARIABLE_RevTypeDefns_0_2));
                }
                TypeDefn_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_106, (MR_Integer) 2))));
                switch (MR_tag((MR_Word) TypeDefn_109)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                      STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                      STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word DetailsSolver_117 = (MR_Word) (MR_body((MR_Word) (TypeDefn_109), (MR_Integer) 2));

                      parse_tree__convert_parse_tree__acc_implicit_avail_needs_solver_type_3_p_0(DetailsSolver_117, STATE_VARIABLE_ImplicitAvailNeeds_0_30, &STATE_VARIABLE_ImplicitAvailNeeds_339_339);
                      STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_109, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                          STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                          STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word DetailsForeign_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_109, (MR_Integer) 1))));
                          MR_Word ForeignType_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_118, (MR_Integer) 0))));
                          MR_Word Var_337;

                          Var_337 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_119);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_337)), STATE_VARIABLE_SelfFIMLangs_0_32, &STATE_VARIABLE_SelfFIMLangs_338_338);
                          STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefnInfo_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstDefns_335_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_335_335, 0) = ((MR_Box) (ItemInstDefnInfo_122));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstDefns_335_335, 1) = ((MR_Box) (STATE_VARIABLE_RevInstDefns_0_4));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefnInfo_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDefns_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_334_334, 0) = ((MR_Box) (ItemModeDefnInfo_123));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDefns_334_334, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDefns_0_6));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemDeclPragma_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevDeclPragmas_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_272_272, 0) = ((MR_Box) (ItemDeclPragma_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDeclPragmas_272_272, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclPragmas_0_16));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
                STATE_VARIABLE_Specs_331_331 = STATE_VARIABLE_Specs_0_34;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));
                MR_Word ImplPragma_149;

                parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(Item_87, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_331_331);
                {
                  STATE_VARIABLE_RevImplPragmas_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_265_265, 0) = ((MR_Box) (ItemImplPragma_148));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImplPragmas_265_265, 1) = ((MR_Box) (STATE_VARIABLE_RevImplPragmas_0_18));
                }
                ImplPragma_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_148, (MR_Integer) 0))));
                switch (MR_tag((MR_Word) ImplPragma_149)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ForeignProcInfo_151 = (MR_Word) (MR_body((MR_Word) (ImplPragma_149), (MR_Integer) 2));
                      MR_Word SymName_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_151, (MR_Integer) 1))));
                      MR_Word Vars_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_151, (MR_Integer) 3))));
                      MR_Word Var_270;
                      MR_Word PredOrFunc_358 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignProcInfo_151, (MR_Integer) 2))) & (MR_Integer) 1);
                      MR_Integer Arity_359;
                      MR_Word UserArity_360;
                      MR_Word PredPfNameArity_421;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), Vars_154, &Arity_359);
                      Var_270 = (MR_Word) (Arity_359);
                      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_358, &UserArity_360, Var_270);
                      {
                        PredPfNameArity_421 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PredPfNameArity_421, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_358));
                        MR_hl_field(MR_mktag(0), PredPfNameArity_421, 1) = ((MR_Box) (SymName_153));
                        MR_hl_field(MR_mktag(0), PredPfNameArity_421, 2) = ((MR_Box) (UserArity_360));
                      }
                      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_421)), STATE_VARIABLE_BadClausePreds_0_20, &STATE_VARIABLE_BadClausePreds_283_283);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_149, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ExternalProcInfo_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_149, (MR_Integer) 1))));
                          MR_Word PredPfNameArity_367 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalProcInfo_158, (MR_Integer) 0))));

                          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_367)), STATE_VARIABLE_BadClausePreds_0_20, &STATE_VARIABLE_BadClausePreds_283_283);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word FactTableInfo_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_149, (MR_Integer) 1))));
                          MR_Word PredSpec_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FactTableInfo_160, (MR_Integer) 0))));
                          MR_Word PFU_163 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_161, (MR_Integer) 0))) & (MR_Integer) 3);
                          MR_Word UserArity_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_161, (MR_Integer) 2))));
                          MR_Word SymName_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_161, (MR_Integer) 1))));

                          switch (PFU_163) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                MR_Word PredPfNameArity_369;

                                {
                                  PredPfNameArity_369 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), PredPfNameArity_369, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), PredPfNameArity_369, 1) = ((MR_Box) (SymName_373));
                                  MR_hl_field(MR_mktag(0), PredPfNameArity_369, 2) = ((MR_Box) (UserArity_371));
                                }
                                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_369)), STATE_VARIABLE_BadClausePreds_0_20, &STATE_VARIABLE_BadClausePreds_283_283);
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                MR_Word PredPfNameArity_368;

                                {
                                  PredPfNameArity_368 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), PredPfNameArity_368, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                  MR_hl_field(MR_mktag(0), PredPfNameArity_368, 1) = ((MR_Box) (SymName_373));
                                  MR_hl_field(MR_mktag(0), PredPfNameArity_368, 2) = ((MR_Box) (UserArity_371));
                                }
                                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), ((MR_Box) (PredPfNameArity_368)), STATE_VARIABLE_BadClausePreds_0_20, &STATE_VARIABLE_BadClausePreds_283_283);
                              }
                              break;
                            case (MR_Integer) 2:
                              STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 6:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 7:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 8:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 9:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 10:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 11:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 12:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                      case (MR_Integer) 13:
                        STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Pieces_179;
                MR_Word Var_251;
                MR_Word Var_252;
                MR_Word Var_262;
                MR_Word Spec_383;

                Var_252 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_87);
                Var_251 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_252, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[127])), Var_251);
                Var_262 = parse_tree__prog_item__get_item_context_1_f_0(Item_87);
                {
                  Spec_383 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_383, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/35"));
                  MR_hl_field(MR_mktag(1), Spec_383, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_383, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_383, 3) = ((MR_Box) (Var_262));
                  MR_hl_field(MR_mktag(1), Spec_383, 4) = ((MR_Box) (Pieces_179));
                }
                {
                  STATE_VARIABLE_Specs_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_331_331, 0) = ((MR_Box) (Spec_383));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_331_331, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word ItemTypeRepnInfo_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_87, (MR_Integer) 1))));
                MR_Word Var_225;
                MR_Word Var_226;
                MR_Word Var_236;
                MR_Word Spec_384;
                MR_Word Pieces_385;

                Var_226 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_87);
                Var_225 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_226, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_385 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[127])), Var_225);
                Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_186, (MR_Integer) 4))));
                {
                  Spec_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_384, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_src_items_int\'/35"));
                  MR_hl_field(MR_mktag(1), Spec_384, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_384, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_384, 3) = ((MR_Box) (Var_236));
                  MR_hl_field(MR_mktag(1), Spec_384, 4) = ((MR_Box) (Pieces_385));
                }
                {
                  STATE_VARIABLE_Specs_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_331_331, 0) = ((MR_Box) (Spec_384));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_331_331, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
                }
                STATE_VARIABLE_RevTypeDefns_336_336 = STATE_VARIABLE_RevTypeDefns_0_2;
                STATE_VARIABLE_RevInstDefns_335_335 = STATE_VARIABLE_RevInstDefns_0_4;
                STATE_VARIABLE_RevModeDefns_334_334 = STATE_VARIABLE_RevModeDefns_0_6;
                STATE_VARIABLE_RevTypeClasses_333_333 = STATE_VARIABLE_RevTypeClasses_0_8;
                STATE_VARIABLE_RevInstances_332_332 = STATE_VARIABLE_RevInstances_0_10;
                STATE_VARIABLE_RevPredDecls_285_285 = STATE_VARIABLE_RevPredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_284_284 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_RevDeclPragmas_272_272 = STATE_VARIABLE_RevDeclPragmas_0_16;
                STATE_VARIABLE_RevImplPragmas_265_265 = STATE_VARIABLE_RevImplPragmas_0_18;
                STATE_VARIABLE_BadClausePreds_283_283 = STATE_VARIABLE_BadClausePreds_0_20;
                STATE_VARIABLE_RevPromises_246_246 = STATE_VARIABLE_RevPromises_0_22;
                STATE_VARIABLE_RevInitialises_243_243 = STATE_VARIABLE_RevInitialises_0_24;
                STATE_VARIABLE_RevFinalises_241_241 = STATE_VARIABLE_RevFinalises_0_26;
                STATE_VARIABLE_RevMutables_239_239 = STATE_VARIABLE_RevMutables_0_28;
                STATE_VARIABLE_ImplicitAvailNeeds_339_339 = STATE_VARIABLE_ImplicitAvailNeeds_0_30;
                STATE_VARIABLE_SelfFIMLangs_338_338 = STATE_VARIABLE_SelfFIMLangs_0_32;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_88;
      next_value_of_STATE_VARIABLE_RevTypeDefns_0_2 = STATE_VARIABLE_RevTypeDefns_336_336;
      next_value_of_STATE_VARIABLE_RevInstDefns_0_4 = STATE_VARIABLE_RevInstDefns_335_335;
      next_value_of_STATE_VARIABLE_RevModeDefns_0_6 = STATE_VARIABLE_RevModeDefns_334_334;
      next_value_of_STATE_VARIABLE_RevTypeClasses_0_8 = STATE_VARIABLE_RevTypeClasses_333_333;
      next_value_of_STATE_VARIABLE_RevInstances_0_10 = STATE_VARIABLE_RevInstances_332_332;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_12 = STATE_VARIABLE_RevPredDecls_285_285;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_284_284;
      next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16 = STATE_VARIABLE_RevDeclPragmas_272_272;
      next_value_of_STATE_VARIABLE_RevImplPragmas_0_18 = STATE_VARIABLE_RevImplPragmas_265_265;
      next_value_of_STATE_VARIABLE_BadClausePreds_0_20 = STATE_VARIABLE_BadClausePreds_283_283;
      next_value_of_STATE_VARIABLE_RevPromises_0_22 = STATE_VARIABLE_RevPromises_246_246;
      next_value_of_STATE_VARIABLE_RevInitialises_0_24 = STATE_VARIABLE_RevInitialises_243_243;
      next_value_of_STATE_VARIABLE_RevFinalises_0_26 = STATE_VARIABLE_RevFinalises_241_241;
      next_value_of_STATE_VARIABLE_RevMutables_0_28 = STATE_VARIABLE_RevMutables_239_239;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_30 = STATE_VARIABLE_ImplicitAvailNeeds_339_339;
      next_value_of_STATE_VARIABLE_SelfFIMLangs_0_32 = STATE_VARIABLE_SelfFIMLangs_338_338;
      next_value_of_STATE_VARIABLE_Specs_0_34 = STATE_VARIABLE_Specs_331_331;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTypeDefns_0_2 = next_value_of_STATE_VARIABLE_RevTypeDefns_0_2;
      STATE_VARIABLE_RevInstDefns_0_4 = next_value_of_STATE_VARIABLE_RevInstDefns_0_4;
      STATE_VARIABLE_RevModeDefns_0_6 = next_value_of_STATE_VARIABLE_RevModeDefns_0_6;
      STATE_VARIABLE_RevTypeClasses_0_8 = next_value_of_STATE_VARIABLE_RevTypeClasses_0_8;
      STATE_VARIABLE_RevInstances_0_10 = next_value_of_STATE_VARIABLE_RevInstances_0_10;
      STATE_VARIABLE_RevPredDecls_0_12 = next_value_of_STATE_VARIABLE_RevPredDecls_0_12;
      STATE_VARIABLE_RevModeDecls_0_14 = next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      STATE_VARIABLE_RevDeclPragmas_0_16 = next_value_of_STATE_VARIABLE_RevDeclPragmas_0_16;
      STATE_VARIABLE_RevImplPragmas_0_18 = next_value_of_STATE_VARIABLE_RevImplPragmas_0_18;
      STATE_VARIABLE_BadClausePreds_0_20 = next_value_of_STATE_VARIABLE_BadClausePreds_0_20;
      STATE_VARIABLE_RevPromises_0_22 = next_value_of_STATE_VARIABLE_RevPromises_0_22;
      STATE_VARIABLE_RevInitialises_0_24 = next_value_of_STATE_VARIABLE_RevInitialises_0_24;
      STATE_VARIABLE_RevFinalises_0_26 = next_value_of_STATE_VARIABLE_RevFinalises_0_26;
      STATE_VARIABLE_RevMutables_0_28 = next_value_of_STATE_VARIABLE_RevMutables_0_28;
      STATE_VARIABLE_ImplicitAvailNeeds_0_30 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_30;
      STATE_VARIABLE_SelfFIMLangs_0_32 = next_value_of_STATE_VARIABLE_SelfFIMLangs_0_32;
      STATE_VARIABLE_Specs_0_34 = next_value_of_STATE_VARIABLE_Specs_0_34;
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

  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DescPieces_6, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[129])));
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[147])), Var_16);
  {
    Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
    MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 40U));
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

static void MR_CALL 
parse_tree__convert_parse_tree__error_item_is_exported_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Pieces_16;
  MR_Word Spec_17;
  MR_Word Var_22;

  Var_8 = parse_tree__prog_item__get_item_context_1_f_0(Item_4);
  Var_9 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_4);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_9, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[129])));
  Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[147])), Var_22);
  {
    Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.error_is_exported\'/4"));
    MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_8));
    MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_7 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
  }
}

static void MR_CALL 
parse_tree__convert_parse_tree__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromiseInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_4, (MR_Integer) 1))));

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
  MR_Word SolverTypeDetails_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_4, (MR_Integer) 0))));
  MR_Word MutableItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_6, (MR_Integer) 3))));
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_13;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[19]), MutableItems_11, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_13);
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

static MR_bool MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_trans_opt_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_trans_opt__1246__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2]));
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
      MR_hl_field(MR_mktag(1), UseSpec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), UseSpec_17, 3) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), UseSpec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[82])));
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
      MR_hl_field(MR_mktag(1), FIMSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), FIMSpec_21, 3) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), FIMSpec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[83])));
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
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
            Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])), Var_118);
            Var_129 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
            {
              Spec_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_208, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
              MR_hl_field(MR_mktag(1), Spec_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_208, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])), Var_118);
                Var_129 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                {
                  Spec_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_208, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                  MR_hl_field(MR_mktag(1), Spec_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_208, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                      Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_173, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                      Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])), Var_172);
                      Var_183 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                          Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_173, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                          Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])), Var_172);
                          Var_183 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                          {
                            Spec_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                            MR_hl_field(MR_mktag(1), Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_156, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])), Var_155);
                Var_166 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                {
                  Spec_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_198, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                  MR_hl_field(MR_mktag(1), Spec_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_198, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                      Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_136, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                      Pieces_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[100])), Var_135);
                      Var_146 = parse_tree__prog_item__get_item_context_1_f_0(Item_42);
                      {
                        Spec_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_200, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_trans_opt_items\'/17"));
                        MR_hl_field(MR_mktag(1), Spec_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_200, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_opt_to_plain_opt__933__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0(
  MR_Word ParseTreeOpt_5,
  MR_Word * ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
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
    MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[2]));
    MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_opt_to_plain_opt_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (OptFileKind_9));
    MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "trying to convert non-ofk_plain_opt parse_tree_opt ", (MR_String) "to parse_tree_plain_opt");
  mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_opt_to_plain_opt\'/4", Var_63);
  Var_67 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__convert_parse_tree__accumulate_uses_maps_3_p_0(Uses_11, Var_67, &UseMap_14);
  Var_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[17]), FIMs_12);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_68, &FIMSpecs_15);
  parse_tree__convert_parse_tree__classify_plain_opt_items_45_p_0(Items_13, (MR_Word) ((MR_Unsigned) 0U), &TypeDefns0_16, (MR_Word) ((MR_Unsigned) 0U), &ForeignEnums0_17, (MR_Word) ((MR_Unsigned) 0U), &InstDefns0_18, (MR_Word) ((MR_Unsigned) 0U), &ModeDefns0_19, (MR_Word) ((MR_Unsigned) 0U), &TypeClasses0_20, (MR_Word) ((MR_Unsigned) 0U), &Instances0_21, (MR_Word) ((MR_Unsigned) 0U), &PredDecls0_22, (MR_Word) ((MR_Unsigned) 0U), &RevModeDecls_23, (MR_Word) ((MR_Unsigned) 0U), &RevClauses0_24, (MR_Word) ((MR_Unsigned) 0U), &RevForeignProcs_25, (MR_Word) ((MR_Unsigned) 0U), &Promises0_26, (MR_Word) ((MR_Unsigned) 0U), &PredMarkers0_27, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs0_28, (MR_Word) ((MR_Unsigned) 0U), &UnusedArgs0_29, (MR_Word) ((MR_Unsigned) 0U), &TermInfos0_30, (MR_Word) ((MR_Unsigned) 0U), &Term2Infos0_31, (MR_Word) ((MR_Unsigned) 0U), &Exceptions0_32, (MR_Word) ((MR_Unsigned) 0U), &Trailings0_33, (MR_Word) ((MR_Unsigned) 0U), &MMTablings0_34, (MR_Word) ((MR_Unsigned) 0U), &Sharings0_35, (MR_Word) ((MR_Unsigned) 0U), &Reuses0_36, STATE_VARIABLE_Specs_0_59, STATE_VARIABLE_Specs_60);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), TypeDefns0_16, &TypeDefns_37);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnums0_17, &ForeignEnums_38);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), InstDefns0_18, &InstDefns_39);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), ModeDefns0_19, &ModeDefns_40);
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
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[18]), Clauses0_45, &Clauses_58);
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
            MR_Word ItemPredDecl_142 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 1));

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
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_143 = (MR_Word) (MR_body((MR_Word) (Item_112), (MR_Integer) 2));

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
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
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
            case (MR_Integer) 1:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 14:
              {
                MR_Word Var_251;
                MR_Word Var_252;
                MR_Word Var_262;
                MR_Word Pieces_383;
                MR_Word Spec_384;

                Var_252 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_112);
                Var_251 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_252, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_383 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[98])), Var_251);
                Var_262 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                {
                  Spec_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_384, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                  MR_hl_field(MR_mktag(1), Spec_384, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_384, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 2:
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
            case (MR_Integer) 3:
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
            case (MR_Integer) 4:
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
            case (MR_Integer) 8:
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
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefn_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

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
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefn_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_112, (MR_Integer) 1))));

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
                      Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_294, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                      Pieces_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[98])), Var_293);
                      Var_304 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                      {
                        Spec_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_174, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                        MR_hl_field(MR_mktag(1), Spec_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_174, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                          Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_294, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                          Pieces_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[98])), Var_293);
                          Var_304 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                          {
                            Spec_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_174, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                            MR_hl_field(MR_mktag(1), Spec_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_174, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                      Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_273, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                      Pieces_355 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[98])), Var_272);
                      Var_283 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                      {
                        Spec_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_356, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                        MR_hl_field(MR_mktag(1), Spec_356, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_356, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
                          Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_273, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                          Pieces_355 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[98])), Var_272);
                          Var_283 = parse_tree__prog_item__get_item_context_1_f_0(Item_112);
                          {
                            Spec_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Spec_356, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_plain_opt_items\'/45"));
                            MR_hl_field(MR_mktag(1), Spec_356, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), Spec_356, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int3__758__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71)
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
  MR_Word IntTypeCheckedMap_52;
  MR_Word ImpInstDefnMap_53;
  MR_Word IntInstCheckedMap_54;
  MR_Word ImpModeDefnMap_55;
  MR_Word IntModeCheckedMap_56;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_Specs_87_87;
  MR_Word STATE_VARIABLE_Specs_89_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word STATE_VARIABLE_Specs_107_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word STATE_VARIABLE_Specs_111_111;
  MR_Word STATE_VARIABLE_Specs_127_127;
  MR_Word STATE_VARIABLE_Specs_134_134;
  MR_Word STATE_VARIABLE_Specs_136_136;
  MR_Word STATE_VARIABLE_Specs_138_138;
  MR_Word STATE_VARIABLE_Specs_140_140;
  MR_Word STATE_VARIABLE_ImpContexts_142_142;
  MR_Word STATE_VARIABLE_ImpContexts_144_144;
  MR_Word STATE_VARIABLE_ImpContexts_146_146;
  MR_Word STATE_VARIABLE_ImpContexts_148_148;
  MR_Word STATE_VARIABLE_ImpContexts_150_150;
  MR_Word _ImpInclMap_24;

  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int3_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 3));
  }
  mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4", (MR_String) "trying to convert non-ifk_int3 parse_tree_int to parse_tree_int3");
  if ((MaybeVersionNumbers_11 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_87_87 = STATE_VARIABLE_Specs_0_70;
  else
  {
    MR_Word VNSpec_22;

    {
      VNSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VNSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(MR_mktag(1), VNSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), VNSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), VNSpec_22, 3) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(1), VNSpec_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[70])));
    }
    {
      STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (VNSpec_22));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_70));
    }
  }
  parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_23, &_ImpInclMap_24, &InclMap_25, STATE_VARIABLE_Specs_87_87, &STATE_VARIABLE_Specs_89_89);
  Var_90 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  Var_91 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_90, &IntImportMap_26, Var_91, &IntUseMap_27);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), IntUseMap_27);
  if (succeeded)
    STATE_VARIABLE_Specs_107_107 = STATE_VARIABLE_Specs_89_89;
  else
  {
    MR_Word IntUseContextLists_28;
    MR_Word IntUseContexts_29;
    MR_Word IntUseSpec_31;
    MR_Word Var_106;
    MR_Box conv0_Var_106;

    IntUseContextLists_28 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]), IntUseMap_27);
    mercury__one_or_more__condense_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseContextLists_28, &IntUseContexts_29);
    conv0_Var_106 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseContexts_29);
    Var_106 = ((MR_Word) (conv0_Var_106));
    {
      IntUseSpec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IntUseSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(MR_mktag(1), IntUseSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), IntUseSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), IntUseSpec_31, 3) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), IntUseSpec_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[73])));
    }
    {
      STATE_VARIABLE_Specs_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 0) = ((MR_Box) (IntUseSpec_31));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_107_107, 1) = ((MR_Box) (STATE_VARIABLE_Specs_89_89));
    }
  }
  Var_108 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  Var_109 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  Var_110 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, IntImportMap_26, Var_108, Var_109, Var_110, &SectionImportUseMap_32, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_111_111);
  parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_32, &ImportUseMap_33);
  if ((IntFIMs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_127_127 = STATE_VARIABLE_Specs_111_111;
  else
  {
    MR_Word FirstIntFIM_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntFIMs_16, (MR_Integer) 0))));
    MR_Word IntFIMSpec_37;
    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstIntFIM_34, (MR_Integer) 2))));

    {
      IntFIMSpec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IntFIMSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(MR_mktag(1), IntFIMSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), IntFIMSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), IntFIMSpec_37, 3) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(1), IntFIMSpec_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[76])));
    }
    {
      STATE_VARIABLE_Specs_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_127_127, 0) = ((MR_Box) (IntFIMSpec_37));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_127_127, 1) = ((MR_Box) (STATE_VARIABLE_Specs_111_111));
    }
  }
  parse_tree__convert_parse_tree__classify_int3_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_38, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_39, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_41, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_42, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_43, STATE_VARIABLE_Specs_127_127, &STATE_VARIABLE_Specs_134_134);
  IntTypeDefnMap_44 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_38);
  IntInstDefnMap_45 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_39);
  IntModeDefnMap_46 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_40);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_41, &IntTypeClasses_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_42, &IntInstances_48);
  IntTypeRepnMap_49 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_43);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), &ImpTypeDefnMap_50);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), &ImpForeignEnumMap_51);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_44, ImpTypeDefnMap_50, ImpForeignEnumMap_51, &IntTypeCheckedMap_52, STATE_VARIABLE_Specs_134_134, &STATE_VARIABLE_Specs_136_136);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_53);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_45, ImpInstDefnMap_53, &IntInstCheckedMap_54, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_138_138);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_55);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_46, ImpModeDefnMap_55, &IntModeCheckedMap_56, STATE_VARIABLE_Specs_138_138, &STATE_VARIABLE_Specs_140_140);
  if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_142_142 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadIncl_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadIncl_58, (MR_Integer) 1))));

    {
      STATE_VARIABLE_ImpContexts_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_142_142, 0) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_142_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_144_144 = STATE_VARIABLE_ImpContexts_142_142;
  else
  {
    MR_Word HeadAvail_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
    MR_Word Var_145;

    Var_145 = parse_tree__item_util__get_avail_context_1_f_0(HeadAvail_60);
    {
      STATE_VARIABLE_ImpContexts_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_144_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_144_144, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_142_142));
    }
  }
  if ((ImpFIMs_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_146_146 = STATE_VARIABLE_ImpContexts_144_144;
  else
  {
    MR_Word HeadFIM_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpFIMs_17, (MR_Integer) 0))));
    MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFIM_62, (MR_Integer) 2))));

    {
      STATE_VARIABLE_ImpContexts_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_146_146, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_146_146, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_144_144));
    }
  }
  if ((ImpItems_19 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ImpContexts_148_148 = STATE_VARIABLE_ImpContexts_146_146;
  else
  {
    MR_Word HeadImpItem_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItems_19, (MR_Integer) 0))));
    MR_Word Var_149;

    Var_149 = parse_tree__prog_item__get_item_context_1_f_0(HeadImpItem_64);
    {
      STATE_VARIABLE_ImpContexts_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_148_148, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_148_148, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_146_146));
    }
  }
  mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), STATE_VARIABLE_ImpContexts_148_148, &STATE_VARIABLE_ImpContexts_150_150);
  if ((STATE_VARIABLE_ImpContexts_150_150 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_71 = STATE_VARIABLE_Specs_140_140;
  else
  {
    MR_Word FirstImpContext_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_150_150, (MR_Integer) 0))));
    MR_Word ImpItemSpec_69;

    {
      ImpItemSpec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpItemSpec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int3\'/4"));
      MR_hl_field(MR_mktag(1), ImpItemSpec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ImpItemSpec_69, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), ImpItemSpec_69, 3) = ((MR_Box) (FirstImpContext_66));
      MR_hl_field(MR_mktag(1), ImpItemSpec_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[80])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_71 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpItemSpec_69));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_140_140));
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
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntTypeCheckedMap_52));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntInstCheckedMap_54));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntModeCheckedMap_56));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeClasses_47));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstances_48));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeRepnMap_49));
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
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Pieces_64;
            MR_Word Spec_65;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_95;

            Var_85 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
            Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[96])), Var_84);
            Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
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
                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
                Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[96])), Var_84);
                Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int3_items_int\'/15"));
                  MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 3:
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
            case (MR_Integer) 4:
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
            case (MR_Integer) 8:
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
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefn_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

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
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefn_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_2(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int2__577__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt2_6,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61)
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
  MR_Word IntTypeCheckedMap_55;
  MR_Word ImpInstDefnMap_56;
  MR_Word IntInstCheckedMap_57;
  MR_Word ImpModeDefnMap_58;
  MR_Word IntModeCheckedMap_59;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word STATE_VARIABLE_Specs_86_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word STATE_VARIABLE_Specs_103_103;
  MR_Word STATE_VARIABLE_Specs_125_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word STATE_VARIABLE_Specs_129_129;
  MR_Word Var_130;
  MR_Word Var_132;
  MR_Word STATE_VARIABLE_Specs_140_140;
  MR_Word STATE_VARIABLE_Specs_142_142;
  MR_Word STATE_VARIABLE_Specs_144_144;
  MR_Word STATE_VARIABLE_Specs_146_146;
  MR_Word _ImpInclMap_25;
  MR_Word FirstIntImportContext_29;

  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int2_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 2));
  }
  mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4", (MR_String) "trying to convert non-ifk_int2 parse_tree_int to parse_tree_int2");
  if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_84_84 = STATE_VARIABLE_Specs_0_60;
  else
  {
    MR_Word FirstImpIncl_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
    MR_Word ImpInclSpec_23;
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstImpIncl_20, (MR_Integer) 1))));

    {
      ImpInclSpec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpInclSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
      MR_hl_field(MR_mktag(1), ImpInclSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ImpInclSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), ImpInclSpec_23, 3) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(1), ImpInclSpec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[58])));
    }
    {
      STATE_VARIABLE_Specs_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_84_84, 0) = ((MR_Box) (ImpInclSpec_23));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_84_84, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_60));
    }
  }
  parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_24, &_ImpInclMap_25, &InclMap_26, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_86_86);
  Var_87 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  Var_88 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_87, &IntImportMap_27, Var_88, &IntUseMap_28);
  succeeded = parse_tree__item_util__first_context_in_module_names_contexts_2_p_0(IntImportMap_27, &FirstIntImportContext_29);
  if (succeeded)
  {
    MR_Word IntImportSpec_31;

    {
      IntImportSpec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IntImportSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
      MR_hl_field(MR_mktag(1), IntImportSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), IntImportSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), IntImportSpec_31, 3) = ((MR_Box) (FirstIntImportContext_29));
      MR_hl_field(MR_mktag(1), IntImportSpec_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[51])));
    }
    {
      STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (IntImportSpec_31));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (STATE_VARIABLE_Specs_86_86));
    }
  }
  else
    STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_86_86;
  if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_103_103;
  else
  {
    MR_Word FirstImpAvail_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
    MR_Word ImpAvailSpec_35;
    MR_Word Var_124;

    Var_124 = parse_tree__item_util__get_avail_context_1_f_0(FirstImpAvail_32);
    {
      ImpAvailSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int2\'/4"));
      MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 3) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), ImpAvailSpec_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[66])));
    }
    {
      STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (ImpAvailSpec_35));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_103_103));
    }
  }
  Var_126 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  Var_127 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  Var_128 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, Var_126, IntUseMap_28, Var_127, Var_128, &SectionImportUseMap_36, STATE_VARIABLE_Specs_125_125, &STATE_VARIABLE_Specs_129_129);
  parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_36, &ImportUseMap_37);
  Var_130 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[15]), IntFIMs_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_130, &IntFIMSpecs_38);
  Var_132 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[16]), ImpFIMs_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_132, &ImpFIMSpecs_39);
  parse_tree__convert_parse_tree__classify_int2_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_41, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_42, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_43, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_44, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_45, STATE_VARIABLE_Specs_129_129, &STATE_VARIABLE_Specs_140_140);
  IntTypeDefnMap_46 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_40);
  IntInstDefnMap_47 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_41);
  IntModeDefnMap_48 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_42);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_43, &IntTypeClasses_49);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_44, &IntInstances_50);
  IntTypeRepnMap_51 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_45);
  parse_tree__convert_parse_tree__classify_int2_items_imp_5_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_52, STATE_VARIABLE_Specs_140_140, &STATE_VARIABLE_Specs_142_142);
  ImpTypeDefnMap_53 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_52);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]), &ImpForeignEnumMap_54);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_46, ImpTypeDefnMap_53, ImpForeignEnumMap_54, &IntTypeCheckedMap_55, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_144_144);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_56);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_47, ImpInstDefnMap_56, &IntInstCheckedMap_57, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_146_146);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_58);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_48, ImpModeDefnMap_58, &IntModeCheckedMap_59, STATE_VARIABLE_Specs_146_146, STATE_VARIABLE_Specs_61);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
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
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeCheckedMap_55));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstCheckedMap_57));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntModeCheckedMap_59));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntTypeClasses_49));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntInstances_50));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeRepnMap_51));
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
            Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[53])));
            Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[95])), Var_44);
            Var_55 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
            {
              Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
              MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 9:
            case (MR_Integer) 10:
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
                Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[53])));
                Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[95])), Var_44);
                Var_55 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
                {
                  Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_imp\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 8:
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
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Pieces_64;
            MR_Word Spec_65;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_95;

            Var_85 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_37);
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
            Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[95])), Var_84);
            Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
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
                Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
                Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[95])), Var_84);
                Var_95 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int2_items_int\'/15"));
                  MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 3:
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
            case (MR_Integer) 4:
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
            case (MR_Integer) 8:
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
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefn_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

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
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefn_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_2(
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
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int1__363__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt1_6,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
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
  MR_Word IntTypeCheckedMap_61;
  MR_Word ImpInstDefnMap_62;
  MR_Word IntInstCheckedMap_63;
  MR_Word ImpModeDefnMap_64;
  MR_Word IntModeCheckedMap_65;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_Specs_72_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Specs_91_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word STATE_VARIABLE_Specs_94_94;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_Specs_110_110;
  MR_Word STATE_VARIABLE_Specs_114_114;
  MR_Word STATE_VARIABLE_Specs_116_116;
  MR_Word STATE_VARIABLE_Specs_118_118;
  MR_Word FirstImportContext_27;
  MR_Word _IntForeignEnums_41;

  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int1_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/4", (MR_String) "trying to convert non-ifk_int1 parse_tree_int to parse_tree_int1");
  parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, ImpIncls_13, &IntInclMap_20, &ImpInclMap_21, &InclMap_22, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_72_72);
  Var_73 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  Var_74 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_73, &IntImportMap_23, Var_74, &IntUseMap_24);
  Var_75 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  Var_76 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_15, Var_75, &ImpImportMap_25, Var_76, &ImpUseMap_26);
  succeeded = parse_tree__item_util__first_context_in_two_module_names_contexts_3_p_0(IntImportMap_23, ImpImportMap_25, &FirstImportContext_27);
  if (succeeded)
  {
    MR_Word ImportSpec_29;

    {
      ImportSpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImportSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int1\'/4"));
      MR_hl_field(MR_mktag(1), ImportSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ImportSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), ImportSpec_29, 3) = ((MR_Box) (FirstImportContext_27));
      MR_hl_field(MR_mktag(1), ImportSpec_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[51])));
    }
    {
      STATE_VARIABLE_Specs_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 0) = ((MR_Box) (ImportSpec_29));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_72_72));
    }
  }
  else
    STATE_VARIABLE_Specs_91_91 = STATE_VARIABLE_Specs_72_72;
  Var_92 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  Var_93 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[1]));
  parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, Var_92, IntUseMap_24, Var_93, ImpUseMap_26, &SectionImportUseMap_30, STATE_VARIABLE_Specs_91_91, &STATE_VARIABLE_Specs_94_94);
  parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_30, &ImportUseMap_31);
  Var_95 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[13]), IntFIMs_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_95, &IntFIMSpecs_32);
  Var_97 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[14]), ImpFIMs_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_97, &ImpFIMSpecs_33);
  parse_tree__convert_parse_tree__classify_int1_items_int_25_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_35, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_36, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_37, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_38, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_39, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_40, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_41, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_42, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_43, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns_44, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_110_110);
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
  parse_tree__convert_parse_tree__classify_int1_items_imp_9_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_55, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums0_56, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_57, STATE_VARIABLE_Specs_110_110, &STATE_VARIABLE_Specs_114_114);
  ImpTypeDefnMap_58 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_55);
  ImpForeignEnumMap_59 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums0_56);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_57, &ImpTypeClasses_60);
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_45, ImpTypeDefnMap_58, ImpForeignEnumMap_59, &IntTypeCheckedMap_61, STATE_VARIABLE_Specs_114_114, &STATE_VARIABLE_Specs_116_116);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), &ImpInstDefnMap_62);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_46, ImpInstDefnMap_62, &IntInstCheckedMap_63, STATE_VARIABLE_Specs_116_116, &STATE_VARIABLE_Specs_118_118);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), &ImpModeDefnMap_64);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_47, ImpModeDefnMap_64, &IntModeCheckedMap_65, STATE_VARIABLE_Specs_118_118, STATE_VARIABLE_Specs_67);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
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
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeCheckedMap_61));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntInstCheckedMap_63));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntModeCheckedMap_65));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeClasses_48));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntInstances_49));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_50));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_51));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntDeclPragmas_52));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntPromises_53));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntTypeRepnMap_54));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeClasses_60));
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
            Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[53])));
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[93])), Var_60);
            Var_71 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
            {
              Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
              MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
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
                Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[53])));
                Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[93])), Var_60);
                Var_71 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
                {
                  Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_imp\'/9"));
                  MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 8:
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
            Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
            Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[89])), Var_130);
            Var_141 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
            {
              Spec_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_183, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/25"));
              MR_hl_field(MR_mktag(1), Spec_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_183, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            MR_Word ItemPredDecl_82 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 1));

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
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_83 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 2));

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
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
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
            case (MR_Integer) 1:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
              {
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_141;
                MR_Word Pieces_182;
                MR_Word Spec_183;

                Var_131 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_62);
                Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_131, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
                Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[89])), Var_130);
                Var_141 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
                {
                  Spec_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_183, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/25"));
                  MR_hl_field(MR_mktag(1), Spec_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_183, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 2:
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
                      Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_148, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[91])));
                      Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[89])), Var_147);
                      {
                        Spec_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_94, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int1_items_int\'/25"));
                        MR_hl_field(MR_mktag(1), Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_94, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 3:
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
            case (MR_Integer) 4:
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
            case (MR_Integer) 8:
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
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefn_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

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
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefn_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

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

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[20]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[12]), TypeRepnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeRepnMap_4);
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

  succeeded = parse_tree__convert_parse_tree__IntroducedFrom__pred__check_convert_parse_tree_int_to_int0__216__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
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
  MR_Word TypeCtorCheckedMap_70;
  MR_Word InstCtorCheckedMap_71;
  MR_Word ModeCtorCheckedMap_72;
  MR_Word Var_75;
  MR_Word STATE_VARIABLE_Specs_79_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Specs_99_99;
  MR_Word STATE_VARIABLE_Specs_110_110;
  MR_Word STATE_VARIABLE_Specs_112_112;
  MR_Word STATE_VARIABLE_Specs_114_114;
  MR_Word _IntForeignEnums_38;

  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__convert_parse_tree_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__convert_parse_tree__check_convert_parse_tree_int_to_int0_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (IntFileKind_9));
    MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_75, (MR_String) "predicate \140parse_tree.convert_parse_tree.check_convert_parse_tree_int_to_int0\'/4", (MR_String) "trying to convert non-ifk_int0 parse_tree_int to parse_tree_int0");
  parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_12, ImpIncls_13, &IntInclMap_20, &ImpInclMap_21, &InclMap_22, STATE_VARIABLE_Specs_0_73, &STATE_VARIABLE_Specs_79_79);
  Var_80 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  Var_81 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_14, Var_80, &IntImportMap_23, Var_81, &IntUseMap_24);
  Var_82 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  Var_83 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_15, Var_82, &ImpImportMap_25, Var_83, &ImpUseMap_26);
  parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_8, IntImportMap_23, IntUseMap_24, ImpImportMap_25, ImpUseMap_26, &SectionImportUseMap_27, STATE_VARIABLE_Specs_79_79, &STATE_VARIABLE_Specs_84_84);
  parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_27, &ImportUseMap_28);
  Var_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[10]), IntFIMs_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_85, &IntFIMSpecs_29);
  Var_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[11]), ImpFIMs_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_87, &ImpFIMSpecs_30);
  parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_31, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_32, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_33, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_34, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_35, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_36, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_37, (MR_Word) ((MR_Unsigned) 0U), &_IntForeignEnums_38, (MR_Word) ((MR_Unsigned) 0U), &IntDeclPragmas0_39, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_40, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_99_99);
  IntTypeDefnMap_41 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_31);
  IntInstDefnMap_42 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_32);
  IntModeDefnMap_43 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_33);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_34, &IntTypeClasses_44);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_35, &IntInstances_45);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_36, &IntPredDecls_46);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_37, &IntModeDecls_47);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[0]), IntDeclPragmas0_39, &IntDeclPragmas_48);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_40, &IntPromises_49);
  parse_tree__convert_parse_tree__classify_int0_items_int_or_imp_23_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns_50, (MR_Word) ((MR_Unsigned) 0U), &ImpInstDefns_51, (MR_Word) ((MR_Unsigned) 0U), &ImpModeDefns_52, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_53, (MR_Word) ((MR_Unsigned) 0U), &ImpInstances0_54, (MR_Word) ((MR_Unsigned) 0U), &ImpPredDecls0_55, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_56, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums_57, (MR_Word) ((MR_Unsigned) 0U), &ImpDeclPragmas0_58, (MR_Word) ((MR_Unsigned) 0U), &ImpPromises0_59, STATE_VARIABLE_Specs_99_99, &STATE_VARIABLE_Specs_110_110);
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
  parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, IntTypeDefnMap_41, ImpTypeDefnMap_60, ImpForeignEnumMap_67, &TypeCtorCheckedMap_70, STATE_VARIABLE_Specs_110_110, &STATE_VARIABLE_Specs_112_112);
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_42, ImpInstDefnMap_61, &InstCtorCheckedMap_71, STATE_VARIABLE_Specs_112_112, &STATE_VARIABLE_Specs_114_114);
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_43, ImpModeDefnMap_62, &ModeCtorCheckedMap_72, STATE_VARIABLE_Specs_114_114, STATE_VARIABLE_Specs_74);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (28 * sizeof(MR_Word)), NULL, NULL);
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
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (TypeCtorCheckedMap_70));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (InstCtorCheckedMap_71));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ModeCtorCheckedMap_72));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntTypeClasses_44));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntInstances_45));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPredDecls_46));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntModeDecls_47));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntDeclPragmas_48));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPromises_49));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeClasses_63));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpInstances_64));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpPredDecls_65));
    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpModeDecls_66));
    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpDeclPragmas_68));
    MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpPromises_69));
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
            Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
            Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[85])), Var_116);
            Var_127 = parse_tree__prog_item__get_item_context_1_f_0(Item_57);
            {
              Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/23"));
              MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            MR_Word ItemPredDecl_75 = (MR_Word) (MR_body((MR_Word) (Item_57), (MR_Integer) 1));

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
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl_76 = (MR_Word) (MR_body((MR_Word) (Item_57), (MR_Integer) 2));

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
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
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
            case (MR_Integer) 1:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
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
                Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[87])));
                Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_parse_tree_scalar_common_1[85])), Var_116);
                Var_127 = parse_tree__prog_item__get_item_context_1_f_0(Item_57);
                {
                  Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_parse_tree.classify_int0_items_int_or_imp\'/23"));
                  MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
            case (MR_Integer) 2:
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
            case (MR_Integer) 3:
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
            case (MR_Integer) 4:
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
            case (MR_Integer) 8:
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
            case (MR_Integer) 9:
              {
                MR_Word ItemInstDefn_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

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
            case (MR_Integer) 10:
              {
                MR_Word ItemModeDefn_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

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

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[3]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[9]), ForeignEnums_3, ((MR_Box) (Var_6)), &conv1_ForeignEnumMap_4);
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
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[8]), ModeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_ModeDefnMap_4);
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
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[7]), InstDefnInfos_3, ((MR_Box) (Var_6)), &conv1_InstDefnMap_4);
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
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_parse_tree_scalar_common_1[4]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_parse_tree_scalar_common_2[6]), TypeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeDefnMap_4);
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
