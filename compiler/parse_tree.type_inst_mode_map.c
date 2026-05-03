/*
** Automatically generated from `type_inst_mode_map.m'
** by the Mercury compiler,
** version rotd-2026-05-03
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


// :- module parse_tree.type_inst_mode_map.
// :- implementation.

/*
INIT mercury__parse_tree__type_inst_mode_map__init
ENDINIT
*/

#include "parse_tree.type_inst_mode_map.mih"


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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0;

static void MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_16,
  MR_Word * STATE_VARIABLE_TypeDefns_17);

static void MR_CALL 
parse_tree__type_inst_mode_map__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_17);

static void MR_CALL 
parse_tree__type_inst_mode_map__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15);

static void MR_CALL 
parse_tree__type_inst_mode_map__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_23,
  MR_Word * STATE_VARIABLE_ModeDefnMap_24);

static void MR_CALL 
parse_tree__type_inst_mode_map__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_24,
  MR_Word * STATE_VARIABLE_InstDefnMap_25);

static void MR_CALL 
parse_tree__type_inst_mode_map__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_45,
  MR_Word * STATE_VARIABLE_TypeDefnMap_46);

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_repn_map_to_type_repns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__mode_ctor_defn_map_to_mode_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__inst_ctor_defn_map_to_inst_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_defn_map_to_type_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_1[23][2];

static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_2[27][3];

static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_3[9][6];

static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_4[10][5];




static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_1[23][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[2]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[3]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[16]))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_2[27][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_1[5]))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[0])),
    ((MR_Box) (parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[1])),
    ((MR_Box) (parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[2])),
    ((MR_Box) (parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[3])),
    ((MR_Box) (parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[4])),
    ((MR_Box) (parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[5])),
    ((MR_Box) (parse_tree__type_inst_mode_map__type_ctor_defn_map_to_type_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[6])),
    ((MR_Box) (parse_tree__type_inst_mode_map__inst_ctor_defn_map_to_inst_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[7])),
    ((MR_Box) (parse_tree__type_inst_mode_map__mode_ctor_defn_map_to_mode_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_3[8])),
    ((MR_Box) (parse_tree__type_inst_mode_map__type_ctor_repn_map_to_type_repns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[1])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[2])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[3])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[4])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[5])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[5])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[5])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[6])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[7])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[8])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__type_inst_mode_map_scalar_common_4[9])),
    ((MR_Box) (parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_3[9][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__type_inst_mode_map_scalar_common_4[10][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0)),
    ((MR_Box) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  { (MR_TypeInfo) (&parse_tree__type_inst_mode_map__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__type_inst_mode_map__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__type_inst_mode_map__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_no_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__type_inst_mode_map__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0) }
};

static void MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_repns_3_p_0(
  MR_Word TypeRepn_4,
  MR_Word STATE_VARIABLE_TypeRepns_0_6,
  MR_Word * STATE_VARIABLE_TypeRepns_7)
{
  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]), ((MR_Box) (TypeRepn_4)), STATE_VARIABLE_TypeRepns_0_6, STATE_VARIABLE_TypeRepns_7);
}

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0_2(
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
parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0_1(
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
parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9)
{
  MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 0))));
  MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 1))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[21]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[25]), AbstractDefns_6);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), Var_13);
  Var_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[22]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[26]), EqvDefns_7);
  Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), Var_16);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), Var_12, Var_15);
  *STATE_VARIABLE_ModeDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), STATE_VARIABLE_ModeDefns_0_8, Var_11);
}

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0_2(
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
parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0_1(
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
parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_8,
  MR_Word * STATE_VARIABLE_InstDefns_9)
{
  MR_Word AbstractDefns_6 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 0))));
  MR_Word EqvDefns_7 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 1))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[19]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[23]), AbstractDefns_6);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), Var_13);
  Var_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[20]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[24]), EqvDefns_7);
  Var_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), Var_16);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), Var_12, Var_15);
  *STATE_VARIABLE_InstDefns_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), STATE_VARIABLE_InstDefns_0_8, Var_11);
}

static MR_Box MR_CALL 
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_9(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_8(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_7(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_6(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_5(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_4(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_3(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_2(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0_1(
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
parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0(
  MR_Word CtorAllDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_16,
  MR_Word * STATE_VARIABLE_TypeDefns_17)
{
  MR_Word AbstractSolverDefns_6 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 0))));
  MR_Word SolverDefns_7 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 1))));
  MR_Word AbstractStdDefns_8 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 2))));
  MR_Word EqvDefns_9 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 3))));
  MR_Word DuDefns_10 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 4))));
  MR_Word SubDefns_11 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 5))));
  MR_Word CJCsEDefns_12 = ((MR_Word) ((MR_hl_field(0, CtorAllDefns_4, 6))));
  MR_Word ForeignDefnsC_13 = ((MR_Word) ((MR_hl_field(0, CJCsEDefns_12, 0))));
  MR_Word ForeignDefnsJava_14 = ((MR_Word) ((MR_hl_field(0, CJCsEDefns_12, 1))));
  MR_Word ForeignDefnsCsharp_15 = ((MR_Word) ((MR_hl_field(0, CJCsEDefns_12, 2))));
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
    MR_Word X_67 = ((MR_Word) ((MR_hl_field(1, AbstractSolverDefns_6, 0))));

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (X_67));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[11]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[14]), Var_23);
  Var_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[12]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[15]), SolverDefns_7);
  if ((AbstractStdDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_30 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_70 = ((MR_Word) ((MR_hl_field(1, AbstractStdDefns_8, 0))));

    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (X_70));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[11]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[16]), Var_30);
  Var_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[13]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[17]), EqvDefns_9);
  Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[14]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[18]), DuDefns_10);
  Var_38 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[15]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[19]), SubDefns_11);
  Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[17]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[20]), ForeignDefnsC_13);
  Var_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[17]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[21]), ForeignDefnsJava_14);
  Var_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[17]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[22]), ForeignDefnsCsharp_15);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_44, Var_46);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_41, Var_43);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_38, Var_40);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_35, Var_37);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_32, Var_34);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_28, Var_31);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_25, Var_27);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_21, Var_24);
  Var_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), Var_20);
  *STATE_VARIABLE_TypeDefns_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), STATE_VARIABLE_TypeDefns_0_16, Var_19);
}

static void MR_CALL 
parse_tree__type_inst_mode_map__add_foreign_enum_item_to_map_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_ForeignEnumMap_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumMap_17)
{
  MR_bool succeeded;
  MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(0, ForeignEnumInfo_4, 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(0, ForeignEnumInfo_4, 1))));
  MR_Word AllEnums_15;
  MR_Word STATE_VARIABLE_ForeignEnumsC_1_18;
  MR_Word STATE_VARIABLE_ForeignEnumsJava_1_19;
  MR_Word STATE_VARIABLE_ForeignEnumsCsharp_1_20;
  MR_Word STATE_VARIABLE_ForeignEnumsC_3_24;
  MR_Word STATE_VARIABLE_ForeignEnumsJava_3_27;
  MR_Word STATE_VARIABLE_ForeignEnumsCsharp_3_30;
  MR_Word AllEnums0_14;
  MR_Box conv0_AllEnums0_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[5]), STATE_VARIABLE_ForeignEnumMap_0_16, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums0_14);
  if (succeeded)
  {
    AllEnums0_14 = ((MR_Word) (conv0_AllEnums0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    STATE_VARIABLE_ForeignEnumsC_1_18 = ((MR_Word) ((MR_hl_field(0, AllEnums0_14, 0))));
    STATE_VARIABLE_ForeignEnumsJava_1_19 = ((MR_Word) ((MR_hl_field(0, AllEnums0_14, 1))));
    STATE_VARIABLE_ForeignEnumsCsharp_1_20 = ((MR_Word) ((MR_hl_field(0, AllEnums0_14, 2))));
  }
  else
  {
    STATE_VARIABLE_ForeignEnumsC_1_18 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignEnumsJava_1_19 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignEnumsCsharp_1_20 = (MR_Word) ((MR_Unsigned) 0U);
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
        STATE_VARIABLE_ForeignEnumsC_3_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsC_1_18, Var_25);
        STATE_VARIABLE_ForeignEnumsJava_3_27 = STATE_VARIABLE_ForeignEnumsJava_1_19;
        STATE_VARIABLE_ForeignEnumsCsharp_3_30 = STATE_VARIABLE_ForeignEnumsCsharp_1_20;
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
        STATE_VARIABLE_ForeignEnumsCsharp_3_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsCsharp_1_20, Var_31);
        STATE_VARIABLE_ForeignEnumsC_3_24 = STATE_VARIABLE_ForeignEnumsC_1_18;
        STATE_VARIABLE_ForeignEnumsJava_3_27 = STATE_VARIABLE_ForeignEnumsJava_1_19;
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
        STATE_VARIABLE_ForeignEnumsJava_3_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), STATE_VARIABLE_ForeignEnumsJava_1_19, Var_28);
        STATE_VARIABLE_ForeignEnumsC_3_24 = STATE_VARIABLE_ForeignEnumsC_1_18;
        STATE_VARIABLE_ForeignEnumsCsharp_3_30 = STATE_VARIABLE_ForeignEnumsCsharp_1_20;
      }
      break;
  }
  {
    AllEnums_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllEnums_15, 0) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsC_3_24));
    MR_hl_field(0, AllEnums_15, 1) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsJava_3_27));
    MR_hl_field(0, AllEnums_15, 2) = ((MR_Box) (STATE_VARIABLE_ForeignEnumsCsharp_3_30));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[5]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (AllEnums_15)), STATE_VARIABLE_ForeignEnumMap_0_16, STATE_VARIABLE_ForeignEnumMap_17);
}

static void MR_CALL 
parse_tree__type_inst_mode_map__add_type_repn_to_map_3_p_0(
  MR_Word TypeRepnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo_4, 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo_4, 1))));
  MR_Integer Arity_12;
  MR_Word TypeCtor_13;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[10]), Params_7, &Arity_12);
  {
    TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (Arity_12));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]), ((MR_Box) (TypeCtor_13)), ((MR_Box) (TypeRepnInfo_4)), STATE_VARIABLE_TypeRepnMap_0_14, STATE_VARIABLE_TypeRepnMap_15);
}

static void MR_CALL 
parse_tree__type_inst_mode_map__add_mode_defn_to_map_3_p_0(
  MR_Word ModeDefnInfo_4,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_23,
  MR_Word * STATE_VARIABLE_ModeDefnMap_24)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 1))));
  MR_Word MaybeAbstractModeDefn_8 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 2))));
  MR_Integer Arity_12;
  MR_Word ModeCtor_13;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word AllDefns0_14;
  MR_Box conv0_AllDefns0_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[18]), Params_7, &Arity_12);
  {
    ModeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtor_13, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, ModeCtor_13, 1) = ((MR_Box) (Arity_12));
  }
  Var_91 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 0))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 1))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 3))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 4))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_4, 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), STATE_VARIABLE_ModeDefnMap_0_23, ((MR_Box) (ModeCtor_13)), &conv0_AllDefns0_14);
  if (succeeded)
  {
    AllDefns0_14 = ((MR_Word) (conv0_AllDefns0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns0_15 = ((MR_Word) ((MR_hl_field(0, AllDefns0_14, 0))));
    MR_Word EqvDefns0_16 = ((MR_Word) ((MR_hl_field(0, AllDefns0_14, 1))));
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
      MR_Word ModeDefn_20 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn_8, 0))));
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
      MR_Word ModeDefn_36 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn_8, 0))));
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
parse_tree__type_inst_mode_map__add_inst_defn_to_map_3_p_0(
  MR_Word InstDefnInfo_4,
  MR_Word STATE_VARIABLE_InstDefnMap_0_24,
  MR_Word * STATE_VARIABLE_InstDefnMap_25)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 1))));
  MR_Word MaybeAbstractInstDefn_9 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 3))));
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[18]), Params_7, &Arity_13);
  {
    InstCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtor_14, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, InstCtor_14, 1) = ((MR_Box) (Arity_13));
  }
  Var_99 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 0))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 1))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 2))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 4))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 5))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_4, 6))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), STATE_VARIABLE_InstDefnMap_0_24, ((MR_Box) (InstCtor_14)), &conv0_AllDefns0_15);
  if (succeeded)
  {
    AllDefns0_15 = ((MR_Word) (conv0_AllDefns0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns0_16 = ((MR_Word) ((MR_hl_field(0, AllDefns0_15, 0))));
    MR_Word EqvDefns0_17 = ((MR_Word) ((MR_hl_field(0, AllDefns0_15, 1))));
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
      MR_Word InstDefn_21 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_9, 0))));
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
      MR_Word InstDefn_37 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_9, 0))));
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
parse_tree__type_inst_mode_map__add_type_defn_to_map_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_45,
  MR_Word * STATE_VARIABLE_TypeDefnMap_46)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 0))));
  MR_Word Params_7 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 1))));
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 2))));
  MR_Integer Arity_12;
  MR_Word TypeCtor_13;
  MR_Word AllDefns_44;
  MR_Word STATE_VARIABLE_AbsSolverDefns_1_47;
  MR_Word STATE_VARIABLE_SolverDefns_1_48;
  MR_Word STATE_VARIABLE_AbsStdDefns_1_49;
  MR_Word STATE_VARIABLE_EqvDefns_1_50;
  MR_Word STATE_VARIABLE_DuDefns_1_51;
  MR_Word STATE_VARIABLE_SubDefns_1_52;
  MR_Word STATE_VARIABLE_ForeignDefnsC_1_54;
  MR_Word STATE_VARIABLE_ForeignDefnsJava_1_55;
  MR_Word STATE_VARIABLE_ForeignDefnsCsharp_1_56;
  MR_Word STATE_VARIABLE_AbsSolverDefns_3_66;
  MR_Word STATE_VARIABLE_AbsStdDefns_3_69;
  MR_Word STATE_VARIABLE_SolverDefns_3_72;
  MR_Word STATE_VARIABLE_EqvDefns_3_75;
  MR_Word STATE_VARIABLE_DuDefns_3_78;
  MR_Word STATE_VARIABLE_SubDefns_3_81;
  MR_Word STATE_VARIABLE_ForeignDefnsC_3_84;
  MR_Word STATE_VARIABLE_ForeignDefnsJava_3_87;
  MR_Word STATE_VARIABLE_ForeignDefnsCsharp_3_90;
  MR_Word Var_93;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word AllDefns0_23;
  MR_Box conv0_AllDefns0_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[10]), Params_7, &Arity_12);
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

    STATE_VARIABLE_AbsSolverDefns_1_47 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 0))));
    STATE_VARIABLE_SolverDefns_1_48 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 1))));
    STATE_VARIABLE_AbsStdDefns_1_49 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 2))));
    STATE_VARIABLE_EqvDefns_1_50 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 3))));
    STATE_VARIABLE_DuDefns_1_51 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 4))));
    STATE_VARIABLE_SubDefns_1_52 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 5))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, AllDefns0_23, 6))));
    STATE_VARIABLE_ForeignDefnsC_1_54 = ((MR_Word) ((MR_hl_field(0, Var_53, 0))));
    STATE_VARIABLE_ForeignDefnsJava_1_55 = ((MR_Word) ((MR_hl_field(0, Var_53, 1))));
    STATE_VARIABLE_ForeignDefnsCsharp_1_56 = ((MR_Word) ((MR_hl_field(0, Var_53, 2))));
  }
  else
  {
    STATE_VARIABLE_AbsSolverDefns_1_47 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_SolverDefns_1_48 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_AbsStdDefns_1_49 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_EqvDefns_1_50 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_DuDefns_1_51 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_SubDefns_1_52 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignDefnsC_1_54 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignDefnsJava_1_55 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ForeignDefnsCsharp_1_56 = (MR_Word) ((MR_Unsigned) 0U);
  }
  Var_149 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 0))));
  Var_148 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 1))));
  Var_146 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 3))));
  Var_145 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 4))));
  Var_144 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, 5))));
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
        STATE_VARIABLE_DuDefns_3_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[14]), STATE_VARIABLE_DuDefns_1_51, Var_79);
        STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
        STATE_VARIABLE_SolverDefns_3_72 = STATE_VARIABLE_SolverDefns_1_48;
        STATE_VARIABLE_AbsStdDefns_3_69 = STATE_VARIABLE_AbsStdDefns_1_49;
        STATE_VARIABLE_EqvDefns_3_75 = STATE_VARIABLE_EqvDefns_1_50;
        STATE_VARIABLE_SubDefns_3_81 = STATE_VARIABLE_SubDefns_1_52;
        STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
        STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
        STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
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
        STATE_VARIABLE_SubDefns_3_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[15]), STATE_VARIABLE_SubDefns_1_52, Var_82);
        STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
        STATE_VARIABLE_SolverDefns_3_72 = STATE_VARIABLE_SolverDefns_1_48;
        STATE_VARIABLE_AbsStdDefns_3_69 = STATE_VARIABLE_AbsStdDefns_1_49;
        STATE_VARIABLE_EqvDefns_3_75 = STATE_VARIABLE_EqvDefns_1_50;
        STATE_VARIABLE_DuDefns_3_78 = STATE_VARIABLE_DuDefns_1_51;
        STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
        STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
        STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
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
        STATE_VARIABLE_SolverDefns_3_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[12]), STATE_VARIABLE_SolverDefns_1_48, Var_73);
        STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
        STATE_VARIABLE_AbsStdDefns_3_69 = STATE_VARIABLE_AbsStdDefns_1_49;
        STATE_VARIABLE_EqvDefns_3_75 = STATE_VARIABLE_EqvDefns_1_50;
        STATE_VARIABLE_DuDefns_3_78 = STATE_VARIABLE_DuDefns_1_51;
        STATE_VARIABLE_SubDefns_3_81 = STATE_VARIABLE_SubDefns_1_52;
        STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
        STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
        STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv_30 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, 1))));
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
            STATE_VARIABLE_EqvDefns_3_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[13]), STATE_VARIABLE_EqvDefns_1_50, Var_76);
            STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
            STATE_VARIABLE_SolverDefns_3_72 = STATE_VARIABLE_SolverDefns_1_48;
            STATE_VARIABLE_AbsStdDefns_3_69 = STATE_VARIABLE_AbsStdDefns_1_49;
            STATE_VARIABLE_DuDefns_3_78 = STATE_VARIABLE_DuDefns_1_51;
            STATE_VARIABLE_SubDefns_3_81 = STATE_VARIABLE_SubDefns_1_52;
            STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
            STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
            STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DetailsAbs_24 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, 1))));
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
                      STATE_VARIABLE_AbsStdDefns_3_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[11]), STATE_VARIABLE_AbsStdDefns_1_49, Var_70);
                      STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
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
                      STATE_VARIABLE_AbsSolverDefns_3_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[11]), STATE_VARIABLE_AbsSolverDefns_1_47, Var_67);
                      STATE_VARIABLE_AbsStdDefns_3_69 = STATE_VARIABLE_AbsStdDefns_1_49;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (AbsDefnInfo_25));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_AbsStdDefns_3_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[11]), STATE_VARIABLE_AbsStdDefns_1_49, Var_70);
                  STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
                }
                break;
            }
            STATE_VARIABLE_SolverDefns_3_72 = STATE_VARIABLE_SolverDefns_1_48;
            STATE_VARIABLE_EqvDefns_3_75 = STATE_VARIABLE_EqvDefns_1_50;
            STATE_VARIABLE_DuDefns_3_78 = STATE_VARIABLE_DuDefns_1_51;
            STATE_VARIABLE_SubDefns_3_81 = STATE_VARIABLE_SubDefns_1_52;
            STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
            STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
            STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_36 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, 1))));
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
            LangType_38 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_36, 0))));
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
                  STATE_VARIABLE_ForeignDefnsC_3_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[17]), STATE_VARIABLE_ForeignDefnsC_1_54, Var_85);
                  STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
                  STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
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
                  STATE_VARIABLE_ForeignDefnsJava_3_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[17]), STATE_VARIABLE_ForeignDefnsJava_1_55, Var_88);
                  STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
                  STATE_VARIABLE_ForeignDefnsCsharp_3_90 = STATE_VARIABLE_ForeignDefnsCsharp_1_56;
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
                  STATE_VARIABLE_ForeignDefnsCsharp_3_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[17]), STATE_VARIABLE_ForeignDefnsCsharp_1_56, Var_91);
                  STATE_VARIABLE_ForeignDefnsC_3_84 = STATE_VARIABLE_ForeignDefnsC_1_54;
                  STATE_VARIABLE_ForeignDefnsJava_3_87 = STATE_VARIABLE_ForeignDefnsJava_1_55;
                }
                break;
            }
            STATE_VARIABLE_AbsSolverDefns_3_66 = STATE_VARIABLE_AbsSolverDefns_1_47;
            STATE_VARIABLE_SolverDefns_3_72 = STATE_VARIABLE_SolverDefns_1_48;
            STATE_VARIABLE_AbsStdDefns_3_69 = STATE_VARIABLE_AbsStdDefns_1_49;
            STATE_VARIABLE_EqvDefns_3_75 = STATE_VARIABLE_EqvDefns_1_50;
            STATE_VARIABLE_DuDefns_3_78 = STATE_VARIABLE_DuDefns_1_51;
            STATE_VARIABLE_SubDefns_3_81 = STATE_VARIABLE_SubDefns_1_52;
          }
          break;
      }
      break;
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsC_3_84));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsJava_3_87));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) (STATE_VARIABLE_ForeignDefnsCsharp_3_90));
  }
  {
    AllDefns_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllDefns_44, 0) = ((MR_Box) (STATE_VARIABLE_AbsSolverDefns_3_66));
    MR_hl_field(0, AllDefns_44, 1) = ((MR_Box) (STATE_VARIABLE_SolverDefns_3_72));
    MR_hl_field(0, AllDefns_44, 2) = ((MR_Box) (STATE_VARIABLE_AbsStdDefns_3_69));
    MR_hl_field(0, AllDefns_44, 3) = ((MR_Box) (STATE_VARIABLE_EqvDefns_3_75));
    MR_hl_field(0, AllDefns_44, 4) = ((MR_Box) (STATE_VARIABLE_DuDefns_3_78));
    MR_hl_field(0, AllDefns_44, 5) = ((MR_Box) (STATE_VARIABLE_SubDefns_3_81));
    MR_hl_field(0, AllDefns_44, 6) = ((MR_Box) (Var_93));
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (AllDefns_44)), STATE_VARIABLE_TypeDefnMap_0_45, STATE_VARIABLE_TypeDefnMap_46);
}

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_repn_map_to_type_repns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeRepns_7;

  parse_tree__type_inst_mode_map__accumulate_type_ctor_repns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepns_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepns_7));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_repn_map_to_type_repns_1_f_0(
  MR_Word TypeCtorRepnMap_3)
{
  MR_Word TypeRepns_4;
  MR_Word TypeRepnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_TypeRepnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[13]), TypeCtorRepnMap_3, ((MR_Box) (Var_7)), &conv1_TypeRepnsCord_5);
  TypeRepnsCord_5 = ((MR_Word) (conv1_TypeRepnsCord_5));
  TypeRepns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]), TypeRepnsCord_5);
  return TypeRepns_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__mode_ctor_defn_map_to_mode_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModeDefns_9;

  parse_tree__type_inst_mode_map__accumulate_mode_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefns_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefns_9));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__mode_ctor_defn_map_to_mode_defns_1_f_0(
  MR_Word ModeCtorDefnMap_3)
{
  MR_Word ModeDefns_4;
  MR_Word ModeDefnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_ModeDefnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[8]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[12]), ModeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_ModeDefnsCord_5);
  ModeDefnsCord_5 = ((MR_Word) (conv1_ModeDefnsCord_5));
  ModeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), ModeDefnsCord_5);
  return ModeDefns_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__inst_ctor_defn_map_to_inst_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InstDefns_9;

  parse_tree__type_inst_mode_map__accumulate_inst_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefns_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefns_9));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__inst_ctor_defn_map_to_inst_defns_1_f_0(
  MR_Word InstCtorDefnMap_3)
{
  MR_Word InstDefns_4;
  MR_Word InstDefnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_InstDefnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[11]), InstCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_InstDefnsCord_5);
  InstDefnsCord_5 = ((MR_Word) (conv1_InstDefnsCord_5));
  InstDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), InstDefnsCord_5);
  return InstDefns_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_defn_map_to_type_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeDefns_17;

  parse_tree__type_inst_mode_map__accumulate_type_ctor_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefns_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefns_17));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_defn_map_to_type_defns_1_f_0(
  MR_Word TypeCtorDefnMap_3)
{
  MR_Word TypeDefns_4;
  MR_Word TypeDefnsCord_5;
  MR_Word Var_7;
  MR_Box conv1_TypeDefnsCord_5;

  Var_7 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[10]), TypeCtorDefnMap_3, ((MR_Box) (Var_7)), &conv1_TypeDefnsCord_5);
  TypeDefnsCord_5 = ((MR_Word) (conv1_TypeDefnsCord_5));
  TypeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), TypeDefnsCord_5);
  return TypeDefns_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ForeignEnumMap_17;

  parse_tree__type_inst_mode_map__add_foreign_enum_item_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ForeignEnumMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumMap_17));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_foreign_enum_items_to_map_1_f_0(
  MR_Word ForeignEnums_3)
{
  MR_Word ForeignEnumMap_4;
  MR_Word Var_6;
  MR_Box conv1_ForeignEnumMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[5]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[4]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[9]), ForeignEnums_3, ((MR_Box) (Var_6)), &conv1_ForeignEnumMap_4);
  ForeignEnumMap_4 = ((MR_Word) (conv1_ForeignEnumMap_4));
  return ForeignEnumMap_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeRepnMap_15;

  parse_tree__type_inst_mode_map__add_type_repn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeRepnMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeRepnMap_15));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_repn_items_to_map_1_f_0(
  MR_Word TypeRepnInfos_3)
{
  MR_Word TypeRepnMap_4;
  MR_Word Var_6;
  MR_Box conv1_TypeRepnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[3]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[3]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[8]), TypeRepnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeRepnMap_4);
  TypeRepnMap_4 = ((MR_Word) (conv1_TypeRepnMap_4));
  return TypeRepnMap_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModeDefnMap_24;

  parse_tree__type_inst_mode_map__add_mode_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModeDefnMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefnMap_24));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__mode_ctor_defn_items_to_map_1_f_0(
  MR_Word ModeDefnInfos_3)
{
  MR_Word ModeDefnMap_4;
  MR_Word Var_6;
  MR_Box conv1_ModeDefnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[2]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[2]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[7]), ModeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_ModeDefnMap_4);
  ModeDefnMap_4 = ((MR_Word) (conv1_ModeDefnMap_4));
  return ModeDefnMap_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InstDefnMap_25;

  parse_tree__type_inst_mode_map__add_inst_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstDefnMap_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefnMap_25));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__inst_ctor_defn_items_to_map_1_f_0(
  MR_Word InstDefnInfos_3)
{
  MR_Word InstDefnMap_4;
  MR_Word Var_6;
  MR_Box conv1_InstDefnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[1]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[1]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[6]), InstDefnInfos_3, ((MR_Box) (Var_6)), &conv1_InstDefnMap_4);
  InstDefnMap_4 = ((MR_Word) (conv1_InstDefnMap_4));
  return InstDefnMap_4;
}

static void MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeDefnMap_46;

  parse_tree__type_inst_mode_map__add_type_defn_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefnMap_46);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefnMap_46));
}

MR_Word MR_CALL 
parse_tree__type_inst_mode_map__type_ctor_defn_items_to_map_1_f_0(
  MR_Word TypeDefnInfos_3)
{
  MR_Word TypeDefnMap_4;
  MR_Word Var_6;
  MR_Box conv1_TypeDefnMap_4;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_1[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[0]), (MR_Word) (&parse_tree__type_inst_mode_map_scalar_common_2[5]), TypeDefnInfos_3, ((MR_Box) (Var_6)), &conv1_TypeDefnMap_4);
  TypeDefnMap_4 = ((MR_Word) (conv1_TypeDefnMap_4));
  return TypeDefnMap_4;
}

void mercury__parse_tree__type_inst_mode_map__init(void)
{
}

void mercury__parse_tree__type_inst_mode_map__init_type_tables(void)
{
}

void mercury__parse_tree__type_inst_mode_map__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__type_inst_mode_map__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.type_inst_mode_map.
