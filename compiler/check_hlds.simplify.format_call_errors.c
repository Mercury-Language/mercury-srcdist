/*
** Automatically generated from `format_call_errors.m'
** by the Mercury compiler,
** version rotd-2024-05-28
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


// :- module check_hlds.simplify.format_call_errors.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__format_call_errors__init
ENDINIT
*/

#include "check_hlds.simplify.format_call_errors.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0[2];

static const MR_Integer check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__functor_number_map_maybe_warn_unknown_format_0[2];

static MR_Box MR_CALL 
check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0(
  MR_Word Error_3);

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__IntroducedFrom__func__string_format_error_to_pieces__226__1_1_f_0(
  MR_String LambdaHeadVar__1_166);

static void MR_CALL 
check_hlds__simplify__format_call_errors__acceptable_specifier_chars_for_poly_kind_msg_4_p_0(
  MR_Word Kind_5,
  MR_String * ValDesc_6,
  MR_String * HeadSpec_7,
  MR_Word * TailSpecs_8);

static void MR_CALL 
check_hlds__simplify__format_call_errors__poly_kind_desc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_String * HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__specifier_char_pieces_1_f_0(
  MR_Char SpecChar_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_1[110][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_2[3][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_6[2][3];


struct check_hlds__simplify__format_call_errors__vector_common_type_3_0_s {
  const MR_String check_hlds__simplify__format_call_errors__vector_common_type_3_0__vct_3_f_0;
  const MR_String check_hlds__simplify__format_call_errors__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct check_hlds__simplify__format_call_errors__vector_common_type_3_0_s check_hlds__simplify__format_call_errors_vector_common_3[13];

struct check_hlds__simplify__format_call_errors__vector_common_type_4_0_s {
  const MR_String check_hlds__simplify__format_call_errors__vector_common_type_4_0__vct_4_f_0;
  const MR_String check_hlds__simplify__format_call_errors__vector_common_type_4_0__vct_4_f_1;
  const MR_Word check_hlds__simplify__format_call_errors__vector_common_type_4_0__vct_4_f_2;
};

static /* final */ const struct check_hlds__simplify__format_call_errors__vector_common_type_4_0_s check_hlds__simplify__format_call_errors_vector_common_4[13];



static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_1[110][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unknown format string"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be formatted"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unknown list of values"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "when considering the"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "entry in its"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which places the format string as the"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument, and"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the values list as the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match the list of values to be formatted"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[8])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the format string"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "extra"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There is no"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "conversion specifier,"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but there is"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "input."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but there are"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "inputs."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "conversion specifier"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "says the"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "precision"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a runtime input,"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "there is no next input."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "width"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which uses"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "missing its input."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is missing,"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "along with"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "its input."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is missing."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "there are"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "extra inputs."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the next input is"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not an"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "integer."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "uses the"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unknown"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "uses the specifier character"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the corresponding input is"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The only specifier applicable to"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The specifiers applicable to"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specifier character"))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_String) "%G")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_String) "%g")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) "%E")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_String) "%e")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "%p")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) "%u")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "%X")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "%x")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "%o")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "%i")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[51])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[51])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[108])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0)),
    ((MR_Box) (&check_hlds__simplify__format_call_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_errors_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_errors_scalar_common_5[1])),
    ((MR_Box) (check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__simplify__format_call_errors__vector_common_type_3_0_s check_hlds__simplify__format_call_errors_vector_common_3[13] = {
  /* row   0 */
  {
    (MR_String) "a",
    (MR_String) "character"
  },
  /* row   1 */
  {
    (MR_String) "a",
    (MR_String) "string"
  },
  /* row   2 */
  {
    (MR_String) "an",
    (MR_String) "integer"
  },
  /* row   3 */
  {
    (MR_String) "an",
    (MR_String) "8-bit integer"
  },
  /* row   4 */
  {
    (MR_String) "a",
    (MR_String) "16-bit integer"
  },
  /* row   5 */
  {
    (MR_String) "a",
    (MR_String) "32-bit integer"
  },
  /* row   6 */
  {
    (MR_String) "a",
    (MR_String) "64-bit integer"
  },
  /* row   7 */
  {
    (MR_String) "an",
    (MR_String) "unsigned integer"
  },
  /* row   8 */
  {
    (MR_String) "an",
    (MR_String) "8-bit unsigned integer"
  },
  /* row   9 */
  {
    (MR_String) "a",
    (MR_String) "16-bit unsigned integer"
  },
  /* row  10 */
  {
    (MR_String) "a",
    (MR_String) "32-bit unsigned integer"
  },
  /* row  11 */
  {
    (MR_String) "a",
    (MR_String) "64-bit unsigned integer"
  },
  /* row  12 */
  {
    (MR_String) "a",
    (MR_String) "float"
  },
};

static /* final */ const struct check_hlds__simplify__format_call_errors__vector_common_type_4_0_s check_hlds__simplify__format_call_errors_vector_common_4[13] = {
  /* row   0 */
  {
    (MR_String) "characters",
    (MR_String) "%c",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_String) "strings",
    (MR_String) "%s",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_String) "ints",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[105]))
  },
  /* row   3 */
  {
    (MR_String) "int8s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[105]))
  },
  /* row   4 */
  {
    (MR_String) "int16s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[105]))
  },
  /* row   5 */
  {
    (MR_String) "int32s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[105]))
  },
  /* row   6 */
  {
    (MR_String) "int64s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[105]))
  },
  /* row   7 */
  {
    (MR_String) "uints",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[103]))
  },
  /* row   8 */
  {
    (MR_String) "uint8s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[103]))
  },
  /* row   9 */
  {
    (MR_String) "uint16s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[103]))
  },
  /* row  10 */
  {
    (MR_String) "uint32s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[103]))
  },
  /* row  11 */
  {
    (MR_String) "uint64s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[103]))
  },
  /* row  12 */
  {
    (MR_String) "floats",
    (MR_String) "%f",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[99]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0 = {
  (MR_String) "do_not_warn_unknown_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1 = {
  (MR_String) "warn_unknown_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0[2] = {
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0,
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0[2] = {
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0,
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1
};

static const MR_Integer check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__functor_number_map_maybe_warn_unknown_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__type_ctor_info_maybe_warn_unknown_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call_errors",
  (MR_String) "maybe_warn_unknown_format",
  { check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0 },
  { check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__functor_number_map_maybe_warn_unknown_format_0,

};

void MR_CALL 
check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  conv0_Pieces_4 = check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word MaybePos_10,
  MR_Word HeadError_11,
  MR_Word TailErrors_12,
  MR_Word Context_13)
{
  MR_Word Specs_14;
  MR_Word Globals_15;
  MR_Word WarnKnownBadFormatCalls_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 46, &WarnKnownBadFormatCalls_16);
  switch (WarnKnownBadFormatCalls_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameDotPieces_17;
        MR_Word WarnOnlyOneFormatStringError_21;
        MR_Word ErrorPieces_22;
        MR_Word Pieces_24;
        MR_Word Spec_26;
        MR_Word Var_88;
        MR_Word Var_89;

        if ((MaybePos_10 == (MR_Word) ((MR_Unsigned) 0U)))
          PredNameDotPieces_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])), PredId_9);
        else
        {
          MR_Integer Pos_18;
          MR_Integer ArgNumFS_19;
          MR_Integer ArgNumVL_20;
          MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(1, MaybePos_10, (MR_Integer) 0))));
          MR_Word Var_36;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_67;

          Pos_18 = ((MR_Integer) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
          ArgNumFS_19 = ((MR_Integer) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
          ArgNumVL_20 = ((MR_Integer) ((MR_hl_field(0, Var_35, (MR_Integer) 2))));
          Var_36 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_9);
          {
            Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_45, 1) = ((MR_Box) (Pos_18));
          }
          {
            Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_59, 1) = ((MR_Box) (ArgNumFS_19));
          }
          {
            Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_67, 1) = ((MR_Box) (ArgNumVL_20));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[22])));
          }
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[20])));
            MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[19])));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[18])));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[17])));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[16])));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[15])));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[14])));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
          }
          PredNameDotPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_41);
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 47, &WarnOnlyOneFormatStringError_21);
        switch (WarnOnlyOneFormatStringError_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ErrorPiecesLists_23;
              MR_Word Var_77;

              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (HeadError_11));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (TailErrors_12));
              }
              ErrorPiecesLists_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), (MR_Word) (&check_hlds__simplify__format_call_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__format_call_errors_scalar_common_6[1]), Var_77);
              mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorPiecesLists_23, &ErrorPieces_22);
            }
            break;
          case (MR_Integer) 1:
            ErrorPieces_22 = check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0(HeadError_11);
            break;
        }
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])), ErrorPieces_22);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_17, Var_89);
        Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[26])), Var_88);
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.format_call_errors.report_format_mismatch\'/6"));
          MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_26, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[1])));
          MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_13));
          MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_24));
        }
        {
          Specs_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_14, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(1, Specs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_14;
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_167;

  conv0_LambdaHeadVar__2_167 = check_hlds__simplify__format_call_errors__IntroducedFrom__func__string_format_error_to_pieces__226__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_167));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__string_format_error_to_pieces_1_f_0(
  MR_Word Error_3)
{
  MR_bool succeeded;
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Error_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer SpecNum_5 = ((MR_Integer) ((MR_hl_field(0, Error_3, (MR_Integer) 0))));
        MR_Integer NumExtraPolyTypes_6 = ((MR_Integer) ((MR_hl_field(0, Error_3, (MR_Integer) 1))));
        MR_Word Pieces0_7;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_31, 1) = ((MR_Box) (SpecNum_5));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
        }
        Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
        Pieces0_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_29);
        succeeded = (NumExtraPolyTypes_6 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_42;
          MR_Word Var_47;
          MR_Word Var_48;

          Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[66])));
          Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[70])));
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
          Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[68])), Var_47);
          Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
          Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_7, Var_36);
        }
        else
        {
          succeeded = (NumExtraPolyTypes_6 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word Var_56;
            MR_Word Var_57;

            Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[72])));
            Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_7, Var_56);
          }
          else
          {
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_71;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Integer Var_83;

            Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[66])));
            Var_83 = (MR_Integer) ((MR_Unsigned) NumExtraPolyTypes_6 - (MR_Unsigned) 1);
            {
              Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_83));
            }
            {
              Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
              MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[77])));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[75])));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
            }
            Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_78);
            Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[74])), Var_76);
            Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_71);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_7, Var_65);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Char SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(1, Error_3, (MR_Integer) 1)));
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_104;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Integer SpecNum_381 = ((MR_Integer) ((MR_hl_field(1, Error_3, (MR_Integer) 0))));

        {
          Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_99, 1) = ((MR_Box) (SpecNum_381));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
        }
        Var_97 = parse_tree__error_spec__color_as_subject_1_f_0(Var_98);
        Var_117 = check_hlds__simplify__format_call_errors__specifier_char_pieces_1_f_0(SpecChar_8);
        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])));
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[86])), Var_116);
        Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_111);
        Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
        Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[84])), Var_109);
        Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_104);
        Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_96);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PolyKind_9 = ((MR_Unsigned) ((MR_hl_field(2, Error_3, (MR_Integer) 2))) & (MR_Integer) 15);
        MR_String SpecCharStr_10;
        MR_String AAn_11;
        MR_String PolyKindDesc_12;
        MR_String ValDesc_13;
        MR_String HeadSpec_14;
        MR_Word TailSpecs_15;
        MR_Word HeadSpecPiece_18;
        MR_Word TailSpecPieces_19;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_137;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Integer SpecNum_383 = ((MR_Integer) ((MR_hl_field(2, Error_3, (MR_Integer) 0))));
        MR_Word Pieces0_384;
        MR_Char SpecChar_385 = ((MR_Char) (MR_Word) (MR_hl_field(2, Error_3, (MR_Integer) 1)));

        SpecCharStr_10 = mercury__string__char_to_string_1_f_0(SpecChar_385);
        check_hlds__simplify__format_call_errors__poly_kind_desc_3_p_0(PolyKind_9, &AAn_11, &PolyKindDesc_12);
        {
          Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_132, 1) = ((MR_Box) (SpecNum_383));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
        }
        Var_130 = parse_tree__error_spec__color_as_subject_1_f_0(Var_131);
        {
          Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_145, 1) = ((MR_Box) (SpecCharStr_10));
        }
        {
          Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
          MR_hl_field(1, Var_144, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[56])));
        }
        Var_143 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Var_144);
        {
          Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_155, 1) = ((MR_Box) (AAn_11));
        }
        {
          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
          MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_151, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[89])));
          MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
        }
        {
          Var_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_159, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_159, 1) = ((MR_Box) (PolyKindDesc_12));
        }
        {
          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_158, 0) = ((MR_Box) (Var_159));
          MR_hl_field(1, Var_158, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[90])));
        }
        Var_157 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Var_158);
        Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, Var_157);
        Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, Var_150);
        Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[88])), Var_142);
        Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, Var_137);
        Pieces0_384 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_129);
        check_hlds__simplify__format_call_errors__acceptable_specifier_chars_for_poly_kind_msg_4_p_0(PolyKind_9, &ValDesc_13, &HeadSpec_14, &TailSpecs_15);
        HeadSpecPiece_18 = check_hlds__simplify__format_call_errors__IntroducedFrom__func__string_format_error_to_pieces__226__1_1_f_0(HeadSpec_14);
        TailSpecPieces_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__simplify__format_call_errors_scalar_common_6[0]), TailSpecs_15);
        if ((TailSpecPieces_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;

          {
            Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_173, 1) = ((MR_Box) (ValDesc_13));
          }
          {
            Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
            MR_hl_field(1, Var_172, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[61])));
          }
          {
            Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[91])));
            MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
          }
          {
            Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_180, 0) = ((MR_Box) (HeadSpecPiece_18));
            MR_hl_field(1, Var_180, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])));
          }
          Var_179 = parse_tree__error_spec__color_as_correct_1_f_0(Var_180);
          Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
          Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, Var_178);
          Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_384, Var_168);
        }
        else
        {
          MR_Word TailSpecsPieces_22;
          MR_Word Var_195;
          MR_Word Var_196;
          MR_Word Var_199;
          MR_Word Var_200;
          MR_Word Var_205;

          TailSpecsPieces_22 = parse_tree__error_spec__component_list_to_color_pieces_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[2])), (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])), TailSpecPieces_19);
          {
            Var_200 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_200, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_200, 1) = ((MR_Box) (ValDesc_13));
          }
          {
            Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_199, 0) = ((MR_Box) (Var_200));
            MR_hl_field(1, Var_199, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[94])));
          }
          {
            Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_196, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[92])));
            MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_199));
          }
          Var_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TailSpecsPieces_22, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
          Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, Var_205);
          Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_384, Var_195);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_213;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Word Var_216;
            MR_Word Var_224;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;
            MR_Word Var_239;
            MR_Word Var_240;
            MR_Integer SpecNum_386 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Char SpecChar_387 = ((MR_Char) (MR_Word) (MR_hl_field(3, Error_3, (MR_Integer) 2)));

            {
              Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_216, 1) = ((MR_Box) (SpecNum_386));
            }
            {
              Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
              MR_hl_field(1, Var_215, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[57])));
            }
            Var_214 = parse_tree__error_spec__color_as_subject_1_f_0(Var_215);
            Var_230 = check_hlds__simplify__format_call_errors__specifier_char_pieces_1_f_0(SpecChar_387);
            Var_240 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[64])));
            Var_239 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_240, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Var_231 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[62])), Var_239);
            Var_229 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_230, Var_231);
            Var_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[59])), Var_229);
            Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_214, Var_224);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_213);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_442;
            MR_Word Var_443;
            MR_Word Var_444;
            MR_Word Var_445;
            MR_Word Var_450;
            MR_Word Var_451;
            MR_Word Var_454;
            MR_Word Var_456;
            MR_Word Var_459;
            MR_Word Var_462;
            MR_Word Var_463;
            MR_Word Var_465;
            MR_Word Var_466;
            MR_Word Var_467;
            MR_Word Var_468;
            MR_Word Var_473;
            MR_Word Var_478;
            MR_Word Var_479;
            MR_Integer SpecNum_487 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Word PolyKind_488 = ((MR_Unsigned) ((MR_hl_field(3, Error_3, (MR_Integer) 2))) & (MR_Integer) 15);
            MR_String AAn_489;
            MR_String PolyKindDesc_490;

            check_hlds__simplify__format_call_errors__poly_kind_desc_3_p_0(PolyKind_488, &AAn_489, &PolyKindDesc_490);
            {
              Var_445 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_445, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_445, 1) = ((MR_Box) (SpecNum_487));
            }
            {
              Var_444 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_444, 0) = ((MR_Box) (Var_445));
              MR_hl_field(1, Var_444, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
            }
            Var_443 = parse_tree__error_spec__color_as_subject_1_f_0(Var_444);
            {
              Var_463 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_463, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_463, 1) = ((MR_Box) (AAn_489));
            }
            {
              Var_462 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_462, 0) = ((MR_Box) (Var_463));
              MR_hl_field(1, Var_462, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_459 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_459, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[78])));
              MR_hl_field(1, Var_459, 1) = ((MR_Box) (Var_462));
            }
            {
              Var_456 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_456, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[50])));
              MR_hl_field(1, Var_456, 1) = ((MR_Box) (Var_459));
            }
            {
              Var_454 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_454, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[54])));
              MR_hl_field(1, Var_454, 1) = ((MR_Box) (Var_456));
            }
            {
              Var_451 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_451, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[46])));
              MR_hl_field(1, Var_451, 1) = ((MR_Box) (Var_454));
            }
            {
              Var_468 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_468, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_468, 1) = ((MR_Box) (PolyKindDesc_490));
            }
            {
              Var_467 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_467, 0) = ((MR_Box) (Var_468));
              MR_hl_field(1, Var_467, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[56])));
            }
            Var_466 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_467);
            Var_479 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[82])));
            Var_478 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_479, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Var_473 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[80])), Var_478);
            Var_465 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_466, Var_473);
            Var_450 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_451, Var_465);
            Var_442 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_443, Var_450);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_442);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_410;
            MR_Word Var_411;
            MR_Word Var_412;
            MR_Word Var_413;
            MR_Word Var_418;
            MR_Word Var_425;
            MR_Word Var_426;
            MR_Integer SpecNum_434 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));

            {
              Var_413 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_413, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_413, 1) = ((MR_Box) (SpecNum_434));
            }
            {
              Var_412 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_412, 0) = ((MR_Box) (Var_413));
              MR_hl_field(1, Var_412, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
            }
            Var_411 = parse_tree__error_spec__color_as_subject_1_f_0(Var_412);
            Var_426 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[53])));
            Var_425 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_426, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Var_418 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[109])), Var_425);
            Var_410 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_411, Var_418);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_410);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_252;
            MR_Word Var_253;
            MR_Word Var_254;
            MR_Word Var_255;
            MR_Word Var_260;
            MR_Word Var_261;
            MR_Word Var_264;
            MR_Word Var_266;
            MR_Word Var_269;
            MR_Word Var_272;
            MR_Word Var_273;
            MR_Word Var_275;
            MR_Word Var_276;
            MR_Word Var_277;
            MR_Word Var_278;
            MR_Word Var_283;
            MR_Word Var_288;
            MR_Word Var_289;
            MR_Integer SpecNum_388 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Word PolyKind_389 = ((MR_Unsigned) ((MR_hl_field(3, Error_3, (MR_Integer) 2))) & (MR_Integer) 15);
            MR_String AAn_390;
            MR_String PolyKindDesc_391;

            check_hlds__simplify__format_call_errors__poly_kind_desc_3_p_0(PolyKind_389, &AAn_390, &PolyKindDesc_391);
            {
              Var_255 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_255, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_255, 1) = ((MR_Box) (SpecNum_388));
            }
            {
              Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_254, 0) = ((MR_Box) (Var_255));
              MR_hl_field(1, Var_254, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
            }
            Var_253 = parse_tree__error_spec__color_as_subject_1_f_0(Var_254);
            {
              Var_273 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_273, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_273, 1) = ((MR_Box) (AAn_390));
            }
            {
              Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_272, 0) = ((MR_Box) (Var_273));
              MR_hl_field(1, Var_272, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_269, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[78])));
              MR_hl_field(1, Var_269, 1) = ((MR_Box) (Var_272));
            }
            {
              Var_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_266, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[50])));
              MR_hl_field(1, Var_266, 1) = ((MR_Box) (Var_269));
            }
            {
              Var_264 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_264, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[47])));
              MR_hl_field(1, Var_264, 1) = ((MR_Box) (Var_266));
            }
            {
              Var_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_261, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[46])));
              MR_hl_field(1, Var_261, 1) = ((MR_Box) (Var_264));
            }
            {
              Var_278 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_278, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_278, 1) = ((MR_Box) (PolyKindDesc_391));
            }
            {
              Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_277, 0) = ((MR_Box) (Var_278));
              MR_hl_field(1, Var_277, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[56])));
            }
            Var_276 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_277);
            Var_289 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[82])));
            Var_288 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_289, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[80])), Var_288);
            Var_275 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_276, Var_283);
            Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_261, Var_275);
            Var_252 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_253, Var_260);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_252);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_301;
            MR_Word Var_302;
            MR_Word Var_303;
            MR_Word Var_304;
            MR_Word Var_309;
            MR_Word Var_322;
            MR_Word Var_323;
            MR_Integer SpecNum_392 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));

            {
              Var_304 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_304, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_304, 1) = ((MR_Box) (SpecNum_392));
            }
            {
              Var_303 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_303, 0) = ((MR_Box) (Var_304));
              MR_hl_field(1, Var_303, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[45])));
            }
            Var_302 = parse_tree__error_spec__color_as_subject_1_f_0(Var_303);
            Var_323 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[53])));
            Var_322 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_323, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
            Var_309 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[107])), Var_322);
            Var_301 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_302, Var_309);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[43])), Var_301);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Extra_24;
            MR_Word Var_336;
            MR_Word Var_337;
            MR_Integer SpecNum_394 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Integer NumExtraPolyTypes_395 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 2))));
            MR_Word Pieces0_396;

            succeeded = (SpecNum_394 == (MR_Integer) 1);
            if (succeeded)
              Extra_24 = (MR_Word) ((MR_Unsigned) 0U);
            else
              Extra_24 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[28]));
            {
              Var_337 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_337, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_337, 1) = ((MR_Box) (SpecNum_394));
            }
            {
              Var_336 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_336, 0) = ((MR_Box) (Var_337));
              MR_hl_field(1, Var_336, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[31])));
            }
            {
              Pieces0_396 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces0_396, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[29])));
              MR_hl_field(1, Pieces0_396, 1) = ((MR_Box) (Var_336));
            }
            succeeded = (NumExtraPolyTypes_395 == (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word Var_342;
              MR_Word Var_347;
              MR_Word Var_348;
              MR_Word Var_349;
              MR_Word Var_354;

              Var_354 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Extra_24, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[37])));
              Var_349 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[35])), Var_354);
              Var_348 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_349);
              Var_347 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_348, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
              Var_342 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[33])), Var_347);
              Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_396, Var_342);
            }
            else
            {
              MR_Word Var_362;
              MR_Word Var_367;
              MR_Word Var_368;
              MR_Word Var_369;
              MR_Word Var_370;
              MR_Word Var_371;
              MR_Word Var_373;

              {
                Var_371 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_371, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_371, 1) = ((MR_Box) (NumExtraPolyTypes_395));
              }
              {
                Var_370 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_370, 0) = ((MR_Box) (Var_371));
                MR_hl_field(1, Var_370, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_373 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Extra_24, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[41])));
              Var_369 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_370, Var_373);
              Var_368 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_369);
              Var_367 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_368, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
              Var_362 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[39])), Var_367);
              Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_396, Var_362);
            }
          }
          break;
      }
      break;
  }
  return Pieces_4;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__IntroducedFrom__func__string_format_error_to_pieces__226__1_1_f_0(
  MR_String LambdaHeadVar__1_166)
{
  MR_Word LambdaHeadVar__2_167;

  {
    LambdaHeadVar__2_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_167, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaHeadVar__2_167, 1) = ((MR_Box) (LambdaHeadVar__1_166));
  }
  return LambdaHeadVar__2_167;
}

static void MR_CALL 
check_hlds__simplify__format_call_errors__acceptable_specifier_chars_for_poly_kind_msg_4_p_0(
  MR_Word Kind_5,
  MR_String * ValDesc_6,
  MR_String * HeadSpec_7,
  MR_Word * TailSpecs_8)
{
  *ValDesc_6 = ((&check_hlds__simplify__format_call_errors_vector_common_4[0 + Kind_5]))->check_hlds__simplify__format_call_errors__vector_common_type_4_0__vct_4_f_0;
  *HeadSpec_7 = ((&check_hlds__simplify__format_call_errors_vector_common_4[0 + Kind_5]))->check_hlds__simplify__format_call_errors__vector_common_type_4_0__vct_4_f_1;
  *TailSpecs_8 = ((&check_hlds__simplify__format_call_errors_vector_common_4[0 + Kind_5]))->check_hlds__simplify__format_call_errors__vector_common_type_4_0__vct_4_f_2;
}

static void MR_CALL 
check_hlds__simplify__format_call_errors__poly_kind_desc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  *HeadVar__2_2 = ((&check_hlds__simplify__format_call_errors_vector_common_3[0 + HeadVar__1_1]))->check_hlds__simplify__format_call_errors__vector_common_type_3_0__vct_3_f_0;
  *HeadVar__3_3 = ((&check_hlds__simplify__format_call_errors_vector_common_3[0 + HeadVar__1_1]))->check_hlds__simplify__format_call_errors__vector_common_type_3_0__vct_3_f_1;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__specifier_char_pieces_1_f_0(
  MR_Char SpecChar_3)
{
  MR_Word Pieces_4;
  MR_String SpecCharStr_5;
  MR_Word Var_8;
  MR_Word Var_9;

  SpecCharStr_5 = mercury__string__char_to_string_1_f_0(SpecChar_3);
  {
    Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_9, 1) = ((MR_Box) (SpecCharStr_5));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Pieces_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[95])));
    MR_hl_field(1, Pieces_4, 1) = ((MR_Box) (Var_8));
  }
  return Pieces_4;
}

MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__report_unknown_format_values_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word WarnUnknownFormat_8,
  MR_Word Context_9)
{
  MR_Word Specs_10;

  switch (WarnUnknownFormat_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameDotPieces_11;
        MR_Word Pieces_12;
        MR_Word Spec_14;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_35;
        MR_Word Var_40;

        PredNameDotPieces_11 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])), PredId_7);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[13])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[8])), Var_40);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_35);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[4])), Var_26);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.format_call_errors.report_unknown_format_values\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[1])));
          MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
          MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Specs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_10, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(1, Specs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_10;
}

MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__report_unknown_format_string_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word WarnUnknownFormat_8,
  MR_Word Context_9)
{
  MR_Word Specs_10;

  switch (WarnUnknownFormat_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameDotPieces_11;
        MR_Word Pieces_12;
        MR_Word Spec_14;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_32;
        MR_Word Var_37;

        PredNameDotPieces_11 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[2])), PredId_7);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[6])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[9])));
        Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[8])), Var_37);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_32);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[4])), Var_26);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.format_call_errors.report_unknown_format_string\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[1])));
          MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
          MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Specs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_10, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(1, Specs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_10;
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__format_call_errors__init(void)
{
}

void mercury__check_hlds__simplify__format_call_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__type_ctor_info_maybe_warn_unknown_format_0);
}

void mercury__check_hlds__simplify__format_call_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__format_call_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.format_call_errors.
