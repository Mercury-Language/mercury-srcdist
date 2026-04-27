/*
** Automatically generated from `typecheck_error_overload.m'
** by the Mercury compiler,
** version rotd-2026-04-27
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_error_overload__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_ordinal_ordered_stuff_to_check_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_name_ordered_stuff_to_check_0[2];

static const MR_Integer check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__functor_number_map_stuff_to_check_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__IntroducedFrom__func__describe_overloaded_symbols__341__1_1_f_0(
  MR_Word HeadVar__1_65);

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload__IntroducedFrom__pred__report_ambiguity_error__217__1_1_p_0(
  MR_Word HeadVar__1_76);

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
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_error_overload__gather_type_pieces_for_var_in_type_assign_7_p_0(
  MR_Word InstVarSet_8,
  MR_Word Var_9,
  MR_Word TypeAssign_10,
  MR_Word STATE_VARIABLE_NameOnlyPiecesSet_0_21,
  MR_Word * STATE_VARIABLE_NameOnlyPiecesSet_22,
  MR_Word STATE_VARIABLE_NameNumPiecesSet_0_23,
  MR_Word * STATE_VARIABLE_NameNumPiecesSet_24);

static void MR_CALL 
check_hlds__typecheck_error_overload__var_ambiguity_to_pieces_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__var_ambiguity_to_pieces_4_f_0(
  MR_Word VarSet_6,
  MR_Word InstVarSet_7,
  MR_Word TypeAssigns_8,
  MR_Word Var_9);

static void MR_CALL 
check_hlds__typecheck_error_overload__compute_headvar_types_in_type_assign_3_p_0(
  MR_Word HeadVars_4,
  MR_Word TypeAssign_5,
  MR_Word * HeadTypes_6);

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload__all_identical_up_to_renaming_2_p_0(
  MR_Word HeadTypes1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7);

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_overload____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_1[75][2];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_6[2][8];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_7[1][4];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_8[1][10];

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_9[1][9];




static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_1[75][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: highly ambiguous overloading."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It may also make your code difficult to understand."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This may cause type-checking to be very slow."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: excessively ambiguous overloading."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This caused the type checker to exceed its limits."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[10])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: unresolved type ambiguity."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The variable"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following variables have ambiguous types."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can have"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the following types:"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "\"Syntax\" chapter of the Mercury language reference manual."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) " sub-section of the \"Data-terms\" section of the"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_overload_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "For details see the"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is to use \"with_type\"."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The way to add an explicit type qualification"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to resolve the type ambiguity."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You will need to add an explicit type qualification"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the following context."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following symbol was overloaded"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the following contexts."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following symbols were overloaded"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[52])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The function symbol"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[25])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is also overloaded here."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[6])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That symbol"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The predicate symbol"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[67])))
  },
  /* row  69 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[12])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[16])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[46])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_1[4]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 180U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "\"Explicit type qualification\"")) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 4)) },
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
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
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

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_overload_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_overload__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_overload__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_overload__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_overload__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_color_name_0) }
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_ordinal_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_functor_desc_stuff_to_check_0_1
};

static const MR_Integer check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_error_overload____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_overload____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_overload",
  (MR_String) "stuff_to_check",
  { check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_name_ordered_stuff_to_check_0 },
  { check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__enum_ordinal_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__functor_number_map_stuff_to_check_0,

};

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__IntroducedFrom__func__describe_overloaded_symbols__341__1_1_f_0(
  MR_Word HeadVar__1_65)
{
  MR_Word HeadVar__2_66;

  HeadVar__2_66 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), HeadVar__1_65);
  return HeadVar__2_66;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload__IntroducedFrom__pred__report_ambiguity_error__217__1_1_p_0(
  MR_Word HeadVar__1_76)
{
  MR_bool succeeded;

  succeeded = mercury__list__is_non_empty_1_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadVar__1_76);
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_overload____Compare____stuff_to_check_0_0(
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
check_hlds__typecheck_error_overload____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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

  conv2_HeadVar__3_3 = check_hlds__typecheck_error_overload__context_to_error_msg_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__6_6;

  conv1_HeadVar__6_6 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  conv0_HeadVar__5_5 = check_hlds__typecheck_error_util__describe_cons_type_info_source_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Msgs_7;
  MR_Word Symbol_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word SortedContexts_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

  if ((SortedContexts_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_overload.describe_overloaded_symbol\'/2", (MR_String) "no context");
  else
  {
    MR_Word FirstContext_8 = ((MR_Word) ((MR_hl_field(1, SortedContexts_6, 0))));
    MR_Word LaterContexts_9 = ((MR_Word) ((MR_hl_field(1, SortedContexts_6, 1))));
    MR_Word FirstPieces_20;
    MR_Word LaterPieces_21;
    MR_Word FirstMsg_26;
    MR_Word LaterMsgs_27;
    MR_Word Var_95;

    if (((MR_tag((MR_Word) Symbol_5)) == (MR_Integer) 1))
    {
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(1, Symbol_5, 0))));
      MR_Word Sources_23 = ((MR_Word) ((MR_hl_field(1, Symbol_5, 1))));
      MR_Word ConsIdPiece_24;
      MR_Word SourcePieces_25;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word StartPieces_96;
      MR_Word MakeItemPiecesFunc_97;

      {
        ConsIdPiece_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConsIdPiece_24, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, ConsIdPiece_24, 1) = ((MR_Box) (ConsId_22));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (ConsIdPiece_24));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[29])));
      }
      Var_70 = parse_tree__error_spec__color_as_subject_1_f_0(Var_71);
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[61])));
      StartPieces_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[58])), Var_69);
      {
        MakeItemPiecesFunc_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MakeItemPiecesFunc_97, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_6[1]));
        MR_hl_field(0, MakeItemPiecesFunc_97, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_1));
        MR_hl_field(0, MakeItemPiecesFunc_97, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, MakeItemPiecesFunc_97, 3) = ((MR_Box) (ModuleInfo_4));
        MR_hl_field(0, MakeItemPiecesFunc_97, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_3[2])));
      }
      parse_tree__error_util__construct_sorted_line_pieces_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), MakeItemPiecesFunc_97, Sources_23, &SourcePieces_25);
      FirstPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_96, SourcePieces_25);
      LaterPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[65]));
    }
    else
    {
      MR_Word SymNamePredFormArity_10 = ((MR_Word) ((MR_hl_field(0, Symbol_5, 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(0, Symbol_5, 1))));
      MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_10, 0))));
      MR_Word PredFormArity_13 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_10, 1))));
      MR_Integer PredFormArityInt_14 = (MR_Integer) (PredFormArity_13);
      MR_Word SNA_15;
      MR_Word SNAPiece_16;
      MR_Word StartPieces_17;
      MR_Word MakeItemPiecesFunc_18;
      MR_Word PredIdPieces_19;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      {
        SNA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_15, 0) = ((MR_Box) (SymName_12));
        MR_hl_field(0, SNA_15, 1) = ((MR_Box) (PredFormArityInt_14));
      }
      {
        SNAPiece_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SNAPiece_16, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, SNAPiece_16, 1) = ((MR_Box) (SNA_15));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (SNAPiece_16));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[29])));
      }
      Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[61])));
      StartPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[68])), Var_36);
      {
        MakeItemPiecesFunc_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MakeItemPiecesFunc_18, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_9[0]));
        MR_hl_field(0, MakeItemPiecesFunc_18, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_2));
        MR_hl_field(0, MakeItemPiecesFunc_18, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, MakeItemPiecesFunc_18, 3) = ((MR_Box) (ModuleInfo_4));
        MR_hl_field(0, MakeItemPiecesFunc_18, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_3[2])));
        MR_hl_field(0, MakeItemPiecesFunc_18, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__error_util__construct_sorted_line_pieces_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MakeItemPiecesFunc_18, PredIds_11, &PredIdPieces_19);
      FirstPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_17, PredIdPieces_19);
      LaterPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[65]));
    }
    {
      FirstMsg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstMsg_26, 0) = ((MR_Box) (FirstContext_8));
      MR_hl_field(0, FirstMsg_26, 1) = ((MR_Box) (FirstPieces_20));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[2]));
      MR_hl_field(0, Var_95, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0_3));
      MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_95, 3) = ((MR_Box) (LaterPieces_21));
    }
    LaterMsgs_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_95, LaterContexts_9);
    {
      Msgs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_7, 0) = ((MR_Box) (FirstMsg_26));
      MR_hl_field(1, Msgs_7, 1) = ((MR_Box) (LaterMsgs_27));
    }
  }
  return Msgs_7;
}

static void MR_CALL 
check_hlds__typecheck_error_overload__gather_type_pieces_for_var_in_type_assign_7_p_0(
  MR_Word InstVarSet_8,
  MR_Word Var_9,
  MR_Word TypeAssign_10,
  MR_Word STATE_VARIABLE_NameOnlyPiecesSet_0_21,
  MR_Word * STATE_VARIABLE_NameOnlyPiecesSet_22,
  MR_Word STATE_VARIABLE_NameNumPiecesSet_0_23,
  MR_Word * STATE_VARIABLE_NameNumPiecesSet_24)
{
  MR_bool succeeded;
  MR_Word VarTypes_13;
  MR_Word Type0_14;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_10, &VarTypes_13);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_13, Var_9, &Type0_14);
  if (succeeded)
  {
    MR_Word TypeBindings_15;
    MR_Word ExistQTVars_16;
    MR_Word TVarSet_17;
    MR_Word Type_18;
    MR_Word NameOnlyPieces_19;
    MR_Word NameNumPieces_20;

    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_10, &TypeBindings_15);
    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_10, &ExistQTVars_16);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_10, &TVarSet_17);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_15, Type0_14, &Type_18);
    NameOnlyPieces_19 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_17, InstVarSet_8, (MR_Integer) 0, (MR_Integer) 0, ExistQTVars_16, Type_18);
    NameNumPieces_20 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_17, InstVarSet_8, (MR_Integer) 1, (MR_Integer) 0, ExistQTVars_16, Type_18);
    mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), ((MR_Box) (NameOnlyPieces_19)), STATE_VARIABLE_NameOnlyPiecesSet_0_21, STATE_VARIABLE_NameOnlyPiecesSet_22);
    mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), ((MR_Box) (NameNumPieces_20)), STATE_VARIABLE_NameNumPiecesSet_0_23, STATE_VARIABLE_NameNumPiecesSet_24);
  }
  else
  {
    *STATE_VARIABLE_NameNumPiecesSet_24 = STATE_VARIABLE_NameNumPiecesSet_0_23;
    *STATE_VARIABLE_NameOnlyPiecesSet_22 = STATE_VARIABLE_NameOnlyPiecesSet_0_21;
  }
}

static void MR_CALL 
check_hlds__typecheck_error_overload__var_ambiguity_to_pieces_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NameOnlyPiecesSet_22;
  MR_Word conv0_STATE_VARIABLE_NameNumPiecesSet_24;

  check_hlds__typecheck_error_overload__gather_type_pieces_for_var_in_type_assign_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NameOnlyPiecesSet_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NameNumPiecesSet_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NameOnlyPiecesSet_22));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameNumPiecesSet_24));
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__var_ambiguity_to_pieces_4_f_0(
  MR_Word VarSet_6,
  MR_Word InstVarSet_7,
  MR_Word TypeAssigns_8,
  MR_Word Var_9)
{
  MR_bool succeeded;
  MR_Word Pieces_10;
  MR_Word NameOnlyPiecesSet_11;
  MR_Word NameNumPiecesSet_12;
  MR_Word NameNumPiecesList_13;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Box conv3_NameOnlyPiecesSet_11;
  MR_Box conv2_NameNumPiecesSet_12;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_8[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__var_ambiguity_to_pieces_4_f_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (InstVarSet_7));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Var_9));
  }
  Var_27 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]));
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]));
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[3]), Var_26, TypeAssigns_8, ((MR_Box) (Var_27)), &conv3_NameOnlyPiecesSet_11, ((MR_Box) (Var_28)), &conv2_NameNumPiecesSet_12);
  NameOnlyPiecesSet_11 = ((MR_Word) (conv3_NameOnlyPiecesSet_11));
  NameNumPiecesSet_12 = ((MR_Word) (conv2_NameNumPiecesSet_12));
  NameNumPiecesList_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), NameNumPiecesSet_12);
  if ((NameNumPiecesList_13 == (MR_Word) ((MR_Unsigned) 0U)))
    Pieces_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, NameNumPiecesList_13, 1))));

    if ((Var_73 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word NameOnlyPiecesList_18;
      MR_Word PossibleTypePiecesList_20;
      MR_Word VarPiece_24;
      MR_String EitherAny_25;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Integer Var_35;

      NameOnlyPiecesList_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), NameOnlyPiecesSet_11);
      if ((NameOnlyPiecesList_18 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_overload.var_ambiguity_to_pieces\'/4", (MR_String) "NameOnlyPiecesList = []");
      else
      {
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, NameOnlyPiecesList_18, 1))));

        if ((Var_75 == (MR_Word) ((MR_Unsigned) 0U)))
          PossibleTypePiecesList_20 = NameNumPiecesList_13;
        else
          PossibleTypePiecesList_20 = NameOnlyPiecesList_18;
      }
      VarPiece_24 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_9);
      Var_35 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), PossibleTypePiecesList_20);
      succeeded = (Var_35 == (MR_Integer) 2);
      if (succeeded)
        EitherAny_25 = (MR_String) "either";
      else
        EitherAny_25 = (MR_String) "any";
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (VarPiece_24));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(Var_37);
      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (EitherAny_25));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[27])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_overload_scalar_common_1[23])));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
      }
      Var_53 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 4, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[29])), PossibleTypePiecesList_20);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[31])));
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_52);
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_39);
    }
  }
  return Pieces_10;
}

static void MR_CALL 
check_hlds__typecheck_error_overload__compute_headvar_types_in_type_assign_3_p_0(
  MR_Word HeadVars_4,
  MR_Word TypeAssign_5,
  MR_Word * HeadTypes_6)
{
  MR_Word VarTypes_7;
  MR_Word TypeBindings_8;
  MR_Word HeadTypes0_9;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_7);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_8);
  parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_7, HeadVars_4, &HeadTypes0_9);
  parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(TypeBindings_8, HeadTypes0_9, HeadTypes_6);
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_overload__IntroducedFrom__pred__report_ambiguity_error__217__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Pieces_10;

  conv1_Pieces_10 = check_hlds__typecheck_error_overload__var_ambiguity_to_pieces_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Pieces_10));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadTypes_6;

  check_hlds__typecheck_error_overload__compute_headvar_types_in_type_assign_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadTypes_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadTypes_6));
}

void MR_CALL 
check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0(
  MR_Word Context_7,
  MR_Word StuffToCheck_8,
  MR_Word HeadVars_9,
  MR_Word TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;

  if ((TypeAssignSet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_error_overload.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, 0))));

    if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    else
    {
      MR_Word TypeAssign2_14 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
      MR_Word TypeAssigns3plus_15 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
      MR_Word ErrorsSoFar_16;

      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_0_23, &ErrorsSoFar_16);
      succeeded = (ErrorsSoFar_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        switch (StuffToCheck_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HeadTypesInAssign1_17;
              MR_Word Var_29;
              MR_Word VarTypes_37;
              MR_Word TypeBindings_38;
              MR_Word HeadTypes0_39;
              MR_Word VarTypes_40;
              MR_Word TypeBindings_41;
              MR_Word HeadTypes0_42;
              MR_Word HeadTypes2_88;
              MR_Word HeadTypes3plus_89;

              check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_36, &VarTypes_37);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_36, &TypeBindings_38);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_37, HeadVars_9, &HeadTypes0_39);
              parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(TypeBindings_38, HeadTypes0_39, &HeadTypesInAssign1_17);
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_14, &VarTypes_40);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_14, &TypeBindings_41);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_40, HeadVars_9, &HeadTypes0_42);
              parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(TypeBindings_41, HeadTypes0_42, &HeadTypes2_88);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[1]));
                MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_1));
                MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_29, 3) = ((MR_Box) (HeadVars_9));
              }
              mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[0]), Var_29, TypeAssigns3plus_15, &HeadTypes3plus_89);
              succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(HeadTypesInAssign1_17, HeadTypes2_88);
              if (succeeded)
                succeeded = check_hlds__typecheck_error_overload__all_identical_up_to_renaming_2_p_0(HeadTypesInAssign1_17, HeadTypes3plus_89);
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
      if (succeeded)
      {
        MR_Word ClauseContext_20;
        MR_Word OverloadedSymbolMap_21;
        MR_Word Spec_22;
        MR_Word InClauseForPieces_43;
        MR_Word FirstMsg_45;
        MR_Word VarSet_46;
        MR_Word InstVarSet_47;
        MR_Word VarTypes1_48;
        MR_Word Vars1_49;
        MR_Word VarAssignPiecesList0_51;
        MR_Word VarAssignPiecesList_52;
        MR_Word LaterMsgs_53;
        MR_Word Msgs_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_67;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_23, &ClauseContext_20);
        check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_23, &OverloadedSymbolMap_21);
        InClauseForPieces_43 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_20);
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_43, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[18])));
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (Var_64));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          FirstMsg_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FirstMsg_45, 0) = ((MR_Box) (Context_7));
          MR_hl_field(2, FirstMsg_45, 1) = ((MR_Box) (Var_62));
        }
        VarSet_46 = ((MR_Word) ((MR_hl_field(0, ClauseContext_20, 5))));
        check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_20, &InstVarSet_47);
        check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_36, &VarTypes1_48);
        parse_tree__vartypes__vartypes_vars_2_p_0(VarTypes1_48, &Vars1_49);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_6[0]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0_2));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (VarSet_46));
          MR_hl_field(0, Var_67, 4) = ((MR_Box) (InstVarSet_47));
          MR_hl_field(0, Var_67, 5) = ((MR_Box) (TypeAssignSet_10));
        }
        VarAssignPiecesList0_51 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), Var_67, Vars1_49);
        mercury__list__filter_3_p_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[2]), VarAssignPiecesList0_51, &VarAssignPiecesList_52);
        if ((VarAssignPiecesList_52 == (MR_Word) ((MR_Unsigned) 0U)))
          LaterMsgs_53 = check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0(ClauseContext_20, Context_7, OverloadedSymbolMap_21);
        else
        {
          MR_Word TailVarAssignPiecesList_55 = ((MR_Word) ((MR_hl_field(1, VarAssignPiecesList_52, 1))));
          MR_Word VarAssignPieces_56;
          MR_Word PreVarPieces_57;
          MR_Word VarPieces_58;
          MR_Word VarMsg_60;
          MR_Word Var_71;
          MR_Word Var_72;

          mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarAssignPiecesList_52, &VarAssignPieces_56);
          if ((TailVarAssignPiecesList_55 == (MR_Word) ((MR_Unsigned) 0U)))
            PreVarPieces_57 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[20]));
          else
            PreVarPieces_57 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[22]));
          VarPieces_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PreVarPieces_57, VarAssignPieces_56);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (VarPieces_58));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[74])));
          }
          {
            VarMsg_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, VarMsg_60, 0) = ((MR_Box) (Context_7));
            MR_hl_field(2, VarMsg_60, 1) = ((MR_Box) (Var_71));
          }
          {
            LaterMsgs_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LaterMsgs_53, 0) = ((MR_Box) (VarMsg_60));
            MR_hl_field(1, LaterMsgs_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        {
          Msgs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_61, 0) = ((MR_Box) (FirstMsg_45));
          MR_hl_field(1, Msgs_61, 1) = ((MR_Box) (LaterMsgs_53));
        }
        {
          Spec_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_22, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_overload.report_ambiguity_error\'/6"));
          MR_hl_field(2, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 52U));
          MR_hl_field(2, Spec_22, 3) = ((MR_Box) (Msgs_61));
        }
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload__all_identical_up_to_renaming_2_p_0(
  MR_Word HeadTypes1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word HeadTypes2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word HeadTypes3plus_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(HeadTypes1_1, HeadTypes2_5);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = HeadTypes3plus_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_error_overload__report_error_too_much_overloading_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7)
{
  MR_Word Spec_8;
  MR_Word FirstMsg_11;
  MR_Word LaterMsgs_12;
  MR_Word Var_29;
  MR_Word InClauseForPieces_30;
  MR_Word InitComponent_31;
  MR_Word Var_33;
  MR_Word Var_35;

  InClauseForPieces_30 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_5);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_30, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[14])));
  {
    InitComponent_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitComponent_31, 0) = ((MR_Box) (Var_33));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (InitComponent_31));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[72])));
  }
  {
    FirstMsg_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FirstMsg_11, 0) = ((MR_Box) (Context_6));
    MR_hl_field(2, FirstMsg_11, 1) = ((MR_Box) (Var_35));
  }
  LaterMsgs_12 = check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0(ClauseContext_5, Context_6, OverloadedSymbolMap_7);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (FirstMsg_11));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (LaterMsgs_12));
  }
  {
    Spec_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_overload.report_error_too_much_overloading\'/3"));
    MR_hl_field(2, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_8, 3) = ((MR_Box) (Var_29));
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
  MR_Word FirstMsg_11;
  MR_Word LaterMsgs_12;
  MR_Word Var_30;
  MR_Word InClauseForPieces_31;
  MR_Word InitComponent_32;
  MR_Word Var_34;
  MR_Word Var_36;

  InClauseForPieces_31 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_5);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_31, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[8])));
  {
    InitComponent_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitComponent_32, 0) = ((MR_Box) (Var_34));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (InitComponent_32));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[70])));
  }
  {
    FirstMsg_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FirstMsg_11, 0) = ((MR_Box) (Context_6));
    MR_hl_field(2, FirstMsg_11, 1) = ((MR_Box) (Var_36));
  }
  LaterMsgs_12 = check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0(ClauseContext_5, Context_6, OverloadedSymbolMap_7);
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (FirstMsg_11));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (LaterMsgs_12));
  }
  {
    Spec_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_overload.report_warning_too_much_overloading\'/3"));
    MR_hl_field(2, Spec_8, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_3[0])));
    MR_hl_field(2, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_8, 3) = ((MR_Box) (Var_30));
  }
  return Spec_8;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Msgs_7;

  conv2_Msgs_7 = check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Msgs_7));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Msgs_7;

  conv1_Msgs_7 = check_hlds__typecheck_error_overload__describe_overloaded_symbol_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Msgs_7));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_66;

  conv0_HeadVar__2_66 = check_hlds__typecheck_error_overload__IntroducedFrom__func__describe_overloaded_symbols__341__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_66));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7)
{
  MR_Word Msgs_8;
  MR_Word OverloadedSymbols_9;
  MR_Word OverloadedSymbolsSortedContexts_10;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[4]), OverloadedSymbolMap_7, &OverloadedSymbols_9);
  OverloadedSymbolsSortedContexts_10 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[1]), OverloadedSymbols_9);
  if ((OverloadedSymbolsSortedContexts_10 == (MR_Word) ((MR_Unsigned) 0U)))
    Msgs_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, OverloadedSymbolsSortedContexts_10, 1))));
    MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, OverloadedSymbolsSortedContexts_10, 0))));

    if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Contexts_12 = ((MR_Word) ((MR_hl_field(0, Var_95, 1))));
      MR_Word WasOverloadedPieces_14;
      MR_Word WasOverloadedMsg_21;
      MR_Word ModuleInfo_22;
      MR_Word DetailMsgsList_23;
      MR_Word DetailMsgs_24;
      MR_Word Var_57;

      if ((Contexts_12 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_overload.describe_overloaded_symbols\'/3", (MR_String) "no contexts");
      else
      {
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, Contexts_12, 1))));

        if ((Var_96 == (MR_Word) ((MR_Unsigned) 0U)))
          WasOverloadedPieces_14 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[50]));
        else
          WasOverloadedPieces_14 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[53]));
      }
      {
        WasOverloadedMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WasOverloadedMsg_21, 0) = ((MR_Box) (Context_6));
        MR_hl_field(0, WasOverloadedMsg_21, 1) = ((MR_Box) (WasOverloadedPieces_14));
      }
      ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, 0))));
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[0]));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_2));
        MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_57, 3) = ((MR_Box) (ModuleInfo_22));
      }
      DetailMsgsList_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[5]), Var_57, OverloadedSymbolsSortedContexts_10);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), DetailMsgsList_23, &DetailMsgs_24);
      {
        Msgs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_8, 0) = ((MR_Box) (WasOverloadedMsg_21));
        MR_hl_field(1, Msgs_8, 1) = ((MR_Box) (DetailMsgs_24));
      }
    }
    else
    {
      MR_Word WasOverloadedMsg_81;
      MR_Word ModuleInfo_82;
      MR_Word DetailMsgsList_83;
      MR_Word DetailMsgs_84;
      MR_Word Var_85;

      {
        WasOverloadedMsg_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WasOverloadedMsg_81, 0) = ((MR_Box) (Context_6));
        MR_hl_field(0, WasOverloadedMsg_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_overload_scalar_common_1[55])));
      }
      ModuleInfo_82 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, 0))));
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__typecheck_error_overload_scalar_common_5[0]));
        MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__typecheck_error_overload__describe_overloaded_symbols_3_f_0_3));
        MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_85, 3) = ((MR_Box) (ModuleInfo_82));
      }
      DetailMsgsList_83 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_error_overload_scalar_common_1[5]), Var_85, OverloadedSymbolsSortedContexts_10);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), DetailMsgsList_83, &DetailMsgs_84);
      {
        Msgs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_8, 0) = ((MR_Box) (WasOverloadedMsg_81));
        MR_hl_field(1, Msgs_8, 1) = ((MR_Box) (DetailMsgs_84));
      }
    }
  }
  return Msgs_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_overload____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_overload____Unify____stuff_to_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_overload____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_overload____Compare____stuff_to_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_overload__init(void)
{
}

void mercury__check_hlds__typecheck_error_overload__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_error_overload__check_hlds__typecheck_error_overload__type_ctor_info_stuff_to_check_0);
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
