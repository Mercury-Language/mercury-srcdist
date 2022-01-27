/*
** Automatically generated from `parse_util.m'
** by the Mercury compiler,
** version rotd-2022-01-19
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0[3];

static const MR_DuFunctorDesc parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1[1];

static const MR_Integer parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_util__parse_tree__maybe_error__ti_maybe3_3mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_pred_or_func_0list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static void MR_CALL 
parse_tree__parse_util__accumulate_conflict_specs_6_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word Context_7,
  MR_String ConflictingWhatInWhat_8,
  MR_Word Specified_9,
  MR_Word Conflict_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_116_95_95_104_111_49_48_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__666__1_1_f_0(
  MR_Integer LambdaHeadVar__1_72);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho9_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__671__1_1_f_0(
  MR_Unsigned LambdaHeadVar__1_66);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho8_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__679__1_1_f_0(
  int8_t LambdaHeadVar__1_60);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho7_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__684__1_1_f_0(
  uint8_t LambdaHeadVar__1_54);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho6_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__692__1_1_f_0(
  int16_t LambdaHeadVar__1_48);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho5_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__697__1_1_f_0(
  uint16_t LambdaHeadVar__1_42);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho4_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__705__1_1_f_0(
  int32_t LambdaHeadVar__1_36);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho3_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__710__1_1_f_0(
  uint32_t LambdaHeadVar__1_30);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho2_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__718__1_1_f_0(
  int64_t LambdaHeadVar__1_24);

static void MR_CALL 
parse_tree__parse_util__parse_integer_const__ho1_8_p_0(
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16);

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__723__1_1_f_0(
  uint64_t LambdaHeadVar__1_18);

static void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util__make_expected_got_spec_4_p_0(
  MR_Word VarSet_5,
  MR_String What_6,
  MR_Word Term_7,
  MR_Word * Spec_8);

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word TypeInfo_for_T_29,
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
parse_tree__parse_util__is_term_symname_arity_maybe_pf_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Term_5,
  MR_Word * PredSpec_6);

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


static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[28][2];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_5[1][3];

static /* final */ const MR_Integer parse_tree__parse_util_scalar_common_6[1][2];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_7[1][10];




static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[28][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected one of"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(name/arity)"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(name/arity)"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "name/arity"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(mode1, mode2, ..., moden)"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(mode1, mode2, ..., moden) = retmode"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the return value:"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a decimal integer,"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "integer literal"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is outside the range of that type."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[10])))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__parse_util_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_util_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_util_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_util_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1 = {
  &parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0[1] = {
  &parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0
};

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

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1[1] = {
  &parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0
};

static const MR_Integer parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_util____Unify____conflict_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____conflict_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "conflict",
  {     parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1 },
  {     parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__list__pti_list_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1)
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_util__parse_tree__maybe_error__ti_maybe3_3mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_pred_or_func_0list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
    (MR_TypeInfo) (&parse_tree__parse_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__ti_maybe3_3mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_pred_or_func_0list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1)
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_13_13;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_11_11));
    }
    parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_13_13, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word TypeInfo_12_12;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
    }
    succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_12_12, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util__accumulate_conflict_specs_6_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word Context_7,
  MR_String ConflictingWhatInWhat_8,
  MR_Word Specified_9,
  MR_Word Conflict_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_bool succeeded;
    MR_Box A_12 = (MR_hl_field(MR_mktag(0), Conflict_10, (MR_Integer) 0));
    MR_Box B_13 = (MR_hl_field(MR_mktag(0), Conflict_10, (MR_Integer) 1));
    MR_String Diagnosis_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Conflict_10, (MR_Integer) 2))));

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_40, A_12, Specified_9);
    if (succeeded)
      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_40, B_13, Specified_9);
    if (succeeded)
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ConflictingWhatInWhat_8));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Diagnosis_14));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[23])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[22])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_21));
      }
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.accumulate_conflict_specs\'/6"));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
      }
    }
    else
      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
  }
}

void MR_CALL 
parse_tree__parse_util__parse_decimal_int_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeInt_8)
{
  {
    MR_bool succeeded;
    MR_Integer Int_9;

    succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7, &Int_9);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInt_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Int_9));
      }
    else
    {
      MR_String TermStr_10;
      MR_Word Pieces_11;
      MR_Word Spec_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_16;
      MR_Word Var_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_33;
      MR_Word Var_34;

      TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TermStr_10));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[9])));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
      }
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_13, Var_14);
      Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_decimal_int\'/4"));
        MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_11));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Spec_12));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInt_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      }
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
  MR_Word Var_48,
  MR_Word Context_9,
  MR_Word Base_10,
  MR_Word Integer_11,
  MR_String IntTypeDesc_12,
  MR_String IntSuffixStr_13,
  MR_Word * MaybeConsId_16)
{
  {
    MR_bool succeeded;
    MR_Integer Int_17;

    succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Var_48, Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__666__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__666__1_1_f_0(
  MR_Integer LambdaHeadVar__1_72)
{
  {
    MR_Word LambdaHeadVar__2_73;

    {
      LambdaHeadVar__2_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_73, 0) = ((MR_Box) (LambdaHeadVar__1_72));
    }
    return LambdaHeadVar__2_73;
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
  {
    MR_bool succeeded;
    MR_Unsigned Int_17;

    succeeded = mercury__integer__to_uint_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__671__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__671__1_1_f_0(
  MR_Unsigned LambdaHeadVar__1_66)
{
  {
    MR_Word LambdaHeadVar__2_67;

    {
      LambdaHeadVar__2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_67, 0) = ((MR_Box) (LambdaHeadVar__1_66));
    }
    return LambdaHeadVar__2_67;
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
  {
    MR_bool succeeded;
    int8_t Int_17;

    succeeded = mercury__integer__to_int8_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__679__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__679__1_1_f_0(
  int8_t LambdaHeadVar__1_60)
{
  {
    MR_Word LambdaHeadVar__2_61;

    {
      LambdaHeadVar__2_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_61, 0) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_60));
    }
    return LambdaHeadVar__2_61;
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
  {
    MR_bool succeeded;
    uint8_t Int_17;

    succeeded = mercury__integer__to_uint8_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__684__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__684__1_1_f_0(
  uint8_t LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55;

    {
      LambdaHeadVar__2_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_55, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_54));
    }
    return LambdaHeadVar__2_55;
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
  {
    MR_bool succeeded;
    int16_t Int_17;

    succeeded = mercury__integer__to_int16_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__692__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__692__1_1_f_0(
  int16_t LambdaHeadVar__1_48)
{
  {
    MR_Word LambdaHeadVar__2_49;

    {
      LambdaHeadVar__2_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_49, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_48));
    }
    return LambdaHeadVar__2_49;
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
  {
    MR_bool succeeded;
    uint16_t Int_17;

    succeeded = mercury__integer__to_uint16_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__697__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__697__1_1_f_0(
  uint16_t LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43;

    {
      LambdaHeadVar__2_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_43, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_42));
    }
    return LambdaHeadVar__2_43;
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
  {
    MR_bool succeeded;
    int32_t Int_17;

    succeeded = mercury__integer__to_int32_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__705__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__705__1_1_f_0(
  int32_t LambdaHeadVar__1_36)
{
  {
    MR_Word LambdaHeadVar__2_37;

    {
      LambdaHeadVar__2_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_37, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_37, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_36));
    }
    return LambdaHeadVar__2_37;
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
  {
    MR_bool succeeded;
    uint32_t Int_17;

    succeeded = mercury__integer__to_uint32_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__710__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__710__1_1_f_0(
  uint32_t LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31;

    {
      LambdaHeadVar__2_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_31, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_30));
    }
    return LambdaHeadVar__2_31;
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
  {
    MR_bool succeeded;
    int64_t Int_17;

    succeeded = mercury__integer__to_int64_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__718__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__718__1_1_f_0(
  int64_t LambdaHeadVar__1_24)
{
  {
    MR_Word LambdaHeadVar__2_25;

    {
      LambdaHeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_25, 1) = MR_box_int64(LambdaHeadVar__1_24);
    }
    return LambdaHeadVar__2_25;
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
  {
    MR_bool succeeded;
    uint64_t Int_17;

    succeeded = mercury__integer__to_uint64_2_p_0(Integer_11, &Int_17);
    if (succeeded)
    {
      MR_Word ConsId_18;
      MR_Word Var_24;

      Var_24 = parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__723__1_1_f_0(Int_17);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_18));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;

      BasePrefix_19 = mercury__term_io__integer_base_prefix_1_f_0(Base_10);
      Var_25 = mercury__term_io__integer_base_int_1_f_0(Base_10);
      IntStr_20 = mercury__integer__to_base_string_2_f_0(Integer_11, Var_25);
      Var_26 = mercury__string__f_43_43_2_f_0(IntStr_20, IntSuffixStr_13);
      LiteralStr_21 = mercury__string__f_43_43_2_f_0(BasePrefix_19, Var_26);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (IntTypeDesc_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (LiteralStr_21));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[27])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_integer_const\'/8"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConsId_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_util__IntroducedFrom__func__parse_integer_cons_id__723__1_1_f_0(
  uint64_t LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19;

    {
      LambdaHeadVar__2_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_19, 1) = MR_box_uint64(LambdaHeadVar__1_18);
    }
    return LambdaHeadVar__2_19;
  }
}

static void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_18;

    parse_tree__parse_util__accumulate_conflict_specs_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
  }
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
  {
    MR_Word TypeInfo_18_18;
    MR_Word Var_11;
    MR_Box conv1_Specs_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (parse_tree__parse_util__report_any_conflicts_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (ConflictingWhatInWhat_7));
      MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Specified_9));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__list__foldl_4_p_0(TypeInfo_18_18, (MR_Word) (&parse_tree__parse_util_scalar_common_1[1]), (MR_Word) (Var_11), (MR_Word) (Conflicts_8), ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_10);
    *Specs_10 = ((MR_Word) (conv1_Specs_10));
  }
}

void MR_CALL 
parse_tree__parse_util__parse_list_elements_5_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_String What_6,
  MR_Word Pred_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
    {
      MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      MR_Word HeadTerm_17;
      MR_Word TailTerm_18;
      MR_String Var_24;
      MR_Word Var_25;
      MR_Word Var_26;

      succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
        succeeded = (strcmp(Var_24, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadResult_19;
        MR_Word TailResult_20;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
        MR_Box conv1_HeadResult_19;
        MR_Box HeadElement_21;
        MR_Word TailElements_22;

        func_0(((MR_Box) (Pred_7)), ((MR_Box) (VarSet_8)), ((MR_Box) (HeadTerm_17)), &conv1_HeadResult_19);
        HeadResult_19 = ((MR_Word) (conv1_HeadResult_19));
        parse_tree__parse_util__parse_list_elements_5_p_0(TypeInfo_for_T_40, What_6, Pred_7, VarSet_8, TailTerm_18, &TailResult_20);
        succeeded = ((MR_tag((MR_Word) HeadResult_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          HeadElement_21 = (MR_hl_field(MR_mktag(1), HeadResult_19, (MR_Integer) 0));
          succeeded = ((MR_tag((MR_Word) TailResult_20)) == (MR_Integer) 1);
          if (succeeded)
            TailElements_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_20, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_27;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = HeadElement_21;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (TailElements_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
          }
        }
        else
        {
          MR_Word TypeInfo_43_43;
          MR_Word Specs_23;
          MR_Word Var_28;
          MR_Word Var_29;

          Var_28 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_for_T_40, HeadResult_19);
          {
            TypeInfo_43_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_43_43, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
            MR_hl_field(MR_mktag(0), TypeInfo_43_43, 1) = ((MR_Box) (TypeInfo_for_T_40));
          }
          Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_43_43, (MR_Word) (TailResult_20));
          Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_28, Var_29);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_23));
          }
        }
      }
      else
      {
        MR_String Var_30;

        succeeded = (Args_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
            succeeded = (strcmp(Var_30, (MR_String) "[]") == 0);
          }
        }
        if (succeeded)
          *Result_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_3[2]));
        else
        {
          MR_Word Var_32;
          MR_Word Spec_36;
          MR_String TermStr_48;
          MR_Word Pieces_49;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_71;

          TermStr_48 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (What_6));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (TermStr_48));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[9])));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[8])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
          }
          {
            Pieces_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), Pieces_49, 1) = ((MR_Box) (Var_52));
          }
          Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.make_expected_got_spec\'/4"));
            MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (Pieces_49));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
          }
        }
      }
    }
    else
    {
      MR_Word Spec_13;
      MR_Word Var_34;

      parse_tree__parse_util__make_expected_got_spec_4_p_0(VarSet_8, What_6, Term_9, &Spec_13);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_util__make_expected_got_spec_4_p_0(
  MR_Word VarSet_5,
  MR_String What_6,
  MR_Word Term_7,
  MR_Word * Spec_8)
{
  {
    MR_String TermStr_9;
    MR_Word Pieces_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_32;

    TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (What_6));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TermStr_9));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[9])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[8])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[21])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Spec_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.make_expected_got_spec\'/4"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_10));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_comma_separated_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Parser_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  {
    MR_Word List_7;
    MR_Word Head_12;
    MR_Word Tail_13;
    MR_Word Var_15;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_5, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
    Head_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
    Tail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
    {
      List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), List_7, 0) = ((MR_Box) (Head_12));
      MR_hl_field(MR_mktag(1), List_7, 1) = ((MR_Box) (Tail_13));
    }
    parse_tree__parse_util__map_parser_3_p_0(TypeInfo_for_T_8, Parser_4, List_7, Result_6);
  }
}

void MR_CALL 
parse_tree__parse_util__map_parser_3_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Parser_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_3[2]));
  else
  {
    MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadResult_10;
    MR_Word TailResult_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Parser_1, (MR_Integer) 1))));
    MR_Box conv1_HeadResult_10;

    func_0(((MR_Box) (Parser_1)), ((MR_Box) (Head_7)), &conv1_HeadResult_10);
    HeadResult_10 = ((MR_Word) (conv1_HeadResult_10));
    parse_tree__parse_util__map_parser_3_p_0(TypeInfo_for_T_22, Parser_1, Tail_8, &TailResult_11);
    if (((MR_tag((MR_Word) HeadResult_10)) == (MR_Integer) 0))
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadResult_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TailResult_11)) == (MR_Integer) 0))
      {
        MR_Word TailSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailResult_11, (MR_Integer) 0))));
        MR_Word Var_20;

        Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_24, TailSpecs_13);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
        }
      }
      else
        *HeadVar__3_3 = (MR_Word) (HeadResult_10);
    }
    else
    {
      MR_Box Var_25 = (MR_hl_field(MR_mktag(1), HeadResult_10, (MR_Integer) 0));

      if (((MR_tag((MR_Word) TailResult_11)) == (MR_Integer) 0))
        *HeadVar__3_3 = TailResult_11;
      else
      {
        MR_Word TailItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_11, (MR_Integer) 0))));
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = Var_25;
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (TailItems_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
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
  {
    MR_Word Head_7;
    MR_Word Tail_8;
    MR_Word Var_9;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_5, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
    Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    parse_tree__parse_util__map_parser_one_or_more_4_p_0(TypeInfo_for_T_10, Parser_4, Head_7, Tail_8, Result_6);
  }
}

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word Parser_5,
  MR_Word Head_6,
  MR_Word Tail_7,
  MR_Word * Result_8)
{
  {
    MR_Word HeadResult_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Parser_5, (MR_Integer) 1))));
    MR_Box conv1_HeadResult_9;

    func_0(((MR_Box) (Parser_5)), ((MR_Box) (Head_6)), &conv1_HeadResult_9);
    HeadResult_9 = ((MR_Word) (conv1_HeadResult_9));
    if ((Tail_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
        *Result_8 = (MR_Word) (HeadResult_9);
      else
      {
        MR_Box Item_11 = (MR_hl_field(MR_mktag(1), HeadResult_9, (MR_Integer) 0));
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = Item_11;
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        }
      }
    else
    {
      MR_Word HeadTail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_7, (MR_Integer) 0))));
      MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_7, (MR_Integer) 1))));
      MR_Word TailResult_14;

      parse_tree__parse_util__map_parser_one_or_more_4_p_0(TypeInfo_for_T_29, Parser_5, HeadTail_12, TailTail_13, &TailResult_14);
      if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
      {
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadResult_9, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 0))
        {
          MR_Word TailSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailResult_14, (MR_Integer) 0))));
          MR_Word Var_22;

          Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_31, TailSpecs_16);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
          }
        }
        else
          *Result_8 = (MR_Word) (HeadResult_9);
      }
      else
      {
        MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadResult_9, (MR_Integer) 0));

        if (((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 0))
          *Result_8 = TailResult_14;
        else
        {
          MR_Word TailItems_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_14, (MR_Integer) 0))));
          MR_Word Var_21;

          Var_21 = mercury__one_or_more__cons_2_f_0(TypeInfo_for_T_29, Var_32, TailItems_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
          }
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
  {
    MR_Word Head_5;
    MR_Word Tail_6;
    MR_Word Var_8;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    Head_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_6));
    }
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
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *Term_3 = Var_22;
    else
    {
      MR_Word Second_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
      MR_Word Tail_12;
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word Var_18;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Second_9));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Rest_10));
      }
      parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(TypeInfo_for_T_20, Context_1, Var_14, &Tail_12);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Tail_12));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_1));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  {
    MR_Word Head_5;
    MR_Word Tail_6;
    MR_Word Var_8;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    Head_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_6));
    }
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
  {
    MR_Word Head_5;
    MR_Word Tail_6;
    MR_Word Var_8;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    Head_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_6));
    }
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
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        succeeded = (strcmp(Op_5, Var_21) == 0);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            L_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
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
      RHead_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      RTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (RHead_12));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (RTail_13));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Term_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (List0_7));
      }
    break;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__list_term_to_term_list_2_p_0(
  MR_Word Term_3,
  MR_Word * Terms_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Var_19;
    MR_Word Var_20;
    MR_String Var_21;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
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
          MR_Word Var_16;
          MR_Word Var_17;

          succeeded = (strcmp(Var_21, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            HeadTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
              succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(TailTerm_6, &TailTerms_8);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Terms_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTerm_5));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTerms_8));
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
}

void MR_CALL 
parse_tree__parse_util__parse_pred_pfu_name_arity_maybe_modes_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ContextPieces_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybePredOrProcSpec_10)
{
  {
    MR_bool succeeded;
    MR_Word PredSpec_11;

    succeeded = parse_tree__parse_util__is_term_symname_arity_maybe_pf_3_p_0(ModuleName_6, Term_9, &PredSpec_11);
    if (succeeded)
    {
      MR_Word PFU_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_11, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_11, (MR_Integer) 1))));
      MR_Word Arity_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_11, (MR_Integer) 2))));
      MR_Word PFUMM_15;
      MR_Word PredOrProcSpec_16;

      switch (PFU_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_26;

            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Arity_14));
            }
            {
              PFUMM_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PFUMM_15, 0) = ((MR_Box) (Var_26));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_27;

            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Arity_14));
            }
            {
              PFUMM_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFUMM_15, 0) = ((MR_Box) (Var_27));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            PFUMM_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), PFUMM_15, 0) = ((MR_Box) (Arity_14));
          }
          break;
      }
      {
        PredOrProcSpec_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredOrProcSpec_16, 0) = ((MR_Box) (PFUMM_15));
        MR_hl_field(MR_mktag(0), PredOrProcSpec_16, 1) = ((MR_Box) (SymName_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredOrProcSpec_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredOrProcSpec_16));
      }
    }
    else
    {
      MR_Word MaybePredAndModes_17;
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ModuleName_6));
      }
      parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_28, ContextPieces_7, VarSet_8, Term_9, &MaybePredAndModes_17);
      if (((MR_tag((MR_Word) MaybePredAndModes_17)) == (MR_Integer) 0))
      {
        MR_Word PredAndModeSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredAndModes_17, (MR_Integer) 0))));
        MR_Word Var_29;
        MR_String Var_30;

        succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
            succeeded = (strcmp(Var_30, (MR_String) "/") == 0);
          }
        }
        if (succeeded)
        {
          MR_String TermStr_23;
          MR_Word Pieces_24;
          MR_Word Spec_25;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_40;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_70;
          MR_Word Var_72;
          MR_Word Var_75;
          MR_Word Var_78;
          MR_Word Var_80;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_94;
          MR_Word Var_95;

          TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
          Var_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7);
          Var_44 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[8]));
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (TermStr_23));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[9])));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[18])));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[17])));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[7])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[5])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[13])));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[15])));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[14])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
          }
          Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_32);
          Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
          {
            Spec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_pred_pfu_name_arity_maybe_modes\'/5"));
            MR_hl_field(MR_mktag(1), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_25, 3) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(1), Spec_25, 4) = ((MR_Box) (Pieces_24));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Spec_25));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePredOrProcSpec_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePredOrProcSpec_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredAndModeSpecs_20));
          }
      }
      else
      {
        MR_Word PredOrFunc_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_17, (MR_Integer) 1))));
        MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_17, (MR_Integer) 2))));
        MR_Word SymName_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_17, (MR_Integer) 0))));
        MR_Word PFUMM_100;
        MR_Word PredOrProcSpec_101;

        switch (PredOrFunc_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_97;

              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Modes_19));
              }
              {
                PFUMM_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PFUMM_100, 0) = ((MR_Box) (Var_97));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_98;

              {
                Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Modes_19));
              }
              {
                PFUMM_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PFUMM_100, 0) = ((MR_Box) (Var_98));
              }
            }
            break;
        }
        {
          PredOrProcSpec_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredOrProcSpec_101, 0) = ((MR_Box) (PFUMM_100));
          MR_hl_field(MR_mktag(0), PredOrProcSpec_101, 1) = ((MR_Box) (SymName_99));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredOrProcSpec_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredOrProcSpec_101));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util__is_term_symname_arity_maybe_pf_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Term_5,
  MR_Word * PredSpec_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word PFU_10;
    MR_Word SymName_11;
    MR_Integer Arity_12;
    MR_Word TypeCtorInfo_21_21;
    MR_String Functor_7;
    MR_Word SubTerm_8;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((strcmp(Functor_7, (MR_String) "func") == 0))
            {
              PFU_10 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(Functor_7, (MR_String) "pred") == 0))
            {
              PFU_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              TypeCtorInfo_21_21 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0(TypeCtorInfo_21_21, ModuleName_4, SubTerm_8, &SymName_11, &Arity_12);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_16 = (MR_Word) (Arity_12);

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *PredSpec_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PFU_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SymName_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word SymName_19;
      MR_Integer Arity_20;

      succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_4, Term_5, &SymName_19, &Arity_20);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 2;
        Var_18 = (MR_Word) (Arity_20);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *PredSpec_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(
  MR_Word MaybeModuleName_6,
  MR_Word ContextPieces_7,
  MR_Word VarSet_8,
  MR_Word PredAndModesTerm_9,
  MR_Word * MaybeNameAndModes_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybePredAndArgs_11;

    parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MaybeModuleName_6, PredAndModesTerm_9, VarSet_8, ContextPieces_7, &MaybePredAndArgs_11);
    if (((MR_tag((MR_Word) MaybePredAndArgs_11)) == (MR_Integer) 0))
    {
      MR_Word Specs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredAndArgs_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNameAndModes_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_45));
      }
    }
    else
    {
      MR_Word PredName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndArgs_11, (MR_Integer) 0))));
      MR_Word ArgModeTerms_13;
      MR_Word MaybeRetModeTerm_14;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndArgs_11, (MR_Integer) 1))));

      ArgModeTerms_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      MaybeRetModeTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      if ((MaybeRetModeTerm_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeArgModes_15;

        parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, ContextPieces_7, ArgModeTerms_13, &MaybeArgModes_15);
        if (((MR_tag((MR_Word) MaybeArgModes_15)) == (MR_Integer) 0))
        {
          MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeArgModes_15, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNameAndModes_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
          }
        }
        else
        {
          MR_Word ArgModes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_15, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *MaybeNameAndModes_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredName_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ArgModes_16));
          }
        }
      }
      else
      {
        MR_Word RetModeTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetModeTerm_14, (MR_Integer) 0))));
        MR_Word MaybeArgModes0_19;
        MR_Word RetContextPieces_20;
        MR_Word MaybeRetMode_21;
        MR_Word Var_27;
        MR_Word ArgModes0_22;
        MR_Word RetMode_23;

        parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, ContextPieces_7, ArgModeTerms_13, &MaybeArgModes0_19);
        Var_27 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[19]))));
        RetContextPieces_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_27);
        parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, RetContextPieces_20, RetModeTerm_18, &MaybeRetMode_21);
        succeeded = ((MR_tag((MR_Word) MaybeArgModes0_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgModes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes0_19, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeRetMode_21)) == (MR_Integer) 1);
          if (succeeded)
            RetMode_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetMode_21, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word ArgModes1_24;
          MR_Word Var_31;
          MR_Word ArgModes_39;

          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (RetMode_23));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ArgModes1_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_22, Var_31);
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_util_scalar_common_5[0]), ArgModes1_24, &ArgModes_39);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *MaybeNameAndModes_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredName_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ArgModes_39));
          }
        }
        else
        {
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Specs_40;

          Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_util_scalar_common_1[0]), MaybeArgModes0_19);
          Var_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode_21);
          Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_35, Var_36);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeNameAndModes_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_40));
          }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word PredSpec_11;
    MR_Word PFU_73;
    MR_Word SymName_74;
    MR_Integer Arity_75;
    MR_Word TypeCtorInfo_21_84;
    MR_String Functor_70;
    MR_Word SubTerm_71;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    if (succeeded)
    {
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))));
        succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 0))));
          Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 1))));
          succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((strcmp(Functor_70, (MR_String) "func") == 0))
            {
              PFU_73 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(Functor_70, (MR_String) "pred") == 0))
            {
              PFU_73 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              TypeCtorInfo_21_84 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0(TypeCtorInfo_21_84, ModuleName_6, SubTerm_71, &SymName_74, &Arity_75);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_79 = (MR_Word) (Arity_75);

      {
        PredSpec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredSpec_11, 0) = (MR_Box) ((MR_Unsigned) (PFU_73));
        MR_hl_field(MR_mktag(0), PredSpec_11, 1) = ((MR_Box) (SymName_74));
        MR_hl_field(MR_mktag(0), PredSpec_11, 2) = ((MR_Box) (Var_79));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word SymName_82;
      MR_Integer Arity_83;

      succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_6, Term_9, &SymName_82, &Arity_83);
      if (succeeded)
      {
        Var_80 = (MR_Integer) 2;
        Var_81 = (MR_Word) (Arity_83);
        {
          PredSpec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredSpec_11, 0) = (MR_Box) ((MR_Unsigned) (Var_80));
          MR_hl_field(MR_mktag(0), PredSpec_11, 1) = ((MR_Box) (SymName_82));
          MR_hl_field(MR_mktag(0), PredSpec_11, 2) = ((MR_Box) (Var_81));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredSpec_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredSpec_11));
      }
    else
    {
      MR_String TermStr_12;
      MR_Word Pieces_13;
      MR_Word Spec_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_63;
      MR_Word Var_64;

      TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 29U));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (PragmaName_7));
      }
      Var_29 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[8]));
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (TermStr_12));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[9])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[13])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[6])));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[7])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[5])));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[3])));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[2])));
        MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_17));
      }
      Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_pred_pfu_name_arity\'/5"));
        MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredSpec_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
      }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word PorF_14;
    MR_Word SymName_15;
    MR_Integer Arity_16;
    MR_Word TypeCtorInfo_72_72;
    MR_String Functor_11;
    MR_Word SubTerm_12;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
          succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
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
              TypeCtorInfo_72_72 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0(TypeCtorInfo_72_72, ModuleName_6, SubTerm_12, &SymName_15, &Arity_16);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PredSpec_17;
      MR_Word Var_24 = (MR_Word) (Arity_16);

      {
        PredSpec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredSpec_17, 0) = (MR_Box) ((MR_Unsigned) (PorF_14));
        MR_hl_field(MR_mktag(0), PredSpec_17, 1) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), PredSpec_17, 2) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredSpec_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredSpec_17));
      }
    }
    else
    {
      MR_String TermStr_18;
      MR_Word Pieces_19;
      MR_Word Spec_20;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_69;
      MR_Word Var_70;

      TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 29U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (PragmaName_7));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (TermStr_18));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[12])));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[9])));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[8])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[7])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[6])));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[5])));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[3])));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[2])));
        MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_27));
      }
      Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_util.parse_pred_pf_name_arity\'/5"));
        MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredSpec_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word MaybeModuleName_6,
  MR_Word PredAndArgsTerm_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word * PredAndArgsResult_10)
{
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
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_7, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        succeeded = (strcmp(Var_23, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncAndArgsTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncResultTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
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
        MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFuncResult_15, 0) = ((MR_Box) (FuncResultTerm_12));
      }
    }
    else
    {
      FunctorTerm_14 = PredAndArgsTerm_7;
      MaybeFuncResult_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__varset__coerce_2_p_0(TypeInfo_for_T_28, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, &GenericVarSet_16);
    if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_28, GenericVarSet_16, ContextPieces_9, FunctorTerm_14, &Result_18);
    else
    {
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_6, (MR_Integer) 0))));

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeInfo_for_T_28, ModuleName_17, FunctorTerm_14, GenericVarSet_16, ContextPieces_9, &Result_18);
    }
    if (((MR_tag((MR_Word) Result_18)) == (MR_Integer) 0))
      *PredAndArgsResult_10 = (MR_Word) (Result_18);
    else
    {
      MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_18, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_18, (MR_Integer) 1))));
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Args_20));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (MaybeFuncResult_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PredAndArgsResult_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_27));
      }
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
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_5, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        succeeded = (strcmp(Var_14, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncAndArgsTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
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
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
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
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_name_and_arity_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word PorFPredAndArityTerm_5,
  MR_Word * PredOrFunc_6,
  MR_Word * SymName_7,
  MR_Integer * Arity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PorFPredAndArityTerm_5)) == (MR_Integer) 0);
    MR_String PredOrFuncStr_9;
    MR_Word Args_10;
    MR_Word Arg_12;
    MR_Word ModuleName_13;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PorFPredAndArityTerm_5, (MR_Integer) 0))));
      Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PorFPredAndArityTerm_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        PredOrFuncStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
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
          succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
            succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleName_13 = (MR_Word) (&parse_tree__parse_util_scalar_common_3[0]);
              succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0(TypeInfo_for_T_17, ModuleName_13, Arg_12, SymName_7, Arity_8);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_4,
  MR_Word * SymName_5,
  MR_Integer * Arity_6)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0(TypeInfo_for_T_9, (MR_Word) (&parse_tree__parse_util_scalar_common_3[0]), Term_4, SymName_5, Arity_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word ModuleName_5,
  MR_Word PredAndArityTerm_6,
  MR_Word * SymName_7,
  MR_Integer * Arity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PredAndArityTerm_6)) == (MR_Integer) 0);
    MR_Word PredNameTerm_9;
    MR_Word ArityTerm_10;
    MR_Word Var_12;
    MR_String Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArityTerm_6, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArityTerm_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = (strcmp(Var_13, (MR_String) "/") == 0);
        if (succeeded)
        {
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PredNameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
            succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArityTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(TypeInfo_for_T_17, ModuleName_5, PredNameTerm_9, SymName_7);
                if (succeeded)
                  succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeInfo_for_T_17, ArityTerm_10, Arity_8);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____conflict_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____conflict_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____maybe_pred_or_func_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____maybe_pred_or_func_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____parser_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____parser_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
