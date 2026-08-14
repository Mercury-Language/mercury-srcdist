/*
** Automatically generated from `make_hlds_error.m'
** by the Mercury compiler,
** version rotd-2026-08-14
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


// :- module hlds.make_hlds_error.
// :- implementation.

/*
INIT mercury__hlds__make_hlds_error__init
ENDINIT
*/

#include "hlds.make_hlds_error.mih"


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
#include "integer.mih"
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_EnumFunctorDesc hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds_error__hlds__make_hlds_error__enum_ordinal_ordered_does_pragma_allow_modes_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds_error__hlds__make_hlds_error__enum_name_ordered_does_pragma_allow_modes_0[2];

static const MR_Integer hlds__make_hlds_error__hlds__make_hlds_error__functor_number_map_does_pragma_allow_modes_0[2];

static MR_Word MR_CALL 
hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5);

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word PredFormArity_5);

static void MR_CALL 
hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds_error____Unify____does_pragma_allow_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds_error____Compare____does_pragma_allow_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[99][2];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[2][1];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[2][3];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_5[2][6];




static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[99][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Here is its previous definition."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a corresponding"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does exist"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[46])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to enable type inference.)"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-types"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(Use"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However, a"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does exist with arity"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of that name"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of that name do exist with arities"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to a predicate or to a function."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not say whether it refers"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(You can specify this information"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either by wrapping up"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or by specifying its argument modes.)"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(...)"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(...)"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inside"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by wrapping up"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[43])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row  97 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[60])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 183U) },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_EnumFunctorDesc hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_0 = {
  (MR_String) "pragma_does_not_allow_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_1 = {
  (MR_String) "pragma_allows_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds_error__hlds__make_hlds_error__enum_ordinal_ordered_does_pragma_allow_modes_0[2] = {
  &hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_0,
  &hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds_error__hlds__make_hlds_error__enum_name_ordered_does_pragma_allow_modes_0[2] = {
  &hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_1,
  &hlds__make_hlds_error__hlds__make_hlds_error__enum_functor_desc_does_pragma_allow_modes_0_0
};

static const MR_Integer hlds__make_hlds_error__hlds__make_hlds_error__functor_number_map_does_pragma_allow_modes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds_error__hlds__make_hlds_error__type_ctor_info_does_pragma_allow_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds_error____Unify____does_pragma_allow_modes_0_0_10001)),
  ((MR_Box) (hlds__make_hlds_error____Compare____does_pragma_allow_modes_0_0_10001)),
  (MR_String) "hlds.make_hlds_error",
  (MR_String) "does_pragma_allow_modes",
  { hlds__make_hlds_error__hlds__make_hlds_error__enum_name_ordered_does_pragma_allow_modes_0 },
  { hlds__make_hlds_error__hlds__make_hlds_error__enum_ordinal_ordered_does_pragma_allow_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds_error__hlds__make_hlds_error__functor_number_map_does_pragma_allow_modes_0,

};

void MR_CALL 
hlds__make_hlds_error____Compare____does_pragma_allow_modes_0_0(
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
hlds__make_hlds_error____Unify____does_pragma_allow_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_String Var_10;

  Var_10 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 1, ProcId_5, PredInfo_4);
  {
    Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_9, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[32])));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[96])));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_8));
  }
  return HeadVar__3_3;
}

void MR_CALL 
hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_6_p_0(
  MR_Word ModuleInfo_7,
  MR_String PragmaName_8,
  MR_Word PFUMM_9,
  MR_Word SymName_10,
  MR_Word Context_11,
  MR_Word * Specs_12)
{
  switch (MR_tag((MR_Word) PFUMM_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(2, PFUMM_9, 0))));

        hlds__make_hlds_error__warn_about_pfu_unknown_7_p_0(ModuleInfo_7, PragmaName_8, (MR_Integer) 1, SymName_10, UserArity_15, Context_11, Specs_12);
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds_error__warn_about_pfu_unknown_7_p_0(
  MR_Word ModuleInfo_8,
  MR_String PragmaName_9,
  MR_Word PragmaAllowsModes_10,
  MR_Word SymName_11,
  MR_Word UserArity_12,
  MR_Word Context_13,
  MR_Word * Specs_14)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word ModuleName_16;
  MR_Word Warn_17;
  MR_Word OpMode_18;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_141;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_15);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 183, &Warn_17);
  libs__globals__get_op_mode_2_p_0(Globals_15, &OpMode_18);
  succeeded = (Warn_17 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(3, OpMode_18, 0))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(3, Var_28, 0))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) SymName_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_141 = ((MR_Word) ((MR_hl_field(1, SymName_11, 0))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, Var_141);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer UserArityInt_22 = (MR_Integer) (UserArity_12);
    MR_Word SNA_23;
    MR_Word Pieces_24;
    MR_Word Spec_26;

    {
      SNA_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_23, 0) = ((MR_Box) (SymName_11));
      MR_hl_field(0, SNA_23, 1) = ((MR_Box) (UserArityInt_22));
    }
    switch (PragmaAllowsModes_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_104;
          MR_Word Var_106;
          MR_Word Var_109;
          MR_Word Var_112;

          {
            Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_88, 1) = ((MR_Box) (PragmaName_9));
          }
          {
            Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, Var_93, 1) = ((MR_Box) (SNA_23));
          }
          {
            Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
            MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[73])));
            MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
          }
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
          }
          Var_86 = parse_tree__error_spec__color_as_subject_1_f_0(Var_87);
          Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[77])));
          {
            Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_93));
            MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[90])));
          }
          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[79])));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[78])));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
          }
          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
          }
          Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_104);
          Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_95);
          Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[72])), Var_85);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_61;

          {
            Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_37, 1) = ((MR_Box) (PragmaName_9));
          }
          {
            Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, Var_42, 1) = ((MR_Box) (SNA_23));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[73])));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
          }
          Var_35 = parse_tree__error_spec__color_as_subject_1_f_0(Var_36);
          Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[77])));
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[95])));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[91])));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[78])));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
          }
          Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_53);
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_44);
          Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[72])), Var_34);
        }
        break;
    }
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.warn_about_pfu_unknown\'/7"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_2[1])));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_13));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Component_6;

  conv0_Component_6 = hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Component_6));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word SymName_13,
  MR_Word PredFormArity_14,
  MR_Word Status_15,
  MR_Word IsClassMethod_16,
  MR_Word Context_17,
  MR_Word DescPieces_18,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  MR_bool succeeded;
  MR_Word DefinedInThisModule_20;
  MR_Word IsExported_21;
  MR_Word Globals_22;
  MR_Word InferTypes_23;

  DefinedInThisModule_20 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_15);
  IsExported_21 = hlds__status__pred_status_is_exported_1_f_0(Status_15);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 121, &InferTypes_23);
  succeeded = (DefinedInThisModule_20 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (IsExported_21 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (IsClassMethod_16 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (InferTypes_23 == (MR_Integer) 1);
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
  else
  {
    MR_Word UserArity_24;
    MR_Integer UserArityInt_25;
    MR_Word SNA_26;
    MR_String PredOrFuncStr_27;
    MR_Word MainPieces_28;
    MR_Word MainMsg_29;
    MR_Word PredicateTable_30;
    MR_Word AllArityPredIds_31;
    MR_Word PorFArities_32;
    MR_Word OtherPredFormArities_33;
    MR_Word OtherPredFormAritiesList_34;
    MR_String FullPredOrFuncStr_35;
    MR_Word Spec_38;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Var_79;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_12, &UserArity_24, PredFormArity_14);
    UserArityInt_25 = (MR_Integer) (UserArity_24);
    {
      SNA_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_26, 0) = ((MR_Box) (SymName_13));
      MR_hl_field(0, SNA_26, 1) = ((MR_Box) (UserArityInt_25));
    }
    PredOrFuncStr_27 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_12);
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[20])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (DescPieces_18));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[54])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_62, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[21])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (SNA_26));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_65 = parse_tree__error_spec__color_as_subject_1_f_0(Var_66);
    Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[23])));
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (PredOrFuncStr_27));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[27])));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[24])));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
    }
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_75);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_69);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_64);
    MainPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_57);
    {
      MainMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_29, 0) = ((MR_Box) (Context_17));
      MR_hl_field(0, MainMsg_29, 1) = ((MR_Box) (MainPieces_28));
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_30);
    hlds__pred_table__predicate_table_lookup_pf_sym_name_5_p_0(PredicateTable_30, (MR_Integer) 0, PredOrFunc_12, SymName_13, &AllArityPredIds_31);
    hlds__make_hlds_error__gather_porf_arities_4_p_0(ModuleInfo_11, PredOrFunc_12, AllArityPredIds_31, &PorFArities_32);
    mercury__set__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), ((MR_Box) (PredFormArity_14)), PorFArities_32, &OtherPredFormArities_33);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), OtherPredFormArities_33, &OtherPredFormAritiesList_34);
    FullPredOrFuncStr_35 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
    if ((OtherPredFormAritiesList_34 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (InferTypes_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InferMsg_37;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_107;

            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_99, 0) = ((MR_Box) (MainPieces_28));
            }
            {
              Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
              MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[98])));
            }
            {
              InferMsg_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, InferMsg_37, 0) = ((MR_Box) (Context_17));
              MR_hl_field(2, InferMsg_37, 1) = ((MR_Box) (Var_98));
            }
            {
              Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_107, 0) = ((MR_Box) (InferMsg_37));
              MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
              MR_hl_field(2, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(2, Spec_38, 3) = ((MR_Box) (Var_107));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
            MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Context_17));
            MR_hl_field(0, Spec_38, 4) = ((MR_Box) (MainPieces_28));
          }
          break;
      }
    else
    {
      MR_Word Var_178 = ((MR_Word) ((MR_hl_field(1, OtherPredFormAritiesList_34, 1))));
      MR_Word Var_179 = ((MR_Word) ((MR_hl_field(1, OtherPredFormAritiesList_34, 0))));

      if ((Var_178 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ArityPiece_40;
        MR_Word OtherAritiesPieces_41;
        MR_Word OtherAritiesMsg_46;
        MR_Word Var_113;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_163;
        MR_Word Var_164;

        ArityPiece_40 = hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(PredOrFunc_12, Var_179);
        {
          Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_117, 1) = ((MR_Box) (FullPredOrFuncStr_35));
        }
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[65])));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[61])));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (ArityPiece_40));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[32])));
        }
        Var_126 = parse_tree__error_spec__color_as_correct_1_f_0(Var_127);
        Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])));
        OtherAritiesPieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, Var_125);
        {
          OtherAritiesMsg_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OtherAritiesMsg_46, 0) = ((MR_Box) (Context_17));
          MR_hl_field(0, OtherAritiesMsg_46, 1) = ((MR_Box) (OtherAritiesPieces_41));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (OtherAritiesMsg_46));
          MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_163, 0) = ((MR_Box) (MainMsg_29));
          MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_164));
        }
        {
          Spec_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
          MR_hl_field(2, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(2, Spec_38, 3) = ((MR_Box) (Var_163));
        }
      }
      else
      {
        MR_Word ArityPieces_45;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word OtherAritiesPieces_170;
        MR_Word OtherAritiesMsg_171;
        MR_Word Var_175;
        MR_Word Var_176;

        {
          Var_136 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_136, 0) = ((MR_Box) (&hlds__make_hlds_error_scalar_common_5[1]));
          MR_hl_field(0, Var_136, 1) = ((MR_Box) (hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1));
          MR_hl_field(0, Var_136, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_136, 3) = ((MR_Box) (PredOrFunc_12));
        }
        ArityPieces_45 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, OtherPredFormAritiesList_34);
        {
          Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_141, 1) = ((MR_Box) (FullPredOrFuncStr_35));
        }
        {
          Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
          MR_hl_field(1, Var_140, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[70])));
        }
        {
          Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_137, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[66])));
          MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_140));
        }
        Var_150 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[32])), ArityPieces_45);
        Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])));
        OtherAritiesPieces_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, Var_149);
        {
          OtherAritiesMsg_171 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OtherAritiesMsg_171, 0) = ((MR_Box) (Context_17));
          MR_hl_field(0, OtherAritiesMsg_171, 1) = ((MR_Box) (OtherAritiesPieces_170));
        }
        {
          Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_176, 0) = ((MR_Box) (OtherAritiesMsg_171));
          MR_hl_field(1, Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (MainMsg_29));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_176));
        }
        {
          Spec_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
          MR_hl_field(2, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(2, Spec_38, 3) = ((MR_Box) (Var_175));
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_48 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_38));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word PredFormArity_5)
{
  MR_Word Component_6;
  MR_Word UserArity_7;
  MR_Integer UserArityInt_8;

  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_4, &UserArity_7, PredFormArity_5);
  UserArityInt_8 = (MR_Integer) (UserArity_7);
  {
    Component_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Component_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Component_6, 1) = ((MR_Box) (UserArityInt_8));
  }
  return Component_6;
}

static void MR_CALL 
hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0));
  else
  {
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word PredIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word PredInfo_12;
    MR_Word PorF_13;
    MR_Word STATE_VARIABLE_PorFArities_1_17;

    hlds__make_hlds_error__gather_porf_arities_4_p_0(HeadVar__1_1, HeadVar__2_2, PredIds_10, &STATE_VARIABLE_PorFArities_1_17);
    hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__1_1, PredId_9, &PredInfo_12);
    PorF_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
    succeeded = (PorF_13 == HeadVar__2_2);
    if (succeeded)
    {
      MR_Word Markers_14;

      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_14);
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_14, (MR_Integer) 4);
      if (succeeded)
        *HeadVar__4_4 = STATE_VARIABLE_PorFArities_1_17;
      else
      {
        MR_Word PredFormArity_15;

        PredFormArity_15 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_12);
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), ((MR_Box) (PredFormArity_15)), STATE_VARIABLE_PorFArities_1_17, HeadVar__4_4);
      }
    }
    else
      *HeadVar__4_4 = STATE_VARIABLE_PorFArities_1_17;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word VarSet_12,
  MR_Word ArgModes_13,
  MR_Word DescPieces_14,
  MR_Word Context_15,
  MR_Word * Spec_16)
{
  MR_Word PredColonPieces_17;
  MR_Word StrippedArgModes_18;
  MR_Word PredOrFunc_19;
  MR_String Name_20;
  MR_String SubDeclStr_22;
  MR_Word MainPieces_23;
  MR_Word ProcIds_24;
  MR_Word VerbosePieces_25;
  MR_Word Msg_30;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_130;

  PredColonPieces_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_9, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_2[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[34])), PredId_10);
  parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0((MR_Integer) 0, (MR_Integer) 1, ArgModes_13, &StrippedArgModes_18);
  PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
  Name_20 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
  Var_41 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_12);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (Name_20));
  }
  SubDeclStr_22 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_19, Var_41, Var_42, StrippedArgModes_18, (MR_Word) ((MR_Unsigned) 0U));
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[35])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (DescPieces_14));
  }
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (SubDeclStr_22));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[32])));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[40])));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
  }
  Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])));
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[39])), Var_59);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredColonPieces_17, Var_52);
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[36])), Var_51);
  MainPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_46);
  ProcIds_24 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_11);
  if ((ProcIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_75;
    MR_Word Var_76;

    {
      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_76, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[43])));
    }
    {
      VerbosePieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VerbosePieces_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[41])));
      MR_hl_field(1, VerbosePieces_25, 1) = ((MR_Box) (Var_75));
    }
  }
  else
  {
    MR_Integer ProcIdsHead_26 = ((MR_Integer) ((MR_hl_field(1, ProcIds_24, 0))));
    MR_Word ProcIdsTail_27 = ((MR_Word) ((MR_hl_field(1, ProcIds_24, 1))));

    if ((ProcIdsTail_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_83;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_String Var_141;

      {
        Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_87, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
      }
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[48])));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[44])));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
      }
      Var_141 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 1, ProcIdsHead_26, PredInfo_11);
      {
        Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_140, 1) = ((MR_Box) (Var_141));
      }
      {
        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
        MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[32])));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[96])));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_139));
      }
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[50])));
      VerbosePieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_95);
    }
    else
    {
      MR_Word Var_101;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;

      {
        Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_105, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[53])));
      }
      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[51])));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_104));
      }
      {
        Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_116, 0) = ((MR_Box) (&hlds__make_hlds_error_scalar_common_5[0]));
        MR_hl_field(0, Var_116, 1) = ((MR_Box) (hlds__make_hlds_error__report_undeclared_mode_error_8_p_0_1));
        MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_116, 3) = ((MR_Box) (PredInfo_11));
      }
      Var_115 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_1[0]), Var_116, ProcIds_24);
      Var_114 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(Var_115);
      Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[50])));
      VerbosePieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_113);
    }
  }
  {
    Var_122 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_122, 0) = ((MR_Box) (MainPieces_23));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (VerbosePieces_25));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
  }
  {
    Msg_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_30, 0) = ((MR_Box) (Context_15));
    MR_hl_field(2, Msg_30, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (Msg_30));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Spec_16 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_undeclared_mode_error\'/8"));
    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(2, base, 3) = ((MR_Box) (Var_130));
  }
}

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  mercury__string__int_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(
  MR_Word MaybePorF_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word OtherUserArities_11,
  MR_Word Context_12,
  MR_Word DeclPieces_13,
  MR_Word * Spec_14)
{
  MR_Word SNAPrefixPieces_15;
  MR_Word PredOrFuncPieces_16;
  MR_Integer UserArityInt_17;
  MR_Word SNA_18;
  MR_Word MainPieces_19;
  MR_Word OtherArityPieces_20;
  MR_Word Pieces_25;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_67;
  MR_Word Var_72;

  if ((MaybePorF_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SNAPrefixPieces_15 = (MR_Word) ((MR_Unsigned) 0U);
    PredOrFuncPieces_16 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[14]));
  }
  else
  {
    MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, MaybePorF_8, 0))));

    switch (Var_122) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          SNAPrefixPieces_15 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[16]));
          PredOrFuncPieces_16 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[10]));
        }
        break;
      case (MR_Integer) 0:
        {
          SNAPrefixPieces_15 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[18]));
          PredOrFuncPieces_16 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[19]));
        }
        break;
    }
  }
  UserArityInt_17 = (MR_Integer) (UserArity_10);
  {
    SNA_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_18, 0) = ((MR_Box) (SymName_9));
    MR_hl_field(0, SNA_18, 1) = ((MR_Box) (UserArityInt_17));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[20])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (DeclPieces_13));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[21])));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (SNAPrefixPieces_15));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (SNA_18));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_57 = parse_tree__error_spec__color_as_subject_1_f_0(Var_58);
  Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[23])));
  Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_16, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[27])));
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[25])), Var_72);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_67);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_61);
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_56);
  MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_52);
  if ((OtherUserArities_11 == (MR_Word) ((MR_Unsigned) 0U)))
    OtherArityPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OtherUserArityInts_23;
    MR_Word OtherArityStrs_24;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_String Var_96;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Box conv2_Var_96;

    OtherUserArityInts_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_4[0]), OtherUserArities_11);
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_4[1]), OtherUserArityInts_23, &OtherArityStrs_24);
    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_82, 1) = ((MR_Box) (SymName_9));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_85 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[29])));
    conv2_Var_96 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherArityStrs_24, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
    Var_96 = ((MR_String) (conv2_Var_96));
    {
      Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[30])));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
    }
    Var_101 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[32])), OtherArityStrs_24);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_100);
    Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_90);
    OtherArityPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_84);
  }
  Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_19, OtherArityPieces_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_undefined_pred_or_func_error\'/7"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_25));
  }
}

void MR_CALL 
hlds__make_hlds_error__report_multiply_defined_7_p_0(
  MR_String EntityKind_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word Context_11,
  MR_Word OrigContext_12,
  MR_Word ExtraPieces_13,
  MR_Word * Spec_14)
{
  MR_Word CmpRes_15;
  MR_Word FirstContext_16;
  MR_Word SecondContext_17;
  MR_Integer UserArityInt_18;
  MR_Word SNA_19;
  MR_Word SecondDeclPieces_20;
  MR_Word SecondDeclMsg_22;
  MR_Word FirstDeclMsg_23;
  MR_Word ExtraMsgs_24;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_62;
  MR_Word Var_63;

  mercury__term_context____Compare____term_context_0_0(&CmpRes_15, OrigContext_12, Context_11);
  switch (CmpRes_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        FirstContext_16 = OrigContext_12;
        SecondContext_17 = Context_11;
      }
      break;
    case (MR_Integer) 2:
      {
        FirstContext_16 = Context_11;
        SecondContext_17 = OrigContext_12;
      }
      break;
  }
  UserArityInt_18 = (MR_Integer) (UserArity_10);
  {
    SNA_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_19, 0) = ((MR_Box) (SymName_9));
    MR_hl_field(0, SNA_19, 1) = ((MR_Box) (UserArityInt_18));
  }
  {
    Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_31, 0) = ((MR_Box) (EntityKind_8));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[1])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (SNA_19));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_34 = parse_tree__error_spec__color_as_subject_1_f_0(Var_35);
  Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[5])));
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[6])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[3])), Var_43);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_38);
  SecondDeclPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_33);
  {
    SecondDeclMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SecondDeclMsg_22, 0) = ((MR_Box) (SecondContext_17));
    MR_hl_field(0, SecondDeclMsg_22, 1) = ((MR_Box) (SecondDeclPieces_20));
  }
  {
    FirstDeclMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FirstDeclMsg_23, 0) = ((MR_Box) (FirstContext_16));
    MR_hl_field(0, FirstDeclMsg_23, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[8])));
  }
  if ((ExtraPieces_13 == (MR_Word) ((MR_Unsigned) 0U)))
    ExtraMsgs_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_57;

    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = ((MR_Box) (SecondContext_17));
      MR_hl_field(0, Var_57, 1) = ((MR_Box) (ExtraPieces_13));
    }
    {
      ExtraMsgs_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExtraMsgs_24, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, ExtraMsgs_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (FirstDeclMsg_23));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (ExtraMsgs_24));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (SecondDeclMsg_22));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Spec_14 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_multiply_defined\'/7"));
    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(2, base, 3) = ((MR_Box) (Var_62));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds_error____Unify____does_pragma_allow_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds_error____Unify____does_pragma_allow_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds_error____Compare____does_pragma_allow_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds_error____Compare____does_pragma_allow_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds_error__init(void)
{
}

void mercury__hlds__make_hlds_error__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds_error__hlds__make_hlds_error__type_ctor_info_does_pragma_allow_modes_0);
}

void mercury__hlds__make_hlds_error__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds_error__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds_error.
