/*
** Automatically generated from `hlds_error_util.m'
** by the Mercury compiler,
** version rotd-2026-01-27
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


// :- module hlds.hlds_error_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_error_util__init
ENDINIT
*/

#include "hlds.hlds_error_util.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_1;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_2;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_3;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_4;

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_last_context_word_0[5];

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_last_context_word_0[5];

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_last_context_word_0[5];

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_maybe_print_ho_var_name_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_maybe_print_ho_var_name_0[2];

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_maybe_print_ho_var_name_0[2];

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_should_module_qualify_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2];

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2];

static void MR_CALL 
hlds__hlds_error_util__gather_user_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UserArities_0_3,
  MR_Word * STATE_VARIABLE_UserArities_4);

static void MR_CALL 
hlds__hlds_error_util__gather_pred_form_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredFormArities_0_3,
  MR_Word * STATE_VARIABLE_PredFormArities_4);

static void MR_CALL 
hlds__hlds_error_util__unify_sub_contexts_to_pieces_7_p_0(
  MR_Word STATE_VARIABLE_First_0_1,
  MR_Word * STATE_VARIABLE_First_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_LastContextWord_0_4,
  MR_Word * STATE_VARIABLE_LastContextWord_5,
  MR_Word STATE_VARIABLE_Pieces_0_6,
  MR_Word * STATE_VARIABLE_Pieces_7);

static MR_bool MR_CALL 
hlds__hlds_error_util__contexts_describe_list_element_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumElementsBefore_7,
  MR_Integer * ElementNum_8,
  MR_Word * AfterContexts_9);

static MR_Word MR_CALL 
hlds__hlds_error_util__arg_number_to_pieces_2_f_0(
  MR_Word CallId_4,
  MR_Integer ArgNum_5);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____last_context_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_error_util____Compare____last_context_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____maybe_print_ho_var_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_error_util____Compare____maybe_print_ho_var_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[61][2];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][9];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[1][5];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_5[2][8];




static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[61][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "typeclass method"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "instance method"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type class method implementation"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of functor"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "event"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the call to the"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "builtin function"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "builtin predicate"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "call"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the higher order"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the higher order call to the"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the function argument of the"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the predicate argument of the"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[24])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of clause head:"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[39])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function result term of clause head:"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[39])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "list element"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "#"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the result"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the argument"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the return value"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "term"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_5[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_color_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_0 = {
  (MR_String) "lcw_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_1 = {
  (MR_String) "lcw_call",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_2 = {
  (MR_String) "lcw_result",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_3 = {
  (MR_String) "lcw_argument",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_4 = {
  (MR_String) "lcw_element",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_last_context_word_0[5] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_1,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_2,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_3,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_4
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_last_context_word_0[5] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_3,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_1,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_4,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_last_context_word_0_2
};

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_last_context_word_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_last_context_word_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_error_util____Unify____last_context_word_0_0_10001)),
  ((MR_Box) (hlds__hlds_error_util____Compare____last_context_word_0_0_10001)),
  (MR_String) "hlds.hlds_error_util",
  (MR_String) "last_context_word",
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_last_context_word_0 },
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_last_context_word_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_last_context_word_0,

};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_0 = {
  (MR_String) "do_not_print_ho_var_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_1 = {
  (MR_String) "print_ho_var_name",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_maybe_print_ho_var_name_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_maybe_print_ho_var_name_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_maybe_print_ho_var_name_0_1
};

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_maybe_print_ho_var_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_maybe_print_ho_var_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_error_util____Unify____maybe_print_ho_var_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_error_util____Compare____maybe_print_ho_var_name_0_0_10001)),
  (MR_String) "hlds.hlds_error_util",
  (MR_String) "maybe_print_ho_var_name",
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_maybe_print_ho_var_name_0 },
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_maybe_print_ho_var_name_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_maybe_print_ho_var_name_0,

};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0 = {
  (MR_String) "should_module_qualify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1 = {
  (MR_String) "should_not_module_qualify",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001)),
  ((MR_Box) (hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001)),
  (MR_String) "hlds.hlds_error_util",
  (MR_String) "should_module_qualify",
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0 },
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_should_module_qualify_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0,

};

void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0(
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
hlds__hlds_error_util____Unify____should_module_qualify_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_error_util____Compare____maybe_print_ho_var_name_0_0(
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
hlds__hlds_error_util____Unify____maybe_print_ho_var_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_error_util____Compare____last_context_word_0_0(
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
hlds__hlds_error_util____Unify____last_context_word_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Integer MR_CALL 
hlds__hlds_error_util__project_pred_form_arity_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer A_3 = (MR_Integer) (HeadVar__1_1);

  return A_3;
}

MR_Integer MR_CALL 
hlds__hlds_error_util__project_user_arity_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer A_3 = (MR_Integer) (HeadVar__1_1);

  return A_3;
}

void MR_CALL 
hlds__hlds_error_util__find_user_arities_other_than_4_p_0(
  MR_Word PredTable_5,
  MR_Word PredIds_6,
  MR_Word Arity_7,
  MR_Word * OtherArities_8)
{
  MR_Word AllArities_9;
  MR_Word UserArities0_11;

  hlds__hlds_error_util__gather_user_arities_4_p_0(PredTable_5, PredIds_6, (MR_Word) ((MR_Unsigned) 0U), &UserArities0_11);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), UserArities0_11, &AllArities_9);
  mercury__list__delete_all_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), AllArities_9, ((MR_Box) (Arity_7)), OtherArities_8);
}

void MR_CALL 
hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(
  MR_Word PredTable_5,
  MR_Word PredIds_6,
  MR_Word Arity_7,
  MR_Word * OtherArities_8)
{
  MR_Word AllArities_9;
  MR_Word PredFormArities0_11;

  hlds__hlds_error_util__gather_pred_form_arities_4_p_0(PredTable_5, PredIds_6, (MR_Word) ((MR_Unsigned) 0U), &PredFormArities0_11);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), PredFormArities0_11, &AllArities_9);
  mercury__list__delete_all_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), AllArities_9, ((MR_Box) (Arity_7)), OtherArities_8);
}

void MR_CALL 
hlds__hlds_error_util__find_user_arities_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredIds_5,
  MR_Word * UserArities_6)
{
  MR_Word UserArities0_7;

  hlds__hlds_error_util__gather_user_arities_4_p_0(PredTable_4, PredIds_5, (MR_Word) ((MR_Unsigned) 0U), &UserArities0_7);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), UserArities0_7, UserArities_6);
}

static void MR_CALL 
hlds__hlds_error_util__gather_user_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UserArities_0_3,
  MR_Word * STATE_VARIABLE_UserArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UserArities_4 = STATE_VARIABLE_UserArities_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredInfo_13;
      MR_Word UserArity_14;
      MR_Word STATE_VARIABLE_UserArities_1_17;
      MR_Box conv0_PredInfo_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_UserArities_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_1, ((MR_Box) (PredId_10)), &conv0_PredInfo_13);
      PredInfo_13 = ((MR_Word) (conv0_PredInfo_13));
      UserArity_14 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_13);
      {
        STATE_VARIABLE_UserArities_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_UserArities_1_17, 0) = ((MR_Box) (UserArity_14));
        MR_hl_field(1, STATE_VARIABLE_UserArities_1_17, 1) = ((MR_Box) (STATE_VARIABLE_UserArities_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_UserArities_0_3 = STATE_VARIABLE_UserArities_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_UserArities_0_3 = next_value_of_STATE_VARIABLE_UserArities_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_error_util__find_pred_arities_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredIds_5,
  MR_Word * PredFormArities_6)
{
  MR_Word PredFormArities0_7;

  hlds__hlds_error_util__gather_pred_form_arities_4_p_0(PredTable_4, PredIds_5, (MR_Word) ((MR_Unsigned) 0U), &PredFormArities0_7);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), PredFormArities0_7, PredFormArities_6);
}

static void MR_CALL 
hlds__hlds_error_util__gather_pred_form_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredFormArities_0_3,
  MR_Word * STATE_VARIABLE_PredFormArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredFormArities_4 = STATE_VARIABLE_PredFormArities_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredInfo_13;
      MR_Word PredFormArity_14;
      MR_Word STATE_VARIABLE_PredFormArities_1_17;
      MR_Box conv0_PredInfo_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PredFormArities_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_1, ((MR_Box) (PredId_10)), &conv0_PredInfo_13);
      PredInfo_13 = ((MR_Word) (conv0_PredInfo_13));
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_13, &PredFormArity_14);
      {
        STATE_VARIABLE_PredFormArities_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_PredFormArities_1_17, 0) = ((MR_Box) (PredFormArity_14));
        MR_hl_field(1, STATE_VARIABLE_PredFormArities_1_17, 1) = ((MR_Box) (STATE_VARIABLE_PredFormArities_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_PredFormArities_0_3 = STATE_VARIABLE_PredFormArities_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PredFormArities_0_3 = next_value_of_STATE_VARIABLE_PredFormArities_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__generic_callee_to_pieces_3_f_0(
  MR_Word PrintHoVarName_5,
  MR_Word VarNameSrc_6,
  MR_Word GenericCall_7)
{
  MR_Word Pieces_8;

  switch (MR_tag((MR_Word) GenericCall_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, GenericCall_7, 0))));
        MR_Word Purity_10 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_7, 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_7, 1))) & (MR_Integer) 1);
        MR_Word Syntax_13 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_7, 3))) & (MR_Integer) 1);

        switch (Syntax_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (PredOrFunc_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_50;
                  MR_Word Var_51;
                  MR_String Var_52;

                  switch (Purity_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      Var_52 = (MR_String) "impure_apply";
                      break;
                    case (MR_Integer) 0:
                      Var_52 = (MR_String) "apply";
                      break;
                    case (MR_Integer) 1:
                      Var_52 = (MR_String) "semipure_apply";
                      break;
                  }
                  {
                    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_51, 1) = ((MR_Box) (Var_52));
                  }
                  {
                    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
                    MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[20])));
                  }
                  {
                    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[31])));
                    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_50));
                  }
                }
                break;
              case (MR_Integer) 0:
                Pieces_8 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[33]));
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (PrintHoVarName_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_23;
                  MR_Word Var_24;

                  {
                    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                    MR_hl_field(3, Var_24, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
                  }
                  {
                    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
                    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[34])));
                  }
                  {
                    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[26])));
                    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_23));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String VarName_14;
                  MR_Word Var_31;
                  MR_Word Var_32;
                  MR_Word Var_33;
                  MR_Word Var_36;
                  MR_Word Var_37;

                  parse_tree__var_db__lookup_var_name_in_source_3_p_0(VarNameSrc_6, Var_9, &VarName_14);
                  {
                    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                    MR_hl_field(3, Var_32, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
                  }
                  {
                    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_37, 1) = ((MR_Box) (VarName_14));
                  }
                  {
                    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
                    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[30])));
                    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
                  }
                  {
                    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
                    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
                  }
                  {
                    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[26])));
                    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_31));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MethodId_18 = ((MR_Word) ((MR_hl_field(1, GenericCall_7, 3))));
        MR_Word Var_57;

        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (MethodId_18));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_19 = ((MR_String) ((MR_hl_field(2, GenericCall_7, 0))));
        MR_Word Var_61;
        MR_Word Var_62;

        {
          Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_62, 1) = ((MR_Box) (EventName_19));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[17])));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_61));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_20 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_7, 0))) & (MR_Integer) 7);
        MR_Word Var_64;
        MR_String Var_65;

        Var_65 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(CastType_20);
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Pieces_8;
}

MR_Word MR_CALL 
hlds__hlds_error_util__call_id_to_pieces_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word VarNameSrc_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word GenericCall_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

    HeadVar__3_3 = hlds__hlds_error_util__generic_call_to_pieces_3_f_0(HeadVar__1_1, VarNameSrc_9, GenericCall_10);
  }
  else
  {
    MR_Word PFSNA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, Var_6, 1) = ((MR_Box) (PFSNA_5));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
hlds__hlds_error_util__unify_context_to_pieces_4_p_0(
  MR_Word UnifyContext_5,
  MR_Word * LastContextWord_6,
  MR_Word STATE_VARIABLE_Pieces_0_9,
  MR_Word * STATE_VARIABLE_Pieces_10)
{
  MR_Word Var_8;

  hlds__hlds_error_util__unify_context_first_to_pieces_6_p_0((MR_Integer) 1, &Var_8, UnifyContext_5, LastContextWord_6, STATE_VARIABLE_Pieces_0_9, STATE_VARIABLE_Pieces_10);
}

void MR_CALL 
hlds__hlds_error_util__unify_context_first_to_pieces_6_p_0(
  MR_Word STATE_VARIABLE_First_0_15,
  MR_Word * STATE_VARIABLE_First_16,
  MR_Word UnifyContext_8,
  MR_Word * LastContextWord_9,
  MR_Word STATE_VARIABLE_Pieces_0_17,
  MR_Word * STATE_VARIABLE_Pieces_18)
{
  MR_Word MainContext_11 = ((MR_Word) ((MR_hl_field(0, UnifyContext_8, 0))));
  MR_Word BottomUpSubContexts_12 = ((MR_Word) ((MR_hl_field(0, UnifyContext_8, 1))));
  MR_Word TopDownSubContexts_13;
  MR_Word LastContextWord0_14;
  MR_Word STATE_VARIABLE_First_1_19;
  MR_Word STATE_VARIABLE_Pieces_1_20;

  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0), BottomUpSubContexts_12, &TopDownSubContexts_13);
  switch (MR_tag((MR_Word) MainContext_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MainContext_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            LastContextWord0_14 = (MR_Integer) 0;
            STATE_VARIABLE_First_1_19 = STATE_VARIABLE_First_0_15;
            STATE_VARIABLE_Pieces_1_20 = STATE_VARIABLE_Pieces_0_17;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_37;
            MR_Word Var_38;

            LastContextWord0_14 = (MR_Integer) 2;
            switch (STATE_VARIABLE_First_0_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_38 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[49]));
                break;
              case (MR_Integer) 1:
                Var_38 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[51]));
                break;
            }
            Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[45])));
            STATE_VARIABLE_Pieces_1_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_17, Var_37);
            STATE_VARIABLE_First_1_19 = (MR_Integer) 1;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ArgNum_22 = ((MR_Integer) ((MR_hl_field(1, MainContext_11, 0))));
        MR_String ArgNumStr_23;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_35;

        LastContextWord0_14 = (MR_Integer) 3;
        ArgNumStr_23 = mercury__string__int_to_string_1_f_0(ArgNum_22);
        switch (STATE_VARIABLE_First_0_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_30 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[49]));
            break;
          case (MR_Integer) 1:
            Var_30 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[51]));
            break;
        }
        {
          Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_35, 0) = ((MR_Box) (ArgNumStr_23));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[43])));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
        }
        Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_31);
        STATE_VARIABLE_Pieces_1_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_17, Var_29);
        STATE_VARIABLE_First_1_19 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallId_24 = ((MR_Word) ((MR_hl_field(2, MainContext_11, 0))));
        MR_Word Markers_25;
        MR_Word ArgIdPieces_26;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Integer ArgNum_56 = ((MR_Integer) ((MR_hl_field(2, MainContext_11, 1))));

        LastContextWord0_14 = (MR_Integer) 1;
        hlds__hlds_markers__init_markers_1_p_0(&Markers_25);
        ArgIdPieces_26 = hlds__hlds_error_util__call_arg_id_to_pieces_4_f_0((MR_Integer) 1, CallId_24, ArgNum_56, Markers_25);
        switch (STATE_VARIABLE_First_0_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_42 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[49]));
            break;
          case (MR_Integer) 1:
            Var_42 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[51]));
            break;
        }
        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgIdPieces_26, (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[41])));
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_43);
        STATE_VARIABLE_Pieces_1_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_17, Var_41);
        STATE_VARIABLE_First_1_19 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Source_27 = ((MR_String) ((MR_hl_field(3, MainContext_11, 0))));
        MR_String Msg_28;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_String Var_62;

        LastContextWord0_14 = (MR_Integer) 0;
        Var_62 = mercury__string__f_43_43_2_f_0(Source_27, (MR_String) " unification:");
        Msg_28 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", Var_62);
        switch (STATE_VARIABLE_First_0_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_50 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[49]));
            break;
          case (MR_Integer) 1:
            Var_50 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[51]));
            break;
        }
        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_52, 1) = ((MR_Box) (Msg_28));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[39])));
        }
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_51);
        STATE_VARIABLE_Pieces_1_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_17, Var_49);
        STATE_VARIABLE_First_1_19 = (MR_Integer) 1;
      }
      break;
  }
  hlds__hlds_error_util__unify_sub_contexts_to_pieces_7_p_0(STATE_VARIABLE_First_1_19, STATE_VARIABLE_First_16, TopDownSubContexts_13, LastContextWord0_14, LastContextWord_9, STATE_VARIABLE_Pieces_1_20, STATE_VARIABLE_Pieces_18);
}

static void MR_CALL 
hlds__hlds_error_util__unify_sub_contexts_to_pieces_7_p_0(
  MR_Word STATE_VARIABLE_First_0_1,
  MR_Word * STATE_VARIABLE_First_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_LastContextWord_0_4,
  MR_Word * STATE_VARIABLE_LastContextWord_5,
  MR_Word STATE_VARIABLE_Pieces_0_6,
  MR_Word * STATE_VARIABLE_Pieces_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Pieces_7 = STATE_VARIABLE_Pieces_0_6;
      *STATE_VARIABLE_LastContextWord_5 = STATE_VARIABLE_LastContextWord_0_4;
      *STATE_VARIABLE_First_2 = STATE_VARIABLE_First_0_1;
    }
    else
    {
      MR_Word SubContext_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word SubContexts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word HeadPieces_25;
      MR_Word NextContexts_26;
      MR_Word STATE_VARIABLE_LastContextWord_1_34;
      MR_Word STATE_VARIABLE_Pieces_1_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Integer ElementNum_23;
      MR_Word AfterContexts_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_LastContextWord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Pieces_0_6;

      succeeded = hlds__hlds_error_util__contexts_describe_list_element_4_p_0(HeadVar__3_3, (MR_Integer) 0, &ElementNum_23, &AfterContexts_24);
      if (succeeded)
      {
        MR_String ElementNumStr_48;
        MR_Word Var_51;
        MR_Word Var_54;
        MR_Word Var_55;

        ElementNumStr_48 = mercury__string__int_to_string_1_f_0(ElementNum_23);
        {
          Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_55, 0) = ((MR_Box) (ElementNumStr_48));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[47])));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
        }
        {
          HeadPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadPieces_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[46])));
          MR_hl_field(1, HeadPieces_25, 1) = ((MR_Box) (Var_51));
        }
        STATE_VARIABLE_LastContextWord_1_34 = (MR_Integer) 4;
        NextContexts_26 = AfterContexts_24;
      }
      else
      {
        HeadPieces_25 = hlds__hlds_error_util__argument_to_pieces_1_f_0(SubContext_18);
        STATE_VARIABLE_LastContextWord_1_34 = (MR_Integer) 3;
        NextContexts_26 = SubContexts_19;
      }
      switch (STATE_VARIABLE_First_0_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_38 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[49]));
          break;
        case (MR_Integer) 1:
          Var_38 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[51]));
          break;
      }
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_25, (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[41])));
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_39);
      STATE_VARIABLE_Pieces_1_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_6, Var_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextContexts_26;
      next_value_of_STATE_VARIABLE_LastContextWord_0_4 = STATE_VARIABLE_LastContextWord_1_34;
      next_value_of_STATE_VARIABLE_Pieces_0_6 = STATE_VARIABLE_Pieces_1_36;
      STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_LastContextWord_0_4 = next_value_of_STATE_VARIABLE_LastContextWord_0_4;
      STATE_VARIABLE_Pieces_0_6 = next_value_of_STATE_VARIABLE_Pieces_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_error_util__contexts_describe_list_element_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumElementsBefore_7,
  MR_Integer * ElementNum_8,
  MR_Word * AfterContexts_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubContext_5;
    MR_Word SubContexts_6;
    MR_Word ConsId_10;
    MR_Integer ArgNum_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SubContext_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      SubContexts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      ConsId_10 = ((MR_Word) ((MR_hl_field(0, SubContext_5, 0))));
      ArgNum_11 = ((MR_Integer) ((MR_hl_field(0, SubContext_5, 1))));
      succeeded = hlds__hlds_error_util__cons_id_may_be_list_cons_1_p_0(ConsId_10);
      if (succeeded)
        switch (ArgNum_11) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *ElementNum_8 = (MR_Integer) ((MR_Unsigned) NumElementsBefore_7 + (MR_Unsigned) 1);
              *AfterContexts_9 = SubContexts_6;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) NumElementsBefore_7 + (MR_Unsigned) 1);
              MR_Word next_value_of_HeadVar__1_1 = SubContexts_6;
              MR_Integer next_value_of_NumElementsBefore_7 = Var_13;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              NumElementsBefore_7 = next_value_of_NumElementsBefore_7;
              continue;
            }
            break;
        }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__hlds_error_util__cons_id_may_be_list_cons_1_p_0(
  MR_Word ConsId_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_2)) == (MR_Integer) 1);
  MR_Word DuCtor_3;
  MR_Word DuCtorSymName_4;
  MR_Integer Var_7;

  if (succeeded)
  {
    DuCtor_3 = (MR_Word) (MR_body((MR_Word) (ConsId_2), (MR_Integer) 1));
    DuCtorSymName_4 = ((MR_Word) ((MR_hl_field(0, DuCtor_3, 0))));
    Var_7 = ((MR_Integer) ((MR_hl_field(0, DuCtor_3, 1))));
    succeeded = (Var_7 == (MR_Integer) 2);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) DuCtorSymName_4)) == (MR_Integer) 1))
      {
        MR_Word ModuleSymName_6 = ((MR_Word) ((MR_hl_field(1, DuCtorSymName_4, 0))));
        MR_String Var_9 = ((MR_String) ((MR_hl_field(1, DuCtorSymName_4, 1))));
        MR_String Var_10;
        MR_String Var_11;

        succeeded = (strcmp(Var_9, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          Var_10 = (MR_String) "list";
          succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_6, &Var_11);
          if (succeeded)
            succeeded = (strcmp(Var_10, Var_11) == 0);
        }
      }
      else
      {
        MR_String Var_8 = ((MR_String) ((MR_hl_field(0, DuCtorSymName_4, 0))));

        succeeded = (strcmp(Var_8, (MR_String) "[|]") == 0);
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__hlds_error_util__argument_to_pieces_1_f_0(
  MR_Word SubContext_3)
{
  MR_Word Pieces_4;
  MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(0, SubContext_3, 0))));
  MR_Integer ArgNum_6 = ((MR_Integer) ((MR_hl_field(0, SubContext_3, 1))));
  MR_String ArgNumStr_7;
  MR_String ConsIdStr_8;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_17;

  ArgNumStr_7 = mercury__string__int_to_string_1_f_0(ArgNum_6);
  ConsIdStr_8 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_5);
  {
    Var_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_12, 0) = ((MR_Box) (ArgNumStr_7));
  }
  {
    Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_17, 1) = ((MR_Box) (ConsIdStr_8));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[16])));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  {
    Pieces_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
    MR_hl_field(1, Pieces_4, 1) = ((MR_Box) (Var_11));
  }
  return Pieces_4;
}

MR_Word MR_CALL 
hlds__hlds_error_util__call_arg_id_to_pieces_4_f_0(
  MR_Word PrintHoVarName_6,
  MR_Word CallId_7,
  MR_Integer ArgNum_8,
  MR_Word PredMarkers_9)
{
  MR_bool succeeded = (ArgNum_8 <= (MR_Integer) 0);
  MR_Word Pieces_10;
  MR_Word ArgNumPieces_11;
  MR_Word CallToPieces_18;
  MR_Word CallIdPieces_19;
  MR_Word Var_30;

  if (succeeded)
    ArgNumPieces_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_21;

    Var_21 = hlds__hlds_error_util__arg_number_to_pieces_2_f_0(CallId_7, ArgNum_8);
    ArgNumPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[36])));
  }
  {
    MR_Word GenericCallId_13;

    succeeded = ((MR_tag((MR_Word) CallId_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      GenericCallId_13 = ((MR_Word) ((MR_hl_field(1, CallId_7, 1))));
      succeeded = ((MR_tag((MR_Word) GenericCallId_13)) != (MR_Integer) 1);
    }
  }
  if (!(succeeded))
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_9, (MR_Integer) 14);
  if (succeeded)
    CallToPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
    CallToPieces_18 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[38]));
  if (((MR_tag((MR_Word) CallId_7)) == (MR_Integer) 1))
  {
    MR_Word VarNameSrc_38 = ((MR_Word) ((MR_hl_field(1, CallId_7, 0))));
    MR_Word GenericCall_39 = ((MR_Word) ((MR_hl_field(1, CallId_7, 1))));

    CallIdPieces_19 = hlds__hlds_error_util__generic_call_to_pieces_3_f_0(PrintHoVarName_6, VarNameSrc_38, GenericCall_39);
  }
  else
  {
    MR_Word PFSNA_34 = ((MR_Word) ((MR_hl_field(0, CallId_7, 0))));
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (PFSNA_34));
    }
    {
      CallIdPieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallIdPieces_19, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, CallIdPieces_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CallToPieces_18, CallIdPieces_19);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumPieces_11, Var_30);
  return Pieces_10;
}

static MR_Word MR_CALL 
hlds__hlds_error_util__arg_number_to_pieces_2_f_0(
  MR_Word CallId_4,
  MR_Integer ArgNum_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;

  if (((MR_tag((MR_Word) CallId_4)) == (MR_Integer) 1))
  {
    MR_Word GenericCall_13 = ((MR_Word) ((MR_hl_field(1, CallId_4, 1))));

    switch (MR_tag((MR_Word) GenericCall_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Syntax_16 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_13, 3))) & (MR_Integer) 1);
          MR_Integer PredFormArityInt_17;
          MR_Word PredOrFunc_70 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_13, 1))) & (MR_Integer) 1);
          MR_Word PredFormArity_71 = ((MR_Word) ((MR_hl_field(0, GenericCall_13, 2))));

          PredFormArityInt_17 = (MR_Integer) (PredFormArity_71);
          succeeded = (PredOrFunc_70 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (ArgNum_5 == PredFormArityInt_17);
          if (succeeded)
            Pieces_6 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[57]));
          else
            switch (Syntax_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_51;
                  MR_Word Var_52;

                  {
                    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_52, 1) = ((MR_Box) (ArgNum_5));
                  }
                  {
                    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
                    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_51));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = (ArgNum_5 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MR_Word Var_36;
                    MR_Word Var_37;

                    {
                      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(3, Var_37, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_70));
                    }
                    {
                      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
                      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[60])));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[58])));
                      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_36));
                    }
                  }
                  else
                  {
                    MR_Word Var_44;
                    MR_Word Var_45;
                    MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) ArgNum_5 - (MR_Unsigned) 1);

                    {
                      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_45, 1) = ((MR_Box) (Var_46));
                    }
                    {
                      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
                      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
                      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_44));
                    }
                  }
                }
                break;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_89;
          MR_Word Var_90;

          {
            Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_90, 1) = ((MR_Box) (ArgNum_5));
          }
          {
            Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
            MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_89));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_94;
          MR_Word Var_95;

          {
            Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_95, 1) = ((MR_Box) (ArgNum_5));
          }
          {
            Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
            MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_94));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_97 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_13, 0))) & (MR_Integer) 7);

          switch (Var_97) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word Var_79;
                MR_Word Var_80;

                {
                  Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_80, 1) = ((MR_Box) (ArgNum_5));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
                  MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
                  MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_79));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_84;
                MR_Word Var_85;

                {
                  Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_85, 1) = ((MR_Box) (ArgNum_5));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
                  MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_84));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                succeeded = (ArgNum_5 == (MR_Integer) 2);
                if (succeeded)
                  Pieces_6 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[53]));
                else
                  Pieces_6 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[55]));
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_60;
                MR_Word Var_61;

                {
                  Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_61, 1) = ((MR_Box) (ArgNum_5));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
                  MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_60));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_74;
                MR_Word Var_75;

                {
                  Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_75, 1) = ((MR_Box) (ArgNum_5));
                }
                {
                  Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
                  MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
                  MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_74));
                }
              }
              break;
          }
        }
        break;
    }
  }
  else
  {
    MR_Word PFSymNameArity_7 = ((MR_Word) ((MR_hl_field(0, CallId_4, 0))));
    MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_7, 0))) & (MR_Integer) 1);
    MR_Word PredFormArity_10 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_7, 2))));
    MR_Integer Arity_11 = (MR_Integer) (PredFormArity_10);

    succeeded = (PredOrFunc_8 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Arity_11 == ArgNum_5);
    if (succeeded)
      Pieces_6 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[57]));
    else
    {
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (ArgNum_5));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[15])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_28));
      }
    }
  }
  return Pieces_6;
}

MR_Word MR_CALL 
hlds__hlds_error_util__generic_call_to_pieces_3_f_0(
  MR_Word PrintHoVarName_5,
  MR_Word VarNameSrc_6,
  MR_Word GenericCall_7)
{
  MR_Word Pieces_8;

  switch (MR_tag((MR_Word) GenericCall_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, GenericCall_7, 0))));
        MR_Word Purity_10 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_7, 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_7, 1))) & (MR_Integer) 1);
        MR_Word Syntax_13 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_7, 3))) & (MR_Integer) 1);

        switch (Syntax_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (PredOrFunc_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String ApplyFuncName_15;
                  MR_Word Var_51;
                  MR_Word Var_52;

                  switch (Purity_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      ApplyFuncName_15 = (MR_String) "impure_apply";
                      break;
                    case (MR_Integer) 0:
                      ApplyFuncName_15 = (MR_String) "apply";
                      break;
                    case (MR_Integer) 1:
                      ApplyFuncName_15 = (MR_String) "semipure_apply";
                      break;
                  }
                  {
                    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_52, 1) = ((MR_Box) (ApplyFuncName_15));
                  }
                  {
                    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
                    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[20])));
                  }
                  {
                    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[18])));
                    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_51));
                  }
                }
                break;
              case (MR_Integer) 0:
                Pieces_8 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[25]));
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (PrintHoVarName_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_24;
                  MR_Word Var_25;

                  {
                    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                    MR_hl_field(3, Var_25, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
                  }
                  {
                    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
                    MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[28])));
                  }
                  {
                    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[26])));
                    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_24));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String VarName_14;
                  MR_Word Var_32;
                  MR_Word Var_33;
                  MR_Word Var_34;
                  MR_Word Var_37;
                  MR_Word Var_38;

                  parse_tree__var_db__lookup_var_name_in_source_3_p_0(VarNameSrc_6, Var_9, &VarName_14);
                  {
                    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                    MR_hl_field(3, Var_33, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
                  }
                  {
                    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_38, 1) = ((MR_Box) (VarName_14));
                  }
                  {
                    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
                    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[30])));
                    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
                  }
                  {
                    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
                    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
                  }
                  {
                    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[29])));
                    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_32));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MethodId_19 = ((MR_Word) ((MR_hl_field(1, GenericCall_7, 3))));
        MR_Word Var_57;

        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (MethodId_19));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_20 = ((MR_String) ((MR_hl_field(2, GenericCall_7, 0))));
        MR_Word Var_61;
        MR_Word Var_62;

        {
          Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_62, 1) = ((MR_Box) (EventName_20));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[17])));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_61));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_21 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_7, 0))) & (MR_Integer) 7);
        MR_Word Var_64;
        MR_String Var_65;

        Var_65 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(CastType_21);
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Pieces_8;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_11;

  conv0_Pieces_11 = hlds__hlds_error_util__describe_one_call_site_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_11));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word Sites_9)
{
  MR_Word Pieces_10;
  MR_Word PiecesList_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_5[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_call_sites_4_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (MaybeColor_7));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (ShouldModuleQualify_8));
  }
  PiecesList_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_error_util_scalar_common_2[0]), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_12, Sites_9);
  Pieces_10 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", PiecesList_11);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_call_site_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word HeadVar__4_4)
{
  MR_Word Pieces_11;
  MR_Word PPId_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word ProcNamePieces_12;
  MR_String FileName_13;
  MR_Integer LineNumber_14;
  MR_String LineNumberStr_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_String Var_21;
  MR_String Var_22;

  ProcNamePieces_12 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_6, MaybeColor_7, ShouldModuleQualify_8, PPId_9);
  FileName_13 = ((MR_String) ((MR_hl_field(0, Context_10, 0))));
  LineNumber_14 = ((MR_Integer) ((MR_hl_field(0, Context_10, 1))));
  mercury__string__int_to_string_2_p_0(LineNumber_14, &LineNumberStr_15);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ":", LineNumberStr_15);
  Var_21 = mercury__string__f_43_43_2_f_0(FileName_13, Var_22);
  {
    Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_20, 0) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[14])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcNamePieces_12, Var_16);
  return Pieces_11;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_10;

  conv0_Pieces_10 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_10));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PPIds_9)
{
  MR_Word Pieces_10;
  MR_Word PiecesList_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_5[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_proc_names_4_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (MaybeColor_7));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (ShouldModuleQualify_8));
  }
  PiecesList_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_12, PPIds_9);
  Pieces_10 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", PiecesList_11);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_unqual_proc_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, PredProcId_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_qual_proc_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, PredProcId_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PredProcId_9)
{
  MR_Word Pieces_10;
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, 0))));
  MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(0, PredProcId_9, 1))));
  MR_Word PredPieces_14;
  MR_Integer ProcIdInt_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word PredInfo_23;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_12, &PredInfo_23);
  PredPieces_14 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_7, ShouldModuleQualify_8, (MR_Word) ((MR_Unsigned) 0U), PredInfo_23);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ProcIdInt_15);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (ProcIdInt_15));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[13])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_14, Var_16);
  return Pieces_10;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__prog_mode__simplify_std_from_to_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__prog_mode__simplify_std_from_to_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word Lang_9,
  MR_Word MaybeColor_10,
  MR_Word ShouldModuleQualify_11,
  MR_Word SuffixPieces_12,
  MR_Word PredProcId_13)
{
  MR_bool succeeded;
  MR_Word Pieces_14;
  MR_Word PredInfo_15;
  MR_Word ProcInfo_16;
  MR_Word PredOrFunc_17;
  MR_Word ModuleName_18;
  MR_String PredName_19;
  MR_Word ProcTable_20;
  MR_Integer NumProcs_21;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_8, PredProcId_13, &PredInfo_15, &ProcInfo_16);
  PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
  ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_20);
  mercury__map__count_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_20, &NumProcs_21);
  succeeded = (NumProcs_21 > (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word PredFormArity_22;
    MR_Word ArgModes0_23;
    MR_Integer NumExtraArgs_24;
    MR_Word ArgModes_25;
    MR_Word StrippedArgModes_26;
    MR_Word InstVarSet_27;
    MR_String ArgModesStr_28;
    MR_String MaybeModuleNameDotStr_31;
    MR_String Descr_32;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;

    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_15, &PredFormArity_22);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_16, &ArgModes0_23);
    NumExtraArgs_24 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), PredFormArity_22, ArgModes0_23);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_24, ArgModes0_23, &ArgModes_25);
    parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0((MR_Integer) 0, (MR_Integer) 1, ArgModes_25, &StrippedArgModes_26);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_16, &InstVarSet_27);
    switch (PredOrFunc_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_29;
          MR_Word FuncRetMode_30;
          MR_String Var_36;
          MR_String Var_37;
          MR_String Var_39;
          MR_Box conv0_FuncRetMode_30;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StrippedArgModes_26, &FuncArgModes_29, &conv0_FuncRetMode_30);
          FuncRetMode_30 = ((MR_Word) (conv0_FuncRetMode_30));
          if ((FuncArgModes_29 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_36 = (MR_String) "";
          else
          {
            MR_Word ArgModes_56;
            MR_String ArgsStr_57;
            MR_String Var_60;

            ArgModes_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[1]), FuncArgModes_29);
            ArgsStr_57 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_9, InstVarSet_27, ArgModes_56);
            Var_60 = mercury__string__f_43_43_2_f_0(ArgsStr_57, (MR_String) ")");
            Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_60);
          }
          Var_39 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(Lang_9, InstVarSet_27, FuncRetMode_30);
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_39);
          ArgModesStr_28 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
        }
        break;
      case (MR_Integer) 0:
        if ((StrippedArgModes_26 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgModesStr_28 = (MR_String) "";
        else
        {
          MR_Word ArgModes_63;
          MR_String ArgsStr_64;
          MR_String Var_67;

          ArgModes_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[2]), StrippedArgModes_26);
          ArgsStr_64 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_9, InstVarSet_27, ArgModes_63);
          Var_67 = mercury__string__f_43_43_2_f_0(ArgsStr_64, (MR_String) ")");
          ArgModesStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_67);
        }
        break;
    }
    switch (ShouldModuleQualify_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_70;

          Var_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_18);
          MaybeModuleNameDotStr_31 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) ".");
        }
        break;
      case (MR_Integer) 1:
        MaybeModuleNameDotStr_31 = (MR_String) "";
        break;
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (ArgModesStr_28));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[12])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (PredName_19));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MaybeModuleNameDotStr_31));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "\140"));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
    }
    mercury__string__append_list_2_p_0(Var_40, &Descr_32);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (Descr_32));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, SuffixPieces_12);
    Pieces_14 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_10, Var_48);
  }
  else
    Pieces_14 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_10, ShouldModuleQualify_11, SuffixPieces_12, PredInfo_15);
  return Pieces_14;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_12;

  conv0_Pieces_12 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_12));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PredIds_9)
{
  MR_Word Pieces_10;
  MR_Word PiecesList_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_pred_names_4_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (MaybeColor_7));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (ShouldModuleQualify_8));
    MR_hl_field(0, Var_13, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  PiecesList_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_13, PredIds_9);
  Pieces_10 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", PiecesList_12);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word MaybeColor_8,
  MR_Word ShouldModuleQualify_9,
  MR_Word SuffixPieces_10,
  MR_Word PredId_11)
{
  MR_Word Pieces_12;
  MR_Word PredInfo_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_11, &PredInfo_13);
  Pieces_12 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_8, ShouldModuleQualify_9, SuffixPieces_10, PredInfo_13);
  return Pieces_12;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_unqual_pred_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_9);
  HeadVar__3_3 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_qual_pred_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_9);
  HeadVar__3_3 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(
  MR_Word MaybeColor_6,
  MR_Word ShouldModuleQualify_7,
  MR_Word SuffixPieces_8,
  MR_Word PredInfo_9)
{
  MR_bool succeeded;
  MR_Word Pieces_10;
  MR_String PredName_11;
  MR_Word ModuleName_12;
  MR_Word PredFormArity_13;
  MR_Word Markers_14;
  MR_Word Origin_15;
  MR_Word SpecialId_16;
  MR_Word TypeCtor_17;
  MR_Word Var_34;

  PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
  ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_9);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_9, &PredFormArity_13);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_14);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_15);
  succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_34 = ((MR_Word) ((MR_hl_field(1, Origin_15, 0))));
    succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialId_16 = ((MR_Unsigned) ((MR_hl_field(0, Var_34, 0))) & (MR_Integer) 3);
      TypeCtor_17 = ((MR_Word) ((MR_hl_field(0, Var_34, 1))));
    }
  }
  if (succeeded)
  {
    MR_String Descr_18;
    MR_Word TypeSymName_19;
    MR_Integer TypeArity_20;
    MR_Word TypeSymNamePiece_21;
    MR_Word Pieces0_22;
    MR_Word Var_47;

    hlds__special_pred__special_pred_description_2_p_0(SpecialId_16, &Descr_18);
    TypeSymName_19 = ((MR_Word) ((MR_hl_field(0, TypeCtor_17, 0))));
    TypeArity_20 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_17, 1))));
    switch (ShouldModuleQualify_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TypeSymNamePiece_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeSymNamePiece_21, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, TypeSymNamePiece_21, 1) = ((MR_Box) (TypeSymName_19));
        }
        break;
      case (MR_Integer) 1:
        {
          TypeSymNamePiece_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeSymNamePiece_21, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, TypeSymNamePiece_21, 1) = ((MR_Box) (TypeSymName_19));
        }
        break;
    }
    succeeded = (TypeArity_20 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;

      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (Descr_18));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (TypeSymNamePiece_21));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[1])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Pieces0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_22, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Pieces0_22, 1) = ((MR_Box) (Var_36));
      }
    }
    else
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_45;

      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_41, 1) = ((MR_Box) (Descr_18));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (TypeSymNamePiece_21));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[2])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Pieces0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_22, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, Pieces0_22, 1) = ((MR_Box) (Var_42));
      }
    }
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_22, SuffixPieces_8);
    Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_47);
  }
  else
  {
    MR_Word PFNA_24;
    MR_Word Var_48;

    succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_Word) ((MR_hl_field(0, Origin_15, 0))));
      succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 2);
      if (succeeded)
        PFNA_24 = ((MR_Word) ((MR_hl_field(2, Var_48, 1))));
    }
    if (succeeded)
    {
      MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, PFNA_24, 0))) & (MR_Integer) 1);
      MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(0, PFNA_24, 1))));
      MR_Word UserArity_27 = ((MR_Word) ((MR_hl_field(0, PFNA_24, 2))));
      MR_Integer UserArityInt_28 = (MR_Integer) (UserArity_27);
      MR_Word SNA_29;
      MR_Word SNAPiece_30;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        SNA_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_29, 0) = ((MR_Box) (SymName_26));
        MR_hl_field(0, SNA_29, 1) = ((MR_Box) (UserArityInt_28));
      }
      switch (ShouldModuleQualify_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            SNAPiece_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SNAPiece_30, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, SNAPiece_30, 1) = ((MR_Box) (SNA_29));
          }
          break;
        case (MR_Integer) 1:
          {
            SNAPiece_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SNAPiece_30, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, SNAPiece_30, 1) = ((MR_Box) (SNA_29));
          }
          break;
      }
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[3])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (SNAPiece_30));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, SuffixPieces_8);
      Var_55 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_56);
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_55);
    }
    else
    {
      MR_Word PFNA_124;
      MR_Word Var_59;

      succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_59 = ((MR_Word) ((MR_hl_field(0, Origin_15, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_59, 0)))) == (MR_Integer) 0)));
        if (succeeded)
          PFNA_124 = ((MR_Word) ((MR_hl_field(3, Var_59, 1))));
      }
      if (succeeded)
      {
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word PredOrFunc_98 = ((MR_Unsigned) ((MR_hl_field(0, PFNA_124, 0))) & (MR_Integer) 1);
        MR_Word SymName_99 = ((MR_Word) ((MR_hl_field(0, PFNA_124, 1))));
        MR_Word UserArity_100 = ((MR_Word) ((MR_hl_field(0, PFNA_124, 2))));
        MR_Integer UserArityInt_101 = (MR_Integer) (UserArity_100);
        MR_Word SNA_102;
        MR_Word SNAPiece_103;

        {
          SNA_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_102, 0) = ((MR_Box) (SymName_99));
          MR_hl_field(0, SNA_102, 1) = ((MR_Box) (UserArityInt_101));
        }
        switch (ShouldModuleQualify_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              SNAPiece_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SNAPiece_103, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, SNAPiece_103, 1) = ((MR_Box) (SNA_102));
            }
            break;
          case (MR_Integer) 1:
            {
              SNAPiece_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SNAPiece_103, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, SNAPiece_103, 1) = ((MR_Box) (SNA_102));
            }
            break;
        }
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_64, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_98));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[4])));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (SNAPiece_103));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, SuffixPieces_8);
        Var_66 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_67);
        Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_66);
      }
      else
      {
        succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_14, (MR_Integer) 13);
        if (succeeded)
        {
          MR_Word Pieces0_104;

          Pieces0_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[6])), SuffixPieces_8);
          Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Pieces0_104);
        }
        else
        {
          MR_Word PromiseType_32;

          succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_9, &PromiseType_32);
          if (succeeded)
          {
            MR_Word Var_75;
            MR_Word Var_76;
            MR_String Var_77;
            MR_Word Pieces0_105;

            Var_77 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_32);
            {
              Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
            }
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[8])));
            }
            Pieces0_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, SuffixPieces_8);
            Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Pieces0_105);
          }
          else
          {
            MR_Word PrefixPieces_33;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word PredOrFunc_106;
            MR_Word SymName_107;
            MR_Integer UserArityInt_108;
            MR_Word SNA_109;
            MR_Word SNAPiece_110;

            PredOrFunc_106 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_14, (MR_Integer) 12);
            if (succeeded)
            {
              MR_Word Var_85;
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(3, Var_86, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_106));
              }
              {
                Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[11])));
              }
              {
                PrefixPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PrefixPieces_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[9])));
                MR_hl_field(1, PrefixPieces_33, 1) = ((MR_Box) (Var_85));
              }
            }
            else
            {
              MR_Word Var_91;

              {
                Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(3, Var_91, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_106));
              }
              {
                PrefixPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PrefixPieces_33, 0) = ((MR_Box) (Var_91));
                MR_hl_field(1, PrefixPieces_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            {
              SymName_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SymName_107, 0) = ((MR_Box) (ModuleName_12));
              MR_hl_field(1, SymName_107, 1) = ((MR_Box) (PredName_11));
            }
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_106, &Var_93, PredFormArity_13);
            UserArityInt_108 = (MR_Integer) (Var_93);
            {
              SNA_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SNA_109, 0) = ((MR_Box) (SymName_107));
              MR_hl_field(0, SNA_109, 1) = ((MR_Box) (UserArityInt_108));
            }
            switch (ShouldModuleQualify_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SNAPiece_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SNAPiece_110, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(3, SNAPiece_110, 1) = ((MR_Box) (SNA_109));
                }
                break;
              case (MR_Integer) 1:
                {
                  SNAPiece_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SNAPiece_110, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                  MR_hl_field(3, SNAPiece_110, 1) = ((MR_Box) (SNA_109));
                }
                break;
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (SNAPiece_110));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, SuffixPieces_8);
            Var_94 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_95);
            Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_33, Var_94);
          }
        }
      }
    }
  }
  return Pieces_10;
}

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____last_context_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_error_util____Unify____last_context_word_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_error_util____Compare____last_context_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_error_util____Compare____last_context_word_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____maybe_print_ho_var_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_error_util____Unify____maybe_print_ho_var_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_error_util____Compare____maybe_print_ho_var_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_error_util____Compare____maybe_print_ho_var_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_error_util____Unify____should_module_qualify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_error_util____Compare____should_module_qualify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_error_util__init(void)
{
}

void mercury__hlds__hlds_error_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_last_context_word_0);
  MR_register_type_ctor_info(&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_maybe_print_ho_var_name_0);
  MR_register_type_ctor_info(&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0);
}

void mercury__hlds__hlds_error_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_error_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_error_util.
