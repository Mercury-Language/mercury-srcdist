/*
** Automatically generated from `typecheck_error_overload.m'
** by the Mercury compiler,
** version rotd-2024-05-04
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


// :- module check_hlds.typecheck_error_overload.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_overload__init
ENDINIT
*/

#include "check_hlds.typecheck_error_overload.mih"


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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
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
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_error_overload__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__IntroducedFrom__func__too_much_overloading_to_msgs__110__1_1_f_0(
  MR_Word HeadVar__1_112);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__context_to_error_msg_2_f_0(
  MR_Word Pieces_4,
  MR_Word Context_5);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__ambiguity_error_possibilities_to_pieces_6_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word OverloadedSymbolMap_8,
  MR_Word IsError_9);


static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_1[63][2];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_6[1][7];




static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_1[63][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: ambiguous overloading causes type ambiguity."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Possible type assignments include:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "warning: highly ambiguous overloading."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It may also make your code difficult to understand."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This may cause type-checking to be very slow."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: excessively ambiguous overloading."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This caused the type checker to exceed its limits."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[10])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the following context."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The following symbol was overloaded"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the following contexts."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The following symbols were overloaded"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[22])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The function symbol"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is also overloaded here."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[3])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The predicate symbol"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "\"Syntax\" chapter of the Mercury language reference manual."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) " sub-section of the \"Data-terms\" section of the"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_overload_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "For details see the"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is to use \"with_type\"."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The way to add an explicit type qualification"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to resolve the type ambiguity."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You will need to add an explicit type qualification"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[12])))
  },
  /* row  60 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[16])))
  },
  /* row  61 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[52])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_overload_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "\"Explicit type qualification\"")) },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_error_overload__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_overload__list__ti_list_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__IntroducedFrom__func__too_much_overloading_to_msgs__110__1_1_f_0(
  MR_Word HeadVar__1_112)
{
  MR_Word HeadVar__2_113;

  HeadVar__2_113 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), HeadVar__1_112);
  return HeadVar__2_113;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__context_to_error_msg_2_f_0(
  MR_Word Pieces_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Context_5));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Pieces_4));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = check_hlds__typecheck_error_overload__context_to_error_msg_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__typecheck_error_util__describe_cons_type_info_source_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Msgs_7;
  MR_Word Symbol_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SortedContexts_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  if ((SortedContexts_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_overload.describe_overloaded_symbol\'/2", (MR_String) "no context");
  else
  {
    MR_Word FirstContext_8 = ((MR_Word) ((MR_hl_field(1, SortedContexts_6, (MR_Integer) 0))));
    MR_Word LaterContexts_9 = ((MR_Word) ((MR_hl_field(1, SortedContexts_6, (MR_Integer) 1))));
    MR_Word FirstPieces_20;
    MR_Word LaterPieces_21;
    MR_Word FirstMsg_28;
    MR_Word LaterMsgs_29;
    MR_Word Var_99;

    if (((MR_tag((MR_Word) Symbol_5)) == (MR_Integer) 1))
    {
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(1, Symbol_5, (MR_Integer) 0))));
      MR_Word Sources0_23 = ((MR_Word) ((MR_hl_field(1, Symbol_5, (MR_Integer) 1))));
      MR_Word Sources_24;
      MR_Word SourcePiecesList_25;
      MR_Word SortedSourcePiecesList_26;
      MR_Word SourcePieces_27;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_82;
      MR_Word Var_91;
      MR_Word StartPieces_100;

      mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), Sources0_23, &Sources_24);
      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 25U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (ConsId_22));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[33])));
      }
      {
        StartPieces_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, StartPieces_100, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[26])));
        MR_hl_field(1, StartPieces_100, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_82, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[1]));
        MR_hl_field(0, Var_82, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_1));
        MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_82, 3) = ((MR_Box) (ModuleInfo_4));
      }
      SourcePiecesList_25 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), Var_82, Sources_24);
      mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), SourcePiecesList_25, &SortedSourcePiecesList_26);
      SourcePieces_27 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(SortedSourcePiecesList_26, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[34])));
      FirstPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_100, SourcePieces_27);
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[36])));
      }
      {
        LaterPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LaterPieces_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[26])));
        MR_hl_field(1, LaterPieces_21, 1) = ((MR_Box) (Var_91));
      }
    }
    else
    {
      MR_Word SymNamePredFormArity_10 = ((MR_Word) ((MR_hl_field(0, Symbol_5, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(0, Symbol_5, (MR_Integer) 1))));
      MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_10, (MR_Integer) 0))));
      MR_Word PredFormArity_13 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_10, (MR_Integer) 1))));
      MR_Integer PredFormArityInt_14 = (MR_Integer) (PredFormArity_13);
      MR_Word SNA_15;
      MR_Word StartPieces_16;
      MR_Word PredIdPiecesList_17;
      MR_Word SortedPredIdPiecesList_18;
      MR_Word PredIdPieces_19;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_48;
      MR_Word Var_58;

      {
        SNA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_15, 0) = ((MR_Box) (SymName_12));
        MR_hl_field(0, SNA_15, 1) = ((MR_Box) (PredFormArityInt_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (SNA_15));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[33])));
      }
      {
        StartPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, StartPieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[37])));
        MR_hl_field(1, StartPieces_16, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_6[0]));
        MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_2));
        MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_48, 3) = ((MR_Box) (ModuleInfo_4));
        MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      PredIdPiecesList_17 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), Var_48, PredIds_11);
      mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), PredIdPiecesList_17, &SortedPredIdPiecesList_18);
      PredIdPieces_19 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(SortedPredIdPiecesList_18, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[34])));
      FirstPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_16, PredIdPieces_19);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[36])));
      }
      {
        LaterPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LaterPieces_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[37])));
        MR_hl_field(1, LaterPieces_21, 1) = ((MR_Box) (Var_58));
      }
    }
    {
      FirstMsg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstMsg_28, 0) = ((MR_Box) (FirstContext_8));
      MR_hl_field(0, FirstMsg_28, 1) = ((MR_Box) (FirstPieces_20));
    }
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_99, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[2]));
      MR_hl_field(0, Var_99, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_3));
      MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_99, 3) = ((MR_Box) (LaterPieces_21));
    }
    LaterMsgs_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_99, LaterContexts_9);
    {
      Msgs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_7, 0) = ((MR_Box) (FirstMsg_28));
      MR_hl_field(1, Msgs_7, 1) = ((MR_Box) (LaterMsgs_29));
    }
  }
  return Msgs_7;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_overload__report_ambiguity_error_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word OverloadedSymbolMap_9,
  MR_Word TypeAssign1_10,
  MR_Word TypeAssign2_11)
{
  MR_Word Spec_12;
  MR_Word InClauseForPieces_13;
  MR_Word VarSet_15;
  MR_Word InstVarSet_16;
  MR_Word VarTypes1_17;
  MR_Word Vars1_18;
  MR_Word AmbiguityPieces_19;
  MR_Word Pieces2_20;
  MR_Word VerboseComponents_21;
  MR_Word WarningMsgs_22;
  MR_Word MainMsg_25;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_48;

  InClauseForPieces_13 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_7);
  VarSet_15 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_7, &InstVarSet_16);
  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_10, &VarTypes1_17);
  parse_tree__vartypes__vartypes_vars_2_p_0(VarTypes1_17, &Vars1_18);
  AmbiguityPieces_19 = check_hlds__typecheck_error_overload__ambiguity_error_possibilities_to_pieces_6_f_0((MR_Integer) 1, VarSet_15, InstVarSet_16, Vars1_18, TypeAssign1_10, TypeAssign2_11);
  if ((AmbiguityPieces_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Pieces2_20 = (MR_Word) ((MR_Unsigned) 0U);
    VerboseComponents_21 = (MR_Word) ((MR_Unsigned) 0U);
    WarningMsgs_22 = check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0(ClauseContext_7, Context_8, OverloadedSymbolMap_9, (MR_Integer) 0);
  }
  else
  {
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (AmbiguityPieces_19));
    }
    {
      Pieces2_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces2_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[6])));
      MR_hl_field(1, Pieces2_20, 1) = ((MR_Box) (Var_35));
    }
    VerboseComponents_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[62]));
    WarningMsgs_22 = (MR_Word) ((MR_Unsigned) 0U);
  }
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[5])), Pieces2_20);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, Var_44);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (VerboseComponents_21));
  }
  {
    MainMsg_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MainMsg_25, 0) = ((MR_Box) (Context_8));
    MR_hl_field(2, MainMsg_25, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MainMsg_25));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (WarningMsgs_22));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_overload.report_ambiguity_error\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_48));
  }
  return Spec_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__ambiguity_error_possibilities_to_pieces_6_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__7_7;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word VarTypes1_21;
    MR_Word VarTypes2_22;
    MR_Word TypeBindings1_23;
    MR_Word TypeBindings2_24;
    MR_Word ExistQTVars1_25;
    MR_Word ExistQTVars2_26;
    MR_Word HeadPieces_37;
    MR_Word TailPieces_38;
    MR_Word T1_29;
    MR_Word T2_30;
    MR_Word Type1_27;
    MR_Word Type2_28;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(HeadVar__5_5, &VarTypes1_21);
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(HeadVar__6_6, &VarTypes2_22);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(HeadVar__5_5, &TypeBindings1_23);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(HeadVar__6_6, &TypeBindings2_24);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(HeadVar__5_5, &ExistQTVars1_25);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(HeadVar__6_6, &ExistQTVars2_26);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes1_21, Var_16, &Type1_27);
    if (succeeded)
    {
      succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes2_22, Var_16, &Type2_28);
      if (succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_23, Type1_27, &T1_29);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings2_24, Type2_28, &T2_30);
        succeeded = check_hlds__typecheck_error_util__identical_types_2_p_0(T1_29, T2_30);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word TVarSet1_31;
      MR_Word TVarSet2_32;
      MR_Word UnnamedPiecesT1_33;
      MR_Word UnnamedPiecesT2_34;
      MR_Word PiecesT1_35;
      MR_Word PiecesT2_36;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_String Var_45;
      MR_Word Var_50;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_61;
      MR_Word Var_66;
      MR_Word Var_71;

      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(HeadVar__5_5, &TVarSet1_31);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(HeadVar__6_6, &TVarSet2_32);
      UnnamedPiecesT1_33 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet1_31, HeadVar__3_3, (MR_Integer) 0, HeadVar__1_1, ExistQTVars1_25, T1_29);
      UnnamedPiecesT2_34 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet2_32, HeadVar__3_3, (MR_Integer) 0, HeadVar__1_1, ExistQTVars2_26, T2_30);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), ((MR_Box) (UnnamedPiecesT1_33)), ((MR_Box) (UnnamedPiecesT2_34)));
      if (succeeded)
      {
        PiecesT1_35 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet1_31, HeadVar__3_3, (MR_Integer) 1, HeadVar__1_1, ExistQTVars1_25, T1_29);
        PiecesT2_36 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet2_32, HeadVar__3_3, (MR_Integer) 1, HeadVar__1_1, ExistQTVars2_26, T2_30);
      }
      else
      {
        PiecesT1_35 = UnnamedPiecesT1_33;
        PiecesT2_36 = UnnamedPiecesT2_34;
      }
      Var_45 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__2_2, Var_16);
      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[54])));
      }
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PiecesT2_36, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[56])));
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[28])), Var_71);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[58])), Var_66);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[56])), Var_61);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PiecesT1_35, Var_56);
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[28])), Var_55);
      HeadPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_50);
    }
    else
      HeadPieces_37 = (MR_Word) ((MR_Unsigned) 0U);
    TailPieces_38 = check_hlds__typecheck_error_overload__ambiguity_error_possibilities_to_pieces_6_f_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Vars_17, HeadVar__5_5, HeadVar__6_6);
    HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_37, TailPieces_38);
  }
  return HeadVar__7_7;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_overload__report_error_too_much_overloading_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7)
{
  MR_Word Spec_8;
  MR_Word Msgs_9;

  Msgs_9 = check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0(ClauseContext_5, Context_6, OverloadedSymbolMap_7, (MR_Integer) 1);
  {
    Spec_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_overload.report_error_too_much_overloading\'/3"));
    MR_hl_field(2, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_8, 3) = ((MR_Box) (Msgs_9));
  }
  return Spec_8;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_overload__report_warning_too_much_overloading_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7)
{
  MR_Word Spec_8;
  MR_Word Msgs_9;

  Msgs_9 = check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0(ClauseContext_5, Context_6, OverloadedSymbolMap_7, (MR_Integer) 0);
  {
    Spec_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_overload.report_warning_too_much_overloading\'/3"));
    MR_hl_field(2, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(2, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_8, 3) = ((MR_Box) (Msgs_9));
  }
  return Spec_8;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Msgs_7;

  conv2_Msgs_7 = check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Msgs_7));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Msgs_7;

  conv1_Msgs_7 = check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Msgs_7));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_113;

  conv0_HeadVar__2_113 = check_hlds__typecheck_error_overload__IntroducedFrom__func__too_much_overloading_to_msgs__110__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_113));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word OverloadedSymbolMap_8,
  MR_Word IsError_9)
{
  MR_Word Msgs_10;
  MR_Word InClauseForPieces_11;
  MR_Word InitComponent_13;
  MR_Word VerboseComponent_15;
  MR_Word FirstMsg_16;
  MR_Word OverloadedSymbols_17;
  MR_Word OverloadedSymbolsSortedContexts_18;
  MR_Word Var_63;
  MR_Word Var_64;

  InClauseForPieces_11 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_6);
  switch (IsError_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word InitPieces_12;

        InitPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[8])));
        {
          InitComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InitComponent_13, 0) = ((MR_Box) (InitPieces_12));
        }
        VerboseComponent_15 = (MR_Word) (MR_mkword(2, &check_hlds__typecheck_error_overload_scalar_common_1[59]));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InitPieces_101;

        InitPieces_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[14])));
        {
          InitComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InitComponent_13, 0) = ((MR_Box) (InitPieces_101));
        }
        VerboseComponent_15 = (MR_Word) (MR_mkword(2, &check_hlds__typecheck_error_overload_scalar_common_1[60]));
      }
      break;
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (VerboseComponent_15));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (InitComponent_13));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    FirstMsg_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FirstMsg_16, 0) = ((MR_Box) (Context_7));
    MR_hl_field(2, FirstMsg_16, 1) = ((MR_Box) (Var_63));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[0]), OverloadedSymbolMap_8, &OverloadedSymbols_17);
  OverloadedSymbolsSortedContexts_18 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[1]), OverloadedSymbols_17);
  if ((OverloadedSymbolsSortedContexts_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Msgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
      MR_hl_field(1, Msgs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(1, OverloadedSymbolsSortedContexts_18, (MR_Integer) 1))));
    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(1, OverloadedSymbolsSortedContexts_18, (MR_Integer) 0))));

    if ((Var_142 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Contexts_20 = ((MR_Word) ((MR_hl_field(0, Var_143, (MR_Integer) 1))));
      MR_Word SecondPieces_22;
      MR_Word SecondMsg_29;
      MR_Word ModuleInfo_30;
      MR_Word DetailMsgsList_31;
      MR_Word DetailMsgs_32;
      MR_Word Var_99;
      MR_Word Var_100;

      if ((Contexts_20 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_overload.too_much_overloading_to_msgs\'/4", (MR_String) "no contexts");
      else
      {
        MR_Word Var_144 = ((MR_Word) ((MR_hl_field(1, Contexts_20, (MR_Integer) 1))));

        if ((Var_144 == (MR_Word) ((MR_Unsigned) 0U)))
          SecondPieces_22 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[20]));
        else
          SecondPieces_22 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[23]));
      }
      {
        SecondMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SecondMsg_29, 0) = ((MR_Box) (Context_7));
        MR_hl_field(0, SecondMsg_29, 1) = ((MR_Box) (SecondPieces_22));
      }
      ModuleInfo_30 = ((MR_Word) ((MR_hl_field(0, ClauseContext_6, (MR_Integer) 0))));
      {
        Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_99, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[0]));
        MR_hl_field(0, Var_99, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_2));
        MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_99, 3) = ((MR_Box) (ModuleInfo_30));
      }
      DetailMsgsList_31 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[1]), Var_99, OverloadedSymbolsSortedContexts_18);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), DetailMsgsList_31, &DetailMsgs_32);
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (SecondMsg_29));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (DetailMsgs_32));
      }
      {
        Msgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
        MR_hl_field(1, Msgs_10, 1) = ((MR_Box) (Var_100));
      }
    }
    else
    {
      MR_Word SecondMsg_128;
      MR_Word ModuleInfo_129;
      MR_Word DetailMsgsList_130;
      MR_Word DetailMsgs_131;
      MR_Word Var_132;
      MR_Word Var_133;

      {
        SecondMsg_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SecondMsg_128, 0) = ((MR_Box) (Context_7));
        MR_hl_field(0, SecondMsg_128, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[25])));
      }
      ModuleInfo_129 = ((MR_Word) ((MR_hl_field(0, ClauseContext_6, (MR_Integer) 0))));
      {
        Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_132, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[0]));
        MR_hl_field(0, Var_132, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__too_much_overloading_to_msgs_4_f_0_3));
        MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_132, 3) = ((MR_Box) (ModuleInfo_129));
      }
      DetailMsgsList_130 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[1]), Var_132, OverloadedSymbolsSortedContexts_18);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), DetailMsgsList_130, &DetailMsgs_131);
      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (SecondMsg_128));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) (DetailMsgs_131));
      }
      {
        Msgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
        MR_hl_field(1, Msgs_10, 1) = ((MR_Box) (Var_133));
      }
    }
  }
  return Msgs_10;
}

void mercury__check_hlds__typecheck_error_overload__init(void)
{
}

void mercury__check_hlds__typecheck_error_overload__init_type_tables(void)
{
}

void mercury__check_hlds__typecheck_error_overload__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_overload__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_overload.
