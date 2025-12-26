/*
** Automatically generated from `color_schemes.m'
** by the Mercury compiler,
** version rotd-2025-12-26
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


// :- module libs.color_schemes.
// :- implementation.

/*
INIT mercury__libs__color_schemes__init
ENDINIT
*/

#include "libs.color_schemes.mih"


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
#include "int.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint8.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"




static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_color_spec_0_0[1];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_0;

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_color_spec_0_1[3];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_1;

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_color_spec_0_0[1];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_color_spec_0_1[1];

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_color_spec_0[2];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_color_spec_0[2];

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_color_spec_0[2];

static const MR_FA_TypeInfo_Struct1 libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0;

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_color_specs_0_0[5];

static const MR_ConstString libs__color_schemes__libs__color_schemes__field_names_color_specs_0_0[5];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_color_specs_0_0;

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_color_specs_0_0[1];

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_color_specs_0[1];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_color_specs_0[1];

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_color_specs_0[1];

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_is_color_result_0_0[1];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_0;

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_is_color_result_0_1[1];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_1;

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_is_color_result_0_0[1];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_is_color_result_0_1[1];

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_is_color_result_0[2];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_is_color_result_0[2];

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_is_color_result_0[2];

static const MR_FA_TypeInfo_Struct1 libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_maybe_color_strings_0_0[5];

static const MR_ConstString libs__color_schemes__libs__color_schemes__field_names_maybe_color_strings_0_0[5];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_maybe_color_strings_0_0;

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_maybe_color_strings_0_0[1];

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_maybe_color_strings_0[1];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_maybe_color_strings_0[1];

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_maybe_color_strings_0[1];

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_why_not_color_0_0[2];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_0;

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_why_not_color_0_1[1];

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_1;

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_2;

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_3;

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_0[2];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_1[1];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_2[1];

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_why_not_color_0[3];

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_why_not_color_0[4];

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_why_not_color_0[4];

static void MR_CALL 
libs__color_schemes____Compare____maybe_color_strings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____maybe_color_strings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__color_schemes____Compare____is_color_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
libs__color_schemes____Compare____why_not_color_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____is_color_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
libs__color_schemes____Unify____why_not_color_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
libs__color_schemes__convert_color_spec_option_2_f_0(
  MR_String OptionName_4,
  MR_String OptionValue_5);

static void MR_CALL 
libs__color_schemes__record_maybe_color_4_p_0(
  MR_Word Option_5,
  MR_Word MaybeColorStr_6,
  MR_Word STATE_VARIABLE_OptionTable_0_9,
  MR_Word * STATE_VARIABLE_OptionTable_10);

static void MR_CALL 
libs__color_schemes__parse_color_specifications_6_p_0(
  MR_Word Source_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeColorStrs_0_3,
  MR_Word * STATE_VARIABLE_MaybeColorStrs_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static MR_Word MR_CALL 
libs__color_schemes__report_why_not_color_3_f_0(
  MR_Word Source_5,
  MR_String Value_6,
  MR_Word WhyNot_7);

static MR_Word MR_CALL 
libs__color_schemes__is_string_a_color_spec_1_f_0(
  MR_String Str_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____color_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__color_schemes____Compare____color_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____color_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__color_schemes____Compare____color_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____is_color_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__color_schemes____Compare____is_color_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____maybe_color_strings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__color_schemes____Compare____maybe_color_strings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__color_schemes____Unify____why_not_color_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__color_schemes____Compare____why_not_color_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__color_schemes_scalar_common_1[72][2];

static /* final */ const MR_Box libs__color_schemes_scalar_common_2[1][5];

static /* final */ const MR_Box libs__color_schemes_scalar_common_3[25][1];


struct libs__color_schemes__vector_common_type_4_0_s {
  const MR_Word libs__color_schemes__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct libs__color_schemes__vector_common_type_4_0_s libs__color_schemes_vector_common_4[26];

struct libs__color_schemes__vector_common_type_5_0_s {
  const MR_String libs__color_schemes__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct libs__color_schemes__vector_common_type_5_0_s libs__color_schemes_vector_common_5[5];

struct libs__color_schemes__vector_common_type_6_0_s {
  const MR_String libs__color_schemes__vector_common_type_6_0__vct_6_f_0;
  const MR_Integer libs__color_schemes__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct libs__color_schemes__vector_common_type_6_0_s libs__color_schemes_vector_common_6[5];

struct libs__color_schemes__vector_common_type_7_0_s {
  const MR_String libs__color_schemes__vector_common_type_7_0__vct_7_f_0;
  const MR_String libs__color_schemes__vector_common_type_7_0__vct_7_f_1;
  const MR_String libs__color_schemes__vector_common_type_7_0__vct_7_f_2;
  const MR_String libs__color_schemes__vector_common_type_7_0__vct_7_f_3;
  const MR_String libs__color_schemes__vector_common_type_7_0__vct_7_f_4;
  const MR_String libs__color_schemes__vector_common_type_7_0__vct_7_f_5;
};

static /* final */ const struct libs__color_schemes__vector_common_type_7_0_s libs__color_schemes_vector_common_7[32];



static /* final */ const MR_Box libs__color_schemes_scalar_common_1[72][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__color_schemes__libs__color_schemes__type_ctor_info_color_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "subject"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "correct"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "incorrect"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inconsistent"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "hint"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The value of"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not specify the"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to use for the"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in the value of"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a recognized color scheme."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[18])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not the name"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected a string of the form"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "role=color"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "role"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is one of"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "subject"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "correct"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "incorrect"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "inconsistent"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "hint"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the argument of"))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 255))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected six hexadecimal digits after the # sign, got"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "characters."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[18])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be hexadecimal digits, but some are not."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[18])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected all six characters after the # sign"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is outside the range"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "specifying an 8 bit color."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[18])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a decimal integer between 0 and 255"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the #RRGGBB specification of a 24 bit color, or"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not the name of a known color,"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(2, &libs__color_schemes_scalar_common_3[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(2, &libs__color_schemes_scalar_common_3[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(2, &libs__color_schemes_scalar_common_3[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(2, &libs__color_schemes_scalar_common_3[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[70])))
  },
};

static /* final */ const MR_Box libs__color_schemes_scalar_common_2[1][5] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__color_schemes_scalar_common_3[25][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 258U) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[45]))) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   5 */
  { ((MR_Box) (MR_Word) (UINT8_C(0))) },
  /* row   6 */
  { ((MR_Box) (MR_Word) (UINT8_C(4))) },
  /* row   7 */
  { ((MR_Box) (MR_Word) (UINT8_C(8))) },
  /* row   8 */
  { ((MR_Box) (MR_Word) (UINT8_C(12))) },
  /* row   9 */
  { ((MR_Box) (MR_Word) (UINT8_C(14))) },
  /* row  10 */
  { ((MR_Box) (MR_Word) (UINT8_C(10))) },
  /* row  11 */
  { ((MR_Box) (MR_Word) (UINT8_C(13))) },
  /* row  12 */
  { ((MR_Box) (MR_Word) (UINT8_C(9))) },
  /* row  13 */
  { ((MR_Box) (MR_Word) (UINT8_C(15))) },
  /* row  14 */
  { ((MR_Box) (MR_Word) (UINT8_C(11))) },
  /* row  15 */
  { ((MR_Box) (MR_Word) (UINT8_C(6))) },
  /* row  16 */
  { ((MR_Box) (MR_Word) (UINT8_C(2))) },
  /* row  17 */
  { ((MR_Box) (MR_Word) (UINT8_C(5))) },
  /* row  18 */
  { ((MR_Box) (MR_Word) (UINT8_C(1))) },
  /* row  19 */
  { ((MR_Box) (MR_Word) (UINT8_C(7))) },
  /* row  20 */
  { ((MR_Box) (MR_Word) (UINT8_C(3))) },
  /* row  21 */
  { ((MR_Box) ((MR_String) "--set-color-subject")) },
  /* row  22 */
  { ((MR_Box) ((MR_String) "--set-color-correct")) },
  /* row  23 */
  { ((MR_Box) ((MR_String) "--set-color-incorrect")) },
  /* row  24 */
  { ((MR_Box) ((MR_String) "--set-color-inconsistent")) },
};


static /* final */ const struct libs__color_schemes__vector_common_type_4_0_s libs__color_schemes_vector_common_4[26] = {
  /* row   0 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[5]) },
  /* row   1 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[6]) },
  /* row   2 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[7]) },
  /* row   3 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[8]) },
  /* row   4 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[9]) },
  /* row   5 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[10]) },
  /* row   6 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[11]) },
  /* row   7 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[12]) },
  /* row   8 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[13]) },
  /* row   9 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[14]) },
  /* row  10 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[7]) },
  /* row  11 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[8]) },
  /* row  12 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[9]) },
  /* row  13 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[10]) },
  /* row  14 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[11]) },
  /* row  15 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[12]) },
  /* row  16 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[13]) },
  /* row  17 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[14]) },
  /* row  18 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[15]) },
  /* row  19 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[7]) },
  /* row  20 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[16]) },
  /* row  21 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[7]) },
  /* row  22 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[17]) },
  /* row  23 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[18]) },
  /* row  24 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[19]) },
  /* row  25 */   { (MR_Word) (&libs__color_schemes_scalar_common_3[20]) },
};

static /* final */ const struct libs__color_schemes__vector_common_type_5_0_s libs__color_schemes_vector_common_5[5] = {
  /* row   0 */   { (MR_String) "correct" },
  /* row   1 */   { (MR_String) "hint" },
  /* row   2 */   { (MR_String) "inconsistent" },
  /* row   3 */   { (MR_String) "incorrect" },
  /* row   4 */   { (MR_String) "subject" },
};

static /* final */ const struct libs__color_schemes__vector_common_type_6_0_s libs__color_schemes_vector_common_6[5] = {
  /* row   0 */
  {
    (MR_String) "correct",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "hint",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "inconsistent",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "incorrect",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "subject",
    (MR_Integer) 4
  },
};

static /* final */ const struct libs__color_schemes__vector_common_type_7_0_s libs__color_schemes_vector_common_7[32] = {
  /* row   0 */
  {
    (MR_String) "lightmode256",
    (MR_String) "27",
    (MR_String) "28",
    (MR_String) "160",
    (MR_String) "166",
    (MR_String) "92"
  },
  /* row   1 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   2 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   3 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    (MR_String) "darkmode256",
    (MR_String) "111",
    (MR_String) "107",
    (MR_String) "174",
    (MR_String) "179",
    (MR_String) "140"
  },
  /* row   6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    (MR_String) "light256",
    (MR_String) "27",
    (MR_String) "28",
    (MR_String) "160",
    (MR_String) "166",
    (MR_String) "92"
  },
  /* row   8 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    (MR_String) "dark256",
    (MR_String) "111",
    (MR_String) "107",
    (MR_String) "174",
    (MR_String) "179",
    (MR_String) "140"
  },
  /* row  11 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    (MR_String) "lightmode16",
    (MR_String) "6",
    (MR_String) "2",
    (MR_String) "9",
    (MR_String) "3",
    (MR_String) "5"
  },
  /* row  18 */
  {
    (MR_String) "darkmode16",
    (MR_String) "14",
    (MR_String) "10",
    (MR_String) "9",
    (MR_String) "11",
    (MR_String) "13"
  },
  /* row  19 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    (MR_String) "lightmode",
    (MR_String) "#1b65ef",
    (MR_String) "#008e00",
    (MR_String) "#d41009",
    (MR_String) "#cf5600",
    (MR_String) "#903fd6"
  },
  /* row  21 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  22 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    (MR_String) "darkmode",
    (MR_String) "#7ca2ee",
    (MR_String) "#89b260",
    (MR_String) "#e48384",
    (MR_String) "#d2a74c",
    (MR_String) "#b68fde"
  },
  /* row  24 */
  {
    (MR_String) "dark",
    (MR_String) "#7ca2ee",
    (MR_String) "#89b260",
    (MR_String) "#e48384",
    (MR_String) "#d2a74c",
    (MR_String) "#b68fde"
  },
  /* row  25 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  27 */
  {
    (MR_String) "light",
    (MR_String) "#1b65ef",
    (MR_String) "#008e00",
    (MR_String) "#d41009",
    (MR_String) "#cf5600",
    (MR_String) "#903fd6"
  },
  /* row  28 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  29 */
  {
    (MR_String) "dark16",
    (MR_String) "14",
    (MR_String) "10",
    (MR_String) "9",
    (MR_String) "11",
    (MR_String) "13"
  },
  /* row  30 */
  {
    (MR_String) "light16",
    (MR_String) "6",
    (MR_String) "2",
    (MR_String) "9",
    (MR_String) "3",
    (MR_String) "5"
  },
  /* row  31 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_color_spec_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0) };

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_0 = {
  (MR_String) "color_8bit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__color_schemes__libs__color_schemes__field_types_color_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_color_spec_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
};

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_1 = {
  (MR_String) "color_24bit",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__color_schemes__libs__color_schemes__field_types_color_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_color_spec_0_0[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_0 };

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_color_spec_0_1[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_1 };

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_color_spec_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_color_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_color_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_color_spec_0[2] = {
  &libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_1,
  &libs__color_schemes__libs__color_schemes__du_functor_desc_color_spec_0_0
};

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_color_spec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__color_schemes__libs__color_schemes__type_ctor_info_color_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__color_schemes____Unify____color_spec_0_0_10001)),
  ((MR_Box) (libs__color_schemes____Compare____color_spec_0_0_10001)),
  (MR_String) "libs.color_schemes",
  (MR_String) "color_spec",
  { libs__color_schemes__libs__color_schemes__du_name_ordered_color_spec_0 },
  { libs__color_schemes__libs__color_schemes__du_ptag_ordered_color_spec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__color_schemes__libs__color_schemes__functor_number_map_color_spec_0,

};

static const MR_FA_TypeInfo_Struct1 libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&libs__color_schemes__libs__color_schemes__type_ctor_info_color_spec_0) }
};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_color_specs_0_0[5] = {
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1libs__color_schemes__type_ctor_info_color_spec_0)
};

static const MR_ConstString libs__color_schemes__libs__color_schemes__field_names_color_specs_0_0[5] = {
  (MR_String) "color_spec_subject",
  (MR_String) "color_spec_correct",
  (MR_String) "color_spec_incorrect",
  (MR_String) "color_spec_inconsistent",
  (MR_String) "color_spec_hint"
};

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_color_specs_0_0 = {
  (MR_String) "color_specs",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__color_schemes__libs__color_schemes__field_types_color_specs_0_0,
  libs__color_schemes__libs__color_schemes__field_names_color_specs_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_color_specs_0_0[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_color_specs_0_0 };

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_color_specs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_color_specs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_color_specs_0[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_color_specs_0_0 };

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_color_specs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__color_schemes__libs__color_schemes__type_ctor_info_color_specs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__color_schemes____Unify____color_specs_0_0_10001)),
  ((MR_Box) (libs__color_schemes____Compare____color_specs_0_0_10001)),
  (MR_String) "libs.color_schemes",
  (MR_String) "color_specs",
  { libs__color_schemes__libs__color_schemes__du_name_ordered_color_specs_0 },
  { libs__color_schemes__libs__color_schemes__du_ptag_ordered_color_specs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__color_schemes__libs__color_schemes__functor_number_map_color_specs_0,

};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_is_color_result_0_0[1] = { (MR_PseudoTypeInfo) (&libs__color_schemes__libs__color_schemes__type_ctor_info_color_spec_0) };

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_0 = {
  (MR_String) "is_color",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__color_schemes__libs__color_schemes__field_types_is_color_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_is_color_result_0_1[1] = { (MR_PseudoTypeInfo) (&libs__color_schemes__libs__color_schemes__type_ctor_info_why_not_color_0) };

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_1 = {
  (MR_String) "is_not_color",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__color_schemes__libs__color_schemes__field_types_is_color_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_is_color_result_0_0[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_0 };

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_is_color_result_0_1[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_1 };

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_is_color_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_is_color_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_is_color_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_is_color_result_0[2] = {
  &libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_0,
  &libs__color_schemes__libs__color_schemes__du_functor_desc_is_color_result_0_1
};

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_is_color_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__color_schemes__libs__color_schemes__type_ctor_info_is_color_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__color_schemes____Unify____is_color_result_0_0_10001)),
  ((MR_Box) (libs__color_schemes____Compare____is_color_result_0_0_10001)),
  (MR_String) "libs.color_schemes",
  (MR_String) "is_color_result",
  { libs__color_schemes__libs__color_schemes__du_name_ordered_is_color_result_0 },
  { libs__color_schemes__libs__color_schemes__du_ptag_ordered_is_color_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__color_schemes__libs__color_schemes__functor_number_map_is_color_result_0,

};

static const MR_FA_TypeInfo_Struct1 libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_maybe_color_strings_0_0[5] = {
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__color_schemes__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__color_schemes__libs__color_schemes__field_names_maybe_color_strings_0_0[5] = {
  (MR_String) "mcs_subject",
  (MR_String) "mcs_correct",
  (MR_String) "mcs_incorrect",
  (MR_String) "mcs_inconsistent",
  (MR_String) "mcs_hint"
};

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_maybe_color_strings_0_0 = {
  (MR_String) "maybe_color_strings",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__color_schemes__libs__color_schemes__field_types_maybe_color_strings_0_0,
  libs__color_schemes__libs__color_schemes__field_names_maybe_color_strings_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_maybe_color_strings_0_0[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_maybe_color_strings_0_0 };

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_maybe_color_strings_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_maybe_color_strings_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_maybe_color_strings_0[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_maybe_color_strings_0_0 };

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_maybe_color_strings_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__color_schemes__libs__color_schemes__type_ctor_info_maybe_color_strings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__color_schemes____Unify____maybe_color_strings_0_0_10001)),
  ((MR_Box) (libs__color_schemes____Compare____maybe_color_strings_0_0_10001)),
  (MR_String) "libs.color_schemes",
  (MR_String) "maybe_color_strings",
  { libs__color_schemes__libs__color_schemes__du_name_ordered_maybe_color_strings_0 },
  { libs__color_schemes__libs__color_schemes__du_ptag_ordered_maybe_color_strings_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__color_schemes__libs__color_schemes__functor_number_map_maybe_color_strings_0,

};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_why_not_color_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_0 = {
  (MR_String) "wnc_int_outside_range",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__color_schemes__libs__color_schemes__field_types_why_not_color_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__color_schemes__libs__color_schemes__field_types_why_not_color_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_1 = {
  (MR_String) "wnc_afterhash_length",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  libs__color_schemes__libs__color_schemes__field_types_why_not_color_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_2 = {
  (MR_String) "wnc_afterhash_nondigits",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_3 = {
  (MR_String) "wnc_unknown_format",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_0[2] = {
  &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_2,
  &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_3
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_1[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_0 };

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_2[1] = { &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_1 };

static const MR_DuPtagLayout libs__color_schemes__libs__color_schemes__du_ptag_ordered_why_not_color_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__color_schemes__libs__color_schemes__du_stag_ordered_why_not_color_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__color_schemes__libs__color_schemes__du_name_ordered_why_not_color_0[4] = {
  &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_1,
  &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_2,
  &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_0,
  &libs__color_schemes__libs__color_schemes__du_functor_desc_why_not_color_0_3
};

static const MR_Integer libs__color_schemes__libs__color_schemes__functor_number_map_why_not_color_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct libs__color_schemes__libs__color_schemes__type_ctor_info_why_not_color_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__color_schemes____Unify____why_not_color_0_0_10001)),
  ((MR_Box) (libs__color_schemes____Compare____why_not_color_0_0_10001)),
  (MR_String) "libs.color_schemes",
  (MR_String) "why_not_color",
  { libs__color_schemes__libs__color_schemes__du_name_ordered_why_not_color_0 },
  { libs__color_schemes__libs__color_schemes__du_ptag_ordered_why_not_color_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  libs__color_schemes__libs__color_schemes__functor_number_map_why_not_color_0,

};

static void MR_CALL 
libs__color_schemes____Compare____maybe_color_strings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____maybe_color_strings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&libs__color_schemes_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&libs__color_schemes_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&libs__color_schemes_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&libs__color_schemes_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__color_schemes____Compare____is_color_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      libs__color_schemes____Compare____color_spec_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    libs__color_schemes____Compare____why_not_color_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static void MR_CALL 
libs__color_schemes____Compare____why_not_color_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                succeeded = (ArgX2_7 < ArgY2_8);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_7 > ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_9 < ArgY1_10);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_9 > ArgY1_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____is_color_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = libs__color_schemes____Unify____color_spec_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = libs__color_schemes____Unify____why_not_color_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____why_not_color_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__color_schemes____Compare____color_specs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
libs__color_schemes____Unify____color_specs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&libs__color_schemes_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&libs__color_schemes_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&libs__color_schemes_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&libs__color_schemes_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
libs__color_schemes____Compare____color_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      uint8_t ArgX1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
      uint8_t ArgY1_7 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 0)));
      uint8_t ArgX2_9 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 1)));
      uint8_t ArgY2_10 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 1)));
      uint8_t ArgX3_12 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 2)));
      uint8_t ArgY3_13 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 2)));
      MR_Word SubResult1_8;

      succeeded = (ArgX1_6 < ArgY1_7);
      if (succeeded)
      {
        SubResult1_8 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_6 > ArgY1_7);
        if (succeeded)
        {
          SubResult1_8 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        succeeded = (ArgX2_9 < ArgY2_10);
        if (succeeded)
        {
          SubResult2_11 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_9 > ArgY2_10);
          if (succeeded)
          {
            SubResult2_11 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
        {
          succeeded = (ArgX3_12 < ArgY3_13);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_12 > ArgY3_13);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    uint8_t ArgX1_4 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, 0)));
    uint8_t ArgY1_5 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__3_3, 0)));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
libs__color_schemes____Unify____color_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    uint8_t ArgX1_5 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
    uint8_t ArgY1_6;
    uint8_t ArgX2_7 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 1)));
    uint8_t ArgY2_8;
    uint8_t ArgX3_9 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 2)));
    uint8_t ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
      ArgY2_8 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 1)));
      ArgY3_10 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 2)));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          succeeded = (ArgX3_9 == ArgY3_10);
      }
    }
  }
  else
  {
    uint8_t ArgX1_3 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__1_1, 0)));
    uint8_t ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, 0)));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
libs__color_schemes__convert_color_spec_options_1_f_0(
  MR_Word OptionTable_3)
{
  MR_bool succeeded;
  MR_Word MaybeColorSpecs_4;
  MR_String OptSubject_5;
  MR_String OptCorrect_6;
  MR_String OptIncorrect_7;
  MR_String OptInconsistent_8;
  MR_String OptHint_9;
  MR_Word MaybeMaybeSubject_10;
  MR_Word MaybeMaybeCorrect_11;
  MR_Word MaybeMaybeIncorrect_12;
  MR_Word MaybeMaybeInconsistent_13;
  MR_Word MaybeMaybeHint_14;
  MR_Word MaybeSubject_15;
  MR_Word MaybeCorrect_16;
  MR_Word MaybeIncorrect_17;
  MR_Word MaybeInconsistent_18;
  MR_Word MaybeHint_19;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_3, ((MR_Box) ((MR_Integer) 157)), &OptSubject_5);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_3, ((MR_Box) ((MR_Integer) 158)), &OptCorrect_6);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_3, ((MR_Box) ((MR_Integer) 159)), &OptIncorrect_7);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_3, ((MR_Box) ((MR_Integer) 160)), &OptInconsistent_8);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_3, ((MR_Box) ((MR_Integer) 161)), &OptHint_9);
  succeeded = (strcmp(OptSubject_5, (MR_String) "") == 0);
  if (succeeded)
    MaybeMaybeSubject_10 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[1]));
  else
  {
    MR_Word ColorResult_44;

    ColorResult_44 = libs__color_schemes__is_string_a_color_spec_1_f_0(OptSubject_5);
    if (((MR_tag((MR_Word) ColorResult_44)) == (MR_Integer) 0))
    {
      MR_Word Color_45 = ((MR_Word) ((MR_hl_field(0, ColorResult_44, 0))));
      MR_Word Var_49;

      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Color_45));
      }
      {
        MaybeMaybeSubject_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeSubject_10, 0) = ((MR_Box) (Var_49));
      }
    }
    else
    {
      MR_Word WhyNot_46 = ((MR_Word) ((MR_hl_field(1, ColorResult_44, 0))));
      MR_Word Spec_48;
      MR_Word Var_55;

      Spec_48 = libs__color_schemes__report_why_not_color_3_f_0((MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[65])), OptSubject_5, WhyNot_46);
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_48));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeSubject_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeSubject_10, 0) = ((MR_Box) (Var_55));
      }
    }
  }
  succeeded = (strcmp(OptCorrect_6, (MR_String) "") == 0);
  if (succeeded)
    MaybeMaybeCorrect_11 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[1]));
  else
  {
    MR_Word ColorResult_58;

    ColorResult_58 = libs__color_schemes__is_string_a_color_spec_1_f_0(OptCorrect_6);
    if (((MR_tag((MR_Word) ColorResult_58)) == (MR_Integer) 0))
    {
      MR_Word Color_59 = ((MR_Word) ((MR_hl_field(0, ColorResult_58, 0))));
      MR_Word Var_63;

      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Color_59));
      }
      {
        MaybeMaybeCorrect_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeCorrect_11, 0) = ((MR_Box) (Var_63));
      }
    }
    else
    {
      MR_Word WhyNot_60 = ((MR_Word) ((MR_hl_field(1, ColorResult_58, 0))));
      MR_Word Spec_62;
      MR_Word Var_69;

      Spec_62 = libs__color_schemes__report_why_not_color_3_f_0((MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[67])), OptCorrect_6, WhyNot_60);
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Spec_62));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeCorrect_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeCorrect_11, 0) = ((MR_Box) (Var_69));
      }
    }
  }
  succeeded = (strcmp(OptIncorrect_7, (MR_String) "") == 0);
  if (succeeded)
    MaybeMaybeIncorrect_12 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[1]));
  else
  {
    MR_Word ColorResult_72;

    ColorResult_72 = libs__color_schemes__is_string_a_color_spec_1_f_0(OptIncorrect_7);
    if (((MR_tag((MR_Word) ColorResult_72)) == (MR_Integer) 0))
    {
      MR_Word Color_73 = ((MR_Word) ((MR_hl_field(0, ColorResult_72, 0))));
      MR_Word Var_77;

      {
        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_77, 0) = ((MR_Box) (Color_73));
      }
      {
        MaybeMaybeIncorrect_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeIncorrect_12, 0) = ((MR_Box) (Var_77));
      }
    }
    else
    {
      MR_Word WhyNot_74 = ((MR_Word) ((MR_hl_field(1, ColorResult_72, 0))));
      MR_Word Spec_76;
      MR_Word Var_83;

      Spec_76 = libs__color_schemes__report_why_not_color_3_f_0((MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[69])), OptIncorrect_7, WhyNot_74);
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (Spec_76));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeIncorrect_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeIncorrect_12, 0) = ((MR_Box) (Var_83));
      }
    }
  }
  succeeded = (strcmp(OptInconsistent_8, (MR_String) "") == 0);
  if (succeeded)
    MaybeMaybeInconsistent_13 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[1]));
  else
  {
    MR_Word ColorResult_86;

    ColorResult_86 = libs__color_schemes__is_string_a_color_spec_1_f_0(OptInconsistent_8);
    if (((MR_tag((MR_Word) ColorResult_86)) == (MR_Integer) 0))
    {
      MR_Word Color_87 = ((MR_Word) ((MR_hl_field(0, ColorResult_86, 0))));
      MR_Word Var_91;

      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Color_87));
      }
      {
        MaybeMaybeInconsistent_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeInconsistent_13, 0) = ((MR_Box) (Var_91));
      }
    }
    else
    {
      MR_Word WhyNot_88 = ((MR_Word) ((MR_hl_field(1, ColorResult_86, 0))));
      MR_Word Spec_90;
      MR_Word Var_97;

      Spec_90 = libs__color_schemes__report_why_not_color_3_f_0((MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[71])), OptInconsistent_8, WhyNot_88);
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (Spec_90));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeInconsistent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeInconsistent_13, 0) = ((MR_Box) (Var_97));
      }
    }
  }
  MaybeMaybeHint_14 = libs__color_schemes__convert_color_spec_option_2_f_0((MR_String) "--set-color-hint", OptHint_9);
  succeeded = ((MR_tag((MR_Word) MaybeMaybeSubject_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    MaybeSubject_15 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeSubject_10, 0))));
    succeeded = ((MR_tag((MR_Word) MaybeMaybeCorrect_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      MaybeCorrect_16 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeCorrect_11, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeMaybeIncorrect_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        MaybeIncorrect_17 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeIncorrect_12, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeMaybeInconsistent_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          MaybeInconsistent_18 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeInconsistent_13, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeMaybeHint_14)) == (MR_Integer) 1);
          if (succeeded)
            MaybeHint_19 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeHint_14, 0))));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ColorSpecs_20;

    {
      ColorSpecs_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ColorSpecs_20, 0) = ((MR_Box) (MaybeSubject_15));
      MR_hl_field(0, ColorSpecs_20, 1) = ((MR_Box) (MaybeCorrect_16));
      MR_hl_field(0, ColorSpecs_20, 2) = ((MR_Box) (MaybeIncorrect_17));
      MR_hl_field(0, ColorSpecs_20, 3) = ((MR_Box) (MaybeInconsistent_18));
      MR_hl_field(0, ColorSpecs_20, 4) = ((MR_Box) (MaybeHint_19));
    }
    {
      MaybeColorSpecs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeColorSpecs_4, 0) = ((MR_Box) (ColorSpecs_20));
    }
  }
  else
  {
    MR_Word Specs_21;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), MaybeMaybeSubject_10);
    Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), MaybeMaybeCorrect_11);
    Var_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), MaybeMaybeIncorrect_12);
    Var_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), MaybeMaybeInconsistent_13);
    Var_39 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__color_schemes_scalar_common_1[0]), MaybeMaybeHint_14);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_38, Var_39);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_36, Var_37);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_34, Var_35);
    Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_32, Var_33);
    {
      MaybeColorSpecs_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeColorSpecs_4, 0) = ((MR_Box) (Specs_21));
    }
  }
  return MaybeColorSpecs_4;
}

static MR_Word MR_CALL 
libs__color_schemes__convert_color_spec_option_2_f_0(
  MR_String OptionName_4,
  MR_String OptionValue_5)
{
  MR_bool succeeded = (strcmp(OptionValue_5, (MR_String) "") == 0);
  MR_Word MaybeMaybeColorSpec_6;

  if (succeeded)
    MaybeMaybeColorSpec_6 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[1]));
  else
  {
    MR_Word ColorResult_8;

    ColorResult_8 = libs__color_schemes__is_string_a_color_spec_1_f_0(OptionValue_5);
    if (((MR_tag((MR_Word) ColorResult_8)) == (MR_Integer) 0))
    {
      MR_Word Color_9 = ((MR_Word) ((MR_hl_field(0, ColorResult_8, 0))));
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Color_9));
      }
      {
        MaybeMaybeColorSpec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeColorSpec_6, 0) = ((MR_Box) (Var_13));
      }
    }
    else
    {
      MR_Word WhyNot_10 = ((MR_Word) ((MR_hl_field(1, ColorResult_8, 0))));
      MR_Word Source_11;
      MR_Word Spec_12;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_19;

      {
        Var_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_17, 0) = ((MR_Box) (OptionName_4));
      }
      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Source_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Source_11, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[44])));
        MR_hl_field(1, Source_11, 1) = ((MR_Box) (Var_16));
      }
      Spec_12 = libs__color_schemes__report_why_not_color_3_f_0(Source_11, OptionValue_5, WhyNot_10);
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (Spec_12));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeColorSpec_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeColorSpec_6, 0) = ((MR_Box) (Var_19));
      }
    }
  }
  return MaybeMaybeColorSpec_6;
}

void MR_CALL 
libs__color_schemes__record_color_scheme_in_options_7_p_0(
  MR_Word Source_8,
  MR_String SchemeName_9,
  MR_Word * Specs_10,
  MR_Word STATE_VARIABLE_OptionTable_0_48,
  MR_Word * STATE_VARIABLE_OptionTable_49)
{
  MR_bool succeeded;
  MR_String Subject_13;
  MR_String Correct_14;
  MR_String Incorrect_15;
  MR_String Inconsistent_16;
  MR_String Hint_17;
  MR_Integer slot_0 = ((MR_hash_string4(SchemeName_9)) & (MR_Integer) 31);
  MR_String str_1 = ((&libs__color_schemes_vector_common_7[0 + slot_0]))->libs__color_schemes__vector_common_type_7_0__vct_7_f_0;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, SchemeName_9) == 0))))
  {
    // we found a match; look up the results
    ;
    Subject_13 = ((&libs__color_schemes_vector_common_7[0 + slot_0]))->libs__color_schemes__vector_common_type_7_0__vct_7_f_1;
    Correct_14 = ((&libs__color_schemes_vector_common_7[0 + slot_0]))->libs__color_schemes__vector_common_type_7_0__vct_7_f_2;
    Incorrect_15 = ((&libs__color_schemes_vector_common_7[0 + slot_0]))->libs__color_schemes__vector_common_type_7_0__vct_7_f_3;
    Inconsistent_16 = ((&libs__color_schemes_vector_common_7[0 + slot_0]))->libs__color_schemes__vector_common_type_7_0__vct_7_f_4;
    Hint_17 = ((&libs__color_schemes_vector_common_7[0 + slot_0]))->libs__color_schemes__vector_common_type_7_0__vct_7_f_5;
    succeeded = MR_TRUE;
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  if (succeeded)
  {
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_OptionTable_1_54;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_OptionTable_2_57;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_OptionTable_3_60;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_OptionTable_4_63;
    MR_Word Var_65;

    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (Subject_13));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 157)), ((MR_Box) (Var_53)), STATE_VARIABLE_OptionTable_0_48, &STATE_VARIABLE_OptionTable_1_54);
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (Correct_14));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 158)), ((MR_Box) (Var_56)), STATE_VARIABLE_OptionTable_1_54, &STATE_VARIABLE_OptionTable_2_57);
    {
      Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_59, 1) = ((MR_Box) (Incorrect_15));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 159)), ((MR_Box) (Var_59)), STATE_VARIABLE_OptionTable_2_57, &STATE_VARIABLE_OptionTable_3_60);
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (Inconsistent_16));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 160)), ((MR_Box) (Var_62)), STATE_VARIABLE_OptionTable_3_60, &STATE_VARIABLE_OptionTable_4_63);
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (Hint_17));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 161)), ((MR_Box) (Var_65)), STATE_VARIABLE_OptionTable_4_63, STATE_VARIABLE_OptionTable_49);
    *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String SettingsStr_18;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "specified\100", SchemeName_9, &SettingsStr_18);
    if (succeeded)
    {
      MR_Word Settings_19;
      MR_Word MaybeColorStrs_21;
      MR_Word SettingSpecs_22;

      Settings_19 = mercury__string__split_at_char_2_f_0((MR_Char) 58, SettingsStr_18);
      libs__color_schemes__parse_color_specifications_6_p_0(Source_8, Settings_19, (MR_Word) (&libs__color_schemes_scalar_common_2[0]), &MaybeColorStrs_21, (MR_Word) ((MR_Unsigned) 0U), &SettingSpecs_22);
      if ((SettingSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeSubject_23 = ((MR_Word) ((MR_hl_field(0, MaybeColorStrs_21, 0))));
        MR_Word MaybeCorrect_24 = ((MR_Word) ((MR_hl_field(0, MaybeColorStrs_21, 1))));
        MR_Word MaybeIncorrect_25 = ((MR_Word) ((MR_hl_field(0, MaybeColorStrs_21, 2))));
        MR_Word MaybeInconsistent_26 = ((MR_Word) ((MR_hl_field(0, MaybeColorStrs_21, 3))));
        MR_Word MaybeHint_27 = ((MR_Word) ((MR_hl_field(0, MaybeColorStrs_21, 4))));
        MR_Word MissingRoles1_28;
        MR_Word MissingRoles2_30;
        MR_Word MissingRoles3_32;
        MR_Word MissingRoles4_34;
        MR_Word MissingRoles_36;
        MR_Word STATE_VARIABLE_OptionTable_6_76;
        MR_Word STATE_VARIABLE_OptionTable_7_78;
        MR_Word STATE_VARIABLE_OptionTable_8_80;
        MR_Word STATE_VARIABLE_OptionTable_9_82;

        libs__color_schemes__record_maybe_color_4_p_0((MR_Integer) 157, MaybeSubject_23, STATE_VARIABLE_OptionTable_0_48, &STATE_VARIABLE_OptionTable_6_76);
        libs__color_schemes__record_maybe_color_4_p_0((MR_Integer) 158, MaybeCorrect_24, STATE_VARIABLE_OptionTable_6_76, &STATE_VARIABLE_OptionTable_7_78);
        libs__color_schemes__record_maybe_color_4_p_0((MR_Integer) 159, MaybeIncorrect_25, STATE_VARIABLE_OptionTable_7_78, &STATE_VARIABLE_OptionTable_8_80);
        libs__color_schemes__record_maybe_color_4_p_0((MR_Integer) 160, MaybeInconsistent_26, STATE_VARIABLE_OptionTable_8_80, &STATE_VARIABLE_OptionTable_9_82);
        libs__color_schemes__record_maybe_color_4_p_0((MR_Integer) 161, MaybeHint_27, STATE_VARIABLE_OptionTable_9_82, STATE_VARIABLE_OptionTable_49);
        if ((MaybeSubject_23 == (MR_Word) ((MR_Unsigned) 0U)))
          MissingRoles1_28 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[3]));
        else
          MissingRoles1_28 = (MR_Word) ((MR_Unsigned) 0U);
        if ((MaybeCorrect_24 == (MR_Word) ((MR_Unsigned) 0U)))
          MissingRoles2_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MissingRoles1_28, (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[5])));
        else
          MissingRoles2_30 = MissingRoles1_28;
        if ((MaybeIncorrect_25 == (MR_Word) ((MR_Unsigned) 0U)))
          MissingRoles3_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MissingRoles2_30, (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[7])));
        else
          MissingRoles3_32 = MissingRoles2_30;
        if ((MaybeInconsistent_26 == (MR_Word) ((MR_Unsigned) 0U)))
          MissingRoles4_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MissingRoles3_32, (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[9])));
        else
          MissingRoles4_34 = MissingRoles3_32;
        if ((MaybeHint_27 == (MR_Word) ((MR_Unsigned) 0U)))
          MissingRoles_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MissingRoles4_34, (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[11])));
        else
          MissingRoles_36 = MissingRoles4_34;
        if ((MissingRoles_36 == (MR_Word) ((MR_Unsigned) 0U)))
          *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String ColorColors_40;
          MR_String RoleRoles_41;
          MR_Word Pieces_42;
          MR_Word Msg_43;
          MR_Word InformSpec_45;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_140;
          MR_Box conv0_ColorColors_40;
          MR_Box conv1_RoleRoles_41;

          conv0_ColorColors_40 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MissingRoles_36, ((MR_Box) ((MR_String) "color")), ((MR_Box) ((MR_String) "colors")));
          ColorColors_40 = ((MR_String) (conv0_ColorColors_40));
          conv1_RoleRoles_41 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MissingRoles_36, ((MR_Box) ((MR_String) "role")), ((MR_Box) ((MR_String) "roles")));
          RoleRoles_41 = ((MR_String) (conv1_RoleRoles_41));
          {
            Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_118, 1) = ((MR_Box) (ColorColors_40));
          }
          {
            Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_123, 1) = ((MR_Box) (RoleRoles_41));
          }
          {
            Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(1, Var_122, 1) = ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[17])));
          }
          {
            Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[15])));
            MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
          }
          {
            Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
            MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
          }
          {
            Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[14])));
            MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
          }
          Var_129 = parse_tree__error_spec__piece_list_to_pieces_2_f_0((MR_String) "and", MissingRoles_36);
          Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_129, (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[20])));
          Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_128);
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_8, Var_113);
          Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[13])), Var_112);
          {
            Msg_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Msg_43, 0) = ((MR_Box) (Pieces_42));
          }
          {
            Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_140, 0) = ((MR_Box) (Msg_43));
            MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            InformSpec_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, InformSpec_45, 0) = ((MR_Box) ((MR_String) "predicate \140libs.color_schemes.record_color_scheme_in_options\'/7"));
            MR_hl_field(2, InformSpec_45, 1) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_3[0])));
            MR_hl_field(2, InformSpec_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, InformSpec_45, 3) = ((MR_Box) (Var_140));
          }
          parse_tree__write_error_spec__record_bad_color_scheme_3_p_0(InformSpec_45);
          *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        *Specs_10 = SettingSpecs_22;
        *STATE_VARIABLE_OptionTable_49 = STATE_VARIABLE_OptionTable_0_48;
      }
    }
    else
    {
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_162;
      MR_Word Pieces_167;

      {
        Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_152, 1) = ((MR_Box) (SchemeName_9));
      }
      {
        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
        MR_hl_field(1, Var_151, 1) = ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[27])));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[23])));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_151));
      }
      Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_8, Var_148);
      Pieces_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[22])), Var_147);
      {
        Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_162, 0) = ((MR_Box) ((MR_String) "predicate \140libs.color_schemes.record_color_scheme_in_options\'/7"));
        MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_162, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_162, 3) = ((MR_Box) (Pieces_167));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_162));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_OptionTable_49 = STATE_VARIABLE_OptionTable_0_48;
    }
  }
}

static void MR_CALL 
libs__color_schemes__record_maybe_color_4_p_0(
  MR_Word Option_5,
  MR_Word MaybeColorStr_6,
  MR_Word STATE_VARIABLE_OptionTable_0_9,
  MR_Word * STATE_VARIABLE_OptionTable_10)
{
  MR_String ColorStr_8;
  MR_Word Var_11;

  if ((MaybeColorStr_6 == (MR_Word) ((MR_Unsigned) 0U)))
    ColorStr_8 = (MR_String) "";
  else
    ColorStr_8 = ((MR_String) ((MR_hl_field(1, MaybeColorStr_6, 0))));
  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (ColorStr_8));
  }
  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (Option_5)), ((MR_Box) (Var_11)), STATE_VARIABLE_OptionTable_0_9, STATE_VARIABLE_OptionTable_10);
}

static void MR_CALL 
libs__color_schemes__parse_color_specifications_6_p_0(
  MR_Word Source_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeColorStrs_0_3,
  MR_Word * STATE_VARIABLE_MaybeColorStrs_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_MaybeColorStrs_4 = STATE_VARIABLE_MaybeColorStrs_0_3;
    }
    else
    {
      MR_String Setting_15 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Settings_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_MaybeColorStrs_1_34;
      MR_Word STATE_VARIABLE_Specs_1_44;
      MR_String Name_19;
      MR_String Value_20;
      MR_Word TypeInfo_148_148;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_142;
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeColorStrs_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      Var_30 = mercury__string__split_at_char_2_f_0((MR_Char) 61, Setting_15);
      succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Name_19 = ((MR_String) ((MR_hl_field(1, Var_30, 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, 1))));
        succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Value_20 = ((MR_String) ((MR_hl_field(1, Var_31, 0))));
          Var_142 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
          TypeInfo_148_148 = (MR_Word) (&libs__color_schemes_scalar_common_1[28]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_148_148, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_142)));
          if (succeeded)
          {
            // binary string simple lookup switch
            ;
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(Name_19, ((&libs__color_schemes_vector_common_5[0 + mid_2]))->libs__color_schemes__vector_common_type_5_0__vct_5_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Result_21;

        Result_21 = libs__color_schemes__is_string_a_color_spec_1_f_0(Value_20);
        if (((MR_tag((MR_Word) Result_21)) == (MR_Integer) 0))
        {
          MR_Word Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_0_3, 4))));
          MR_Word Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_0_3, 3))));
          MR_Word Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_0_3, 2))));
          MR_Word Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_0_3, 1))));
          MR_Word Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_0_3, 0))));
          MR_Integer lo_4 = (MR_Integer) 0;
          MR_Integer hi_5 = (MR_Integer) 4;
          MR_Integer mid_6;
          MR_Integer result_7;

          // binary string jump switch
          ;
          do
          {
            mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
            result_7 = MR_strcmp(Name_19, ((&libs__color_schemes_vector_common_6[0 + mid_6]))->libs__color_schemes__vector_common_type_6_0__vct_6_f_0);
            if ((result_7 == (MR_Integer) 0))
            {
              switch (((&libs__color_schemes_vector_common_6[0 + mid_6]))->libs__color_schemes__vector_common_type_6_0__vct_6_f_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    // case "correct"
                    ;
                    {
                      MR_Word Var_37;

                      {
                        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Value_20));
                      }
                      {
                        STATE_VARIABLE_MaybeColorStrs_1_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 0) = ((MR_Box) (Var_147));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 1) = ((MR_Box) (Var_37));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 2) = ((MR_Box) (Var_145));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 3) = ((MR_Box) (Var_144));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 4) = ((MR_Box) (Var_143));
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    // case "hint"
                    ;
                    {
                      MR_Word Var_43;

                      {
                        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Value_20));
                      }
                      {
                        STATE_VARIABLE_MaybeColorStrs_1_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 0) = ((MR_Box) (Var_147));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 1) = ((MR_Box) (Var_146));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 2) = ((MR_Box) (Var_145));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 3) = ((MR_Box) (Var_144));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 4) = ((MR_Box) (Var_43));
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    // case "inconsistent"
                    ;
                    {
                      MR_Word Var_41;

                      {
                        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Value_20));
                      }
                      {
                        STATE_VARIABLE_MaybeColorStrs_1_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 0) = ((MR_Box) (Var_147));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 1) = ((MR_Box) (Var_146));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 2) = ((MR_Box) (Var_145));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 3) = ((MR_Box) (Var_41));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 4) = ((MR_Box) (Var_143));
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    // case "incorrect"
                    ;
                    {
                      MR_Word Var_39;

                      {
                        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Value_20));
                      }
                      {
                        STATE_VARIABLE_MaybeColorStrs_1_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 0) = ((MR_Box) (Var_147));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 1) = ((MR_Box) (Var_146));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 2) = ((MR_Box) (Var_39));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 3) = ((MR_Box) (Var_144));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 4) = ((MR_Box) (Var_143));
                      }
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    // case "subject"
                    ;
                    {
                      MR_Word Var_35;

                      {
                        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Value_20));
                      }
                      {
                        STATE_VARIABLE_MaybeColorStrs_1_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 0) = ((MR_Box) (Var_35));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 1) = ((MR_Box) (Var_146));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 2) = ((MR_Box) (Var_145));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 3) = ((MR_Box) (Var_144));
                        MR_hl_field(0, STATE_VARIABLE_MaybeColorStrs_1_34, 4) = ((MR_Box) (Var_143));
                      }
                    }
                  }
                  break;
              }
              // break out of search loop
              ;
              break;
            }
            else
            if ((result_7 < (MR_Integer) 0))
              hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
            else
              lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
          }
          while ((lo_4 <= hi_5));
          STATE_VARIABLE_Specs_1_44 = STATE_VARIABLE_Specs_0_5;
        }
        else
        {
          MR_Word WhyNot_23 = ((MR_Word) ((MR_hl_field(1, Result_21, 0))));
          MR_Word Spec_24;

          Spec_24 = libs__color_schemes__report_why_not_color_3_f_0(Source_1, Value_20, WhyNot_23);
          {
            STATE_VARIABLE_Specs_1_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_44, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_44, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
          }
          STATE_VARIABLE_MaybeColorStrs_1_34 = STATE_VARIABLE_MaybeColorStrs_0_3;
        }
      }
      else
      {
        MR_Word Pieces_25;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_72 = (MR_Word) (MR_mkword(3, &libs__color_schemes_scalar_common_1[37]));
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Spec_115;

        {
          Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_102, 1) = ((MR_Box) (Setting_15));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[20])));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[43])));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[42])));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[41])));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[40])));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[39])));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[38])));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[36])));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[35])));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[34])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[33])));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[32])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[31])));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[23])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_1, Var_50);
        Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[30])), Var_49);
        {
          Spec_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_115, 0) = ((MR_Box) ((MR_String) "predicate \140libs.color_schemes.parse_color_specifications\'/6"));
          MR_hl_field(1, Spec_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_115, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_115, 3) = ((MR_Box) (Pieces_25));
        }
        {
          STATE_VARIABLE_Specs_1_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_44, 0) = ((MR_Box) (Spec_115));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_44, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
        }
        STATE_VARIABLE_MaybeColorStrs_1_34 = STATE_VARIABLE_MaybeColorStrs_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Settings_16;
      next_value_of_STATE_VARIABLE_MaybeColorStrs_0_3 = STATE_VARIABLE_MaybeColorStrs_1_34;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_44;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_MaybeColorStrs_0_3 = next_value_of_STATE_VARIABLE_MaybeColorStrs_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
libs__color_schemes__report_why_not_color_3_f_0(
  MR_Word Source_5,
  MR_String Value_6,
  MR_Word WhyNot_7)
{
  MR_Word Spec_8;

  switch (MR_tag((MR_Word) WhyNot_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(WhyNot_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_68;
            MR_Word Pieces_113;

            Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_5, (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[53])));
            Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[30])), Var_68);
            {
              Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140libs.color_schemes.report_why_not_color\'/3"));
              MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Pieces_113));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Pieces_114;

            {
              Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_93, 1) = ((MR_Box) (Value_6));
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[63])));
            }
            {
              Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[23])));
              MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
            }
            Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_5, Var_89);
            Pieces_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[30])), Var_88);
            {
              Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140libs.color_schemes.report_why_not_color\'/3"));
              MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Pieces_114));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Min_9 = ((MR_Integer) ((MR_hl_field(1, WhyNot_7, 0))));
        MR_Integer Max_10 = ((MR_Integer) ((MR_hl_field(1, WhyNot_7, 1))));
        MR_Word Pieces_11;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_31;
        MR_Word Var_32;

        {
          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Value_6));
        }
        {
          Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_27, 1) = ((MR_Box) (Min_9));
        }
        {
          Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_32, 1) = ((MR_Box) (Max_10));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[20])));
        }
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[55])));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[54])));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[23])));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
        }
        Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_5, Var_18);
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[30])), Var_17);
        {
          Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140libs.color_schemes.report_why_not_color\'/3"));
          MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Pieces_11));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Len_12 = ((MR_Integer) ((MR_hl_field(2, WhyNot_7, 0))));
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Pieces_112;

        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (Len_12));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &libs__color_schemes_scalar_common_1[48])));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[46])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &libs__color_schemes_scalar_common_1[23])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Source_5, Var_47);
        Pieces_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_1[30])), Var_46);
        {
          Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140libs.color_schemes.report_why_not_color\'/3"));
          MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Pieces_112));
        }
      }
      break;
  }
  return Spec_8;
}

static MR_Word MR_CALL 
libs__color_schemes__is_string_a_color_spec_1_f_0(
  MR_String Str_3)
{
  MR_bool succeeded;
  MR_Word Result_4;
  MR_Word Color_5;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(Str_3, 0)) {
      case (MR_Integer) 98:
        switch (MR_nth_code_unit(Str_3, 1)) {
          case (MR_Integer) 108:
            switch (MR_nth_code_unit(Str_3, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, Str_3, (MR_String) "black"))
                  case_num_0 = (MR_Integer) 0;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(3, Str_3, (MR_String) "blue"))
                  case_num_0 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 114:
            if (MR_offset_strn_eq(2, 4, Str_3, (MR_String) "bright"))
              switch (MR_nth_code_unit(Str_3, 6)) {
                case (MR_Integer) 32:
                  switch (MR_nth_code_unit(Str_3, 7)) {
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(Str_3, 8)) {
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(Str_3, 9)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(10, Str_3, (MR_String) "bright black"))
                                case_num_0 = (MR_Integer) 2;
                              break;
                            case (MR_Integer) 117:
                              if (MR_offset_streq(10, Str_3, (MR_String) "bright blue"))
                                case_num_0 = (MR_Integer) 3;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright cyan"))
                        case_num_0 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright green"))
                        case_num_0 = (MR_Integer) 5;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright magenta"))
                        case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright red"))
                        case_num_0 = (MR_Integer) 7;
                      break;
                    case (MR_Integer) 119:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright white"))
                        case_num_0 = (MR_Integer) 8;
                      break;
                    case (MR_Integer) 121:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright yellow"))
                        case_num_0 = (MR_Integer) 9;
                      break;
                  }
                  break;
                case (MR_Integer) 45:
                  switch (MR_nth_code_unit(Str_3, 7)) {
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(Str_3, 8)) {
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(Str_3, 9)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(10, Str_3, (MR_String) "bright-black"))
                                case_num_0 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 117:
                              if (MR_offset_streq(10, Str_3, (MR_String) "bright-blue"))
                                case_num_0 = (MR_Integer) 11;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright-cyan"))
                        case_num_0 = (MR_Integer) 12;
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright-green"))
                        case_num_0 = (MR_Integer) 13;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright-magenta"))
                        case_num_0 = (MR_Integer) 14;
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright-red"))
                        case_num_0 = (MR_Integer) 15;
                      break;
                    case (MR_Integer) 119:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright-white"))
                        case_num_0 = (MR_Integer) 16;
                      break;
                    case (MR_Integer) 121:
                      if (MR_offset_streq(8, Str_3, (MR_String) "bright-yellow"))
                        case_num_0 = (MR_Integer) 17;
                      break;
                  }
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 99:
        if (MR_offset_streq(1, Str_3, (MR_String) "cyan"))
          case_num_0 = (MR_Integer) 18;
        break;
      case (MR_Integer) 103:
        switch (MR_nth_code_unit(Str_3, 1)) {
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(Str_3, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, Str_3, (MR_String) "gray"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 101:
                switch (MR_nth_code_unit(Str_3, 3)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, Str_3, (MR_String) "green"))
                      case_num_0 = (MR_Integer) 20;
                    break;
                  case (MR_Integer) 121:
                    if (MR_offset_streq(4, Str_3, (MR_String) "grey"))
                      case_num_0 = (MR_Integer) 21;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 109:
        if (MR_offset_streq(1, Str_3, (MR_String) "magenta"))
          case_num_0 = (MR_Integer) 22;
        break;
      case (MR_Integer) 114:
        if (MR_offset_streq(1, Str_3, (MR_String) "red"))
          case_num_0 = (MR_Integer) 23;
        break;
      case (MR_Integer) 119:
        if (MR_offset_streq(1, Str_3, (MR_String) "white"))
          case_num_0 = (MR_Integer) 24;
        break;
      case (MR_Integer) 121:
        if (MR_offset_streq(1, Str_3, (MR_String) "yellow"))
          case_num_0 = (MR_Integer) 25;
        break;
    }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      Color_5 = ((&libs__color_schemes_vector_common_4[0 + case_num_0]))->libs__color_schemes__vector_common_type_4_0__vct_4_f_0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    {
      Result_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_4, 0) = ((MR_Box) (Color_5));
    }
  else
  {
    MR_String StrAfterHash_6;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "#", Str_3, &StrAfterHash_6);
    if (succeeded)
    {
      MR_Word CharsAfterHash_7;
      MR_Char RH_8;
      MR_Char RL_9;
      MR_Char GH_10;
      MR_Char GL_11;
      MR_Char BH_12;
      MR_Char BL_13;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      mercury__string__to_char_list_2_p_0(StrAfterHash_6, &CharsAfterHash_7);
      succeeded = (CharsAfterHash_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RH_8 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharsAfterHash_7, 0)));
        Var_28 = ((MR_Word) ((MR_hl_field(1, CharsAfterHash_7, 1))));
        succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RL_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_28, 0)));
          Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            GH_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_29, 0)));
            Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GL_11 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_30, 0)));
              Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, 1))));
              succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BH_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_31, 0)));
                Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
                succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BL_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_32, 0)));
                  Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
                  succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Integer ValRH_14;
        MR_Integer ValRL_15;
        MR_Integer ValGH_16;
        MR_Integer ValGL_17;
        MR_Integer ValBH_18;
        MR_Integer ValBL_19;

        succeeded = mercury__char__hex_digit_to_int_2_p_0(RH_8, &ValRH_14);
        if (succeeded)
        {
          succeeded = mercury__char__hex_digit_to_int_2_p_0(RL_9, &ValRL_15);
          if (succeeded)
          {
            succeeded = mercury__char__hex_digit_to_int_2_p_0(GH_10, &ValGH_16);
            if (succeeded)
            {
              succeeded = mercury__char__hex_digit_to_int_2_p_0(GL_11, &ValGL_17);
              if (succeeded)
              {
                succeeded = mercury__char__hex_digit_to_int_2_p_0(BH_12, &ValBH_18);
                if (succeeded)
                  succeeded = mercury__char__hex_digit_to_int_2_p_0(BL_13, &ValBL_19);
              }
            }
          }
        }
        if (succeeded)
        {
          uint8_t ValR_20;
          uint8_t ValG_21;
          uint8_t ValB_22;
          MR_Integer Var_34;
          MR_Integer Var_35 = (MR_Integer) ((MR_Unsigned) ValRH_14 * (MR_Unsigned) 16);
          MR_Integer Var_37;
          MR_Integer Var_38;
          MR_Integer Var_40;
          MR_Integer Var_41;
          MR_Word Color_48;

          Var_34 = (MR_Integer) ((MR_Unsigned) Var_35 + (MR_Unsigned) ValRL_15);
          ValR_20 = mercury__uint8__det_from_int_1_f_0(Var_34);
          Var_38 = (MR_Integer) ((MR_Unsigned) ValGH_16 * (MR_Unsigned) 16);
          Var_37 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) ValGL_17);
          ValG_21 = mercury__uint8__det_from_int_1_f_0(Var_37);
          Var_41 = (MR_Integer) ((MR_Unsigned) ValBH_18 * (MR_Unsigned) 16);
          Var_40 = (MR_Integer) ((MR_Unsigned) Var_41 + (MR_Unsigned) ValBL_19);
          ValB_22 = mercury__uint8__det_from_int_1_f_0(Var_40);
          {
            Color_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Color_48, 0) = ((MR_Box) (MR_Word) (ValR_20));
            MR_hl_field(1, Color_48, 1) = ((MR_Box) (MR_Word) (ValG_21));
            MR_hl_field(1, Color_48, 2) = ((MR_Box) (MR_Word) (ValB_22));
          }
          {
            Result_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_4, 0) = ((MR_Box) (Color_48));
          }
        }
        else
          Result_4 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[2]));
      }
      else
      {
        MR_Integer NumCharsAfterHash_23;
        MR_Word WhyNot_24;

        mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CharsAfterHash_7, &NumCharsAfterHash_23);
        {
          WhyNot_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, WhyNot_24, 0) = ((MR_Box) (NumCharsAfterHash_23));
        }
        {
          Result_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Result_4, 0) = ((MR_Box) (WhyNot_24));
        }
      }
    }
    else
    {
      MR_Integer N_25;

      succeeded = mercury__string__to_int_2_p_0(Str_3, &N_25);
      if (succeeded)
      {
        uint8_t ColorNum_26;

        succeeded = mercury__uint8__from_int_2_p_0(N_25, &ColorNum_26);
        if (succeeded)
        {
          MR_Word Color_52;

          {
            Color_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Color_52, 0) = ((MR_Box) (MR_Word) (ColorNum_26));
          }
          {
            Result_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_4, 0) = ((MR_Box) (Color_52));
          }
        }
        else
          Result_4 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[3]));
      }
      else
        Result_4 = (MR_Word) (MR_mkword(1, &libs__color_schemes_scalar_common_3[4]));
    }
  }
  return Result_4;
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____color_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__color_schemes____Unify____color_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__color_schemes____Compare____color_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__color_schemes____Compare____color_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____color_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__color_schemes____Unify____color_specs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__color_schemes____Compare____color_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__color_schemes____Compare____color_specs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____is_color_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__color_schemes____Unify____is_color_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__color_schemes____Compare____is_color_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__color_schemes____Compare____is_color_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____maybe_color_strings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__color_schemes____Unify____maybe_color_strings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__color_schemes____Compare____maybe_color_strings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__color_schemes____Compare____maybe_color_strings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__color_schemes____Unify____why_not_color_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__color_schemes____Unify____why_not_color_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__color_schemes____Compare____why_not_color_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__color_schemes____Compare____why_not_color_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__color_schemes__init(void)
{
}

void mercury__libs__color_schemes__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__color_schemes__libs__color_schemes__type_ctor_info_color_spec_0);
  MR_register_type_ctor_info(&libs__color_schemes__libs__color_schemes__type_ctor_info_color_specs_0);
  MR_register_type_ctor_info(&libs__color_schemes__libs__color_schemes__type_ctor_info_is_color_result_0);
  MR_register_type_ctor_info(&libs__color_schemes__libs__color_schemes__type_ctor_info_maybe_color_strings_0);
  MR_register_type_ctor_info(&libs__color_schemes__libs__color_schemes__type_ctor_info_why_not_color_0);
}

void mercury__libs__color_schemes__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__color_schemes__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.color_schemes.
