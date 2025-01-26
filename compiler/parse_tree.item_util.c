/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version rotd-2025-01-26
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


// :- module parse_tree.item_util.
// :- implementation.

/*
INIT mercury__parse_tree__item_util__init
ENDINIT
*/

#include "parse_tree.item_util.mih"


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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6);

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6);

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_defn_get_src_defns_4_p_0(
  MR_Word CheckedDefn_5,
  MR_Word * IntDefns_6,
  MR_Word * ImpDefns_7,
  MR_Word * ImpForeignEnums_8);

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[123][2];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[3][3];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[2][6];


struct parse_tree__item_util__vector_common_type_2_0_s {
  const MR_Word parse_tree__item_util__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__item_util__vector_common_type_2_0_s parse_tree__item_util_vector_common_2[12];



static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[123][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "inst definition"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instance declaration"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode declaration"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode definition"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function declaration"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicate declaration"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exclusivity promise"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exclusivity and exhaustivity promise"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exhaustivity promise"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type definition"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type_repn"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "typeclass declaration"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "type_spec_constrained_preds"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "check_termination"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_decl"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "require_feature_set"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "loop_check"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "minimal_model"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "consider_used"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "mode_check_clauses"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "no_determinism_warning"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "promise_equivalent_clauses"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "promise_pure"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "promise_semipure"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[10])))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[0])),
    ((MR_Box) (parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};


static /* final */ const struct parse_tree__item_util__vector_common_type_2_0_s parse_tree__item_util_vector_common_2[12] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[102])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[108])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[100])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[104])) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[106])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[112])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[114])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[110])) },
  /* row   8 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[36])) },
  /* row   9 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[40])) },
  /* row  10 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[38])) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[42])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6)
{
  MR_Word SrcDefns_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_4, (MR_Integer) 1))));
  MR_Word MaybeIntDefn_9 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 0))));
  MR_Word MaybeImpDefn_10 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 1))));

  if ((MaybeIntDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *IntDefns_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *IntDefns_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeImpDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *ImpDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_14 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ImpDefns_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6)
{
  MR_Word SrcDefns_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_4, (MR_Integer) 1))));
  MR_Word MaybeIntDefn_9 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 0))));
  MR_Word MaybeImpDefn_10 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 1))));

  if ((MaybeIntDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *IntDefns_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *IntDefns_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeImpDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *ImpDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_14 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ImpDefns_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_defn_get_src_defns_4_p_0(
  MR_Word CheckedDefn_5,
  MR_Word * IntDefns_6,
  MR_Word * ImpDefns_7,
  MR_Word * ImpForeignEnums_8)
{
  if (((MR_tag((MR_Word) CheckedDefn_5)) == (MR_Integer) 0))
  {
    MR_Word SrcDefnsSolver_10 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_5, (MR_Integer) 1))));
    MR_Word MaybeIntDefn_11 = ((MR_Word) ((MR_hl_field(0, SrcDefnsSolver_10, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_12 = ((MR_Word) ((MR_hl_field(0, SrcDefnsSolver_10, (MR_Integer) 1))));

    if ((MaybeIntDefn_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *IntDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_16 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IntDefns_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (X_16));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeImpDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *ImpDefns_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_18 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ImpDefns_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (X_18));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    *ImpForeignEnums_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SrcDefnsStd_14 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_5, (MR_Integer) 1))));

    *IntDefns_6 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd_14, (MR_Integer) 0))));
    *ImpDefns_7 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd_14, (MR_Integer) 1))));
    *ImpForeignEnums_8 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd_14, (MR_Integer) 2))));
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  MR_Word ModeDefnInfo_4;
  MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (EqvDefn_5));
  }
  {
    ModeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, ModeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, ModeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, ModeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, ModeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, ModeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return ModeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  MR_Word ModeDefnInfo_4;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 5))));

  {
    ModeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeDefnInfo_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, ModeDefnInfo_4, 1) = ((MR_Box) (Var_7));
    MR_hl_field(0, ModeDefnInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, ModeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, ModeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return ModeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  MR_Word InstDefnInfo_4;
  MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 5))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 6))));

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (EqvDefn_5));
  }
  {
    InstDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, InstDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, InstDefnInfo_4, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, InstDefnInfo_4, 3) = ((MR_Box) (Var_6));
    MR_hl_field(0, InstDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, InstDefnInfo_4, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, InstDefnInfo_4, 6) = ((MR_Box) (Var_12));
  }
  return InstDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  MR_Word InstDefnInfo_4;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 5))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 6))));

  {
    InstDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstDefnInfo_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, InstDefnInfo_4, 1) = ((MR_Box) (Var_7));
    MR_hl_field(0, InstDefnInfo_4, 2) = ((MR_Box) (Var_8));
    MR_hl_field(0, InstDefnInfo_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, InstDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, InstDefnInfo_4, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, InstDefnInfo_4, 6) = ((MR_Box) (Var_12));
  }
  return InstDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_type_defn_1_f_0(
  MR_Word ForeignDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word ForeignDefn_5 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (ForeignDefn_5));
  }
  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_sub_type_defn_1_f_0(
  MR_Word SubDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word SubDefn_5 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6 = (MR_Word) (MR_mkword(1, (MR_Word) (SubDefn_5)));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 5))));

  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_du_type_defn_1_f_0(
  MR_Word DuDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word DuDefn_5 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6 = (MR_Word) ((MR_Word) (DuDefn_5));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 5))));

  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_type_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (EqvDefn_5));
  }
  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_solver_type_defn_1_f_0(
  MR_Word SolverDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word SolverDefn_5 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6 = (MR_Word) (MR_mkword(2, (MR_Word) (SolverDefn_5)));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 5))));

  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_type_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word AbstractDefn_5 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (AbstractDefn_5));
  }
  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_repn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mutable_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_finalise_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_initialise_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_promise_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_generated_pragma_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_impl_pragma_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_decl_pragma_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_clause_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) ((MR_Word) (X_3));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_export_enum_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_enum_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mode_decl_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(2, (MR_Word) (X_3)));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_pred_decl_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(1, (MR_Word) (X_3)));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_instance_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_typeclass_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mode_defn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_inst_defn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_defn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_avail_use_1_f_0(
  MR_Word AvailUseInfo_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(1, (MR_Word) (AvailUseInfo_3)));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_avail_import_1_f_0(
  MR_Word AvailImportInfo_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) ((MR_Word) (AvailImportInfo_3));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_use_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word UseInfo_4;
  MR_Word Var_5;

  Var_5 = mercury__term_context__dummy_context_0_f_0();
  {
    UseInfo_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseInfo_4, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, UseInfo_4, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, UseInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return UseInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_import_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word ImportInfo_4;
  MR_Word Var_5;

  Var_5 = mercury__term_context__dummy_context_0_f_0();
  {
    ImportInfo_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImportInfo_4, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, ImportInfo_4, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, ImportInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return ImportInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_use_avail_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word Avail_4;
  MR_Word UseInfo_5;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  {
    UseInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseInfo_5, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, UseInfo_5, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, UseInfo_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Avail_4 = (MR_Word) (MR_mkword(1, (MR_Word) (UseInfo_5)));
  return Avail_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_import_avail_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word Avail_4;
  MR_Word ImportInfo_5;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  {
    ImportInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImportInfo_5, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, ImportInfo_5, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, ImportInfo_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Avail_4 = (MR_Word) ((MR_Word) (ImportInfo_5));
  return Avail_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_include_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word Include_4;
  MR_Word Var_5;

  Var_5 = mercury__term_context__dummy_context_0_f_0();
  {
    Include_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Include_4, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, Include_4, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, Include_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Include_4;
}

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_IntDefns_5;
  MR_Word conv0_ImpDefns_6;

  parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntDefns_5, &conv0_ImpDefns_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_IntDefns_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_ImpDefns_6));
}

void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(
  MR_Word ModeCtorCheckedMap_4,
  MR_Word * IntModeDefns_5,
  MR_Word * ImpModeDefns_6)
{
  MR_Word ModeCtorCheckedDefns_7;
  MR_Word IntModeDefnLists_8;
  MR_Word ImpModeDefnLists_9;

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ModeCtorCheckedMap_4, &ModeCtorCheckedDefns_7);
  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[6]), (MR_Word) (&parse_tree__item_util_scalar_common_1[6]), (MR_Word) (&parse_tree__item_util_scalar_common_4[2]), ModeCtorCheckedDefns_7, &IntModeDefnLists_8, &ImpModeDefnLists_9);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[5]), IntModeDefnLists_8, IntModeDefns_5);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[5]), ImpModeDefnLists_9, ImpModeDefns_6);
}

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_IntDefns_5;
  MR_Word conv0_ImpDefns_6;

  parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntDefns_5, &conv0_ImpDefns_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_IntDefns_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_ImpDefns_6));
}

void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(
  MR_Word InstCtorCheckedMap_4,
  MR_Word * IntInstDefns_5,
  MR_Word * ImpInstDefns_6)
{
  MR_Word InstCtorCheckedDefns_7;
  MR_Word IntInstDefnLists_8;
  MR_Word ImpInstDefnLists_9;

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), InstCtorCheckedMap_4, &InstCtorCheckedDefns_7);
  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[4]), (MR_Word) (&parse_tree__item_util_scalar_common_1[4]), (MR_Word) (&parse_tree__item_util_scalar_common_4[1]), InstCtorCheckedDefns_7, &IntInstDefnLists_8, &ImpInstDefnLists_9);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), IntInstDefnLists_8, IntInstDefns_5);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), ImpInstDefnLists_9, ImpInstDefns_6);
}

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_IntDefns_6;
  MR_Word conv1_ImpDefns_7;
  MR_Word conv0_ImpForeignEnums_8;

  parse_tree__item_util__type_ctor_checked_defn_get_src_defns_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_IntDefns_6, &conv1_ImpDefns_7, &conv0_ImpForeignEnums_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_IntDefns_6));
  *wrapper_arg_3 = ((MR_Box) (conv1_ImpDefns_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_ImpForeignEnums_8));
}

void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * IntTypeDefns_6,
  MR_Word * ImpTypeDefns_7,
  MR_Word * ImpForeignEnums_8)
{
  MR_Word TypeCtorCheckedDefns_9;
  MR_Word IntTypeDefnLists_10;
  MR_Word ImpTypeDefnLists_11;
  MR_Word ImpForeignEnumLists_12;

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), TypeCtorCheckedMap_5, &TypeCtorCheckedDefns_9);
  mercury__list__map3_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_4[0]), TypeCtorCheckedDefns_9, &IntTypeDefnLists_10, &ImpTypeDefnLists_11, &ImpForeignEnumLists_12);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[0]), IntTypeDefnLists_10, IntTypeDefns_6);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ImpTypeDefnLists_11, ImpTypeDefns_7);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpForeignEnumLists_12, ImpForeignEnums_8);
}

MR_Word MR_CALL 
parse_tree__item_util__get_use_module_name_1_f_0(
  MR_Word AvailUseInfo_3)
{
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailUseInfo_3, (MR_Integer) 0))));

  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_import_module_name_1_f_0(
  MR_Word AvailImportInfo_3)
{
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailImportInfo_3, (MR_Integer) 0))));

  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_avail_module_name_1_f_0(
  MR_Word ItemAvail_3)
{
  MR_Word ModuleName_4;

  if (((MR_tag((MR_Word) ItemAvail_3)) == (MR_Integer) 0))
  {
    MR_Word AvailImportInfo_5 = (MR_Word) ((MR_Word) (ItemAvail_3));

    ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailImportInfo_5, (MR_Integer) 0))));
  }
  else
  {
    MR_Word AvailUseInfo_8 = (MR_Word) (MR_body((MR_Word) (ItemAvail_3), (MR_Integer) 1));

    ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailUseInfo_8, (MR_Integer) 0))));
  }
  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_use_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Context_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_import_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Context_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_avail_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Var_6 = (MR_Word) ((MR_Word) (HeadVar__1_1));

    Context_2 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Var_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));

    Context_2 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  }
  return Context_2;
}

MR_Word MR_CALL 
parse_tree__item_util__item_include_module_name_1_f_0(
  MR_Word Incl_3)
{
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, Incl_3, (MR_Integer) 0))));

  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(
  MR_Word ParseTreeModuleSrc_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__gen_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Pragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[122]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[116]));
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[120]));
      break;
    case (MR_Integer) 3:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[118]));
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__decl_marker_desc_pieces_1_f_0(
  MR_Word Marker_3)
{
  MR_Word Pieces_4;
  MR_Word MarkerKind_5 = ((MR_Unsigned) ((MR_hl_field(0, Marker_3, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (MarkerKind_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[72]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[74]));
      break;
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[76]));
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__items_desc_pieces_1_f_0(
  MR_Word Item_3)
{
  MR_Word Pieces_4;
  MR_Word Pieces0_5;

  Pieces0_5 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_3);
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_5, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[50])));
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__item_desc_pieces_1_f_0(
  MR_Word Item_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Item_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[8]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemPredDecl_9 = (MR_Word) (MR_body((MR_Word) (Item_3), (MR_Integer) 1));
        MR_Word PorF_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_9, (MR_Integer) 1))) & (MR_Integer) 1);

        switch (PorF_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[32]));
            break;
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[34]));
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[26]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[18]));
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[14]));
          break;
        case (MR_Integer) 2:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[16]));
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemDeclMarker_16 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word MarkerKind_127 = ((MR_Unsigned) ((MR_hl_field(0, ItemDeclMarker_16, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MarkerKind_127) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[72]));
                break;
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[74]));
                break;
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[76]));
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemImplMarker_18 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            Pieces_4 = parse_tree__item_util__impl_marker_desc_pieces_1_f_0(ItemImplMarker_18);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemPromise_20 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word PromiseType_21 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromise_20, (MR_Integer) 0))) & (MR_Integer) 3);

            Pieces_4 = ((&parse_tree__item_util_vector_common_2[8 + PromiseType_21]))->parse_tree__item_util__vector_common_type_2_0__vct_2_f_0;
          }
          break;
        case (MR_Integer) 6:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[48]));
          break;
        case (MR_Integer) 7:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[24]));
          break;
        case (MR_Integer) 8:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[20]));
          break;
        case (MR_Integer) 9:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[12]));
          break;
        case (MR_Integer) 10:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[30]));
          break;
        case (MR_Integer) 11:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[44]));
          break;
        case (MR_Integer) 12:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[22]));
          break;
        case (MR_Integer) 13:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[28]));
          break;
        case (MR_Integer) 14:
          {
            MR_Word ItemDeclPragma_15 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            Pieces_4 = parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(ItemDeclPragma_15);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word ItemImplPragma_17 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            Pieces_4 = parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(ItemImplPragma_17);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word ItemGenPragma_19 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ItemGenPragma_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[122]));
                break;
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[116]));
                break;
              case (MR_Integer) 2:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[120]));
                break;
              case (MR_Integer) 3:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[118]));
                break;
            }
          }
          break;
        case (MR_Integer) 17:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[46]));
          break;
      }
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__impl_marker_desc_pieces_1_f_0(
  MR_Word Marker_3)
{
  MR_Word Pieces_4;
  MR_Word MarkerKind_5 = ((MR_Unsigned) ((MR_hl_field(0, Marker_3, (MR_Integer) 0))) & (MR_Integer) 7);

  Pieces_4 = ((&parse_tree__item_util_vector_common_2[0 + MarkerKind_5]))->parse_tree__item_util__vector_common_type_2_0__vct_2_f_0;
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Pragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[86]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[84]));
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[88]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word External_8 = ((MR_Word) ((MR_hl_field(3, Pragma_3, (MR_Integer) 1))));
            MR_Word PFNameArity_9 = ((MR_Word) ((MR_hl_field(0, External_8, (MR_Integer) 0))));
            MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_9, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (PorF_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[78]));
                break;
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[80]));
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[82]));
          break;
        case (MR_Integer) 2:
          {
            MR_Word Tabled_18 = ((MR_Word) ((MR_hl_field(3, Pragma_3, (MR_Integer) 1))));
            MR_Word TabledMethod_19 = ((MR_Word) ((MR_hl_field(0, Tabled_18, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) TabledMethod_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[94]));
                break;
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[96]));
                break;
              case (MR_Integer) 2:
                mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.impl_pragma_desc_pieces\'/1", (MR_String) "eval_table_io");
                break;
              case (MR_Integer) 3:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[98]));
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[92]));
          break;
        case (MR_Integer) 4:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[90]));
          break;
      }
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Pragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[54]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[56]));
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[52]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[70]));
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[68]));
          break;
        case (MR_Integer) 2:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[58]));
          break;
        case (MR_Integer) 3:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[64]));
          break;
        case (MR_Integer) 4:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[66]));
          break;
        case (MR_Integer) 5:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[62]));
          break;
        case (MR_Integer) 6:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_1[60]));
          break;
      }
      break;
  }
  return Pieces_4;
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_impl_pragma_3_p_0(
  MR_Word ItemImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_6,
  MR_Word * STATE_VARIABLE_Langs_7)
{
  MR_Word Var_8;

  switch (MR_tag((MR_Word) ItemImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_10 = (MR_Word) ((MR_Word) (ItemImplPragma_4));
        MR_Word Lang_33 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Lang_33));
          MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Lang_11;
        MR_Word FCInfo_16 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_4), (MR_Integer) 1));

        Lang_11 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_16, (MR_Integer) 0))) & (MR_Integer) 3);
        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Lang_11));
          MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo_20 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_4), (MR_Integer) 2));
        MR_Word Lang_35 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_20, (MR_Integer) 1))) & (MR_Integer) 3);

        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Lang_35));
          MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_8, STATE_VARIABLE_Langs_0_6, STATE_VARIABLE_Langs_7);
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_enum_3_p_0(
  MR_Word FEInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_11,
  MR_Word * STATE_VARIABLE_Langs_12)
{
  MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(0, FEInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);

  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), STATE_VARIABLE_Langs_0_11, STATE_VARIABLE_Langs_12);
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_proc_3_p_0(
  MR_Word FPInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_15,
  MR_Word * STATE_VARIABLE_Langs_16)
{
  MR_Word Attrs_6 = ((MR_Word) ((MR_hl_field(0, FPInfo_4, (MR_Integer) 0))));
  MR_Word Var_17;

  Var_17 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_6);
  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_17)), STATE_VARIABLE_Langs_0_15, STATE_VARIABLE_Langs_16);
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_Langs_0_10,
  MR_Word * STATE_VARIABLE_Langs_11)
{
  MR_bool succeeded;
  MR_Word ForeignType_7;
  MR_Word DetailsForeign_6;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 2))));

  succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    DetailsForeign_6 = ((MR_Word) ((MR_hl_field(3, Var_12, (MR_Integer) 1))));
    ForeignType_7 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_6, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_13;

    Var_13 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_7);
    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_13)), STATE_VARIABLE_Langs_0_10, STATE_VARIABLE_Langs_11);
  }
  else
    *STATE_VARIABLE_Langs_11 = STATE_VARIABLE_Langs_0_10;
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
  MR_Word Item_3)
{
  MR_bool succeeded;
  MR_Word Langs_4;

  switch (MR_tag((MR_Word) Item_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPInfo_11 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word Attrs_12 = ((MR_Word) ((MR_hl_field(0, FPInfo_11, (MR_Integer) 0))));
            MR_Word Var_47;

            Var_47 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_12);
            {
              Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Var_47));
              MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FEInfo_21 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word Lang_22 = ((MR_Unsigned) ((MR_hl_field(0, FEInfo_21, (MR_Integer) 0))) & (MR_Integer) 3);

            {
              Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_22));
              MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 16:
          Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 10:
          Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeDefn_6 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word ForeignType_8;
            MR_Word DetailsForeign_7;
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_6, (MR_Integer) 2))));

            succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_44, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              DetailsForeign_7 = ((MR_Word) ((MR_hl_field(3, Var_44, (MR_Integer) 1))));
              ForeignType_8 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_7, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_45;

              Var_45 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_8);
              {
                Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Var_45));
                MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word ItemImplPragma_27 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ItemImplPragma_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FDInfo_57 = (MR_Word) ((MR_Word) (ItemImplPragma_27));
                  MR_Word Lang_80 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_57, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                  {
                    Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_80));
                    MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lang_58;
                  MR_Word FCInfo_63 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_27), (MR_Integer) 1));

                  Lang_58 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_63, (MR_Integer) 0))) & (MR_Integer) 3);
                  {
                    Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_58));
                    MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word FPEInfo_67 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_27), (MR_Integer) 2));
                  MR_Word Lang_82 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_67, (MR_Integer) 1))) & (MR_Integer) 3);

                  {
                    Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_82));
                    MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 3:
                Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
          }
          break;
        case (MR_Integer) 17:
          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.item_needs_foreign_imports\'/1", (MR_String) "item_type_repn");
          break;
      }
      break;
  }
  return Langs_4;
}

void MR_CALL 
parse_tree__item_util__add_implicit_fim_for_module_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  MR_bool succeeded;
  MR_Word FIMSpec_8;
  MR_Box conv0_Var_9;

  {
    FIMSpec_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
    MR_hl_field(0, FIMSpec_8, 1) = ((MR_Box) (ModuleName_5));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_Map_0_10, ((MR_Box) (FIMSpec_8)), &conv0_Var_9);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *STATE_VARIABLE_Map_11 = STATE_VARIABLE_Map_0_10;
  else
  {
    MR_Word Var_12;

    Var_12 = mercury__term_context__dummy_context_0_f_0();
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (FIMSpec_8)), ((MR_Box) (Var_12)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
  }
}

MR_Word MR_CALL 
parse_tree__item_util__fim_module_lang_to_item_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (ModuleName_4));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__item_util__fim_module_lang_to_spec_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (ModuleName_4));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__item_util__fim_spec_to_item_1_f_0(
  MR_Word FIMSpec_3)
{
  MR_Word FIM_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 1))));
  MR_Word Var_7;

  Var_7 = mercury__term_context__dummy_context_0_f_0();
  {
    FIM_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIM_4, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, FIM_4, 1) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, FIM_4, 2) = ((MR_Box) (Var_7));
    MR_hl_field(0, FIM_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return FIM_4;
}

MR_Word MR_CALL 
parse_tree__item_util__fim_item_to_spec_1_f_0(
  MR_Word FIM_3)
{
  MR_Word FIMSpec_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIM_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(0, FIM_3, (MR_Integer) 1))));

  {
    FIMSpec_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_4, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, FIMSpec_4, 1) = ((MR_Box) (ModuleName_6));
  }
  return FIMSpec_4;
}

void mercury__parse_tree__item_util__init(void)
{
}

void mercury__parse_tree__item_util__init_type_tables(void)
{
}

void mercury__parse_tree__item_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__item_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.item_util.
