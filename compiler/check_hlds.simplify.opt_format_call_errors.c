/*
** Automatically generated from `opt_format_call_errors.m'
** by the Mercury compiler,
** version rotd-2026-07-19
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


// :- module check_hlds.simplify.opt_format_call_errors.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__opt_format_call_errors__init
ENDINIT
*/

#include "check_hlds.simplify.opt_format_call_errors.mih"


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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__opt_format_call_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_EnumFunctorDesc check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0[2];

static const MR_Integer check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__functor_number_map_maybe_warn_unknown_format_0[2];

static MR_Box MR_CALL 
check_hlds__simplify__opt_format_call_errors__report_format_mismatch_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__simplify__opt_format_call_errors__string_format_error_to_pieces_1_f_0(
  MR_Word Error_3);

static void MR_CALL 
check_hlds__simplify__opt_format_call_errors__acceptable_specifier_chars_for_poly_kind_msg_4_p_0(
  MR_Word Kind_5,
  MR_String * ValDesc_6,
  MR_String * HeadSpec_7,
  MR_Word * TailSpecs_8);

static void MR_CALL 
check_hlds__simplify__opt_format_call_errors__poly_kind_desc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_String * HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__simplify__opt_format_call_errors__specifier_char_pieces_1_f_0(
  MR_Char SpecChar_3);

static MR_bool MR_CALL 
check_hlds__simplify__opt_format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__opt_format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_1[112][2];

static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_2[4][1];

static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_6[1][3];


struct check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0_s {
  const MR_String check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0__vct_3_f_0;
  const MR_String check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0_s check_hlds__simplify__opt_format_call_errors_vector_common_3[13];

struct check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0_s {
  const MR_String check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0__vct_4_f_0;
  const MR_String check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0__vct_4_f_1;
  const MR_Word check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0__vct_4_f_2;
};

static /* final */ const struct check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0_s check_hlds__simplify__opt_format_call_errors_vector_common_4[13];



static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_1[112][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown format string"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be formatted"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown list of values"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "when considering the"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "entry in its"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which places the format string as the"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument, and"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the values list as the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the format string"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not match"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the list of values to be formatted"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[8])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "extra"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "There is no"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conversion specifier,"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but there is"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "input."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but there are"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inputs."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conversion specifier"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "says the"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a runtime input,"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there is no next input."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which uses"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "missing its input."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is missing,"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "along with"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "its input."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is missing."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there are"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "extra inputs."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the next input is"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not an"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "integer."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses the"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "uses the specifier character"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the corresponding input is"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The only specifier applicable to"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The specifiers applicable to"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) "%E")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_String) "%e")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "%p")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) "%u")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "%X")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "%x")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "%o")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "%i")),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "precision"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[52])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "width"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[52])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[110])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 235U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 190U) },
};

static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0)),
    ((MR_Box) (&check_hlds__simplify__opt_format_call_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__opt_format_call_errors_scalar_common_6[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__simplify__opt_format_call_errors_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__opt_format_call_errors__report_format_mismatch_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0_s check_hlds__simplify__opt_format_call_errors_vector_common_3[13] = {
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

static /* final */ const struct check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0_s check_hlds__simplify__opt_format_call_errors_vector_common_4[13] = {
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
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[105]))
  },
  /* row   3 */
  {
    (MR_String) "int8s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[105]))
  },
  /* row   4 */
  {
    (MR_String) "int16s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[105]))
  },
  /* row   5 */
  {
    (MR_String) "int32s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[105]))
  },
  /* row   6 */
  {
    (MR_String) "int64s",
    (MR_String) "%d",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[105]))
  },
  /* row   7 */
  {
    (MR_String) "uints",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[103]))
  },
  /* row   8 */
  {
    (MR_String) "uint8s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[103]))
  },
  /* row   9 */
  {
    (MR_String) "uint16s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[103]))
  },
  /* row  10 */
  {
    (MR_String) "uint32s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[103]))
  },
  /* row  11 */
  {
    (MR_String) "uint64s",
    (MR_String) "%o",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[103]))
  },
  /* row  12 */
  {
    (MR_String) "floats",
    (MR_String) "%f",
    (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[99]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__opt_format_call_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_EnumFunctorDesc check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0 = {
  (MR_String) "do_not_warn_unknown_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1 = {
  (MR_String) "warn_unknown_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0[2] = {
  &check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0,
  &check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0[2] = {
  &check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0,
  &check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1
};

static const MR_Integer check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__functor_number_map_maybe_warn_unknown_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__type_ctor_info_maybe_warn_unknown_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__opt_format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__opt_format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001)),
  (MR_String) "check_hlds.simplify.opt_format_call_errors",
  (MR_String) "maybe_warn_unknown_format",
  { check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0 },
  { check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__functor_number_map_maybe_warn_unknown_format_0,

};

void MR_CALL 
check_hlds__simplify__opt_format_call_errors____Compare____maybe_warn_unknown_format_0_0(
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
check_hlds__simplify__opt_format_call_errors____Unify____maybe_warn_unknown_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__simplify__opt_format_call_errors__report_format_mismatch_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  conv0_Pieces_4 = check_hlds__simplify__opt_format_call_errors__string_format_error_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__simplify__opt_format_call_errors__report_format_mismatch_6_f_0(
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
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 190, &WarnKnownBadFormatCalls_16);
  switch (WarnKnownBadFormatCalls_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameDotPieces_17;
        MR_Word WarnAllFormatStringErrors_21;
        MR_Word ErrorPieces_22;
        MR_Word Pieces_24;
        MR_Word Spec_27;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_89;
        MR_Word Var_97;
        MR_Word Var_98;

        if ((MaybePos_10 == (MR_Word) ((MR_Unsigned) 0U)))
          PredNameDotPieces_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])), PredId_9);
        else
        {
          MR_Integer Pos_18;
          MR_Integer ArgNumFS_19;
          MR_Integer ArgNumVL_20;
          MR_Tuple Var_36 = ((MR_Tuple) ((MR_hl_field(1, MaybePos_10, 0))));
          MR_Word Var_37;
          MR_Word Var_42;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_53;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;

          Pos_18 = ((MR_Integer) ((MR_hl_field(0, Var_36, 0))));
          ArgNumFS_19 = ((MR_Integer) ((MR_hl_field(0, Var_36, 1))));
          ArgNumVL_20 = ((MR_Integer) ((MR_hl_field(0, Var_36, 2))));
          Var_37 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_9);
          {
            Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_46, 1) = ((MR_Box) (Pos_18));
          }
          {
            Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_60, 1) = ((MR_Box) (ArgNumFS_19));
          }
          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_68, 1) = ((MR_Box) (ArgNumVL_20));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[22])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[20])));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[19])));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[18])));
            MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[17])));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[16])));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[15])));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[14])));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
          }
          PredNameDotPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 247, &WarnAllFormatStringErrors_21);
        switch (WarnAllFormatStringErrors_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ErrorPieces_22 = check_hlds__simplify__opt_format_call_errors__string_format_error_to_pieces_1_f_0(HeadError_11);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ErrorPiecesLists_23;
              MR_Word Var_78;

              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) (HeadError_11));
                MR_hl_field(1, Var_78, 1) = ((MR_Box) (TailErrors_12));
              }
              ErrorPiecesLists_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), (MR_Word) (&check_hlds__simplify__opt_format_call_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__opt_format_call_errors_scalar_common_6[0]), Var_78);
              mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorPiecesLists_23, &ErrorPieces_22);
            }
            break;
        }
        Var_84 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[26])));
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])), ErrorPieces_22);
        Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_17, Var_98);
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[28])), Var_97);
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_89);
        Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[24])), Var_83);
        {
          Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.opt_format_call_errors.report_format_mismatch\'/6"));
          MR_hl_field(0, Spec_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[3])));
          MR_hl_field(0, Spec_27, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[1])));
          MR_hl_field(0, Spec_27, 3) = ((MR_Box) (Context_13));
          MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_24));
        }
        {
          Specs_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_14, 0) = ((MR_Box) (Spec_27));
          MR_hl_field(1, Specs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_14;
}

static MR_Word MR_CALL 
check_hlds__simplify__opt_format_call_errors__string_format_error_to_pieces_1_f_0(
  MR_Word Error_3)
{
  MR_bool succeeded;
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Error_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer SpecNum_5 = ((MR_Integer) ((MR_hl_field(0, Error_3, 0))));
        MR_Integer NumExtraPolyTypes_6 = ((MR_Integer) ((MR_hl_field(0, Error_3, 1))));
        MR_Word Pieces0_7;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_26, 1) = ((MR_Box) (SpecNum_5));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
        }
        Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
        Pieces0_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_24);
        succeeded = (NumExtraPolyTypes_6 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_37;
          MR_Word Var_42;
          MR_Word Var_43;

          Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[66])));
          Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[70])));
          Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
          Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[68])), Var_42);
          Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_37);
          Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_7, Var_31);
        }
        else
        {
          succeeded = (NumExtraPolyTypes_6 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word Var_51;
            MR_Word Var_52;

            Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[72])));
            Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_7, Var_51);
          }
          else
          {
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_66;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Integer Var_78;

            Var_61 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[66])));
            Var_78 = (MR_Integer) ((MR_Unsigned) NumExtraPolyTypes_6 - (MR_Unsigned) 1);
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[77])));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[75])));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
            }
            Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_73);
            Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[74])), Var_71);
            Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_66);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_7, Var_60);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Char SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(1, Error_3, 1)));
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_99;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Integer SpecNum_376 = ((MR_Integer) ((MR_hl_field(1, Error_3, 0))));

        {
          Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_94, 1) = ((MR_Box) (SpecNum_376));
        }
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
        }
        Var_92 = parse_tree__error_spec__color_as_subject_1_f_0(Var_93);
        Var_112 = check_hlds__simplify__opt_format_call_errors__specifier_char_pieces_1_f_0(SpecChar_8);
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])));
        Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[86])), Var_111);
        Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_106);
        Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
        Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[84])), Var_104);
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_99);
        Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_91);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PolyKind_9 = ((MR_Unsigned) ((MR_hl_field(2, Error_3, 2))) & (MR_Integer) 15);
        MR_String SpecCharStr_10;
        MR_String AAn_11;
        MR_String PolyKindDesc_12;
        MR_String ValDesc_13;
        MR_String HeadSpec_14;
        MR_Word TailSpecs_15;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_132;
        MR_Word Var_137;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Integer SpecNum_377 = ((MR_Integer) ((MR_hl_field(2, Error_3, 0))));
        MR_Word Pieces0_378;
        MR_Char SpecChar_379 = ((MR_Char) (MR_Word) (MR_hl_field(2, Error_3, 1)));

        SpecCharStr_10 = mercury__string__char_to_string_1_f_0(SpecChar_379);
        check_hlds__simplify__opt_format_call_errors__poly_kind_desc_3_p_0(PolyKind_9, &AAn_11, &PolyKindDesc_12);
        {
          Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_127, 1) = ((MR_Box) (SpecNum_377));
        }
        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(1, Var_126, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
        }
        Var_125 = parse_tree__error_spec__color_as_subject_1_f_0(Var_126);
        {
          Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_140, 1) = ((MR_Box) (SpecCharStr_10));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[56])));
        }
        Var_138 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_139);
        {
          Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_150, 1) = ((MR_Box) (AAn_11));
        }
        {
          Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_146, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[89])));
          MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_149));
        }
        {
          Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_154, 1) = ((MR_Box) (PolyKindDesc_12));
        }
        {
          Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_153, 0) = ((MR_Box) (Var_154));
          MR_hl_field(1, Var_153, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[90])));
        }
        Var_152 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_153);
        Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_146, Var_152);
        Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_145);
        Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[88])), Var_137);
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_132);
        Pieces0_378 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_124);
        check_hlds__simplify__opt_format_call_errors__acceptable_specifier_chars_for_poly_kind_msg_4_p_0(PolyKind_9, &ValDesc_13, &HeadSpec_14, &TailSpecs_15);
        if ((TailSpecs_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_174;

          {
            Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_166, 1) = ((MR_Box) (ValDesc_13));
          }
          {
            Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
            MR_hl_field(1, Var_165, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[61])));
          }
          {
            Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_162, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[91])));
            MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_165));
          }
          {
            Var_174 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_174, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_174, 1) = ((MR_Box) (HeadSpec_14));
          }
          {
            Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_173, 0) = ((MR_Box) (Var_174));
            MR_hl_field(1, Var_173, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])));
          }
          Var_172 = parse_tree__error_spec__color_as_correct_1_f_0(Var_173);
          Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_172, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
          Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_162, Var_171);
          Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_378, Var_161);
        }
        else
        {
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_200;

          {
            Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_187, 1) = ((MR_Box) (ValDesc_13));
          }
          {
            Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
            MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[94])));
          }
          {
            Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_183, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[92])));
            MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_186));
          }
          {
            Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_200, 0) = ((MR_Box) (HeadSpec_14));
            MR_hl_field(1, Var_200, 1) = ((MR_Box) (TailSpecs_15));
          }
          Var_193 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])), Var_200);
          Var_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_193, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
          Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_183, Var_192);
          Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_378, Var_182);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Error_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_208;
            MR_Word Var_209;
            MR_Word Var_210;
            MR_Word Var_211;
            MR_Word Var_219;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Integer SpecNum_380 = ((MR_Integer) ((MR_hl_field(3, Error_3, 1))));
            MR_Char SpecChar_381 = ((MR_Char) (MR_Word) (MR_hl_field(3, Error_3, 2)));

            {
              Var_211 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_211, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_211, 1) = ((MR_Box) (SpecNum_380));
            }
            {
              Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_210, 0) = ((MR_Box) (Var_211));
              MR_hl_field(1, Var_210, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[57])));
            }
            Var_209 = parse_tree__error_spec__color_as_subject_1_f_0(Var_210);
            Var_225 = check_hlds__simplify__opt_format_call_errors__specifier_char_pieces_1_f_0(SpecChar_381);
            Var_235 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[64])));
            Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_235, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Var_226 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[62])), Var_234);
            Var_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_225, Var_226);
            Var_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[59])), Var_224);
            Var_208 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_209, Var_219);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_208);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_420;
            MR_Word Var_421;
            MR_Word Var_422;
            MR_Word Var_423;
            MR_Word Var_425;
            MR_Word Var_426;
            MR_Word Var_428;
            MR_Word Var_430;
            MR_Word Var_432;
            MR_Word Var_434;
            MR_Word Var_435;
            MR_Word Var_437;
            MR_Word Var_438;
            MR_Word Var_439;
            MR_Word Var_440;
            MR_Word Var_442;
            MR_Word Var_444;
            MR_Word Var_445;
            MR_Integer SpecNum_448 = ((MR_Integer) ((MR_hl_field(3, Error_3, 1))));
            MR_Word PolyKind_449 = ((MR_Unsigned) ((MR_hl_field(3, Error_3, 2))) & (MR_Integer) 15);
            MR_String AAn_450;
            MR_String PolyKindDesc_451;

            check_hlds__simplify__opt_format_call_errors__poly_kind_desc_3_p_0(PolyKind_449, &AAn_450, &PolyKindDesc_451);
            {
              Var_423 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_423, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_423, 1) = ((MR_Box) (SpecNum_448));
            }
            {
              Var_422 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_422, 0) = ((MR_Box) (Var_423));
              MR_hl_field(1, Var_422, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
            }
            Var_421 = parse_tree__error_spec__color_as_subject_1_f_0(Var_422);
            {
              Var_435 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_435, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_435, 1) = ((MR_Box) (AAn_450));
            }
            {
              Var_434 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_434, 0) = ((MR_Box) (Var_435));
              MR_hl_field(1, Var_434, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_432 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_432, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[78])));
              MR_hl_field(1, Var_432, 1) = ((MR_Box) (Var_434));
            }
            {
              Var_430 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_430, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[51])));
              MR_hl_field(1, Var_430, 1) = ((MR_Box) (Var_432));
            }
            {
              Var_428 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_428, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[109])));
              MR_hl_field(1, Var_428, 1) = ((MR_Box) (Var_430));
            }
            {
              Var_426 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_426, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[48])));
              MR_hl_field(1, Var_426, 1) = ((MR_Box) (Var_428));
            }
            {
              Var_440 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_440, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_440, 1) = ((MR_Box) (PolyKindDesc_451));
            }
            {
              Var_439 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_439, 0) = ((MR_Box) (Var_440));
              MR_hl_field(1, Var_439, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[56])));
            }
            Var_438 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_439);
            Var_445 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[82])));
            Var_444 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_445, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Var_442 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[80])), Var_444);
            Var_437 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_438, Var_442);
            Var_425 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_426, Var_437);
            Var_420 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_421, Var_425);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_420);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_400;
            MR_Word Var_401;
            MR_Word Var_402;
            MR_Word Var_403;
            MR_Word Var_405;
            MR_Word Var_411;
            MR_Word Var_412;
            MR_Integer SpecNum_415 = ((MR_Integer) ((MR_hl_field(3, Error_3, 1))));

            {
              Var_403 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_403, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_403, 1) = ((MR_Box) (SpecNum_415));
            }
            {
              Var_402 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_402, 0) = ((MR_Box) (Var_403));
              MR_hl_field(1, Var_402, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
            }
            Var_401 = parse_tree__error_spec__color_as_subject_1_f_0(Var_402);
            Var_412 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[54])));
            Var_411 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_412, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Var_405 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[111])), Var_411);
            Var_400 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_401, Var_405);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_400);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_247;
            MR_Word Var_248;
            MR_Word Var_249;
            MR_Word Var_250;
            MR_Word Var_255;
            MR_Word Var_256;
            MR_Word Var_259;
            MR_Word Var_261;
            MR_Word Var_264;
            MR_Word Var_267;
            MR_Word Var_268;
            MR_Word Var_270;
            MR_Word Var_271;
            MR_Word Var_272;
            MR_Word Var_273;
            MR_Word Var_278;
            MR_Word Var_283;
            MR_Word Var_284;
            MR_Integer SpecNum_382 = ((MR_Integer) ((MR_hl_field(3, Error_3, 1))));
            MR_Word PolyKind_383 = ((MR_Unsigned) ((MR_hl_field(3, Error_3, 2))) & (MR_Integer) 15);
            MR_String AAn_384;
            MR_String PolyKindDesc_385;

            check_hlds__simplify__opt_format_call_errors__poly_kind_desc_3_p_0(PolyKind_383, &AAn_384, &PolyKindDesc_385);
            {
              Var_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_250, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_250, 1) = ((MR_Box) (SpecNum_382));
            }
            {
              Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_249, 0) = ((MR_Box) (Var_250));
              MR_hl_field(1, Var_249, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
            }
            Var_248 = parse_tree__error_spec__color_as_subject_1_f_0(Var_249);
            {
              Var_268 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_268, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_268, 1) = ((MR_Box) (AAn_384));
            }
            {
              Var_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_267, 0) = ((MR_Box) (Var_268));
              MR_hl_field(1, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_264 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_264, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[78])));
              MR_hl_field(1, Var_264, 1) = ((MR_Box) (Var_267));
            }
            {
              Var_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_261, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[51])));
              MR_hl_field(1, Var_261, 1) = ((MR_Box) (Var_264));
            }
            {
              Var_259 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_259, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[106])));
              MR_hl_field(1, Var_259, 1) = ((MR_Box) (Var_261));
            }
            {
              Var_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_256, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[48])));
              MR_hl_field(1, Var_256, 1) = ((MR_Box) (Var_259));
            }
            {
              Var_273 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_273, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_273, 1) = ((MR_Box) (PolyKindDesc_385));
            }
            {
              Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_272, 0) = ((MR_Box) (Var_273));
              MR_hl_field(1, Var_272, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[56])));
            }
            Var_271 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_272);
            Var_284 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[82])));
            Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_284, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Var_278 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[80])), Var_283);
            Var_270 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_271, Var_278);
            Var_255 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_256, Var_270);
            Var_247 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_248, Var_255);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_247);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_296;
            MR_Word Var_297;
            MR_Word Var_298;
            MR_Word Var_299;
            MR_Word Var_304;
            MR_Word Var_317;
            MR_Word Var_318;
            MR_Integer SpecNum_386 = ((MR_Integer) ((MR_hl_field(3, Error_3, 1))));

            {
              Var_299 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_299, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_299, 1) = ((MR_Box) (SpecNum_386));
            }
            {
              Var_298 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_298, 0) = ((MR_Box) (Var_299));
              MR_hl_field(1, Var_298, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[47])));
            }
            Var_297 = parse_tree__error_spec__color_as_subject_1_f_0(Var_298);
            Var_318 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[54])));
            Var_317 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_318, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
            Var_304 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[108])), Var_317);
            Var_296 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_297, Var_304);
            Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[45])), Var_296);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Extra_19;
            MR_Word Var_331;
            MR_Word Var_332;
            MR_Integer SpecNum_388 = ((MR_Integer) ((MR_hl_field(3, Error_3, 1))));
            MR_Integer NumExtraPolyTypes_389 = ((MR_Integer) ((MR_hl_field(3, Error_3, 2))));
            MR_Word Pieces0_390;

            succeeded = (SpecNum_388 == (MR_Integer) 1);
            if (succeeded)
              Extra_19 = (MR_Word) ((MR_Unsigned) 0U);
            else
              Extra_19 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[30]));
            {
              Var_332 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_332, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_332, 1) = ((MR_Box) (SpecNum_388));
            }
            {
              Var_331 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_331, 0) = ((MR_Box) (Var_332));
              MR_hl_field(1, Var_331, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[33])));
            }
            {
              Pieces0_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces0_390, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[31])));
              MR_hl_field(1, Pieces0_390, 1) = ((MR_Box) (Var_331));
            }
            succeeded = (NumExtraPolyTypes_389 == (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word Var_337;
              MR_Word Var_342;
              MR_Word Var_343;
              MR_Word Var_344;
              MR_Word Var_349;

              Var_349 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Extra_19, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[39])));
              Var_344 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[37])), Var_349);
              Var_343 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_344);
              Var_342 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_343, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
              Var_337 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[35])), Var_342);
              Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_390, Var_337);
            }
            else
            {
              MR_Word Var_357;
              MR_Word Var_362;
              MR_Word Var_363;
              MR_Word Var_364;
              MR_Word Var_365;
              MR_Word Var_366;
              MR_Word Var_368;

              {
                Var_366 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_366, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_366, 1) = ((MR_Box) (NumExtraPolyTypes_389));
              }
              {
                Var_365 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_365, 0) = ((MR_Box) (Var_366));
                MR_hl_field(1, Var_365, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_368 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Extra_19, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[43])));
              Var_364 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_365, Var_368);
              Var_363 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_364);
              Var_362 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_363, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
              Var_357 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[41])), Var_362);
              Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_390, Var_357);
            }
          }
          break;
      }
      break;
  }
  return Pieces_4;
}

static void MR_CALL 
check_hlds__simplify__opt_format_call_errors__acceptable_specifier_chars_for_poly_kind_msg_4_p_0(
  MR_Word Kind_5,
  MR_String * ValDesc_6,
  MR_String * HeadSpec_7,
  MR_Word * TailSpecs_8)
{
  *ValDesc_6 = ((&check_hlds__simplify__opt_format_call_errors_vector_common_4[0 + Kind_5]))->check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0__vct_4_f_0;
  *HeadSpec_7 = ((&check_hlds__simplify__opt_format_call_errors_vector_common_4[0 + Kind_5]))->check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0__vct_4_f_1;
  *TailSpecs_8 = ((&check_hlds__simplify__opt_format_call_errors_vector_common_4[0 + Kind_5]))->check_hlds__simplify__opt_format_call_errors__vector_common_type_4_0__vct_4_f_2;
}

static void MR_CALL 
check_hlds__simplify__opt_format_call_errors__poly_kind_desc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  *HeadVar__2_2 = ((&check_hlds__simplify__opt_format_call_errors_vector_common_3[0 + HeadVar__1_1]))->check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0__vct_3_f_0;
  *HeadVar__3_3 = ((&check_hlds__simplify__opt_format_call_errors_vector_common_3[0 + HeadVar__1_1]))->check_hlds__simplify__opt_format_call_errors__vector_common_type_3_0__vct_3_f_1;
}

static MR_Word MR_CALL 
check_hlds__simplify__opt_format_call_errors__specifier_char_pieces_1_f_0(
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
    MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[95])));
    MR_hl_field(1, Pieces_4, 1) = ((MR_Box) (Var_8));
  }
  return Pieces_4;
}

MR_Word MR_CALL 
check_hlds__simplify__opt_format_call_errors__report_unknown_format_values_4_f_0(
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

        PredNameDotPieces_11 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])), PredId_7);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[13])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[8])), Var_40);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_35);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[4])), Var_26);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.opt_format_call_errors.report_unknown_format_values\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[2])));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[1])));
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
check_hlds__simplify__opt_format_call_errors__report_unknown_format_string_4_f_0(
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

        PredNameDotPieces_11 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[2])), PredId_7);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[6])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[9])));
        Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[8])), Var_37);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_32);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_1[4])), Var_26);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.opt_format_call_errors.report_unknown_format_string\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[2])));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__opt_format_call_errors_scalar_common_2[1])));
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
check_hlds__simplify__opt_format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__opt_format_call_errors____Unify____maybe_warn_unknown_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__opt_format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__opt_format_call_errors____Compare____maybe_warn_unknown_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__opt_format_call_errors__init(void)
{
}

void mercury__check_hlds__simplify__opt_format_call_errors__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__simplify__opt_format_call_errors__check_hlds__simplify__opt_format_call_errors__type_ctor_info_maybe_warn_unknown_format_0);
}

void mercury__check_hlds__simplify__opt_format_call_errors__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__opt_format_call_errors__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.opt_format_call_errors.
