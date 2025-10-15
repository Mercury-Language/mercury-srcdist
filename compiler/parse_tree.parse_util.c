/*
** Automatically generated from `parse_util.m'
** by the Mercury compiler,
** version rotd-2025-10-15
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


// :- module parse_tree.parse_util.
// :- implementation.

/*
INIT mercury__parse_tree__parse_util__init
ENDINIT
*/

#include "parse_tree.parse_util.mih"


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
#include "ops.mih"
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
#include "term_int.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0[3];

static const MR_DuFunctorDesc parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1[1];

static const MR_Integer parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct4 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe3_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct4 parse_tree__parse_util__parse_tree__maybe_error__ti_maybe3_4mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_pred_or_func_0list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static void MR_CALL 
parse_tree__parse_util__accumulate_conflict_specs_6_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word Context_7,
  MR_String ConflictingWhatInWhat_8,
  MR_Word Specified_9,
  MR_Word Conflict_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word VarSet_1,
  MR_String AAn_2,
  MR_String Kind_3,
  MR_Word STATE_VARIABLE_SeenVars_0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_Word MR_CALL 
parse_tree__parse_util__report_repeated_parameter_3_f_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word VarSet_5,
  MR_String Kind_6,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_116_95_95_104_111_49_48_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_62,
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho9_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho8_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho7_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho6_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho5_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho4_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho3_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho2_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho1_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util__make_expected_got_spec_5_p_0(
  MR_Word Where_6,
  MR_Word VarSet_7,
  MR_String What_8,
  MR_Word Term_9,
  MR_Word * Spec_10);

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word Parser_5,
  MR_Word Head_6,
  MR_Word Tail_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Op_5,
  MR_Word Term_6,
  MR_Word List0_7,
  MR_Word * OneOrMore_8);

static MR_bool MR_CALL 
parse_tree__parse_util__is_term_symname_arity_maybe_pf_2_p_0(
  MR_Word Term_3,
  MR_Word * PredSpec_4);

static void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[74][2];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_2[2][5];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_4[1][3];

static /* final */ const MR_Integer parse_tree__parse_util_scalar_common_5[1][2];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_6[1][10];




static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[74][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected one of"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(name/arity)"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(name/arity)"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[7])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[17])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "name/arity"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[17])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[5])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(mode1, mode2, ..., moden)"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(mode1, mode2, ..., moden) = retmode"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[17])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the return value:"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "decimal integer,"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected one or more variables as"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "parameters, got"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "none."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "integer literal"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "outside the range of that type."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "parameter, got"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "distinct variables"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "parameters, but the variable"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "repeated."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_2[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__parse_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__parse_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ",")) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_util_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_util_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_util_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1 = {
  &parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0 = {
  (MR_String) "conflict",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0[1] = { &parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0 };

static const MR_DuPtagLayout parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1[1] = { &parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0 };

static const MR_Integer parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_util____Unify____conflict_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____conflict_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "conflict",
  { parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1 },
  { parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct4 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe3_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__list__pti_list_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "maybe_pred_or_func",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__pti_maybe3_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_TypeInfo_Struct4 parse_tree__parse_util__parse_tree__maybe_error__ti_maybe3_4mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_pred_or_func_0list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
    (MR_TypeInfo) (&parse_tree__parse_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0),
    (MR_TypeInfo) (&parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "maybe_pred_or_func_modes",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__ti_maybe3_4mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_pred_or_func_0list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_util____Unify____parser_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____parser_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "parser",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word TypeInfo_11_11;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  parse_tree__maybe_error____Compare____maybe3_4_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_9_9, TypeInfo_11_11, (MR_Word) (&parse_tree__parse_util_scalar_common_1[1]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = parse_tree__maybe_error____Unify____maybe3_4_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_8_8, TypeInfo_10_10, (MR_Word) (&parse_tree__parse_util_scalar_common_1[1]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0(
  MR_Word TypeInfo_for_T_14,
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
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word TypeInfo_12_12;
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__parse_util_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_util__accumulate_conflict_specs_6_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word Context_7,
  MR_String ConflictingWhatInWhat_8,
  MR_Word Specified_9,
  MR_Word Conflict_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Box A_12 = (MR_hl_field(0, Conflict_10, 0));
  MR_Box B_13 = (MR_hl_field(0, Conflict_10, 1));
  MR_Word Diagnosis_14 = ((MR_Word) ((MR_hl_field(0, Conflict_10, 2))));

  succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_37, A_12, Specified_9);
  if (succeeded)
    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_37, B_13, Specified_9);
  if (succeeded)
  {
    MR_Word Pieces_15;
    MR_Word Spec_16;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_30;

    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (ConflictingWhatInWhat_8));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[53])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[51])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Diagnosis_14, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_30);
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.accumulate_conflict_specs\'/6"));
      MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
  else
    *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
}

void MR_CALL 
parse_tree__parse_util__terms_to_one_or_more_distinct_vars_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word VarSet_7,
  MR_String AAn_8,
  MR_String Kind_9,
  MR_Word ConjTerm_10,
  MR_Word Terms_11,
  MR_Word * MaybeVars_12)
{
  MR_Word TypeInfo_49_49;
  MR_Word Vars_13;
  MR_Word Specs_14;
  MR_Word Var_22;
  MR_Word conv0_Var_22;

  {
    TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_49_49, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_for_T_47));
  }
  conv0_Var_22 = mercury__set__init_0_f_0(TypeInfo_49_49);
  Var_22 = (MR_Word) (conv0_Var_22);
  parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(TypeInfo_for_T_47, VarSet_7, AAn_8, Kind_9, Var_22, Terms_11, &Vars_13, &Specs_14);
  if ((Specs_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Vars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_15;
      MR_Word TermContext_16;
      MR_Word Spec_17;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_44;

      {
        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_27, 1) = ((MR_Box) (Kind_9));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[48])));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[46])));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
      }
      Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[50])));
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_32);
      TermContext_16 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_47, ConjTerm_10);
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.terms_to_one_or_more_distinct_vars\'/6"));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (TermContext_16));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVars_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
      }
    }
    else
    {
      MR_Word HeadVar_18 = ((MR_Word) ((MR_hl_field(1, Vars_13, 0))));
      MR_Word TailVars_19 = ((MR_Word) ((MR_hl_field(1, Vars_13, 1))));
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (HeadVar_18));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (TailVars_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVars_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
      }
    }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVars_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_14));
    }
}

void MR_CALL 
parse_tree__parse_util__terms_to_distinct_vars_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_6,
  MR_String AAn_7,
  MR_String Kind_8,
  MR_Word Terms_9,
  MR_Word * MaybeVars_10)
{
  MR_Word TypeInfo_18_18;
  MR_Word Vars_11;
  MR_Word Specs_12;
  MR_Word Var_15;
  MR_Word conv0_Var_15;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  conv0_Var_15 = mercury__set__init_0_f_0(TypeInfo_18_18);
  Var_15 = (MR_Word) (conv0_Var_15);
  parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(TypeInfo_for_T_16, VarSet_6, AAn_7, Kind_8, Var_15, Terms_9, &Vars_11, &Specs_12);
  if ((Specs_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVars_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Vars_11));
    }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVars_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_12));
    }
}

static void MR_CALL 
parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word VarSet_1,
  MR_String AAn_2,
  MR_String Kind_3,
  MR_Word STATE_VARIABLE_SeenVars_0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word Terms_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));

    if (((MR_tag((MR_Word) Term_16)) == (MR_Integer) 0))
    {
      MR_Word TailSpecs_31;
      MR_Word Spec_32;
      MR_String TermStr_36;
      MR_Word Pieces_37;
      MR_Word TermContext_38;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;

      parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(TypeInfo_for_T_33, VarSet_1, AAn_2, Kind_3, STATE_VARIABLE_SeenVars_0_4, Terms_17, HeadVar__6_6, &TailSpecs_31);
      TermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_33, VarSet_1, Term_16);
      Var_44 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[62])));
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (AAn_2));
      }
      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (Kind_3));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[65])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[63])));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_64, 1) = ((MR_Box) (TermStr_36));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
      }
      Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_63);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_61);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_49);
      Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[42])), Var_43);
      TermContext_38 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_33, Term_16);
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_util.report_nonvar_parameter\'/4"));
        MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_32, 3) = ((MR_Box) (TermContext_38));
        MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_37));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailSpecs_31));
      }
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, Term_16, 0))));
      MR_Word STATE_VARIABLE_SeenVars_1_29;
      MR_Word TypeInfo_35_35;
      MR_Word conv0_STATE_VARIABLE_SeenVars_1_29;

      {
        TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_33));
      }
      succeeded = mercury__set__insert_new_3_p_0(TypeInfo_35_35, ((MR_Box) (Var_20)), (MR_Word) (STATE_VARIABLE_SeenVars_0_4), &conv0_STATE_VARIABLE_SeenVars_1_29);
      if (succeeded)
      {
        STATE_VARIABLE_SeenVars_1_29 = (MR_Word) (conv0_STATE_VARIABLE_SeenVars_1_29);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TailVars_22;

        parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(TypeInfo_for_T_33, VarSet_1, AAn_2, Kind_3, STATE_VARIABLE_SeenVars_1_29, Terms_17, &TailVars_22, HeadVar__7_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailVars_22));
        }
      }
      else
      {
        MR_Word TailSpecs_23;
        MR_Word Spec_24;

        parse_tree__parse_util__terms_to_distinct_vars_loop_7_p_0(TypeInfo_for_T_33, VarSet_1, AAn_2, Kind_3, STATE_VARIABLE_SeenVars_0_4, Terms_17, HeadVar__6_6, &TailSpecs_23);
        Spec_24 = parse_tree__parse_util__report_repeated_parameter_3_f_0(TypeInfo_for_T_33, VarSet_1, Kind_3, Term_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailSpecs_23));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__report_repeated_parameter_3_f_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word VarSet_5,
  MR_String Kind_6,
  MR_Word Term_7)
{
  MR_Word Spec_8;
  MR_String TermStr_9;
  MR_Word Pieces_10;
  MR_Word TermContext_11;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_43;

  TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_54, VarSet_5, Term_7);
  Var_17 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[69])));
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Kind_6));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[71])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[63])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (TermStr_9));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_33 = parse_tree__error_spec__color_as_subject_1_f_0(Var_34);
  Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[73])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_42);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_37);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_32);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_22);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[67])), Var_16);
  TermContext_11 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_54, Term_7);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_util.report_repeated_parameter\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (TermContext_11));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_10));
  }
  return Spec_8;
}

void MR_CALL 
parse_tree__parse_util__parse_decimal_int_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeInt_8)
{
  MR_bool succeeded;
  MR_Integer Int_9;

  succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7, &Int_9);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInt_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Int_9));
    }
  else
  {
    MR_String TermStr_10;
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_46;
    MR_Word Var_47;

    TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_22 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[45])));
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (TermStr_10));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
    }
    Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[21])), Var_32);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_27);
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[43])), Var_21);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_14);
    Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_decimal_int\'/4"));
      MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeInt_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_integer_cons_id_6_p_0(
  MR_Word Base_7,
  MR_Word Integer_8,
  MR_Word Signedness_9,
  MR_Word Size_10,
  MR_Word Context_11,
  MR_Word * MaybeConsId_12)
{
  switch (Signedness_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Size_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          parse_tree__parse_util__parse_integer_const__ho6_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "16-bit", (MR_String) "i16", MaybeConsId_12);
          break;
        case (MR_Integer) 3:
          parse_tree__parse_util__parse_integer_const__ho4_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "32-bit", (MR_String) "i32", MaybeConsId_12);
          break;
        case (MR_Integer) 4:
          parse_tree__parse_util__parse_integer_const__ho2_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "64-bit", (MR_String) "i64", MaybeConsId_12);
          break;
        case (MR_Integer) 1:
          parse_tree__parse_util__parse_integer_const__ho8_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "8-bit", (MR_String) "i8", MaybeConsId_12);
          break;
        case (MR_Integer) 0:
          parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_116_95_95_104_111_49_48_95_95_91_55_93_95_48_8_p_0(Base_7, Context_11, Base_7, Integer_8, (MR_String) "", (MR_String) "", MaybeConsId_12);
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Size_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          parse_tree__parse_util__parse_integer_const__ho5_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "unsigned 16-bit", (MR_String) "u16", MaybeConsId_12);
          break;
        case (MR_Integer) 3:
          parse_tree__parse_util__parse_integer_const__ho3_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "unsigned 32-bit", (MR_String) "u32", MaybeConsId_12);
          break;
        case (MR_Integer) 4:
          parse_tree__parse_util__parse_integer_const__ho1_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "unsigned 64-bit", (MR_String) "u64", MaybeConsId_12);
          break;
        case (MR_Integer) 1:
          parse_tree__parse_util__parse_integer_const__ho7_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "unsigned 8-bit", (MR_String) "u8", MaybeConsId_12);
          break;
        case (MR_Integer) 0:
          parse_tree__parse_util__parse_integer_const__ho9_8_p_0(Context_11, Base_7, Integer_8, (MR_String) "unsigned", (MR_String) "u", MaybeConsId_12);
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_116_95_95_104_111_49_48_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_62,
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  MR_Integer Int_17;

  succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Var_62, Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho9_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  MR_Unsigned Int_17;

  succeeded = mercury__integer__to_uint_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho8_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  int8_t Int_17;

  succeeded = mercury__integer__to_int8_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_24, 0) = ((MR_Box) (MR_Word) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho7_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  uint8_t Int_17;

  succeeded = mercury__integer__to_uint8_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho6_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  int16_t Int_17;

  succeeded = mercury__integer__to_int16_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho5_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  uint16_t Int_17;

  succeeded = mercury__integer__to_uint16_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho4_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  int32_t Int_17;

  succeeded = mercury__integer__to_int32_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho3_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  uint32_t Int_17;

  succeeded = mercury__integer__to_uint32_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Int_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho2_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  int64_t Int_17;

  succeeded = mercury__integer__to_int64_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_24, 1) = MR_box_int64(Int_17);
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho1_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  MR_bool succeeded;
  uint64_t Int_17;

  succeeded = mercury__integer__to_uint64_2_p_0(Integer_11, &Int_17);
  if (succeeded)
  {
    MR_Word ConsId_18;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_24, 1) = MR_box_uint64(Int_17);
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsId_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_18));
    }
  }
  else
  {
    MR_String BasePrefix_19;
    MR_String IntStr_20;
    MR_String LiteralStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Integer Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_58;

    BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
    Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
    IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
    Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
    LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (IntTypeDesc_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[56])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[54])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (LiteralStr_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[60])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[58])), Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConsId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  parse_tree__parse_util__accumulate_conflict_specs_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Context_6,
  MR_String ConflictingWhatInWhat_7,
  MR_Word Conflicts_8,
  MR_Word Specified_9,
  MR_Word * Specs_10)
{
  MR_Word TypeInfo_18_18;
  MR_Word Var_11;
  MR_Box conv1_Specs_10;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_6[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (parse_tree__parse_util__report_any_conflicts_5_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (TypeInfo_for_T_13));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (Context_6));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (ConflictingWhatInWhat_7));
    MR_hl_field(0, Var_11, 6) = ((MR_Box) (Specified_9));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__list__foldl_4_p_0(TypeInfo_18_18, (MR_Word) (&parse_tree__parse_util_scalar_common_1[1]), (MR_Word) (Var_11), (MR_Word) (Conflicts_8), ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_10);
  *Specs_10 = ((MR_Word) (conv1_Specs_10));
}

void MR_CALL 
parse_tree__parse_util__parse_list_elements_6_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word Where_7,
  MR_String What_8,
  MR_Word Pred_9,
  MR_Word VarSet_10,
  MR_Word Term_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
  {
    MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
    MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
    MR_Word HeadTerm_19;
    MR_Word TailTerm_20;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
      succeeded = (strcmp(Var_28, (MR_String) "[|]") == 0);
      if (succeeded)
      {
        succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadTerm_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
          Var_29 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TailTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
            Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
            succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadResult_21;
      MR_Word TailResult_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
      MR_Box conv1_HeadResult_21;
      MR_Box HeadElement_23;
      MR_Word TailElements_24;

      func_0(((MR_Box) (Pred_9)), ((MR_Box) (VarSet_10)), ((MR_Box) (HeadTerm_19)), &conv1_HeadResult_21);
      HeadResult_21 = ((MR_Word) (conv1_HeadResult_21));
      parse_tree__parse_util__parse_list_elements_6_p_0(TypeInfo_for_T_39, Where_7, What_8, Pred_9, VarSet_10, TailTerm_20, &TailResult_22);
      succeeded = ((MR_tag((MR_Word) HeadResult_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadElement_23 = (MR_hl_field(1, HeadResult_21, 0));
        succeeded = ((MR_tag((MR_Word) TailResult_22)) == (MR_Integer) 1);
        if (succeeded)
          TailElements_24 = ((MR_Word) ((MR_hl_field(1, TailResult_22, 0))));
      }
      if (succeeded)
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = HeadElement_23;
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (TailElements_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word TypeInfo_42_42;
        MR_Word Specs_25;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_39, HeadResult_21);
        {
          TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
          MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_39));
        }
        Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_42_42, (MR_Word) (TailResult_22));
        Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_32, Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_25));
        }
      }
    }
    else
    {
      MR_String Var_34;

      succeeded = (Args_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_34 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_34, (MR_String) "[]") == 0);
        }
      }
      if (succeeded)
        *Result_12 = (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_3[1]));
      else
      {
        MR_Word Var_36;
        MR_Word Spec_38;
        MR_String TermStr_43;
        MR_Word Pieces_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_56;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_75;

        TermStr_43 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_10, Term_11);
        Var_45 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Where_7);
        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (What_8));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[17])));
        }
        Var_49 = parse_tree__error_spec__color_as_correct_1_f_0(Var_50);
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (TermStr_43));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
        }
        Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_63);
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[21])), Var_61);
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_56);
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[43])), Var_48);
        Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_46);
        Var_75 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
        {
          Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.make_expected_got_spec\'/5"));
          MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Var_75));
          MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_44));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Spec_38));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
        }
      }
    }
  }
  else
  {
    MR_Word Spec_15;
    MR_Word Var_26;

    parse_tree__parse_util__make_expected_got_spec_5_p_0(Where_7, VarSet_10, What_8, Term_11, &Spec_15);
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__make_expected_got_spec_5_p_0(
  MR_Word Where_6,
  MR_Word VarSet_7,
  MR_String What_8,
  MR_Word Term_9,
  MR_Word * Spec_10)
{
  MR_String TermStr_11;
  MR_Word Pieces_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_48;

  TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
  Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Where_6);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (What_8));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[17])));
  }
  Var_22 = parse_tree__error_spec__color_as_correct_1_f_0(Var_23);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (TermStr_11));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
  }
  Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_36);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[21])), Var_34);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_29);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[43])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_14);
  Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.make_expected_got_spec\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

void MR_CALL 
parse_tree__parse_util__parse_comma_separated_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Parser_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  MR_Word List_7;
  MR_Word Head_10;
  MR_Word Tail_11;
  MR_Word Var_13;

  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_5, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
  Head_10 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
  Tail_11 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
  {
    List_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, List_7, 0) = ((MR_Box) (Head_10));
    MR_hl_field(1, List_7, 1) = ((MR_Box) (Tail_11));
  }
  parse_tree__parse_util__map_parser_3_p_0(TypeInfo_for_T_8, Parser_4, List_7, Result_6);
}

void MR_CALL 
parse_tree__parse_util__map_parser_3_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Parser_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_3[1]));
  else
  {
    MR_Word Head_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word HeadResult_10;
    MR_Word TailResult_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Parser_1, 1))));
    MR_Box conv1_HeadResult_10;

    func_0(((MR_Box) (Parser_1)), ((MR_Box) (Head_7)), &conv1_HeadResult_10);
    HeadResult_10 = ((MR_Word) (conv1_HeadResult_10));
    parse_tree__parse_util__map_parser_3_p_0(TypeInfo_for_T_22, Parser_1, Tail_8, &TailResult_11);
    if (((MR_tag((MR_Word) HeadResult_10)) == (MR_Integer) 0))
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, HeadResult_10, 0))));

      if (((MR_tag((MR_Word) TailResult_11)) == (MR_Integer) 0))
      {
        MR_Word TailSpecs_13 = ((MR_Word) ((MR_hl_field(0, TailResult_11, 0))));
        MR_Word Var_19;

        Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_24, TailSpecs_13);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
        }
      }
      else
        *HeadVar__3_3 = (MR_Word) (HeadResult_10);
    }
    else
    {
      MR_Box Var_25 = (MR_hl_field(1, HeadResult_10, 0));

      if (((MR_tag((MR_Word) TailResult_11)) == (MR_Integer) 0))
        *HeadVar__3_3 = TailResult_11;
      else
      {
        MR_Word TailItems_18 = ((MR_Word) ((MR_hl_field(1, TailResult_11, 0))));
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = Var_25;
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (TailItems_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_comma_separated_one_or_more_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Parser_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  MR_Word Head_7;
  MR_Word Tail_8;
  MR_Word Var_9;

  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_5, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
  Head_7 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  Tail_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  parse_tree__parse_util__map_parser_one_or_more_4_p_0(TypeInfo_for_T_10, Parser_4, Head_7, Tail_8, Result_6);
}

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word Parser_5,
  MR_Word Head_6,
  MR_Word Tail_7,
  MR_Word * Result_8)
{
  MR_Word HeadResult_9;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Parser_5, 1))));
  MR_Box conv1_HeadResult_9;

  func_0(((MR_Box) (Parser_5)), ((MR_Box) (Head_6)), &conv1_HeadResult_9);
  HeadResult_9 = ((MR_Word) (conv1_HeadResult_9));
  if ((Tail_7 == (MR_Word) ((MR_Unsigned) 0U)))
    if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
      *Result_8 = (MR_Word) (HeadResult_9);
    else
    {
      MR_Box Item_11 = (MR_hl_field(1, HeadResult_9, 0));
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = Item_11;
        MR_hl_field(0, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      }
    }
  else
  {
    MR_Word HeadTail_12 = ((MR_Word) ((MR_hl_field(1, Tail_7, 0))));
    MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(1, Tail_7, 1))));
    MR_Word TailResult_14;

    parse_tree__parse_util__map_parser_one_or_more_4_p_0(TypeInfo_for_T_27, Parser_5, HeadTail_12, TailTail_13, &TailResult_14);
    if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, HeadResult_9, 0))));

      if (((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 0))
      {
        MR_Word TailSpecs_16 = ((MR_Word) ((MR_hl_field(0, TailResult_14, 0))));
        MR_Word Var_23;

        Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_29, TailSpecs_16);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
        }
      }
      else
        *Result_8 = (MR_Word) (HeadResult_9);
    }
    else
    {
      MR_Box Var_30 = (MR_hl_field(1, HeadResult_9, 0));

      if (((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 0))
        *Result_8 = TailResult_14;
      else
      {
        MR_Word TailItems_20 = ((MR_Word) ((MR_hl_field(1, TailResult_14, 0))));
        MR_Word Var_24;

        Var_24 = mercury__one_or_more__cons_2_f_0(TypeInfo_for_T_27, Var_30, TailItems_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__sum_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  MR_Word Head_5;
  MR_Word Tail_6;
  MR_Word Var_8;

  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
  Head_5 = ((MR_Word) ((MR_hl_field(0, Var_8, 0))));
  Tail_6 = ((MR_Word) ((MR_hl_field(0, Var_8, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *List_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Head_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (Tail_6));
  }
}

void MR_CALL 
parse_tree__parse_util__sum_to_one_or_more_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * OneOrMore_4)
{
  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", Term_3, (MR_Word) ((MR_Unsigned) 0U), OneOrMore_4);
}

void MR_CALL 
parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3)
{
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));

  if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *Term_3 = Var_22;
  else
  {
    MR_Word Second_9 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
    MR_Word Tail_12;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (Second_9));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (Rest_10));
    }
    parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(TypeInfo_for_T_20, Context_1, Var_14, &Tail_12);
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Tail_12));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_3[0]));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_1));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  MR_Word Head_5;
  MR_Word Tail_6;
  MR_Word Var_8;

  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
  Head_5 = ((MR_Word) ((MR_hl_field(0, Var_8, 0))));
  Tail_6 = ((MR_Word) ((MR_hl_field(0, Var_8, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *List_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Head_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (Tail_6));
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_one_or_more_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * OneOrMore_4)
{
  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_3, (MR_Word) ((MR_Unsigned) 0U), OneOrMore_4);
}

void MR_CALL 
parse_tree__parse_util__disjunction_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  MR_Word Head_5;
  MR_Word Tail_6;
  MR_Word Var_8;

  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
  Head_5 = ((MR_Word) ((MR_hl_field(0, Var_8, 0))));
  Tail_6 = ((MR_Word) ((MR_hl_field(0, Var_8, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *List_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Head_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (Tail_6));
  }
}

void MR_CALL 
parse_tree__parse_util__disjunction_to_one_or_more_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * OneOrMore_4)
{
  parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", Term_3, (MR_Word) ((MR_Unsigned) 0U), OneOrMore_4);
}

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Op_5,
  MR_Word Term_6,
  MR_Word List0_7,
  MR_Word * OneOrMore_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word L_9;
    MR_Word R_10;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(0, Var_14, 0))));
        succeeded = (strcmp(Op_5, Var_21) == 0);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            L_9 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              R_10 = ((MR_Word) ((MR_hl_field(1, Var_16, 0))));
              Var_17 = ((MR_Word) ((MR_hl_field(1, Var_16, 1))));
              succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word RHead_12;
      MR_Word RTail_13;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word next_value_of_Term_6;
      MR_Word next_value_of_List0_7;

      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(Op_5, R_10, List0_7, &Var_18);
      RHead_12 = ((MR_Word) ((MR_hl_field(0, Var_18, 0))));
      RTail_13 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (RHead_12));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (RTail_13));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Term_6 = L_9;
      next_value_of_List0_7 = Var_19;
      Term_6 = next_value_of_Term_6;
      List0_7 = next_value_of_List0_7;
      continue;
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *OneOrMore_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Term_6));
        MR_hl_field(0, base, 1) = ((MR_Box) (List0_7));
      }
    break;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__list_term_to_term_list_2_p_0(
  MR_Word Term_3,
  MR_Word * Terms_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Var_19;
  MR_Word Var_20;
  MR_String Var_21;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
      if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (strcmp(Var_21, (MR_String) "[]") == 0);
        if (succeeded)
        {
          *Terms_4 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word HeadTerm_5;
        MR_Word TailTerm_6;
        MR_Word TailTerms_8;
        MR_Word Var_13;
        MR_Word Var_14;

        succeeded = (strcmp(Var_21, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          HeadTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TailTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
            succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(TailTerm_6, &TailTerms_8);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Terms_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadTerm_5));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTerms_8));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ContextPieces_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybePredOrProcSpec_10)
{
  MR_bool succeeded;
  MR_Word PredSpec0_11;

  succeeded = parse_tree__parse_util__is_term_symname_arity_maybe_pf_2_p_0(Term_9, &PredSpec0_11);
  if (succeeded)
  {
    MR_Word PFU_12 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec0_11, 0))) & (MR_Integer) 3);
    MR_Word SymName0_13 = ((MR_Word) ((MR_hl_field(0, PredSpec0_11, 1))));
    MR_Word Arity_14 = ((MR_Word) ((MR_hl_field(0, PredSpec0_11, 2))));
    MR_Word MaybeSymName_15;

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_6, Term_9, SymName0_13, &MaybeSymName_15);
    if (((MR_tag((MR_Word) MaybeSymName_15)) == (MR_Integer) 0))
      *MaybePredOrProcSpec_10 = (MR_Word) (MaybeSymName_15);
    else
    {
      MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_15, 0))));
      MR_Word PFUMM_17;
      MR_Word PredOrProcSpec_18;

      switch (PFU_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_35;

            {
              Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_35, 0) = ((MR_Box) (Arity_14));
            }
            {
              PFUMM_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PFUMM_17, 0) = ((MR_Box) (Var_35));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_34;

            {
              Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_34, 0) = ((MR_Box) (Arity_14));
            }
            {
              PFUMM_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PFUMM_17, 0) = ((MR_Box) (Var_34));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            PFUMM_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, PFUMM_17, 0) = ((MR_Box) (Arity_14));
          }
          break;
      }
      {
        PredOrProcSpec_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredOrProcSpec_18, 0) = ((MR_Box) (PFUMM_17));
        MR_hl_field(0, PredOrProcSpec_18, 1) = ((MR_Box) (SymName_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredOrProcSpec_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredOrProcSpec_18));
      }
    }
  }
  else
  {
    MR_Word MaybePredAndModes_20;
    MR_Word Var_36;

    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (ModuleName_6));
    }
    parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_36, ContextPieces_7, VarSet_8, Term_9, &MaybePredAndModes_20);
    if (((MR_tag((MR_Word) MaybePredAndModes_20)) == (MR_Integer) 0))
    {
      MR_Word PredAndModeSpecs_23 = ((MR_Word) ((MR_hl_field(0, MaybePredAndModes_20, 0))));
      MR_Word Var_39;
      MR_String Var_40;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_39 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_40 = ((MR_String) ((MR_hl_field(0, Var_39, 0))));
          succeeded = (strcmp(Var_40, (MR_String) "/") == 0);
        }
      }
      if (succeeded)
      {
        MR_String TermStr_31;
        MR_Word Pieces_32;
        MR_Word Spec_33;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_60;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_72;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_84;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_93;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_108;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_130;
        MR_Word Var_131;

        TermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
        Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
        Var_53 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[30])));
        Var_65 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[27])));
        Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[19])));
        Var_89 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[35])));
        Var_101 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[39])));
        {
          Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_119, 1) = ((MR_Box) (TermStr_31));
        }
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(1, Var_118, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
        }
        Var_117 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_118);
        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[23])), Var_116);
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_108);
        Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[37])), Var_100);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_93);
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])), Var_88);
        Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_84);
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])), Var_76);
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_72);
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])), Var_64);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_60);
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[33])), Var_52);
        Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
        Var_130 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_pred_pfu_name_arity_maybe_modes\'/5"));
          MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Var_130));
          MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (Spec_33));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePredOrProcSpec_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePredOrProcSpec_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (PredAndModeSpecs_23));
        }
    }
    else
    {
      MR_Word PredOrFunc_21 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_20, 1))));
      MR_Word Modes_22 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_20, 2))));
      MR_Word SymName_133 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_20, 0))));
      MR_Word PFUMM_134;
      MR_Word PredOrProcSpec_135;

      switch (PredOrFunc_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_38, 0) = ((MR_Box) (Modes_22));
            }
            {
              PFUMM_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PFUMM_134, 0) = ((MR_Box) (Var_38));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_37, 0) = ((MR_Box) (Modes_22));
            }
            {
              PFUMM_134 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PFUMM_134, 0) = ((MR_Box) (Var_37));
            }
          }
          break;
      }
      {
        PredOrProcSpec_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredOrProcSpec_135, 0) = ((MR_Box) (PFUMM_134));
        MR_hl_field(0, PredOrProcSpec_135, 1) = ((MR_Box) (SymName_133));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredOrProcSpec_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredOrProcSpec_135));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util__is_term_symname_arity_maybe_pf_2_p_0(
  MR_Word Term_3,
  MR_Word * PredSpec_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word PFU_8;
  MR_Word SymName_9;
  MR_Integer Arity_10;
  MR_Word TypeCtorInfo_19_19;
  MR_String Functor_5;
  MR_Word SubTerm_6;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(0, Var_11, 0))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((strcmp(Functor_5, (MR_String) "func") == 0))
          {
            PFU_8 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Functor_5, (MR_String) "pred") == 0))
          {
            PFU_8 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            TypeCtorInfo_19_19 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
            succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0(TypeCtorInfo_19_19, SubTerm_6, &SymName_9, &Arity_10);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_14 = (MR_Word) (Arity_10);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *PredSpec_4 = base;
      MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PFU_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (SymName_9));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word SymName_17;
    MR_Integer Arity_18;

    succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3, &SymName_17, &Arity_18);
    if (succeeded)
    {
      Var_15 = (MR_Integer) 2;
      Var_16 = (MR_Word) (Arity_18);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *PredSpec_4 = base;
        MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_15));
        MR_hl_field(0, base, 1) = ((MR_Box) (SymName_17));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(
  MR_Word MaybeModuleName_6,
  MR_Word ContextPieces_7,
  MR_Word VarSet_8,
  MR_Word PredAndModesTerm_9,
  MR_Word * MaybeNameAndModes_10)
{
  MR_bool succeeded;
  MR_Word MaybePredAndArgs_11;

  parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MaybeModuleName_6, PredAndModesTerm_9, VarSet_8, ContextPieces_7, &MaybePredAndArgs_11);
  if (((MR_tag((MR_Word) MaybePredAndArgs_11)) == (MR_Integer) 0))
    *MaybeNameAndModes_10 = (MR_Word) (MaybePredAndArgs_11);
  else
  {
    MR_Word PredName_12 = ((MR_Word) ((MR_hl_field(1, MaybePredAndArgs_11, 0))));
    MR_Word ArgModeTerms_13 = ((MR_Word) ((MR_hl_field(1, MaybePredAndArgs_11, 1))));
    MR_Word MaybeRetModeTerm_14 = ((MR_Word) ((MR_hl_field(1, MaybePredAndArgs_11, 2))));

    if ((MaybeRetModeTerm_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeArgModes_15;

      parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, ContextPieces_7, ArgModeTerms_13, &MaybeArgModes_15);
      if (((MR_tag((MR_Word) MaybeArgModes_15)) == (MR_Integer) 0))
      {
        MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MaybeArgModes_15, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNameAndModes_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_17));
        }
      }
      else
      {
        MR_Word ArgModes_16 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_15, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNameAndModes_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PredName_12));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(1, base, 2) = ((MR_Box) (ArgModes_16));
        }
      }
    }
    else
    {
      MR_Word RetModeTerm_18 = ((MR_Word) ((MR_hl_field(1, MaybeRetModeTerm_14, 0))));
      MR_Word MaybeArgModes0_19;
      MR_Word RetContextPieces_20;
      MR_Word MaybeRetMode_21;
      MR_Word Var_28;
      MR_Word ArgModes0_22;
      MR_Word RetMode_23;

      parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, ContextPieces_7, ArgModeTerms_13, &MaybeArgModes0_19);
      Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[40]))));
      RetContextPieces_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_28);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, RetContextPieces_20, RetModeTerm_18, &MaybeRetMode_21);
      succeeded = ((MR_tag((MR_Word) MaybeArgModes0_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgModes0_22 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_19, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeRetMode_21)) == (MR_Integer) 1);
        if (succeeded)
          RetMode_23 = ((MR_Word) ((MR_hl_field(1, MaybeRetMode_21, 0))));
      }
      if (succeeded)
      {
        MR_Word ArgModes1_24;
        MR_Word Var_32;
        MR_Word ArgModes_38;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (RetMode_23));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ArgModes1_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_22, Var_32);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_util_scalar_common_4[0]), ArgModes1_24, &ArgModes_38);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNameAndModes_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PredName_12));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(1, base, 2) = ((MR_Box) (ArgModes_38));
        }
      }
      else
      {
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Specs_39;

        Var_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_util_scalar_common_1[0]), MaybeArgModes0_19);
        Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode_21);
        Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_36, Var_37);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNameAndModes_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_39));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_pred_pfu_name_arity_5_p_0(
  MR_Word ModuleName_6,
  MR_String PragmaName_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybePredSpec_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_Word PredSpec0_11;
  MR_Word PFU_103;
  MR_Word SymName_104;
  MR_Integer Arity_105;
  MR_Word TypeCtorInfo_19_114;
  MR_String Functor_100;
  MR_Word SubTerm_101;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;

  if (succeeded)
  {
    Var_106 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    Var_107 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_100 = ((MR_String) ((MR_hl_field(0, Var_106, 0))));
      succeeded = (Var_107 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubTerm_101 = ((MR_Word) ((MR_hl_field(1, Var_107, 0))));
        Var_108 = ((MR_Word) ((MR_hl_field(1, Var_107, 1))));
        succeeded = (Var_108 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((strcmp(Functor_100, (MR_String) "func") == 0))
          {
            PFU_103 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Functor_100, (MR_String) "pred") == 0))
          {
            PFU_103 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            TypeCtorInfo_19_114 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
            succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0(TypeCtorInfo_19_114, SubTerm_101, &SymName_104, &Arity_105);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_109 = (MR_Word) (Arity_105);

    {
      PredSpec0_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredSpec0_11, 0) = (MR_Box) ((MR_Unsigned) (PFU_103));
      MR_hl_field(0, PredSpec0_11, 1) = ((MR_Box) (SymName_104));
      MR_hl_field(0, PredSpec0_11, 2) = ((MR_Box) (Var_109));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word SymName_112;
    MR_Integer Arity_113;

    succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9, &SymName_112, &Arity_113);
    if (succeeded)
    {
      Var_110 = (MR_Integer) 2;
      Var_111 = (MR_Word) (Arity_113);
      {
        PredSpec0_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredSpec0_11, 0) = (MR_Box) ((MR_Unsigned) (Var_110));
        MR_hl_field(0, PredSpec0_11, 1) = ((MR_Box) (SymName_112));
        MR_hl_field(0, PredSpec0_11, 2) = ((MR_Box) (Var_111));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word PFU_12 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec0_11, 0))) & (MR_Integer) 3);
    MR_Word SymName0_13 = ((MR_Word) ((MR_hl_field(0, PredSpec0_11, 1))));
    MR_Word Arity_14 = ((MR_Word) ((MR_hl_field(0, PredSpec0_11, 2))));
    MR_Word MaybeSymName_15;

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_6, Term_9, SymName0_13, &MaybeSymName_15);
    if (((MR_tag((MR_Word) MaybeSymName_15)) == (MR_Integer) 0))
      *MaybePredSpec_10 = (MR_Word) (MaybeSymName_15);
    else
    {
      MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_15, 0))));
      MR_Word PredSpec_17;

      {
        PredSpec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredSpec_17, 0) = (MR_Box) ((MR_Unsigned) (PFU_12));
        MR_hl_field(0, PredSpec_17, 1) = ((MR_Box) (SymName_16));
        MR_hl_field(0, PredSpec_17, 2) = ((MR_Box) (Arity_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredSpec_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredSpec_17));
      }
    }
  }
  else
  {
    MR_String TermStr_19;
    MR_Word Pieces_20;
    MR_Word Spec_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_46;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_72;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_94;
    MR_Word Var_95;

    TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (PragmaName_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[26])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[3])));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_38 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[27])));
    Var_51 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[28])));
    Var_64 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[30])));
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (TermStr_19));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
    }
    Var_81 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_82);
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[23])), Var_80);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_72);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[15])), Var_63);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])), Var_50);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_46);
    Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_37);
    Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_pred_pfu_name_arity\'/5"));
      MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_94));
      MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredSpec_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_pred_pf_name_arity_5_p_0(
  MR_Word ModuleName_6,
  MR_String PragmaName_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybePredSpec_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_Word PorF_14;
  MR_Word SymName0_15;
  MR_Integer Arity_16;
  MR_Word TypeCtorInfo_92_92;
  MR_String Functor_11;
  MR_Word SubTerm_12;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_11 = ((MR_String) ((MR_hl_field(0, Var_24, 0))));
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((strcmp(Functor_11, (MR_String) "func") == 0))
          {
            PorF_14 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Functor_11, (MR_String) "pred") == 0))
          {
            PorF_14 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            TypeCtorInfo_92_92 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
            succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0(TypeCtorInfo_92_92, SubTerm_12, &SymName0_15, &Arity_16);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeSymName_17;

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_6, Term_9, SymName0_15, &MaybeSymName_17);
    if (((MR_tag((MR_Word) MaybeSymName_17)) == (MR_Integer) 0))
      *MaybePredSpec_10 = (MR_Word) (MaybeSymName_17);
    else
    {
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_17, 0))));
      MR_Word PredSpec_19;
      MR_Word Var_27 = (MR_Word) (Arity_16);

      {
        PredSpec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredSpec_19, 0) = (MR_Box) ((MR_Unsigned) (PorF_14));
        MR_hl_field(0, PredSpec_19, 1) = ((MR_Box) (SymName_18));
        MR_hl_field(0, PredSpec_19, 2) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredSpec_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredSpec_19));
      }
    }
  }
  else
  {
    MR_String TermStr_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_51;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_67;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_89;
    MR_Word Var_90;

    TermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (PragmaName_7));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[10])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_util_scalar_common_1[3])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    Var_46 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[12])));
    Var_59 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[19])));
    {
      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 1) = ((MR_Box) (TermStr_21));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[25])));
    }
    Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_77);
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[13])));
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[23])), Var_75);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_67);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_util_scalar_common_1[15])), Var_58);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_51);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_45);
    Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_pred_pf_name_arity\'/5"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Var_89));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredSpec_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_90));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word MaybeModuleName_6,
  MR_Word PredAndArgsTerm_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word * PredAndArgsResult_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PredAndArgsTerm_7)) == (MR_Integer) 0);
  MR_Word FunctorTerm_14;
  MR_Word MaybeFuncResult_15;
  MR_Word GenericVarSet_16;
  MR_Word Result_18;
  MR_Word FuncAndArgsTerm_11;
  MR_Word FuncResultTerm_12;
  MR_Word Var_22;
  MR_String Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, PredAndArgsTerm_7, 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, PredAndArgsTerm_7, 1))));
    succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_23 = ((MR_String) ((MR_hl_field(0, Var_22, 0))));
      succeeded = (strcmp(Var_23, (MR_String) "=") == 0);
      if (succeeded)
      {
        succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FuncAndArgsTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_24, 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncResultTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    FunctorTerm_14 = FuncAndArgsTerm_11;
    {
      MaybeFuncResult_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFuncResult_15, 0) = ((MR_Box) (FuncResultTerm_12));
    }
  }
  else
  {
    FunctorTerm_14 = PredAndArgsTerm_7;
    MaybeFuncResult_15 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__varset__coerce_2_p_0(TypeInfo_for_T_27, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, &GenericVarSet_16);
  if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_27, GenericVarSet_16, ContextPieces_9, FunctorTerm_14, &Result_18);
  else
  {
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_6, 0))));

    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeInfo_for_T_27, ModuleName_17, GenericVarSet_16, ContextPieces_9, FunctorTerm_14, &Result_18);
  }
  if (((MR_tag((MR_Word) Result_18)) == (MR_Integer) 0))
  {
    MR_Word Specs_21 = ((MR_Word) ((MR_hl_field(0, Result_18, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *PredAndArgsResult_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_21));
    }
  }
  else
  {
    MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, Result_18, 0))));
    MR_Word Args_20 = ((MR_Word) ((MR_hl_field(1, Result_18, 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *PredAndArgsResult_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_20));
      MR_hl_field(1, base, 2) = ((MR_Box) (MaybeFuncResult_15));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_args_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word PredAndArgsTerm_5,
  MR_Word * PredOrFunc_6,
  MR_Word * SymName_7,
  MR_Word * ArgTerms_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PredAndArgsTerm_5)) == (MR_Integer) 0);
  MR_Word FuncAndArgsTerm_9;
  MR_Word Var_16;
  MR_Word Var_13;
  MR_String Var_14;
  MR_Word Var_15;
  MR_Word Var_17;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, PredAndArgsTerm_5, 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(0, PredAndArgsTerm_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_14 = ((MR_String) ((MR_hl_field(0, Var_13, 0))));
      succeeded = (strcmp(Var_14, (MR_String) "=") == 0);
      if (succeeded)
      {
        succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FuncAndArgsTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
          succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(1, Var_16, 1))));
            succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgTerms0_12;
    MR_Word conv0_ArgTerms_8;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_20, FuncAndArgsTerm_9, SymName_7, &ArgTerms0_12);
    if (succeeded)
    {
      *PredOrFunc_6 = (MR_Integer) 1;
      TypeCtorInfo_21_21 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
        MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(TypeInfo_22_22, (MR_Word) (ArgTerms0_12), (MR_Word) (Var_16));
      *ArgTerms_8 = (MR_Word) (conv0_ArgTerms_8);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_20, PredAndArgsTerm_5, SymName_7, ArgTerms_8);
    if (succeeded)
    {
      *PredOrFunc_6 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_name_and_arity_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word PorFPredAndArityTerm_5,
  MR_Word * PredOrFunc_6,
  MR_Word * SymName_7,
  MR_Integer * Arity_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PorFPredAndArityTerm_5)) == (MR_Integer) 0);
  MR_String PredOrFuncStr_9;
  MR_Word ArgTerms_10;
  MR_Word ArgTerm_12;
  MR_Word Var_13;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, PorFPredAndArityTerm_5, 0))));
    ArgTerms_10 = ((MR_Word) ((MR_hl_field(0, PorFPredAndArityTerm_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      PredOrFuncStr_9 = ((MR_String) ((MR_hl_field(0, Var_13, 0))));
      if ((strcmp(PredOrFuncStr_9, (MR_String) "func") == 0))
      {
        *PredOrFunc_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredOrFuncStr_9, (MR_String) "pred") == 0))
      {
        *PredOrFunc_6 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (ArgTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, 0))));
          Var_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, 1))));
          succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0(TypeInfo_for_T_15, ArgTerm_12, SymName_7, Arity_8);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_sym_name_and_arity_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Term_4,
  MR_Word * SymName_5,
  MR_Integer * Arity_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0);
  MR_Word PredNameTerm_7;
  MR_Word ArityTerm_8;
  MR_Word Var_10;
  MR_String Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_4, 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term_4, 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_10, 0))));
      succeeded = (strcmp(Var_11, (MR_String) "/") == 0);
      if (succeeded)
      {
        succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PredNameTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArityTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
            succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeInfo_for_T_15, PredNameTerm_7, SymName_5);
              if (succeeded)
                succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeInfo_for_T_15, ArityTerm_8, Arity_6);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_util____Unify____conflict_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_util____Compare____conflict_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_util____Unify____parser_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_util____Compare____parser_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_util__init(void)
{
}

void mercury__parse_tree__parse_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1);
  MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_1);
  MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_modes_0);
  MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_parser_1);
}

void mercury__parse_tree__parse_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_util.
