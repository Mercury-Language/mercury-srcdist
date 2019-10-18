/*
** Automatically generated from `convert_interface.m'
** by the Mercury compiler,
** version rotd-2019-10-18
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


// :- module parse_tree.convert_interface.
// :- implementation.

/*
INIT mercury__parse_tree__convert_interface__init
ENDINIT
*/

#include "parse_tree.convert_interface.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "parse_tree.check_parse_tree_type_defns.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int3__779__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int2__609__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int1__406__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int0__260__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_82);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_type_repn_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_promise_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_pragma_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_foreign_enum_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_mode_decl_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_pred_decl_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_instance_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_typeclass_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_mode_defn_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_inst_defn_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_type_defn_item_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_use_avail_1_f_0(
  MR_Word ModuleName_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_import_avail_1_f_0(
  MR_Word ModuleName_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_include_1_f_0(
  MR_Word ModuleName_3);

static void MR_CALL 
parse_tree__convert_interface__accumulate_foreign_enum_items_3_p_0(
  MR_Word AllEnums_4,
  MR_Word STATE_VARIABLE_ForeignEnums_0_10,
  MR_Word * STATE_VARIABLE_ForeignEnums_11);

static void MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7);

static void MR_CALL 
parse_tree__convert_interface__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9);

static void MR_CALL 
parse_tree__convert_interface__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_foreign_type_defn_1_f_0(
  MR_Word ForeignDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_du_type_defn_1_f_0(
  MR_Word DuDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_eqv_type_defn_1_f_0(
  MR_Word EqvDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_solver_type_defn_1_f_0(
  MR_Word SolverDefnInfo_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_abstract_type_defn_1_f_0(
  MR_Word AbstractDefnInfo_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_16,
  MR_Word * STATE_VARIABLE_TypeDefns_17);

static void MR_CALL 
parse_tree__convert_interface__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_17,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_18);

static void MR_CALL 
parse_tree__convert_interface__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15);

static void MR_CALL 
parse_tree__convert_interface__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_22,
  MR_Word * STATE_VARIABLE_ModeDefnMap_23);

static void MR_CALL 
parse_tree__convert_interface__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_23,
  MR_Word * STATE_VARIABLE_InstDefnMap_24);

static void MR_CALL 
parse_tree__convert_interface__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_43,
  MR_Word * STATE_VARIABLE_TypeDefnMap_44);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_interface__classify_int3_items_int_15_p_0(
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
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_interface__classify_int2_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefns_0_2,
  MR_Word * STATE_VARIABLE_TypeDefns_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
parse_tree__convert_interface__classify_int2_items_int_15_p_0(
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
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_interface__classify_int1_items_imp_9_p_0(
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
parse_tree__convert_interface__classify_int1_items_int_25_p_0(
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
  MR_Word STATE_VARIABLE_Pragmas_0_18,
  MR_Word * STATE_VARIABLE_Pragmas_19,
  MR_Word STATE_VARIABLE_Promises_0_20,
  MR_Word * STATE_VARIABLE_Promises_21,
  MR_Word STATE_VARIABLE_TypeRepns_0_22,
  MR_Word * STATE_VARIABLE_TypeRepns_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__convert_interface__classify_int0_items_int_or_imp_23_p_0(
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
  MR_Word STATE_VARIABLE_Pragmas_0_18,
  MR_Word * STATE_VARIABLE_Pragmas_19,
  MR_Word STATE_VARIABLE_Promises_0_20,
  MR_Word * STATE_VARIABLE_Promises_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0(
  MR_Word TypeCtorRepnMap_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0(
  MR_Word ForeignEnumMap_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(
  MR_Word ModeCtorDefnMap_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0(
  MR_Word InstCtorDefnMap_3);

static MR_Box MR_CALL 
parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(
  MR_Word TypeCtorDefnMap_3);


static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_1[74][2];

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_2[99][3];

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_3[11][6];

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_4[24][5];

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_5[7][1];




static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_1[74][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_1[9]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_1[3]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain any"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its implementation section."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations in its implementation section."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "version number information."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[19])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain any"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[19])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an implementation section."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file must not have"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[17])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int0 file may not contain"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int1 file may not contain"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int file may not contain"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int2 file may not contain"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A .int3 file may not contain"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__convert_interface_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 72 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_5[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_2[99][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[2])),
    ((MR_Box) (parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[3])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[3])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[11])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[12])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[11])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[12])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[4])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[13])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[10])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[11])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[12])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 61 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 62 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[8])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[5])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[6])),
    ((MR_Box) (parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[7])),
    ((MR_Box) (parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[8])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 68 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 69 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 72 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[16])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[16])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[10])),
    ((MR_Box) (parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[18])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 80 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[16])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[16])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 82 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 84 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[16])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[17])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_3[9])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[15])),
    ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[19])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[20])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 92 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[19])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[21])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[22])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[23])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 96 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[23])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 97 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[23])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 98 */
  {
    ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[23])),
    ((MR_Box) (parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_3[11][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__convert_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_4[24][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_interface_scalar_common_5[7][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[23])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[30])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[38])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[42])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[45])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[48])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[52])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_c_java_csharp_erlang_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_TypeInfo) (&parse_tree__convert_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__convert_interface__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__convert_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int3__779__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_70)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_70);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int2__609__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_61);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int1__406__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_71)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_71);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int0__260__1_2_p_0(
  MR_Word IntFileKind_9,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded = (IntFileKind_9 == HeadVar__2_82);

    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_type_repn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_promise_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_foreign_enum_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_mode_decl_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_pred_decl_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_instance_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_typeclass_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_mode_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (X_3)));

    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_inst_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (X_3)));

    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_type_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_use_avail_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Avail_4;
    MR_Word UseInfo_5;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    {
      UseInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UseInfo_5, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), UseInfo_5, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), UseInfo_5, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    Avail_4 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (UseInfo_5)));
    return Avail_4;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_import_avail_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Avail_4;
    MR_Word ImportInfo_5;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    {
      ImportInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImportInfo_5, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), ImportInfo_5, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), ImportInfo_5, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    Avail_4 = (MR_Word) ((MR_Word) (ImportInfo_5));
    return Avail_4;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__wrap_include_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Include_4;
    MR_Word Var_5;

    Var_5 = mercury__term__context_init_0_f_0();
    {
      Include_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Include_4, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), Include_4, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), Include_4, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    return Include_4;
  }
}

static void MR_CALL 
parse_tree__convert_interface__accumulate_foreign_enum_items_3_p_0(
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
parse_tree__convert_interface__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7)
{
  *STATE_VARIABLE_TypeRepns_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_TypeRepns_0_6, ((MR_Box) (TypeRepn_4)));
}

static void MR_CALL 
parse_tree__convert_interface__accumulate_mode_ctor_defns_3_p_0(
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
parse_tree__convert_interface__accumulate_inst_ctor_defns_3_p_0(
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
parse_tree__convert_interface__wrap_foreign_type_defn_1_f_0(
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
parse_tree__convert_interface__wrap_du_type_defn_1_f_0(
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
parse_tree__convert_interface__wrap_eqv_type_defn_1_f_0(
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
parse_tree__convert_interface__wrap_solver_type_defn_1_f_0(
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
parse_tree__convert_interface__wrap_abstract_type_defn_1_f_0(
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
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_TypeDefnInfo_4;

    conv8_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_TypeDefnInfo_4;

    conv7_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_TypeDefnInfo_4;

    conv6_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_TypeDefnInfo_4;

    conv5_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_TypeDefnInfo_4;

    conv4_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_du_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_TypeDefnInfo_4;

    conv3_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_eqv_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_TypeDefnInfo_4;

    conv2_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeDefnInfo_4;

    conv1_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_solver_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_TypeDefnInfo_4;

    conv0_TypeDefnInfo_4 = parse_tree__convert_interface__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TypeDefnInfo_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0(
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
    Var_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[90]), Var_23);
    Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[91]), SolverDefns_7);
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
    Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[92]), Var_30);
    Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[7]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[93]), EqvDefns_9);
    Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[8]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[94]), DuDefns_10);
    Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[95]), ForeignDefnsC_12);
    Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[96]), ForeignDefnsJava_13);
    Var_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[97]), ForeignDefnsCsharp_14);
    Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[98]), ForeignDefnsErlang_15);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_44, Var_46);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_41, Var_43);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_38, Var_40);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_35, Var_37);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_32, Var_34);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_28, Var_31);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_25, Var_27);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_21, Var_24);
    Var_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), Var_20);
    *STATE_VARIABLE_TypeDefns_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), STATE_VARIABLE_TypeDefns_0_16, Var_19);
  }
}

static void MR_CALL 
parse_tree__convert_interface__add_foreign_enum_item_to_map_3_p_0(
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), STATE_VARIABLE_ForeignEnumMap_0_17, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums0_15);
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
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (AllEnums_16)), STATE_VARIABLE_ForeignEnumMap_0_17, STATE_VARIABLE_ForeignEnumMap_18);
  }
}

static void MR_CALL 
parse_tree__convert_interface__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15)
{
  {
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnInfo_4, (MR_Integer) 0))));
    MR_Word Params_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnInfo_4, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Word TypeCtor_13;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[4]), Params_7, &Arity_12);
    {
      TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), TypeCtor_13, 1) = ((MR_Box) (Arity_12));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (TypeRepnInfo_4)), STATE_VARIABLE_TypeRepnMap_0_14, STATE_VARIABLE_TypeRepnMap_15);
  }
}

static void MR_CALL 
parse_tree__convert_interface__add_mode_defn_to_map_3_p_0(
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

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[11]), Params_7, &Arity_12);
    {
      SNA_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA_13, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), SNA_13, 1) = ((MR_Box) (Arity_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), STATE_VARIABLE_ModeDefnMap_0_22, ((MR_Box) (SNA_13)), &conv0_AllDefns0_14);
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
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (SNA_13)), ((MR_Box) (AllDefns_18)), STATE_VARIABLE_ModeDefnMap_0_22, STATE_VARIABLE_ModeDefnMap_23);
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
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ((MR_Box) (SNA_13)), ((MR_Box) (AllDefns_32)), STATE_VARIABLE_ModeDefnMap_0_22, STATE_VARIABLE_ModeDefnMap_23);
    }
  }
}

static void MR_CALL 
parse_tree__convert_interface__add_inst_defn_to_map_3_p_0(
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

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[11]), Params_7, &Arity_13);
    {
      SNA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA_14, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), SNA_14, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), STATE_VARIABLE_InstDefnMap_0_23, ((MR_Box) (SNA_14)), &conv0_AllDefns0_15);
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
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (SNA_14)), ((MR_Box) (AllDefns_19)), STATE_VARIABLE_InstDefnMap_0_23, STATE_VARIABLE_InstDefnMap_24);
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
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ((MR_Box) (SNA_14)), ((MR_Box) (AllDefns_33)), STATE_VARIABLE_InstDefnMap_0_23, STATE_VARIABLE_InstDefnMap_24);
    }
  }
}

static void MR_CALL 
parse_tree__convert_interface__add_type_defn_to_map_3_p_0(
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

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[4]), Params_7, &Arity_12);
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
          STATE_VARIABLE_DuDefns_76_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[8]), STATE_VARIABLE_DuDefns_49_49, Var_77);
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
          STATE_VARIABLE_SolverDefns_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[6]), STATE_VARIABLE_SolverDefns_46_46, Var_83);
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
          STATE_VARIABLE_EqvDefns_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[7]), STATE_VARIABLE_EqvDefns_48_48, Var_80);
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
                        STATE_VARIABLE_AbstractStdDefns_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[5]), STATE_VARIABLE_AbstractStdDefns_47_47, Var_86);
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
                        STATE_VARIABLE_AbstractSolverDefns_88_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[5]), STATE_VARIABLE_AbstractSolverDefns_45_45, Var_89);
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
                    STATE_VARIABLE_AbstractStdDefns_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[5]), STATE_VARIABLE_AbstractStdDefns_47_47, Var_86);
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
                    STATE_VARIABLE_ForeignDefnsC_73_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), STATE_VARIABLE_ForeignDefnsC_51_51, Var_74);
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
                    STATE_VARIABLE_ForeignDefnsJava_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), STATE_VARIABLE_ForeignDefnsJava_52_52, Var_71);
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
                    STATE_VARIABLE_ForeignDefnsCsharp_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), STATE_VARIABLE_ForeignDefnsCsharp_53_53, Var_68);
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
                    STATE_VARIABLE_ForeignDefnsErlang_64_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[10]), STATE_VARIABLE_ForeignDefnsErlang_54_54, Var_65);
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

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__prog_item__get_import_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int3__779__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
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
    MR_Word IntInclModuleNames_23;
    MR_Word IntImports_24;
    MR_Word IntUses_25;
    MR_Word IntImportModules_26;
    MR_Word IntImportModuleNames_27;
    MR_Word IntTypeDefns0_36;
    MR_Word IntInstDefns0_37;
    MR_Word IntModeDefns0_38;
    MR_Word IntTypeClasses0_39;
    MR_Word IntInstances0_40;
    MR_Word IntTypeRepns0_41;
    MR_Word IntTypeDefnMap_42;
    MR_Word IntInstDefnMap_43;
    MR_Word IntModeDefnMap_44;
    MR_Word IntTypeClasses_45;
    MR_Word IntInstances_46;
    MR_Word IntTypeRepnMap_47;
    MR_Word ImpTypeDefnMap_48;
    MR_Word IntForeignEnumMap_49;
    MR_Word ImpForeignEnumMap_50;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_Specs_87_87;
    MR_Word Var_89;
    MR_Word STATE_VARIABLE_Specs_111_111;
    MR_Word STATE_VARIABLE_Specs_132_132;
    MR_Word STATE_VARIABLE_Specs_139_139;
    MR_Word STATE_VARIABLE_Specs_141_141;
    MR_Word STATE_VARIABLE_ImpContexts_143_143;
    MR_Word STATE_VARIABLE_ImpContexts_145_145;
    MR_Word STATE_VARIABLE_ImpContexts_147_147;
    MR_Word STATE_VARIABLE_ImpContexts_149_149;
    MR_Word STATE_VARIABLE_ImpContexts_151_151;
    MR_Box conv1_IntInclModuleNames_23;
    MR_Word _TypeDefnCheckedMap_51;

    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int3_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Integer) 3));
    }
    mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140parse_tree.convert_interface.convert_parse_tree_int_parse_tree_int3\'/4", (MR_String) "trying to convert non-ifk_int3 parse_tree_int to parse_tree_int3");
    if ((MaybeVersionNumbers_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_87_87 = STATE_VARIABLE_Specs_0_65;
    else
    {
      MR_Word VNSpec_22;
      MR_Word Var_81;
      MR_Word Var_82;

      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (ModuleNameContext_10));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[70])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        VNSpec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VNSpec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), VNSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), VNSpec_22, 2) = ((MR_Box) (Var_81));
      }
      {
        STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (VNSpec_22));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_65));
      }
    }
    Var_89 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[88]), IntIncls_12, ((MR_Box) (Var_89)), &conv1_IntInclModuleNames_23);
    IntInclModuleNames_23 = ((MR_Word) (conv1_IntInclModuleNames_23));
    parse_tree__prog_item__avail_imports_uses_3_p_0(IntAvails_14, &IntImports_24, &IntUses_25);
    IntImportModules_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[89]), IntImports_24);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImportModules_26, &IntImportModuleNames_27);
    if ((IntUses_25 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_87_87;
    else
    {
      MR_Word FirstIntUse_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntUses_25, (MR_Integer) 0))));
      MR_Word IntUseSpec_31;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstIntUse_28, (MR_Integer) 1))));

      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[71])));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        IntUseSpec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntUseSpec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntUseSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), IntUseSpec_31, 2) = ((MR_Box) (Var_104));
      }
      {
        STATE_VARIABLE_Specs_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_111_111, 0) = ((MR_Box) (IntUseSpec_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_111_111, 1) = ((MR_Box) (STATE_VARIABLE_Specs_87_87));
      }
    }
    if ((IntFIMs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_111_111;
    else
    {
      MR_Word FirstIntFIM_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntFIMs_16, (MR_Integer) 0))));
      MR_Word IntFIMSpec_35;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstIntFIM_32, (MR_Integer) 2))));

      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[72])));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        IntFIMSpec_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntFIMSpec_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntFIMSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), IntFIMSpec_35, 2) = ((MR_Box) (Var_125));
      }
      {
        STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (IntFIMSpec_35));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (STATE_VARIABLE_Specs_111_111));
      }
    }
    parse_tree__convert_interface__classify_int3_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_36, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_37, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_38, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_39, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_40, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_41, STATE_VARIABLE_Specs_132_132, &STATE_VARIABLE_Specs_139_139);
    IntTypeDefnMap_42 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_36);
    IntInstDefnMap_43 = parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_37);
    IntModeDefnMap_44 = parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_38);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_39, &IntTypeClasses_45);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_40, &IntInstances_46);
    IntTypeRepnMap_47 = parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_41);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), &ImpTypeDefnMap_48);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), &IntForeignEnumMap_49);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), &ImpForeignEnumMap_50);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_42, ImpTypeDefnMap_48, IntForeignEnumMap_49, ImpForeignEnumMap_50, &_TypeDefnCheckedMap_51, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_141_141);
    if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_143_143 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadIncl_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadIncl_53, (MR_Integer) 1))));

      {
        STATE_VARIABLE_ImpContexts_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_143_143, 0) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_143_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_145_145 = STATE_VARIABLE_ImpContexts_143_143;
    else
    {
      MR_Word HeadAvail_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
      MR_Word Var_146;

      Var_146 = parse_tree__prog_item__get_avail_context_1_f_0(HeadAvail_55);
      {
        STATE_VARIABLE_ImpContexts_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_145_145, 0) = ((MR_Box) (Var_146));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_145_145, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_143_143));
      }
    }
    if ((ImpFIMs_17 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_147_147 = STATE_VARIABLE_ImpContexts_145_145;
    else
    {
      MR_Word HeadFIM_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpFIMs_17, (MR_Integer) 0))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFIM_57, (MR_Integer) 2))));

      {
        STATE_VARIABLE_ImpContexts_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_147_147, 0) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_147_147, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_145_145));
      }
    }
    if ((ImpItems_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImpContexts_149_149 = STATE_VARIABLE_ImpContexts_147_147;
    else
    {
      MR_Word HeadImpItem_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItems_19, (MR_Integer) 0))));
      MR_Word Var_150;

      Var_150 = parse_tree__prog_item__get_item_context_1_f_0(HeadImpItem_59);
      {
        STATE_VARIABLE_ImpContexts_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_149_149, 0) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_149_149, 1) = ((MR_Box) (STATE_VARIABLE_ImpContexts_147_147));
      }
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), STATE_VARIABLE_ImpContexts_149_149, &STATE_VARIABLE_ImpContexts_151_151);
    if ((STATE_VARIABLE_ImpContexts_151_151 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_141_141;
    else
    {
      MR_Word FirstImpContext_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpContexts_151_151, (MR_Integer) 0))));
      MR_Word ImpItemSpec_64;
      MR_Word Var_162;
      MR_Word Var_163;

      {
        Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (FirstImpContext_61));
        MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[73])));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ImpItemSpec_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpItemSpec_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImpItemSpec_64, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), ImpItemSpec_64, 2) = ((MR_Box) (Var_162));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_66 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpItemSpec_64));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_141_141));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt3_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclModuleNames_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntImportModuleNames_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntTypeDefnMap_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntInstDefnMap_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntModeDefnMap_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntTypeClasses_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntInstances_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeRepnMap_47));
    }
  }
}

static void MR_CALL 
parse_tree__convert_interface__classify_int3_items_int_15_p_0(
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
      MR_Word STATE_VARIABLE_Specs_99_99;
      MR_Word STATE_VARIABLE_TypeRepns_100_100;
      MR_Word STATE_VARIABLE_Instances_101_101;
      MR_Word STATE_VARIABLE_TypeClasses_102_102;
      MR_Word STATE_VARIABLE_ModeDefns_103_103;
      MR_Word STATE_VARIABLE_InstDefns_104_104;
      MR_Word STATE_VARIABLE_TypeDefns_105_105;
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
            MR_Word Pieces_62;
            MR_Word Spec_63;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;

            Var_83 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_37);
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
            Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[69])), Var_82);
            Var_94 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Pieces_62));
            }
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_63, 2) = ((MR_Box) (Var_92));
            }
            {
              STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (Spec_63));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
            }
            STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_47 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_104_104, 0) = ((MR_Box) (ItemInstDefn_47));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_104_104, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_48 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_103_103, 0) = ((MR_Box) (ItemModeDefn_48));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_103_103, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
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
            case (MR_Integer) 5:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
              {
                MR_Word Pieces_62;
                MR_Word Spec_63;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;

                Var_83 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_37);
                Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
                Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[69])), Var_82);
                Var_94 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Pieces_62));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_63, 2) = ((MR_Box) (Var_92));
                }
                {
                  STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (Spec_63));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_102_102, 0) = ((MR_Box) (ItemTypeClass_49));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_102_102, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_101_101, 0) = ((MR_Box) (ItemInstance_50));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_101_101, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeRepn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_100_100, 0) = ((MR_Box) (ItemTypeRepn_51));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_100_100, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_105_105, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_105_105, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_105_105;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_104_104;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_103_103;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_102_102;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_101_101;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_100_100;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_99_99;
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
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__prog_item__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__prog_item__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int2__609__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0(
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
    MR_Word IntInclModuleNames_20;
    MR_Word IntImports_25;
    MR_Word IntUses_26;
    MR_Word IntUsedModules_31;
    MR_Word IntUsedModuleNames_32;
    MR_Word IntFIMSpecs_37;
    MR_Word ImpFIMSpecs_38;
    MR_Word IntTypeDefns0_39;
    MR_Word IntInstDefns0_40;
    MR_Word IntModeDefns0_41;
    MR_Word IntTypeClasses0_42;
    MR_Word IntInstances0_43;
    MR_Word IntTypeRepns0_44;
    MR_Word IntTypeDefnMap_45;
    MR_Word IntInstDefnMap_46;
    MR_Word IntModeDefnMap_47;
    MR_Word IntTypeClasses_48;
    MR_Word IntInstances_49;
    MR_Word IntTypeRepnMap_50;
    MR_Word ImpTypeDefns0_51;
    MR_Word ImpTypeDefnMap_52;
    MR_Word IntForeignEnumMap_53;
    MR_Word ImpForeignEnumMap_54;
    MR_Word Var_58;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_Specs_87_87;
    MR_Word STATE_VARIABLE_Specs_108_108;
    MR_Word STATE_VARIABLE_Specs_136_136;
    MR_Word Var_137;
    MR_Word Var_139;
    MR_Word STATE_VARIABLE_Specs_147_147;
    MR_Word STATE_VARIABLE_Specs_149_149;
    MR_Box conv1_IntInclModuleNames_20;
    MR_Word _TypeDefnCheckedMap_55;

    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140parse_tree.convert_interface.convert_parse_tree_int_parse_tree_int2\'/4", (MR_String) "trying to convert non-ifk_int2 parse_tree_int to parse_tree_int2");
    Var_63 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[84]), IntIncls_12, ((MR_Box) (Var_63)), &conv1_IntInclModuleNames_20);
    IntInclModuleNames_20 = ((MR_Word) (conv1_IntInclModuleNames_20));
    if ((ImpIncls_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_87_87 = STATE_VARIABLE_Specs_0_56;
    else
    {
      MR_Word FirstImpIncl_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpIncls_13, (MR_Integer) 0))));
      MR_Word ImpInclSpec_24;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstImpIncl_21, (MR_Integer) 1))));

      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[66])));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ImpInclSpec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpInclSpec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImpInclSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), ImpInclSpec_24, 2) = ((MR_Box) (Var_80));
      }
      {
        STATE_VARIABLE_Specs_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 0) = ((MR_Box) (ImpInclSpec_24));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_87_87, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
      }
    }
    parse_tree__prog_item__avail_imports_uses_3_p_0(IntAvails_14, &IntImports_25, &IntUses_26);
    if ((IntImports_25 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_108_108 = STATE_VARIABLE_Specs_87_87;
    else
    {
      MR_Word FirstIntImport_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntImports_25, (MR_Integer) 0))));
      MR_Word IntImportSpec_30;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstIntImport_27, (MR_Integer) 1))));

      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[63])));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        IntImportSpec_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntImportSpec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntImportSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), IntImportSpec_30, 2) = ((MR_Box) (Var_101));
      }
      {
        STATE_VARIABLE_Specs_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_108_108, 0) = ((MR_Box) (IntImportSpec_30));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_108_108, 1) = ((MR_Box) (STATE_VARIABLE_Specs_87_87));
      }
    }
    IntUsedModules_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[85]), IntUses_26);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedModules_31, &IntUsedModuleNames_32);
    if ((ImpAvails_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_136_136 = STATE_VARIABLE_Specs_108_108;
    else
    {
      MR_Word FirstImpAvail_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAvails_15, (MR_Integer) 0))));
      MR_Word ImpAvailSpec_36;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;

      Var_131 = parse_tree__prog_item__get_avail_context_1_f_0(FirstImpAvail_33);
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[67])));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ImpAvailSpec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpAvailSpec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImpAvailSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), ImpAvailSpec_36, 2) = ((MR_Box) (Var_129));
      }
      {
        STATE_VARIABLE_Specs_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_136_136, 0) = ((MR_Box) (ImpAvailSpec_36));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_136_136, 1) = ((MR_Box) (STATE_VARIABLE_Specs_108_108));
      }
    }
    Var_137 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[86]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_137, &IntFIMSpecs_37);
    Var_139 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[87]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_139, &ImpFIMSpecs_38);
    parse_tree__convert_interface__classify_int2_items_int_15_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns0_39, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns0_40, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns0_41, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_42, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_43, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns0_44, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_147_147);
    IntTypeDefnMap_45 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns0_39);
    IntInstDefnMap_46 = parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns0_40);
    IntModeDefnMap_47 = parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns0_41);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_42, &IntTypeClasses_48);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_43, &IntInstances_49);
    IntTypeRepnMap_50 = parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns0_44);
    parse_tree__convert_interface__classify_int2_items_imp_5_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_51, STATE_VARIABLE_Specs_147_147, &STATE_VARIABLE_Specs_149_149);
    ImpTypeDefnMap_52 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_51);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), &IntForeignEnumMap_53);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), &ImpForeignEnumMap_54);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_45, ImpTypeDefnMap_52, IntForeignEnumMap_53, ImpForeignEnumMap_54, &_TypeDefnCheckedMap_55, STATE_VARIABLE_Specs_149_149, STATE_VARIABLE_Specs_57);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclModuleNames_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntUsedModuleNames_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntFIMSpecs_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImpFIMSpecs_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntTypeDefnMap_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntInstDefnMap_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntModeDefnMap_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntTypeClasses_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntInstances_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntTypeRepnMap_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ImpTypeDefnMap_52));
    }
  }
}

static void MR_CALL 
parse_tree__convert_interface__classify_int2_items_imp_5_p_0(
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
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word STATE_VARIABLE_TypeDefns_60_60;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Pieces_32;
            MR_Word Spec_33;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;

            Var_43 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_12);
            Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_43, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[25])));
            Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[65])), Var_42);
            Var_54 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces_32));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_52));
            }
            {
              STATE_VARIABLE_Specs_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 0) = ((MR_Box) (Spec_33));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
            }
            STATE_VARIABLE_TypeDefns_60_60 = STATE_VARIABLE_TypeDefns_0_2;
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
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                MR_Word Pieces_32;
                MR_Word Spec_33;
                MR_Word Var_42;
                MR_Word Var_43;
                MR_Word Var_52;
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word Var_55;
                MR_Word Var_56;

                Var_43 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_12);
                Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_43, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[25])));
                Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[65])), Var_42);
                Var_54 = parse_tree__prog_item__get_item_context_1_f_0(Item_12);
                {
                  Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces_32));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
                }
                {
                  Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_52));
                }
                {
                  STATE_VARIABLE_Specs_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 0) = ((MR_Box) (Spec_33));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
                }
                STATE_VARIABLE_TypeDefns_60_60 = STATE_VARIABLE_TypeDefns_0_2;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemTypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_60_60, 0) = ((MR_Box) (ItemTypeDefn_16));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_60_60, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_60_60;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_59_59;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_interface__classify_int2_items_int_15_p_0(
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
      MR_Word STATE_VARIABLE_Specs_99_99;
      MR_Word STATE_VARIABLE_TypeRepns_100_100;
      MR_Word STATE_VARIABLE_Instances_101_101;
      MR_Word STATE_VARIABLE_TypeClasses_102_102;
      MR_Word STATE_VARIABLE_ModeDefns_103_103;
      MR_Word STATE_VARIABLE_InstDefns_104_104;
      MR_Word STATE_VARIABLE_TypeDefns_105_105;
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
            MR_Word Pieces_62;
            MR_Word Spec_63;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;

            Var_83 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_37);
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
            Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[65])), Var_82);
            Var_94 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Pieces_62));
            }
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_63, 2) = ((MR_Box) (Var_92));
            }
            {
              STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (Spec_63));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
            }
            STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_47 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_104_104, 0) = ((MR_Box) (ItemInstDefn_47));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_104_104, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_48 = (MR_Word) (MR_body((MR_Word) (Item_37), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_103_103, 0) = ((MR_Box) (ItemModeDefn_48));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_103_103, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
            STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
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
            case (MR_Integer) 5:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
              {
                MR_Word Pieces_62;
                MR_Word Spec_63;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;

                Var_83 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_37);
                Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
                Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[65])), Var_82);
                Var_94 = parse_tree__prog_item__get_item_context_1_f_0(Item_37);
                {
                  Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Pieces_62));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_63, 2) = ((MR_Box) (Var_92));
                }
                {
                  STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (Spec_63));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_102_102, 0) = ((MR_Box) (ItemTypeClass_49));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_102_102, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_101_101, 0) = ((MR_Box) (ItemInstance_50));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_101_101, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeRepn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_100_100, 0) = ((MR_Box) (ItemTypeRepn_51));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_100_100, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_12));
                }
                STATE_VARIABLE_TypeDefns_105_105 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemTypeDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_37, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_105_105, 0) = ((MR_Box) (ItemTypeDefn_46));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_105_105, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_104_104 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_103_103 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_102_102 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_101_101 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_TypeRepns_100_100 = STATE_VARIABLE_TypeRepns_0_12;
                STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_14;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_38;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_105_105;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_104_104;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_103_103;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_102_102;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_101_101;
      next_value_of_STATE_VARIABLE_TypeRepns_0_12 = STATE_VARIABLE_TypeRepns_100_100;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_99_99;
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
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__prog_item__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__prog_item__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__prog_item__get_import_context_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int1__406__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt1_6,
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
    MR_Word IntInclModuleNames_20;
    MR_Word ImpInclModuleNames_21;
    MR_Word IntImports_22;
    MR_Word IntUses_23;
    MR_Word ImpImports_24;
    MR_Word ImpUses_25;
    MR_Word IntIntImportContexts_26;
    MR_Word IntUsedModules_31;
    MR_Word ImpUsedModules_32;
    MR_Word IntUsedModuleNames_33;
    MR_Word ImpUsedModuleNames_34;
    MR_Word IntFIMSpecs_35;
    MR_Word ImpFIMSpecs_36;
    MR_Word IntTypeDefns_37;
    MR_Word IntInstDefns_38;
    MR_Word IntModeDefns_39;
    MR_Word IntTypeClasses0_40;
    MR_Word IntInstances0_41;
    MR_Word IntPredDecls0_42;
    MR_Word RevIntModeDecls_43;
    MR_Word IntForeignEnums_44;
    MR_Word IntPragmas0_45;
    MR_Word IntPromises0_46;
    MR_Word IntTypeRepns_47;
    MR_Word IntTypeDefnMap_48;
    MR_Word IntInstDefnMap_49;
    MR_Word IntModeDefnMap_50;
    MR_Word IntTypeClasses_51;
    MR_Word IntInstances_52;
    MR_Word IntPredDecls_53;
    MR_Word IntModeDecls_54;
    MR_Word IntForeignEnumMap_55;
    MR_Word IntPragmas_56;
    MR_Word IntPromises_57;
    MR_Word IntTypeRepnMap_58;
    MR_Word ImpTypeDefns0_59;
    MR_Word ImpForeignEnums0_60;
    MR_Word ImpTypeClasses0_61;
    MR_Word ImpTypeDefnMap_62;
    MR_Word ImpForeignEnumMap_63;
    MR_Word ImpTypeClasses_64;
    MR_Word Var_68;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_Specs_97_97;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word STATE_VARIABLE_Specs_115_115;
    MR_Word STATE_VARIABLE_Specs_119_119;
    MR_Box conv1_IntInclModuleNames_20;
    MR_Box conv3_ImpInclModuleNames_21;
    MR_Word _TypeDefnCheckedMap_65;

    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int1_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140parse_tree.convert_interface.convert_parse_tree_int_parse_tree_int1\'/4", (MR_String) "trying to convert non-ifk_int1 parse_tree_int to parse_tree_int1");
    Var_73 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[77]), IntIncls_12, ((MR_Box) (Var_73)), &conv1_IntInclModuleNames_20);
    IntInclModuleNames_20 = ((MR_Word) (conv1_IntInclModuleNames_20));
    Var_75 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[78]), ImpIncls_13, ((MR_Box) (Var_75)), &conv3_ImpInclModuleNames_21);
    ImpInclModuleNames_21 = ((MR_Word) (conv3_ImpInclModuleNames_21));
    parse_tree__prog_item__avail_imports_uses_3_p_0(IntAvails_14, &IntImports_22, &IntUses_23);
    parse_tree__prog_item__avail_imports_uses_3_p_0(ImpAvails_15, &ImpImports_24, &ImpUses_25);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), IntImports_22, ImpImports_24);
    IntIntImportContexts_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[79]), Var_77);
    if ((IntIntImportContexts_26 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_97_97 = STATE_VARIABLE_Specs_0_66;
    else
    {
      MR_Word FirstImportContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntIntImportContexts_26, (MR_Integer) 0))));
      MR_Word IntImportSpec_30;
      MR_Word Var_91;
      MR_Word Var_92;

      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (FirstImportContext_27));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[63])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        IntImportSpec_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntImportSpec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntImportSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), IntImportSpec_30, 2) = ((MR_Box) (Var_91));
      }
      {
        STATE_VARIABLE_Specs_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_97_97, 0) = ((MR_Box) (IntImportSpec_30));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_97_97, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
      }
    }
    IntUsedModules_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[80]), IntUses_23);
    ImpUsedModules_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[81]), ImpUses_25);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedModules_31, &IntUsedModuleNames_33);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUsedModules_32, &ImpUsedModuleNames_34);
    Var_100 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[82]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_100, &IntFIMSpecs_35);
    Var_102 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[83]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_102, &ImpFIMSpecs_36);
    parse_tree__convert_interface__classify_int1_items_int_25_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_37, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_38, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_39, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_40, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_41, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_42, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_43, (MR_Word) ((MR_Unsigned) 0U), &IntForeignEnums_44, (MR_Word) ((MR_Unsigned) 0U), &IntPragmas0_45, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_46, (MR_Word) ((MR_Unsigned) 0U), &IntTypeRepns_47, STATE_VARIABLE_Specs_97_97, &STATE_VARIABLE_Specs_115_115);
    IntTypeDefnMap_48 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_37);
    IntInstDefnMap_49 = parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_38);
    IntModeDefnMap_50 = parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_39);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_40, &IntTypeClasses_51);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_41, &IntInstances_52);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_42, &IntPredDecls_53);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_43, &IntModeDecls_54);
    IntForeignEnumMap_55 = parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0(IntForeignEnums_44);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), IntPragmas0_45, &IntPragmas_56);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_46, &IntPromises_57);
    IntTypeRepnMap_58 = parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0(IntTypeRepns_47);
    parse_tree__convert_interface__classify_int1_items_imp_9_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns0_59, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums0_60, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_61, STATE_VARIABLE_Specs_115_115, &STATE_VARIABLE_Specs_119_119);
    ImpTypeDefnMap_62 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns0_59);
    ImpForeignEnumMap_63 = parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums0_60);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_61, &ImpTypeClasses_64);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_48, ImpTypeDefnMap_62, IntForeignEnumMap_55, ImpForeignEnumMap_63, &_TypeDefnCheckedMap_65, STATE_VARIABLE_Specs_119_119, STATE_VARIABLE_Specs_67);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclModuleNames_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclModuleNames_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntUsedModuleNames_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImpUsedModuleNames_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntFIMSpecs_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpFIMSpecs_36));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeDefnMap_48));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstDefnMap_49));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntModeDefnMap_50));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntTypeClasses_51));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntInstances_52));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntPredDecls_53));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntModeDecls_54));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntForeignEnumMap_55));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntPragmas_56));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPromises_57));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntTypeRepnMap_58));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (ImpTypeDefnMap_62));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpForeignEnumMap_63));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeClasses_64));
    }
  }
}

static void MR_CALL 
parse_tree__convert_interface__classify_int1_items_imp_9_p_0(
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
      MR_Word STATE_VARIABLE_Specs_75_75;
      MR_Word STATE_VARIABLE_ForeignEnums_76_76;
      MR_Word STATE_VARIABLE_TypeClasses_77_77;
      MR_Word STATE_VARIABLE_TypeDefns_78_78;
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
            MR_Word Pieces_44;
            MR_Word Spec_45;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;

            Var_59 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_22);
            Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_59, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[25])));
            Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[62])), Var_58);
            Var_70 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_44));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_68));
            }
            {
              STATE_VARIABLE_Specs_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 0) = ((MR_Box) (Spec_45));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
            }
            STATE_VARIABLE_TypeDefns_78_78 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ForeignEnums_76_76 = STATE_VARIABLE_ForeignEnums_0_4;
            STATE_VARIABLE_TypeClasses_77_77 = STATE_VARIABLE_TypeClasses_0_6;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                MR_Word Pieces_44;
                MR_Word Spec_45;
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_68;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;

                Var_59 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_22);
                Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_59, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[25])));
                Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[62])), Var_58);
                Var_70 = parse_tree__prog_item__get_item_context_1_f_0(Item_22);
                {
                  Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_44));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                  MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_68));
                }
                {
                  STATE_VARIABLE_Specs_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 0) = ((MR_Box) (Spec_45));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                }
                STATE_VARIABLE_TypeDefns_78_78 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_76_76 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_77_77 = STATE_VARIABLE_TypeClasses_0_6;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_76_76, 0) = ((MR_Box) (ItemForeignEnum_30));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_76_76, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_4));
                }
                STATE_VARIABLE_TypeDefns_78_78 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_TypeClasses_77_77 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_0_8;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_77_77, 0) = ((MR_Box) (ItemTypeClass_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_77_77, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_6));
                }
                STATE_VARIABLE_TypeDefns_78_78 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_ForeignEnums_76_76 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_0_8;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemTypeDefn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_78_78, 0) = ((MR_Box) (ItemTypeDefn_28));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_78_78, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_ForeignEnums_76_76 = STATE_VARIABLE_ForeignEnums_0_4;
                STATE_VARIABLE_TypeClasses_77_77 = STATE_VARIABLE_TypeClasses_0_6;
                STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_0_8;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_23;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_78_78;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_4 = STATE_VARIABLE_ForeignEnums_76_76;
      next_value_of_STATE_VARIABLE_TypeClasses_0_6 = STATE_VARIABLE_TypeClasses_77_77;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_75_75;
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
parse_tree__convert_interface__classify_int1_items_int_25_p_0(
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
  MR_Word STATE_VARIABLE_Pragmas_0_18,
  MR_Word * STATE_VARIABLE_Pragmas_19,
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
      *STATE_VARIABLE_Pragmas_19 = STATE_VARIABLE_Pragmas_0_18;
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
      MR_Word STATE_VARIABLE_Specs_166_166;
      MR_Word STATE_VARIABLE_Promises_167_167;
      MR_Word STATE_VARIABLE_Pragmas_168_168;
      MR_Word STATE_VARIABLE_ForeignEnums_169_169;
      MR_Word STATE_VARIABLE_ModeDecls_170_170;
      MR_Word STATE_VARIABLE_PredDecls_171_171;
      MR_Word STATE_VARIABLE_TypeRepns_172_172;
      MR_Word STATE_VARIABLE_Instances_173_173;
      MR_Word STATE_VARIABLE_TypeClasses_174_174;
      MR_Word STATE_VARIABLE_ModeDefns_175_175;
      MR_Word STATE_VARIABLE_InstDefns_176_176;
      MR_Word STATE_VARIABLE_TypeDefns_177_177;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      MR_Word next_value_of_STATE_VARIABLE_Pragmas_0_18;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_20;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepns_0_22;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

      switch (MR_tag((MR_Word) Item_62)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word Pieces_190;
            MR_Word Spec_191;

            Var_129 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_62);
            Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_129, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
            Pieces_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[60])), Var_128);
            Var_140 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
            {
              Var_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Pieces_190));
            }
            {
              Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
              MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
              MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_141));
            }
            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
              MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_191 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_191, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_191, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_191, 2) = ((MR_Box) (Var_138));
            }
            {
              STATE_VARIABLE_Specs_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_166_166, 0) = ((MR_Box) (Spec_191));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_166_166, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
            STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
            STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_77 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_176_176, 0) = ((MR_Box) (ItemInstDefn_77));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_176_176, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
            STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
            STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_78 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_175_175, 0) = ((MR_Box) (ItemModeDefn_78));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_175_175, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
            STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
            STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_PredDecls_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_171_171, 0) = ((MR_Box) (ItemPredDecl_82));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_171_171, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ModeDecls_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDecls_170_170, 0) = ((MR_Box) (ItemModeDecl_83));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDecls_170_170, 1) = ((MR_Box) (STATE_VARIABLE_ModeDecls_0_14));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_169_169, 0) = ((MR_Box) (ItemForeignEnum_84));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_169_169, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
              {
                MR_Word Var_128;
                MR_Word Var_129;
                MR_Word Var_138;
                MR_Word Var_139;
                MR_Word Var_140;
                MR_Word Var_141;
                MR_Word Var_142;
                MR_Word Pieces_190;
                MR_Word Spec_191;

                Var_129 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_62);
                Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_129, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
                Pieces_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[60])), Var_128);
                Var_140 = parse_tree__prog_item__get_item_context_1_f_0(Item_62);
                {
                  Var_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Pieces_190));
                }
                {
                  Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                  MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
                  MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_141));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_191 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_191, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_191, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_191, 2) = ((MR_Box) (Var_138));
                }
                {
                  STATE_VARIABLE_Specs_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_166_166, 0) = ((MR_Box) (Spec_191));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_166_166, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPragma_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Pragmas_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pragmas_168_168, 0) = ((MR_Box) (ItemPragma_85));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pragmas_168_168, 1) = ((MR_Box) (STATE_VARIABLE_Pragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 5:
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
                        STATE_VARIABLE_Promises_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_167_167, 0) = ((MR_Box) (ItemPromise_86));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_167_167, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_20));
                      }
                      STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Pieces_93;
                      MR_Word Spec_94;
                      MR_Word Var_150;
                      MR_Word Var_151;
                      MR_Word Var_160;
                      MR_Word Var_161;
                      MR_Word Var_162;
                      MR_Word Var_163;

                      Var_151 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_62);
                      Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_151, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[56])));
                      Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[60])), Var_150);
                      {
                        Var_163 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Pieces_93));
                      }
                      {
                        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
                        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Context_91));
                        MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_162));
                      }
                      {
                        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
                        MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_94, 2) = ((MR_Box) (Var_160));
                      }
                      {
                        STATE_VARIABLE_Specs_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_166_166, 0) = ((MR_Box) (Spec_94));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_166_166, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                      }
                      STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_174_174, 0) = ((MR_Box) (ItemTypeClass_79));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_174_174, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_173_173, 0) = ((MR_Box) (ItemInstance_80));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_173_173, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeRepns_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_172_172, 0) = ((MR_Box) (ItemTypeRepn_81));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeRepns_172_172, 1) = ((MR_Box) (STATE_VARIABLE_TypeRepns_0_22));
                }
                STATE_VARIABLE_TypeDefns_177_177 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemTypeDefn_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_177_177, 0) = ((MR_Box) (ItemTypeDefn_76));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_177_177, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_176_176 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_175_175 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_174_174 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_173_173 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_171_171 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ModeDecls_170_170 = STATE_VARIABLE_ModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_169_169 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_168_168 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_167_167 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_TypeRepns_172_172 = STATE_VARIABLE_TypeRepns_0_22;
                STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_0_24;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_63;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_177_177;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_176_176;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_175_175;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_174_174;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_173_173;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_171_171;
      next_value_of_STATE_VARIABLE_ModeDecls_0_14 = STATE_VARIABLE_ModeDecls_170_170;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_169_169;
      next_value_of_STATE_VARIABLE_Pragmas_0_18 = STATE_VARIABLE_Pragmas_168_168;
      next_value_of_STATE_VARIABLE_Promises_0_20 = STATE_VARIABLE_Promises_167_167;
      next_value_of_STATE_VARIABLE_TypeRepns_0_22 = STATE_VARIABLE_TypeRepns_172_172;
      next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_166_166;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_PredDecls_0_12 = next_value_of_STATE_VARIABLE_PredDecls_0_12;
      STATE_VARIABLE_ModeDecls_0_14 = next_value_of_STATE_VARIABLE_ModeDecls_0_14;
      STATE_VARIABLE_ForeignEnums_0_16 = next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      STATE_VARIABLE_Pragmas_0_18 = next_value_of_STATE_VARIABLE_Pragmas_0_18;
      STATE_VARIABLE_Promises_0_20 = next_value_of_STATE_VARIABLE_Promises_0_20;
      STATE_VARIABLE_TypeRepns_0_22 = next_value_of_STATE_VARIABLE_TypeRepns_0_22;
      STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeRepnMap_15;

    parse_tree__convert_interface__add_type_repn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepnMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepnMap_15));
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_repn_items_to_map_1_f_0(
  MR_Word TypeRepnInfos_3)
{
  {
    MR_Word TypeRepnMap_4;
    MR_Word Var_6;
    MR_Box conv1_TypeRepnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[76]), TypeRepnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeRepnMap_4);
    TypeRepnMap_4 = ((MR_Word) (conv1_TypeRepnMap_4));
    return TypeRepnMap_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__prog_item__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__prog_item__fim_item_to_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__prog_item__get_import_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__prog_item__get_import_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__convert_interface__IntroducedFrom__pred__convert_parse_tree_int_parse_tree_int0__260__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_77,
  MR_Word * STATE_VARIABLE_Specs_78)
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
    MR_Word IntInclModuleNames_20;
    MR_Word ImpInclModuleNames_21;
    MR_Word IntImports_22;
    MR_Word IntUses_23;
    MR_Word ImpImports_24;
    MR_Word ImpUses_25;
    MR_Word IntImportedModules_26;
    MR_Word ImpImportedModules_27;
    MR_Word IntUsedModules_28;
    MR_Word ImpUsedModules_29;
    MR_Word IntImportedModuleNames_30;
    MR_Word ImpImportedModuleNames_31;
    MR_Word IntUsedModuleNames_32;
    MR_Word ImpUsedModuleNames_33;
    MR_Word IntFIMSpecs_34;
    MR_Word ImpFIMSpecs_35;
    MR_Word IntTypeDefns_36;
    MR_Word IntInstDefns_37;
    MR_Word IntModeDefns_38;
    MR_Word IntTypeClasses0_39;
    MR_Word IntInstances0_40;
    MR_Word IntPredDecls0_41;
    MR_Word RevIntModeDecls_42;
    MR_Word IntForeignEnums_43;
    MR_Word IntPragmas0_44;
    MR_Word IntPromises0_45;
    MR_Word IntTypeDefnMap_46;
    MR_Word IntInstDefnMap_47;
    MR_Word IntModeDefnMap_48;
    MR_Word IntTypeClasses_49;
    MR_Word IntInstances_50;
    MR_Word IntPredDecls_51;
    MR_Word IntModeDecls_52;
    MR_Word IntForeignEnumMap_53;
    MR_Word IntPragmas_54;
    MR_Word IntPromises_55;
    MR_Word ImpTypeDefns_56;
    MR_Word ImpInstDefns_57;
    MR_Word ImpModeDefns_58;
    MR_Word ImpTypeClasses0_59;
    MR_Word ImpInstances0_60;
    MR_Word ImpPredDecls0_61;
    MR_Word RevImpModeDecls_62;
    MR_Word ImpForeignEnums_63;
    MR_Word ImpPragmas0_64;
    MR_Word ImpPromises0_65;
    MR_Word ImpTypeDefnMap_66;
    MR_Word ImpInstDefnMap_67;
    MR_Word ImpModeDefnMap_68;
    MR_Word ImpTypeClasses_69;
    MR_Word ImpInstances_70;
    MR_Word ImpPredDecls_71;
    MR_Word ImpModeDecls_72;
    MR_Word ImpForeignEnumMap_73;
    MR_Word ImpPragmas_74;
    MR_Word ImpPromises_75;
    MR_Word Var_79;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_Specs_105_105;
    MR_Word STATE_VARIABLE_Specs_116_116;
    MR_Box conv1_IntInclModuleNames_20;
    MR_Box conv3_ImpInclModuleNames_21;
    MR_Word _TypeDefnCheckedMap_76;

    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__convert_interface_scalar_common_4[14]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__convert_interface__convert_parse_tree_int_parse_tree_int0_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (IntFileKind_9));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140parse_tree.convert_interface.convert_parse_tree_int_parse_tree_int0\'/4", (MR_String) "trying to convert non-ifk_int0 parse_tree_int to parse_tree_int0");
    Var_84 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[68]), IntIncls_12, ((MR_Box) (Var_84)), &conv1_IntInclModuleNames_20);
    IntInclModuleNames_20 = ((MR_Word) (conv1_IntInclModuleNames_20));
    Var_86 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[69]), ImpIncls_13, ((MR_Box) (Var_86)), &conv3_ImpInclModuleNames_21);
    ImpInclModuleNames_21 = ((MR_Word) (conv3_ImpInclModuleNames_21));
    parse_tree__prog_item__avail_imports_uses_3_p_0(IntAvails_14, &IntImports_22, &IntUses_23);
    parse_tree__prog_item__avail_imports_uses_3_p_0(ImpAvails_15, &ImpImports_24, &ImpUses_25);
    IntImportedModules_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[70]), IntImports_22);
    ImpImportedModules_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[71]), ImpImports_24);
    IntUsedModules_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[72]), IntUses_23);
    ImpUsedModules_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[73]), ImpUses_25);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImportedModules_26, &IntImportedModuleNames_30);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportedModules_27, &ImpImportedModuleNames_31);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedModules_28, &IntUsedModuleNames_32);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUsedModules_29, &ImpUsedModuleNames_33);
    Var_91 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[74]), IntFIMs_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_91, &IntFIMSpecs_34);
    Var_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[75]), ImpFIMs_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_93, &ImpFIMSpecs_35);
    parse_tree__convert_interface__classify_int0_items_int_or_imp_23_p_0(IntItems_18, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefns_36, (MR_Word) ((MR_Unsigned) 0U), &IntInstDefns_37, (MR_Word) ((MR_Unsigned) 0U), &IntModeDefns_38, (MR_Word) ((MR_Unsigned) 0U), &IntTypeClasses0_39, (MR_Word) ((MR_Unsigned) 0U), &IntInstances0_40, (MR_Word) ((MR_Unsigned) 0U), &IntPredDecls0_41, (MR_Word) ((MR_Unsigned) 0U), &RevIntModeDecls_42, (MR_Word) ((MR_Unsigned) 0U), &IntForeignEnums_43, (MR_Word) ((MR_Unsigned) 0U), &IntPragmas0_44, (MR_Word) ((MR_Unsigned) 0U), &IntPromises0_45, STATE_VARIABLE_Specs_0_77, &STATE_VARIABLE_Specs_105_105);
    IntTypeDefnMap_46 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_36);
    IntInstDefnMap_47 = parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_37);
    IntModeDefnMap_48 = parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_38);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses0_39, &IntTypeClasses_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstances0_40, &IntInstances_50);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls0_41, &IntPredDecls_51);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevIntModeDecls_42, &IntModeDecls_52);
    IntForeignEnumMap_53 = parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0(IntForeignEnums_43);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), IntPragmas0_44, &IntPragmas_54);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromises0_45, &IntPromises_55);
    parse_tree__convert_interface__classify_int0_items_int_or_imp_23_p_0(ImpItems_19, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefns_56, (MR_Word) ((MR_Unsigned) 0U), &ImpInstDefns_57, (MR_Word) ((MR_Unsigned) 0U), &ImpModeDefns_58, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeClasses0_59, (MR_Word) ((MR_Unsigned) 0U), &ImpInstances0_60, (MR_Word) ((MR_Unsigned) 0U), &ImpPredDecls0_61, (MR_Word) ((MR_Unsigned) 0U), &RevImpModeDecls_62, (MR_Word) ((MR_Unsigned) 0U), &ImpForeignEnums_63, (MR_Word) ((MR_Unsigned) 0U), &ImpPragmas0_64, (MR_Word) ((MR_Unsigned) 0U), &ImpPromises0_65, STATE_VARIABLE_Specs_105_105, &STATE_VARIABLE_Specs_116_116);
    ImpTypeDefnMap_66 = parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_56);
    ImpInstDefnMap_67 = parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_57);
    ImpModeDefnMap_68 = parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_58);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClasses0_59, &ImpTypeClasses_69);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstances0_60, &ImpInstances_70);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_61, &ImpPredDecls_71);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevImpModeDecls_62, &ImpModeDecls_72);
    ImpForeignEnumMap_73 = parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_63);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), ImpPragmas0_64, &ImpPragmas_74);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromises0_65, &ImpPromises_75);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_8, IntTypeDefnMap_46, ImpTypeDefnMap_66, IntForeignEnumMap_53, ImpForeignEnumMap_73, &_TypeDefnCheckedMap_76, STATE_VARIABLE_Specs_116_116, STATE_VARIABLE_Specs_78);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (31 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt0_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclModuleNames_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclModuleNames_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportedModuleNames_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUsedModuleNames_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportedModuleNames_31));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUsedModuleNames_33));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntFIMSpecs_34));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpFIMSpecs_35));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeDefnMap_46));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntInstDefnMap_47));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntModeDefnMap_48));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeClasses_49));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntInstances_50));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_51));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_52));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntForeignEnumMap_53));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntPragmas_54));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntPromises_55));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeDefnMap_66));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpInstDefnMap_67));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpModeDefnMap_68));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpTypeClasses_69));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpInstances_70));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpPredDecls_71));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpModeDecls_72));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpForeignEnumMap_73));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpPragmas_74));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpPromises_75));
    }
  }
}

static void MR_CALL 
parse_tree__convert_interface__classify_int0_items_int_or_imp_23_p_0(
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
  MR_Word STATE_VARIABLE_Pragmas_0_18,
  MR_Word * STATE_VARIABLE_Pragmas_19,
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
      *STATE_VARIABLE_Pragmas_19 = STATE_VARIABLE_Pragmas_0_18;
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
      MR_Word STATE_VARIABLE_Specs_131_131;
      MR_Word STATE_VARIABLE_Promises_132_132;
      MR_Word STATE_VARIABLE_Pragmas_133_133;
      MR_Word STATE_VARIABLE_ForeignEnums_134_134;
      MR_Word STATE_VARIABLE_RevModeDecls_135_135;
      MR_Word STATE_VARIABLE_PredDecls_136_136;
      MR_Word STATE_VARIABLE_Instances_137_137;
      MR_Word STATE_VARIABLE_TypeClasses_138_138;
      MR_Word STATE_VARIABLE_ModeDefns_139_139;
      MR_Word STATE_VARIABLE_InstDefns_140_140;
      MR_Word STATE_VARIABLE_TypeDefns_141_141;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      MR_Word next_value_of_STATE_VARIABLE_Pragmas_0_18;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_22;

      switch (MR_tag((MR_Word) Item_57)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_86;
            MR_Word Spec_87;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_128;

            Var_115 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_57);
            Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[54])));
            Pieces_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[58])), Var_114);
            Var_126 = parse_tree__prog_item__get_item_context_1_f_0(Item_57);
            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (Pieces_86));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_87, 2) = ((MR_Box) (Var_124));
            }
            {
              STATE_VARIABLE_Specs_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_131_131, 0) = ((MR_Box) (Spec_87));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_131_131, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
            }
            STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
            STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_71 = (MR_Word) (MR_body((MR_Word) (Item_57), (MR_Integer) 1));

            {
              STATE_VARIABLE_InstDefns_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_140_140, 0) = ((MR_Box) (ItemInstDefn_71));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstDefns_140_140, 1) = ((MR_Box) (STATE_VARIABLE_InstDefns_0_4));
            }
            STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
            STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
            STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_72 = (MR_Word) (MR_body((MR_Word) (Item_57), (MR_Integer) 2));

            {
              STATE_VARIABLE_ModeDefns_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_139_139, 0) = ((MR_Box) (ItemModeDefn_72));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ModeDefns_139_139, 1) = ((MR_Box) (STATE_VARIABLE_ModeDefns_0_6));
            }
            STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
            STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
            STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
            STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
            STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
            STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
            STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
            STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
            STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
            STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_PredDecls_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_136_136, 0) = ((MR_Box) (ItemPredDecl_75));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredDecls_136_136, 1) = ((MR_Box) (STATE_VARIABLE_PredDecls_0_12));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevModeDecls_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_135_135, 0) = ((MR_Box) (ItemModeDecl_76));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevModeDecls_135_135, 1) = ((MR_Box) (STATE_VARIABLE_RevModeDecls_0_14));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_ForeignEnums_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_134_134, 0) = ((MR_Box) (ItemForeignEnum_77));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForeignEnums_134_134, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnums_0_16));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                MR_Word Pieces_86;
                MR_Word Spec_87;
                MR_Word Var_114;
                MR_Word Var_115;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word Var_128;

                Var_115 = parse_tree__prog_item__item_desc_pieces_1_f_0(Item_57);
                Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[54])));
                Pieces_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__convert_interface_scalar_common_1[58])), Var_114);
                Var_126 = parse_tree__prog_item__get_item_context_1_f_0(Item_57);
                {
                  Var_128 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (Pieces_86));
                }
                {
                  Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
                  MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_127));
                }
                {
                  Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
                  MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_87, 2) = ((MR_Box) (Var_124));
                }
                {
                  STATE_VARIABLE_Specs_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_131_131, 0) = ((MR_Box) (Spec_87));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_131_131, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPragma_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Pragmas_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pragmas_133_133, 0) = ((MR_Box) (ItemPragma_78));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Pragmas_133_133, 1) = ((MR_Box) (STATE_VARIABLE_Pragmas_0_18));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemPromise_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Promises_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_132_132, 0) = ((MR_Box) (ItemPromise_79));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Promises_132_132, 1) = ((MR_Box) (STATE_VARIABLE_Promises_0_20));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemTypeClass_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeClasses_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_138_138, 0) = ((MR_Box) (ItemTypeClass_73));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeClasses_138_138, 1) = ((MR_Box) (STATE_VARIABLE_TypeClasses_0_8));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInstance_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_Instances_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_137_137, 0) = ((MR_Box) (ItemInstance_74));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Instances_137_137, 1) = ((MR_Box) (STATE_VARIABLE_Instances_0_10));
                }
                STATE_VARIABLE_TypeDefns_141_141 = STATE_VARIABLE_TypeDefns_0_2;
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemTypeDefn_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_57, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_TypeDefns_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_141_141, 0) = ((MR_Box) (ItemTypeDefn_70));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeDefns_141_141, 1) = ((MR_Box) (STATE_VARIABLE_TypeDefns_0_2));
                }
                STATE_VARIABLE_InstDefns_140_140 = STATE_VARIABLE_InstDefns_0_4;
                STATE_VARIABLE_ModeDefns_139_139 = STATE_VARIABLE_ModeDefns_0_6;
                STATE_VARIABLE_TypeClasses_138_138 = STATE_VARIABLE_TypeClasses_0_8;
                STATE_VARIABLE_Instances_137_137 = STATE_VARIABLE_Instances_0_10;
                STATE_VARIABLE_PredDecls_136_136 = STATE_VARIABLE_PredDecls_0_12;
                STATE_VARIABLE_RevModeDecls_135_135 = STATE_VARIABLE_RevModeDecls_0_14;
                STATE_VARIABLE_ForeignEnums_134_134 = STATE_VARIABLE_ForeignEnums_0_16;
                STATE_VARIABLE_Pragmas_133_133 = STATE_VARIABLE_Pragmas_0_18;
                STATE_VARIABLE_Promises_132_132 = STATE_VARIABLE_Promises_0_20;
                STATE_VARIABLE_Specs_131_131 = STATE_VARIABLE_Specs_0_22;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_58;
      next_value_of_STATE_VARIABLE_TypeDefns_0_2 = STATE_VARIABLE_TypeDefns_141_141;
      next_value_of_STATE_VARIABLE_InstDefns_0_4 = STATE_VARIABLE_InstDefns_140_140;
      next_value_of_STATE_VARIABLE_ModeDefns_0_6 = STATE_VARIABLE_ModeDefns_139_139;
      next_value_of_STATE_VARIABLE_TypeClasses_0_8 = STATE_VARIABLE_TypeClasses_138_138;
      next_value_of_STATE_VARIABLE_Instances_0_10 = STATE_VARIABLE_Instances_137_137;
      next_value_of_STATE_VARIABLE_PredDecls_0_12 = STATE_VARIABLE_PredDecls_136_136;
      next_value_of_STATE_VARIABLE_RevModeDecls_0_14 = STATE_VARIABLE_RevModeDecls_135_135;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_16 = STATE_VARIABLE_ForeignEnums_134_134;
      next_value_of_STATE_VARIABLE_Pragmas_0_18 = STATE_VARIABLE_Pragmas_133_133;
      next_value_of_STATE_VARIABLE_Promises_0_20 = STATE_VARIABLE_Promises_132_132;
      next_value_of_STATE_VARIABLE_Specs_0_22 = STATE_VARIABLE_Specs_131_131;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefns_0_2 = next_value_of_STATE_VARIABLE_TypeDefns_0_2;
      STATE_VARIABLE_InstDefns_0_4 = next_value_of_STATE_VARIABLE_InstDefns_0_4;
      STATE_VARIABLE_ModeDefns_0_6 = next_value_of_STATE_VARIABLE_ModeDefns_0_6;
      STATE_VARIABLE_TypeClasses_0_8 = next_value_of_STATE_VARIABLE_TypeClasses_0_8;
      STATE_VARIABLE_Instances_0_10 = next_value_of_STATE_VARIABLE_Instances_0_10;
      STATE_VARIABLE_PredDecls_0_12 = next_value_of_STATE_VARIABLE_PredDecls_0_12;
      STATE_VARIABLE_RevModeDecls_0_14 = next_value_of_STATE_VARIABLE_RevModeDecls_0_14;
      STATE_VARIABLE_ForeignEnums_0_16 = next_value_of_STATE_VARIABLE_ForeignEnums_0_16;
      STATE_VARIABLE_Pragmas_0_18 = next_value_of_STATE_VARIABLE_Pragmas_0_18;
      STATE_VARIABLE_Promises_0_20 = next_value_of_STATE_VARIABLE_Promises_0_20;
      STATE_VARIABLE_Specs_0_22 = next_value_of_STATE_VARIABLE_Specs_0_22;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ForeignEnumMap_18;

    parse_tree__convert_interface__add_foreign_enum_item_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnumMap_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumMap_18));
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_items_to_map_1_f_0(
  MR_Word ForeignEnums_3)
{
  {
    MR_Word ForeignEnumMap_4;
    MR_Word Var_6;
    MR_Box conv1_ForeignEnumMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[67]), ForeignEnums_3, ((MR_Box) (Var_6)), &conv1_ForeignEnumMap_4);
    ForeignEnumMap_4 = ((MR_Word) (conv1_ForeignEnumMap_4));
    return ForeignEnumMap_4;
  }
}

static void MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModeDefnMap_23;

    parse_tree__convert_interface__add_mode_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefnMap_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefnMap_23));
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_items_to_map_1_f_0(
  MR_Word ModeDefnInfos_3)
{
  {
    MR_Word ModeDefnMap_4;
    MR_Word Var_6;
    MR_Box conv1_ModeDefnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[66]), ModeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_ModeDefnMap_4);
    ModeDefnMap_4 = ((MR_Word) (conv1_ModeDefnMap_4));
    return ModeDefnMap_4;
  }
}

static void MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstDefnMap_24;

    parse_tree__convert_interface__add_inst_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefnMap_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefnMap_24));
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_items_to_map_1_f_0(
  MR_Word InstDefnInfos_3)
{
  {
    MR_Word InstDefnMap_4;
    MR_Word Var_6;
    MR_Box conv1_InstDefnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[65]), InstDefnInfos_3, ((MR_Box) (Var_6)), &conv1_InstDefnMap_4);
    InstDefnMap_4 = ((MR_Word) (conv1_InstDefnMap_4));
    return InstDefnMap_4;
  }
}

static void MR_CALL 
parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeDefnMap_44;

    parse_tree__convert_interface__add_type_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefnMap_44);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_44));
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_defn_items_to_map_1_f_0(
  MR_Word TypeDefnInfos_3)
{
  {
    MR_Word TypeDefnMap_4;
    MR_Word Var_6;
    MR_Box conv1_TypeDefnMap_4;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[64]), TypeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeDefnMap_4);
    TypeDefnMap_4 = ((MR_Word) (conv1_TypeDefnMap_4));
    return TypeDefnMap_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__convert_interface__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__convert_interface__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__convert_interface__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_InstDefns_9;

    parse_tree__convert_interface__accumulate_inst_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_InstDefns_9);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_InstDefns_9));
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__convert_interface__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TypeDefns_17;

    parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeDefns_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeDefns_17));
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Avail_4;

    conv1_Avail_4 = parse_tree__convert_interface__wrap_import_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Include_4;

    conv0_Include_4 = parse_tree__convert_interface__wrap_include_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Include_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int3_to_parse_tree_int_1_f_0(
  MR_Word ParseTreeInt3_3)
{
  {
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 1))));
    MR_Word IntInclModuleNames_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 2))));
    MR_Word IntImportModuleNames_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 3))));
    MR_Word IntTypeDefnMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 4))));
    MR_Word IntInstDefnMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 5))));
    MR_Word IntModeDefnMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 6))));
    MR_Word IntTypeClasses_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 7))));
    MR_Word IntInstances_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 8))));
    MR_Word IntTypeRepnMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_3, (MR_Integer) 9))));
    MR_Word IntIncls_16;
    MR_Word IntAvails_17;
    MR_Word IntItems_18;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word TypeDefnsCord_57;
    MR_Word TypeDefns_58;
    MR_Word Var_60;
    MR_Word InstDefnsCord_74;
    MR_Word InstDefns_75;
    MR_Word Var_77;
    MR_Box conv3_TypeDefnsCord_57;
    MR_Box conv6_InstDefnsCord_74;

    Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntInclModuleNames_7);
    IntIncls_16 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[56]), Var_20);
    Var_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImportModuleNames_8);
    IntAvails_17 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[57]), Var_22);
    Var_60 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[58]), IntTypeDefnMap_9, ((MR_Box) (Var_60)), &conv3_TypeDefnsCord_57);
    TypeDefnsCord_57 = ((MR_Word) (conv3_TypeDefnsCord_57));
    TypeDefns_58 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), TypeDefnsCord_57);
    Var_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[59]), TypeDefns_58);
    Var_77 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[60]), IntInstDefnMap_10, ((MR_Box) (Var_77)), &conv6_InstDefnsCord_74);
    InstDefnsCord_74 = ((MR_Word) (conv6_InstDefnsCord_74));
    InstDefns_75 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), InstDefnsCord_74);
    Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[61]), InstDefns_75);
    Var_27 = parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_11);
    Var_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[62]), IntTypeClasses_12);
    Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[63]), IntInstances_13);
    Var_34 = parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_14);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_32, Var_34);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_29, Var_31);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_27, Var_28);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_25, Var_26);
    IntItems_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_23, Var_24);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_16));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_17));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_18));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__convert_interface__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__convert_interface__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__convert_interface__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_TypeDefns_17;

    parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_TypeDefns_17);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_TypeDefns_17));
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__prog_item__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__prog_item__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Avail_4;

    conv1_Avail_4 = parse_tree__convert_interface__wrap_use_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Include_4;

    conv0_Include_4 = parse_tree__convert_interface__wrap_include_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Include_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int2_to_parse_tree_int_1_f_0(
  MR_Word ParseTreeInt2_3)
{
  {
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 1))));
    MR_Word MaybeVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 2))));
    MR_Word IntInclModuleNames_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 3))));
    MR_Word IntUsedModuleNames_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 4))));
    MR_Word IntFIMSpecs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 5))));
    MR_Word ImpFIMSpecs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 6))));
    MR_Word IntTypeDefnMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 7))));
    MR_Word IntInstDefnMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 8))));
    MR_Word IntModeDefnMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 9))));
    MR_Word IntTypeClasses_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 10))));
    MR_Word IntInstances_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 11))));
    MR_Word IntTypeRepnMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 12))));
    MR_Word ImpTypeDefnMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_3, (MR_Integer) 13))));
    MR_Word IntIncls_19;
    MR_Word IntAvails_20;
    MR_Word IntFIMs_21;
    MR_Word ImpFIMs_22;
    MR_Word IntItems_23;
    MR_Word ImpItems_24;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word TypeDefnsCord_70;
    MR_Word TypeDefns_71;
    MR_Word Var_73;
    MR_Box conv5_TypeDefnsCord_70;

    Var_26 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntInclModuleNames_8);
    IntIncls_19 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[48]), Var_26);
    Var_28 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedModuleNames_9);
    IntAvails_20 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[49]), Var_28);
    Var_29 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[50]), IntFIMSpecs_10);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_29, &IntFIMs_21);
    Var_31 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[51]), ImpFIMSpecs_11);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_31, &ImpFIMs_22);
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[52]), IntTypeDefnMap_12, ((MR_Box) (Var_73)), &conv5_TypeDefnsCord_70);
    TypeDefnsCord_70 = ((MR_Word) (conv5_TypeDefnsCord_70));
    TypeDefns_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), TypeDefnsCord_70);
    Var_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[53]), TypeDefns_71);
    Var_35 = parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_13);
    Var_37 = parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_14);
    Var_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[54]), IntTypeClasses_15);
    Var_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[55]), IntInstances_16);
    Var_44 = parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_17);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_42, Var_44);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_39, Var_41);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_37, Var_38);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_35, Var_36);
    IntItems_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_33, Var_34);
    ImpItems_24 = parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_18);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_19));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_20));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_21));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_22));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_23));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_24));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_2;

    conv12_HeadVar__2_2 = parse_tree__convert_interface__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__2_2;

    conv11_HeadVar__2_2 = parse_tree__convert_interface__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2;

    conv10_HeadVar__2_2 = parse_tree__convert_interface__wrap_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__convert_interface__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__convert_interface__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__convert_interface__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__convert_interface__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__prog_item__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__prog_item__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_Avail_4;

    conv3_Avail_4 = parse_tree__convert_interface__wrap_use_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Avail_4;

    conv2_Avail_4 = parse_tree__convert_interface__wrap_use_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Include_4;

    conv1_Include_4 = parse_tree__convert_interface__wrap_include_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Include_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Include_4;

    conv0_Include_4 = parse_tree__convert_interface__wrap_include_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Include_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int1_to_parse_tree_int_1_f_0(
  MR_Word ParseTreeInt1_3)
{
  {
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 1))));
    MR_Word MaybeVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 2))));
    MR_Word IntInclModuleNames_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 3))));
    MR_Word ImpInclModuleNames_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 4))));
    MR_Word IntUsedModuleNames_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 5))));
    MR_Word ImpUsedModuleNames_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 6))));
    MR_Word IntFIMSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 7))));
    MR_Word ImpFIMSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 8))));
    MR_Word IntTypeDefnMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 9))));
    MR_Word IntInstDefnMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 10))));
    MR_Word IntModeDefnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 11))));
    MR_Word IntTypeClasses_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 12))));
    MR_Word IntInstances_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 13))));
    MR_Word IntPredDecls_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 14))));
    MR_Word IntModeDecls_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 15))));
    MR_Word IntForeignEnumMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 16))));
    MR_Word IntPragmas_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 17))));
    MR_Word IntPromises_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 18))));
    MR_Word IntTypeRepnMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 19))));
    MR_Word ImpTypeDefnMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 20))));
    MR_Word ImpForeignEnumMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 21))));
    MR_Word ImpTypeClasses_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_3, (MR_Integer) 22))));
    MR_Word IntIncls_28;
    MR_Word ImpIncls_29;
    MR_Word IntAvails_30;
    MR_Word ImpAvails_31;
    MR_Word IntFIMs_32;
    MR_Word ImpFIMs_33;
    MR_Word IntItems_34;
    MR_Word ImpItems_35;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
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
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;

    Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntInclModuleNames_8);
    IntIncls_28 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[35]), Var_37);
    Var_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpInclModuleNames_9);
    ImpIncls_29 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[36]), Var_39);
    Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedModuleNames_10);
    IntAvails_30 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[37]), Var_41);
    Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUsedModuleNames_11);
    ImpAvails_31 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[38]), Var_43);
    Var_44 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[39]), IntFIMSpecs_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_44, &IntFIMs_32);
    Var_46 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[40]), ImpFIMSpecs_13);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_46, &ImpFIMs_33);
    Var_48 = parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(IntTypeDefnMap_14);
    Var_50 = parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_15);
    Var_52 = parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_16);
    Var_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[41]), IntTypeClasses_17);
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[42]), IntInstances_18);
    Var_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[43]), IntPredDecls_19);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[44]), IntModeDecls_20);
    Var_66 = parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0(IntForeignEnumMap_21);
    Var_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[45]), IntPragmas_22);
    Var_71 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[46]), IntPromises_23);
    Var_73 = parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0(IntTypeRepnMap_24);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_71, Var_73);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_68, Var_70);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_66, Var_67);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_63, Var_65);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_60, Var_62);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_57, Var_59);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_54, Var_56);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_52, Var_53);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_50, Var_51);
    IntItems_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_48, Var_49);
    Var_74 = parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_25);
    Var_76 = parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0(ImpForeignEnumMap_26);
    Var_77 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[47]), ImpTypeClasses_27);
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_76, Var_77);
    ImpItems_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_74, Var_75);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_28));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) (ImpIncls_29));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_30));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) (ImpAvails_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_32));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_33));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_34));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_35));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__convert_interface__wrap_type_repn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeRepns_7;

    parse_tree__convert_interface__accumulate_type_ctor_repns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepns_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepns_7));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_repn_map_to_items_1_f_0(
  MR_Word TypeCtorRepnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word TypeRepnsCord_5;
    MR_Word TypeRepns_6;
    MR_Word Var_8;
    MR_Box conv1_TypeRepnsCord_5;

    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[33]), TypeCtorRepnMap_3, ((MR_Box) (Var_8)), &conv1_TypeRepnsCord_5);
    TypeRepnsCord_5 = ((MR_Word) (conv1_TypeRepnsCord_5));
    TypeRepns_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), TypeRepnsCord_5);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[34]), TypeRepns_6);
    return Items_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__2_2;

    conv19_HeadVar__2_2 = parse_tree__convert_interface__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_HeadVar__2_2;

    conv18_HeadVar__2_2 = parse_tree__convert_interface__wrap_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__2_2;

    conv17_HeadVar__2_2 = parse_tree__convert_interface__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv16_HeadVar__2_2;

    conv16_HeadVar__2_2 = parse_tree__convert_interface__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv16_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv15_HeadVar__2_2;

    conv15_HeadVar__2_2 = parse_tree__convert_interface__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__2_2;

    conv14_HeadVar__2_2 = parse_tree__convert_interface__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv13_HeadVar__2_2;

    conv13_HeadVar__2_2 = parse_tree__convert_interface__wrap_promise_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_2;

    conv12_HeadVar__2_2 = parse_tree__convert_interface__wrap_pragma_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__2_2;

    conv11_HeadVar__2_2 = parse_tree__convert_interface__wrap_mode_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2;

    conv10_HeadVar__2_2 = parse_tree__convert_interface__wrap_pred_decl_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__convert_interface__wrap_instance_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__convert_interface__wrap_typeclass_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__prog_item__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__prog_item__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_Avail_4;

    conv5_Avail_4 = parse_tree__convert_interface__wrap_use_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_Avail_4;

    conv4_Avail_4 = parse_tree__convert_interface__wrap_import_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_Avail_4;

    conv3_Avail_4 = parse_tree__convert_interface__wrap_use_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Avail_4;

    conv2_Avail_4 = parse_tree__convert_interface__wrap_import_avail_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Avail_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Include_4;

    conv1_Include_4 = parse_tree__convert_interface__wrap_include_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Include_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Include_4;

    conv0_Include_4 = parse_tree__convert_interface__wrap_include_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Include_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
parse_tree__convert_interface__convert_parse_tree_int0_to_parse_tree_int_1_f_0(
  MR_Word ParseTreeInt0_3)
{
  {
    MR_Word ParseTreeInt_4;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 1))));
    MR_Word MaybeVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 2))));
    MR_Word IntInclModuleNames_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 3))));
    MR_Word ImpInclModuleNames_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 4))));
    MR_Word IntImportedModuleNames_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 5))));
    MR_Word IntUsedModuleNames_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 6))));
    MR_Word ImpImportedModuleNames_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 7))));
    MR_Word ImpUsedModuleNames_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 8))));
    MR_Word IntFIMSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 9))));
    MR_Word ImpFIMSpecs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 10))));
    MR_Word IntTypeDefnMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 11))));
    MR_Word IntInstDefnMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 12))));
    MR_Word IntModeDefnMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 13))));
    MR_Word IntTypeClasses_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 14))));
    MR_Word IntInstances_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 15))));
    MR_Word IntPredDecls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 16))));
    MR_Word IntModeDecls_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 17))));
    MR_Word IntForeignEnumMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 18))));
    MR_Word IntPragmas_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 19))));
    MR_Word IntPromises_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 20))));
    MR_Word ImpTypeDefnMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 21))));
    MR_Word ImpInstDefnMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 22))));
    MR_Word ImpModeDefnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 23))));
    MR_Word ImpTypeClasses_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 24))));
    MR_Word ImpInstances_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 25))));
    MR_Word ImpPredDecls_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 26))));
    MR_Word ImpModeDecls_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 27))));
    MR_Word ImpForeignEnumMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 28))));
    MR_Word ImpPragmas_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 29))));
    MR_Word ImpPromises_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 30))));
    MR_Word IntIncls_36;
    MR_Word ImpIncls_37;
    MR_Word IntImportAvails_38;
    MR_Word IntUseAvails_39;
    MR_Word ImpImportAvails_40;
    MR_Word ImpUseAvails_41;
    MR_Word IntAvails_42;
    MR_Word ImpAvails_43;
    MR_Word IntFIMs_44;
    MR_Word ImpFIMs_45;
    MR_Word IntItems_46;
    MR_Word ImpItems_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_110;

    Var_49 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntInclModuleNames_8);
    IntIncls_36 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[13]), Var_49);
    Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpInclModuleNames_9);
    ImpIncls_37 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[14]), Var_51);
    Var_53 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImportedModuleNames_10);
    IntImportAvails_38 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[15]), Var_53);
    Var_55 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedModuleNames_11);
    IntUseAvails_39 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[16]), Var_55);
    Var_57 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportedModuleNames_12);
    ImpImportAvails_40 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[17]), Var_57);
    Var_59 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUsedModuleNames_13);
    ImpUseAvails_41 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[18]), Var_59);
    IntAvails_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntImportAvails_38, IntUseAvails_39);
    ImpAvails_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpImportAvails_40, ImpUseAvails_41);
    Var_60 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[19]), IntFIMSpecs_14);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_60, &IntFIMs_44);
    Var_62 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[20]), ImpFIMSpecs_15);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_62, &ImpFIMs_45);
    Var_64 = parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(IntTypeDefnMap_16);
    Var_66 = parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0(IntInstDefnMap_17);
    Var_68 = parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(IntModeDefnMap_18);
    Var_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[21]), IntTypeClasses_19);
    Var_73 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[22]), IntInstances_20);
    Var_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[23]), IntPredDecls_21);
    Var_79 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[24]), IntModeDecls_22);
    Var_82 = parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0(IntForeignEnumMap_23);
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[25]), IntPragmas_24);
    Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[26]), IntPromises_25);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_84, Var_86);
    Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_82, Var_83);
    Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_79, Var_81);
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_76, Var_78);
    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_73, Var_75);
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_70, Var_72);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_68, Var_69);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_66, Var_67);
    IntItems_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_64, Var_65);
    Var_88 = parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(ImpTypeDefnMap_26);
    Var_90 = parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0(ImpInstDefnMap_27);
    Var_92 = parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(ImpModeDefnMap_28);
    Var_94 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[27]), ImpTypeClasses_29);
    Var_97 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[28]), ImpInstances_30);
    Var_100 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[29]), ImpPredDecls_31);
    Var_103 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[30]), ImpModeDecls_32);
    Var_106 = parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0(ImpForeignEnumMap_33);
    Var_108 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[31]), ImpPragmas_34);
    Var_110 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[32]), ImpPromises_35);
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_108, Var_110);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_106, Var_107);
    Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_103, Var_105);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_100, Var_102);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_97, Var_99);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_94, Var_96);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_92, Var_93);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_90, Var_91);
    ImpItems_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_88, Var_89);
    {
      ParseTreeInt_4 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 2) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 3) = ((MR_Box) (MaybeVersionNumbers_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 4) = ((MR_Box) (IntIncls_36));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 5) = ((MR_Box) (ImpIncls_37));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 6) = ((MR_Box) (IntAvails_42));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 7) = ((MR_Box) (ImpAvails_43));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 8) = ((MR_Box) (IntFIMs_44));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 9) = ((MR_Box) (ImpFIMs_45));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 10) = ((MR_Box) (IntItems_46));
      MR_hl_field(MR_mktag(0), ParseTreeInt_4, 11) = ((MR_Box) (ImpItems_47));
    }
    return ParseTreeInt_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__convert_interface__wrap_foreign_enum_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ForeignEnums_11;

    parse_tree__convert_interface__accumulate_foreign_enum_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnums_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnums_11));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_foreign_enum_map_to_items_1_f_0(
  MR_Word ForeignEnumMap_3)
{
  {
    MR_Word Items_4;
    MR_Word ForeignEnumItemsCord_5;
    MR_Word ForeignEnumItems_6;
    MR_Word Var_8;
    MR_Box conv1_ForeignEnumItemsCord_5;

    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[16]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[11]), ForeignEnumMap_3, ((MR_Box) (Var_8)), &conv1_ForeignEnumItemsCord_5);
    ForeignEnumItemsCord_5 = ((MR_Word) (conv1_ForeignEnumItemsCord_5));
    ForeignEnumItems_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumItemsCord_5);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[12]), ForeignEnumItems_6);
    return Items_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__convert_interface__wrap_mode_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModeDefns_9;

    parse_tree__convert_interface__accumulate_mode_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefns_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefns_9));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__mode_ctor_defn_map_to_items_1_f_0(
  MR_Word ModeCtorDefnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word ModeDefnsCord_5;
    MR_Word ModeDefns_6;
    MR_Word Var_8;
    MR_Box conv1_ModeDefnsCord_5;

    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[9]), ModeCtorDefnMap_3, ((MR_Box) (Var_8)), &conv1_ModeDefnsCord_5);
    ModeDefnsCord_5 = ((MR_Word) (conv1_ModeDefnsCord_5));
    ModeDefns_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ModeDefnsCord_5);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[10]), ModeDefns_6);
    return Items_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__convert_interface__wrap_inst_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstDefns_9;

    parse_tree__convert_interface__accumulate_inst_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefns_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefns_9));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__inst_ctor_defn_map_to_items_1_f_0(
  MR_Word InstCtorDefnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word InstDefnsCord_5;
    MR_Word InstDefns_6;
    MR_Word Var_8;
    MR_Box conv1_InstDefnsCord_5;

    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[13]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[7]), InstCtorDefnMap_3, ((MR_Box) (Var_8)), &conv1_InstDefnsCord_5);
    InstDefnsCord_5 = ((MR_Word) (conv1_InstDefnsCord_5));
    InstDefns_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), InstDefnsCord_5);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[8]), InstDefns_6);
    return Items_4;
  }
}

static MR_Box MR_CALL 
parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__convert_interface__wrap_type_defn_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeDefns_17;

    parse_tree__convert_interface__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefns_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefns_17));
  }
}

static MR_Word MR_CALL 
parse_tree__convert_interface__type_ctor_defn_map_to_items_1_f_0(
  MR_Word TypeCtorDefnMap_3)
{
  {
    MR_Word Items_4;
    MR_Word TypeDefnsCord_5;
    MR_Word TypeDefns_6;
    MR_Word Var_8;
    MR_Box conv1_TypeDefnsCord_5;

    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_1[12]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[5]), TypeCtorDefnMap_3, ((MR_Box) (Var_8)), &conv1_TypeDefnsCord_5);
    TypeDefnsCord_5 = ((MR_Word) (conv1_TypeDefnsCord_5));
    TypeDefns_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), TypeDefnsCord_5);
    Items_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__convert_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__convert_interface_scalar_common_2[6]), TypeDefns_6);
    return Items_4;
  }
}

void mercury__parse_tree__convert_interface__init(void)
{
}

void mercury__parse_tree__convert_interface__init_type_tables(void)
{
}

void mercury__parse_tree__convert_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__convert_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.convert_interface.
