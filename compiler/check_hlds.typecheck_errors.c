/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2026-08-24
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


// :- module check_hlds.typecheck_errors.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_errors__init
ENDINIT
*/

#include "check_hlds.typecheck_errors.mih"


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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
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
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_2_f_0(
  MR_Word TVarSet_4,
  MR_Word Fail_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_115_104_111_117_108_100_95_98_101_95_105_110_118_97_114_105_97_110_116_95_97_114_103_95_95_91_49_44_32_53_44_32_54_93_95_48_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_115_104_111_117_108_100_95_98_101_95_105_110_118_97_114_105_97_110_116_95_97_114_103_95_95_91_49_44_32_53_44_32_54_93_95_48_6_f_0(
  MR_Word BaseTypeCtor_9,
  MR_Unsigned ArgNum_10,
  MR_Word Reason_11);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__ctor_arg_posn_to_pieces_1_f_0(
  MR_Word CtorArgPosn_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_110_111_95_99_111_109_109_111_110_95_98_97_115_101_95_116_121_112_101_95_95_91_50_44_32_51_93_95_48_5_f_0(
  MR_Word TVarSet_7,
  MR_Word FromType0_10,
  MR_Word ToType0_11);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_100_105_102_102_101_114_101_110_116_95_98_97_115_101_95_116_121_112_101_115_95_95_91_49_44_32_50_44_32_52_93_95_48_5_f_0(
  MR_Word FromBaseTypeCtor_9,
  MR_Word ToBaseTypeCtor_11);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_non_du_type_ctor_5_f_0(
  MR_Word TVarSet_7,
  MR_Word FromType_8,
  MR_String FromTypeDesc_9,
  MR_Word ToType_10,
  MR_String ToTypeDesc_11);

static void MR_CALL 
check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(
  MR_String NonDuDesc_3,
  MR_Word * DescPieces_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_different_tuple_arities_2_f_0(
  MR_Integer FromArity_4,
  MR_Integer ToArity_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_different_builtin_types_3_f_0(
  MR_Word TVarSet_5,
  MR_Word FromBuiltinType_6,
  MR_Word ToBuiltinType_7);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_different_type_categories_3_f_0(
  MR_Word TypeTable_5,
  MR_Word FromType_6,
  MR_Word ToType_7);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_quote_1_f_0(
  MR_String Str_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_string_set_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_string_set_2_p_0(
  MR_Word TypeAssign_3,
  MR_Word * UnprovenConstraintStrSet_4);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_invalid_coerce_from_to_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[159][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[3][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[4][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[1][6];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[1][7];




static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[159][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: at least one the typeclass"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unsatisfiable,"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of some type ambiguities."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but which one this is depends on the chosen resolution"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the typeclass"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unsatisfiable."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and depending on the chosen resolution"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of some type ambiguities,"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the constraint"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "some of the constraints"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may be"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unsatisfiable"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as well."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Also, the type conversion would be redundant anyway."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: cannot coerce"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the type of"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unresolved;"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot coerce from"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: type conversion of"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to the same type is"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "redundant."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The base type constructor of the coerce-from type is"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while for the coerce-to type it is"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be either coerced from, or coerced to."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Builtin types such as"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You cannot coerce between a tuple type of"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arity"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and a tuple type of"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Coercion between the types"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not possible, because they"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "do not have a common base type."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be either coerced from, or coerced to,"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "subtype relationship with any type."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be equal to any type, or to be in a"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not known either"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from one discriminated union type to another, and"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You can only coerce"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "s."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only parameter"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "parameter"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the type constructor"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "invariant"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because it occurs in"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[109]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the coerced-from and coerced-to types)"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(meaning that it must be bound to the same type"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[118]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "coerced-from and coerced-to types."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[122]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "meaning they must be the same in the"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of higher order types to be invariant,"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It ensures soundness by requiring all arguments"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which arguments are input."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the Mercury type checker does not know"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of higher order types to be contra-variant,"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Normally, it would be ok for the input arguments"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs in a higher order type."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The type parameter that these types are bound to"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the type of the"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of the"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "data constructor, which"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[144]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is an abstract type"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[146]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "applies the base type constructor"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to a different list of type parameters"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a type constructor other than"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "namely"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a foreign type"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[153]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a higher order type"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a solver type"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[157]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 229U) },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_115_104_111_117_108_100_95_98_101_95_105_110_118_97_114_105_97_110_116_95_97_114_103_95_95_91_49_44_32_53_44_32_54_93_95_48_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_2_f_0(
  MR_Word TVarSet_4,
  MR_Word Fail_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;

  switch (MR_tag((MR_Word) Fail_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FromBaseTypeCtor_8 = ((MR_Word) ((MR_hl_field(0, Fail_5, 1))));
        MR_Word ToBaseTypeCtor_10 = ((MR_Word) ((MR_hl_field(0, Fail_5, 3))));

        Pieces_6 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_100_105_102_102_101_114_101_110_116_95_98_97_115_101_95_116_121_112_101_115_95_95_91_49_44_32_50_44_32_52_93_95_48_5_f_0(FromBaseTypeCtor_8, ToBaseTypeCtor_10);
      }
      break;
    case (MR_Integer) 1:
      Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeTable_14 = ((MR_Word) ((MR_hl_field(2, Fail_5, 0))));
        MR_Word FromType_24 = ((MR_Word) ((MR_hl_field(2, Fail_5, 1))));
        MR_Word ToType_25 = ((MR_Word) ((MR_hl_field(2, Fail_5, 2))));

        Pieces_6 = check_hlds__typecheck_errors__describe_coerce_fail_different_type_categories_3_f_0(TypeTable_14, FromType_24, ToType_25);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Fail_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FromBuiltinType_15 = ((MR_Word) ((MR_hl_field(3, Fail_5, 1))));
            MR_Word ToBuiltinType_16 = ((MR_Word) ((MR_hl_field(3, Fail_5, 2))));

            Pieces_6 = check_hlds__typecheck_errors__describe_coerce_fail_different_builtin_types_3_f_0(TVarSet_4, FromBuiltinType_15, ToBuiltinType_16);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer FromArity_17 = ((MR_Integer) ((MR_hl_field(3, Fail_5, 1))));
            MR_Integer ToArity_18 = ((MR_Integer) ((MR_hl_field(3, Fail_5, 2))));

            Pieces_6 = check_hlds__typecheck_errors__describe_coerce_fail_different_tuple_arities_2_f_0(FromArity_17, ToArity_18);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FromType_26 = ((MR_Word) ((MR_hl_field(3, Fail_5, 3))));
            MR_Word ToType_27 = ((MR_Word) ((MR_hl_field(3, Fail_5, 4))));

            Pieces_6 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_110_111_95_99_111_109_109_111_110_95_98_97_115_101_95_116_121_112_101_95_95_91_50_44_32_51_93_95_48_5_f_0(TVarSet_4, FromType_26, ToType_27);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word FromType_28 = ((MR_Word) ((MR_hl_field(3, Fail_5, 1))));
            MR_Word ToType_29 = ((MR_Word) ((MR_hl_field(3, Fail_5, 2))));
            MR_String FromTypeStr_36;
            MR_String ToTypeStr_37;
            MR_String TypeVarOrVarsStr_42;
            MR_Word TVarPieces_43;
            MR_String ItIsTheyAre_44;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_83;
            MR_Word Var_84;

            FromTypeStr_36 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_4, (MR_Integer) 2, FromType_28);
            ToTypeStr_37 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_4, (MR_Integer) 2, ToType_29);
            succeeded = ((MR_tag((MR_Word) FromType_28)) == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ToType_29)) == (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_53;
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;

                TypeVarOrVarsStr_42 = (MR_String) "Unconstrained type variables";
                {
                  Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_51, 0) = ((MR_Box) (FromTypeStr_36));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_49 = parse_tree__error_spec__color_as_subject_1_f_0(Var_50);
                {
                  Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_60, 0) = ((MR_Box) (ToTypeStr_37));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_58 = parse_tree__error_spec__color_as_subject_1_f_0(Var_59);
                Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])), Var_58);
                TVarPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_53);
                ItIsTheyAre_44 = (MR_String) "they are";
              }
              else
              {
                MR_Word Var_62;
                MR_Word Var_63;

                TypeVarOrVarsStr_42 = (MR_String) "An unconstrained type variable";
                {
                  Var_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_63, 0) = ((MR_Box) (FromTypeStr_36));
                }
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                TVarPieces_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_62);
                ItIsTheyAre_44 = (MR_String) "it is";
              }
            }
            else
            {
              succeeded = ((MR_tag((MR_Word) ToType_29)) == (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_65;
                MR_Word Var_66;

                TypeVarOrVarsStr_42 = (MR_String) "An unconstrained type variable";
                {
                  Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_66, 0) = ((MR_Box) (ToTypeStr_37));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                TVarPieces_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_65);
                ItIsTheyAre_44 = (MR_String) "it is";
              }
              else
                mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.describe_coerce_fail_cannot_unify_type_vars\'/3", (MR_String) "neither FromType nor ToType is a variable");
            }
            {
              Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_71, 1) = ((MR_Box) (TypeVarOrVarsStr_42));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[78])));
            }
            {
              Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_84, 1) = ((MR_Box) (ItIsTheyAre_44));
            }
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
              MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[86])));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[80])));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[79])));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
            }
            Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TVarPieces_43, Var_77);
            Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_76);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String FromTypeDesc_21 = ((MR_String) ((MR_hl_field(3, Fail_5, 2))));
            MR_String ToTypeDesc_22 = ((MR_String) ((MR_hl_field(3, Fail_5, 4))));
            MR_Word FromType_30 = ((MR_Word) ((MR_hl_field(3, Fail_5, 1))));
            MR_Word ToType_31 = ((MR_Word) ((MR_hl_field(3, Fail_5, 3))));

            Pieces_6 = check_hlds__typecheck_errors__describe_coerce_fail_non_du_type_ctor_5_f_0(TVarSet_4, FromType_30, FromTypeDesc_21, ToType_31, ToTypeDesc_22);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_23 = ((MR_Word) ((MR_hl_field(3, Fail_5, 3))));
            MR_Word BaseTypeCtor_34 = ((MR_Word) ((MR_hl_field(3, Fail_5, 1))));
            MR_Unsigned ArgNum_35 = ((MR_Unsigned) ((MR_hl_field(3, Fail_5, 2))));

            Pieces_6 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_115_104_111_117_108_100_95_98_101_95_105_110_118_97_114_105_97_110_116_95_97_114_103_95_95_91_49_44_32_53_44_32_54_93_95_48_6_f_0(BaseTypeCtor_34, ArgNum_35, Reason_23);
          }
          break;
      }
      break;
  }
  return Pieces_6;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_115_104_111_117_108_100_95_98_101_95_105_110_118_97_114_105_97_110_116_95_97_114_103_95_95_91_49_44_32_53_44_32_54_93_95_48_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  conv0_Pieces_4 = check_hlds__typecheck_errors__ctor_arg_posn_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_115_104_111_117_108_100_95_98_101_95_105_110_118_97_114_105_97_110_116_95_97_114_103_95_95_91_49_44_32_53_44_32_54_93_95_48_6_f_0(
  MR_Word BaseTypeCtor_9,
  MR_Unsigned ArgNum_10,
  MR_Word Reason_11)
{
  MR_bool succeeded;
  MR_Word Pieces_14;

  if ((Reason_11 == (MR_Word) ((MR_Unsigned) 0U)))
    Pieces_14 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[141]));
  else
  {
    MR_Word OoMCtorArgPosns_15 = ((MR_Word) ((MR_hl_field(1, Reason_11, 0))));
    MR_Integer BaseTypeCtorArity_17 = ((MR_Integer) ((MR_hl_field(0, BaseTypeCtor_9, 1))));
    MR_Word ArgNumPieces_18;
    MR_Word FrontPieces_19;
    MR_Word HeadCtorArgPosn_20;
    MR_Word TailCtorArgPosns_21;
    MR_Word HeadCtorArgPosnPieces_22;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_82;
    MR_Word Var_83;

    succeeded = (BaseTypeCtorArity_17 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ArgNum_10 == (MR_Unsigned) 1U);
    if (succeeded)
      ArgNumPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[99]));
    else
    {
      MR_Word Var_62;

      {
        Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_62, 1) = ((MR_Box) (ArgNum_10));
      }
      {
        ArgNumPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgNumPieces_18, 0) = ((MR_Box) (Var_62));
        MR_hl_field(1, ArgNumPieces_18, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[101])));
      }
    }
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (BaseTypeCtor_9));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[106])));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[104])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    Var_83 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[108])));
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[114])));
    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_82);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumPieces_18, Var_72);
    FrontPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[103])), Var_71);
    HeadCtorArgPosn_20 = ((MR_Word) ((MR_hl_field(0, OoMCtorArgPosns_15, 0))));
    TailCtorArgPosns_21 = ((MR_Word) ((MR_hl_field(0, OoMCtorArgPosns_15, 1))));
    HeadCtorArgPosnPieces_22 = check_hlds__typecheck_errors__ctor_arg_posn_to_pieces_1_f_0(HeadCtorArgPosn_20);
    if ((TailCtorArgPosns_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_98;

      Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadCtorArgPosnPieces_22, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[45])));
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_19, Var_98);
    }
    else
    {
      MR_Word TailCtorArgPosnPieces_25;
      MR_Word CtorArgPosnPiecesLists_26;
      MR_Word AllCtorArgPosnPiecesLists_27;
      MR_Word AllCtorArgPosnPieces_28;
      MR_Word Var_125;
      MR_Word Var_130;

      TailCtorArgPosnPieces_25 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_4[3]), TailCtorArgPosns_21);
      {
        CtorArgPosnPiecesLists_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CtorArgPosnPiecesLists_26, 0) = ((MR_Box) (HeadCtorArgPosnPieces_22));
        MR_hl_field(1, CtorArgPosnPiecesLists_26, 1) = ((MR_Box) (TailCtorArgPosnPieces_25));
      }
      mercury__list__intersperse_list_last_4_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[116])), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[119])), CtorArgPosnPiecesLists_26, &AllCtorArgPosnPiecesLists_27);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllCtorArgPosnPiecesLists_27, &AllCtorArgPosnPieces_28);
      Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllCtorArgPosnPieces_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[121])));
      Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[4])), Var_130);
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_19, Var_125);
    }
  }
  return Pieces_14;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__ctor_arg_posn_to_pieces_1_f_0(
  MR_Word CtorArgPosn_3)
{
  MR_bool succeeded;
  MR_Word Pieces_4;
  MR_Word DuOrTupleConsId_5 = ((MR_Word) ((MR_hl_field(0, CtorArgPosn_3, 0))));
  MR_Unsigned ArgNum_6 = ((MR_Unsigned) ((MR_hl_field(0, CtorArgPosn_3, 1))));
  MR_Word PosnReason_7 = ((MR_Word) ((MR_hl_field(0, CtorArgPosn_3, 2))));
  MR_Word Var_8;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_23;

  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) (ArgNum_6));
  }
  Var_18 = (MR_Word) (DuOrTupleConsId_5);
  {
    Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 29U));
    MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[145])));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[143])));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[142])));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_11));
  }
  switch (MR_tag((MR_Word) PosnReason_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(PosnReason_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_23 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[154]));
          break;
        case (MR_Integer) 1:
          Var_23 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[158]));
          break;
        case (MR_Integer) 2:
          Var_23 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[147]));
          break;
        case (MR_Integer) 3:
          Var_23 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseTypeCtor_25 = ((MR_Word) ((MR_hl_field(1, PosnReason_7, 0))));
        MR_Word TypeCtor_26 = ((MR_Word) ((MR_hl_field(1, PosnReason_7, 1))));

        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_25, TypeCtor_26);
        if (succeeded)
        {
          MR_Word Var_29;
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 21U));
            MR_hl_field(3, Var_30, 1) = ((MR_Box) (BaseTypeCtor_25));
          }
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[150])));
          }
          {
            Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[148])));
            MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_29));
          }
        }
        else
        {
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_42;
          MR_Word Var_45;
          MR_Word Var_46;

          {
            Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 21U));
            MR_hl_field(3, Var_38, 1) = ((MR_Box) (BaseTypeCtor_25));
          }
          {
            Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 21U));
            MR_hl_field(3, Var_46, 1) = ((MR_Box) (TypeCtor_26));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[152])));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[54])));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[151])));
            MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_37));
          }
        }
      }
      break;
  }
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_8, Var_23);
  return Pieces_4;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_110_111_95_99_111_109_109_111_110_95_98_97_115_101_95_116_121_112_101_95_95_91_50_44_32_51_93_95_48_5_f_0(
  MR_Word TVarSet_7,
  MR_Word FromType0_10,
  MR_Word ToType0_11)
{
  MR_Word Pieces_12;
  MR_Word FromType_13;
  MR_Word ToType_14;
  MR_String FromTypeStr_15;
  MR_String ToTypeStr_16;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;

  check_hlds__typecheck_error_util__delete_identical_qualifications_4_p_0(FromType0_10, ToType0_11, &FromType_13, &ToType_14);
  FromTypeStr_15 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 2, FromType_13);
  ToTypeStr_16 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 2, ToType_14);
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (FromTypeStr_15));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ToTypeStr_16));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_34 = parse_tree__error_spec__color_as_subject_1_f_0(Var_35);
  Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[76])));
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[74])), Var_43);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_38);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])), Var_33);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[72])), Var_23);
  return Pieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_101_115_99_114_105_98_101_95_99_111_101_114_99_101_95_102_97_105_108_95_100_105_102_102_101_114_101_110_116_95_98_97_115_101_95_116_121_112_101_115_95_95_91_49_44_32_50_44_32_52_93_95_48_5_f_0(
  MR_Word FromBaseTypeCtor_9,
  MR_Word ToBaseTypeCtor_11)
{
  MR_bool succeeded;
  MR_Word Pieces_12;
  MR_Word FromSymName_13 = ((MR_Word) ((MR_hl_field(0, FromBaseTypeCtor_9, 0))));
  MR_Word ToSymName_15 = ((MR_Word) ((MR_hl_field(0, ToBaseTypeCtor_11, 0))));
  MR_Word FromBaseCtorPiece_20;
  MR_Word ToBaseCtorPiece_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word ModuleName_17;
  MR_Word Var_49;

  succeeded = ((MR_tag((MR_Word) FromSymName_13)) == (MR_Integer) 1);
  if (succeeded)
  {
    ModuleName_17 = ((MR_Word) ((MR_hl_field(1, FromSymName_13, 0))));
    succeeded = ((MR_tag((MR_Word) ToSymName_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(1, ToSymName_15, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_17, Var_49);
    }
  }
  if (succeeded)
  {
    {
      FromBaseCtorPiece_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FromBaseCtorPiece_20, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, FromBaseCtorPiece_20, 1) = ((MR_Box) (FromBaseTypeCtor_9));
    }
    {
      ToBaseCtorPiece_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ToBaseCtorPiece_21, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, ToBaseCtorPiece_21, 1) = ((MR_Box) (ToBaseTypeCtor_11));
    }
  }
  else
  {
    {
      FromBaseCtorPiece_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FromBaseCtorPiece_20, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, FromBaseCtorPiece_20, 1) = ((MR_Box) (FromBaseTypeCtor_9));
    }
    {
      ToBaseCtorPiece_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ToBaseCtorPiece_21, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, ToBaseCtorPiece_21, 1) = ((MR_Box) (ToBaseTypeCtor_11));
    }
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (FromBaseCtorPiece_20));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[55])));
  }
  Var_27 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_28);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (ToBaseCtorPiece_21));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
  }
  Var_39 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_40);
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[57])), Var_38);
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_33);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])), Var_26);
  return Pieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_non_du_type_ctor_5_f_0(
  MR_Word TVarSet_7,
  MR_Word FromType_8,
  MR_String FromTypeDesc_9,
  MR_Word ToType_10,
  MR_String ToTypeDesc_11)
{
  MR_bool succeeded;
  MR_Word Pieces_12;
  MR_String FromTypeStr_13;
  MR_String ToTypeStr_14;
  MR_Word OnlyDuPieces_15;
  MR_Word FromTypeNonDuPieces_16;
  MR_Word ToTypeNonDuPieces_17;

  FromTypeStr_13 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 2, FromType_8);
  ToTypeStr_14 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 2, ToType_10);
  OnlyDuPieces_15 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[90]));
  check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(FromTypeDesc_9, &FromTypeNonDuPieces_16);
  check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(ToTypeDesc_11, &ToTypeNonDuPieces_17);
  if ((FromTypeNonDuPieces_16 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((ToTypeNonDuPieces_17 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Word Var_40;

      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (ToTypeStr_14));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])));
      }
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ToTypeNonDuPieces_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
      Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_40);
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_15, Var_32);
    }
  else
  if ((ToTypeNonDuPieces_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;

    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (FromTypeStr_13));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])));
    }
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_16, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
    Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_53);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_52);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_15, Var_45);
  }
  else
  {
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ((MR_Box) (FromTypeNonDuPieces_16)), ((MR_Box) (ToTypeNonDuPieces_17)));
    if (succeeded)
    {
      succeeded = (strcmp(FromTypeStr_13, ToTypeStr_14) == 0);
      if (succeeded)
      {
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_65;
        MR_Word Var_66;

        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (FromTypeStr_13));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])));
        }
        Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_16, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
        Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_65);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_15, Var_58);
      }
      else
      {
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_83;
        MR_Word Var_84;

        {
          Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_73, 1) = ((MR_Box) (FromTypeStr_13));
        }
        {
          Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_78, 1) = ((MR_Box) (ToTypeStr_14));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[94])));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[62])));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
        }
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_16, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[96])));
        Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_84);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_83);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_15, Var_71);
      }
    }
    else
    {
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_113;
      MR_Word Var_114;

      {
        Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_91, 1) = ((MR_Box) (FromTypeStr_13));
      }
      {
        Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
        MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])));
      }
      Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_16, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[55])));
      Var_97 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_98);
      {
        Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_108, 1) = ((MR_Box) (ToTypeStr_14));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[97])));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
      }
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ToTypeNonDuPieces_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
      Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_114);
      Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_113);
      Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_103);
      Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_96);
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_15, Var_89);
    }
  }
  return Pieces_12;
}

static void MR_CALL 
check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(
  MR_String NonDuDesc_3,
  MR_Word * DescPieces_4)
{
  MR_bool succeeded = (strcmp(NonDuDesc_3, (MR_String) "") == 0);

  if (succeeded)
    *DescPieces_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_5, 1) = ((MR_Box) (NonDuDesc_3));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *DescPieces_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_different_tuple_arities_2_f_0(
  MR_Integer FromArity_4,
  MR_Integer ToArity_5)
{
  MR_Word Pieces_6;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;

  {
    Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_17, 1) = ((MR_Box) (FromArity_4));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[68])));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_16));
  }
  Var_12 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_13);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (ToArity_5));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[68])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  Var_25 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_26);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_24);
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_19);
  Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[67])), Var_11);
  return Pieces_6;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_different_builtin_types_3_f_0(
  MR_Word TVarSet_5,
  MR_Word FromBuiltinType_6,
  MR_Word ToBuiltinType_7)
{
  MR_Word Pieces_8;
  MR_Word FromType_9;
  MR_Word ToType_10;
  MR_String FromTypeStr_11;
  MR_String ToTypeStr_12;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  {
    FromType_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FromType_9, 0) = ((MR_Box) (FromBuiltinType_6));
  }
  {
    ToType_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ToType_10, 0) = ((MR_Box) (ToBuiltinType_7));
  }
  FromTypeStr_11 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, FromType_9);
  ToTypeStr_12 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, ToType_10);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (FromTypeStr_11));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_20 = parse_tree__error_spec__color_as_subject_1_f_0(Var_21);
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (ToTypeStr_12));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[61])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])), Var_29);
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_24);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[65])), Var_19);
  return Pieces_8;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_coerce_fail_different_type_categories_3_f_0(
  MR_Word TypeTable_5,
  MR_Word FromType_6,
  MR_Word ToType_7)
{
  MR_Word Pieces_8;
  MR_Word FromMaybeDuType_9;
  MR_Word ToMaybeDuType_10;

  check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_5, FromType_6, &FromMaybeDuType_9);
  check_hlds__typecheck_util__classify_is_du_type_3_p_0(TypeTable_5, ToType_7, &ToMaybeDuType_10);
  if (((MR_tag((MR_Word) FromMaybeDuType_9)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) ToMaybeDuType_10)) == (MR_Integer) 0))
      Pieces_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_String ToTypeDesc_76 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_10, 0))));

      {
        Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_64, 1) = ((MR_Box) (ToTypeDesc_76));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[59])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
      }
      Var_60 = parse_tree__error_spec__color_as_subject_1_f_0(Var_61);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[61])));
    }
  else
  {
    MR_String Var_81 = ((MR_String) ((MR_hl_field(1, FromMaybeDuType_9, 0))));

    if (((MR_tag((MR_Word) ToMaybeDuType_10)) == (MR_Integer) 0))
    {
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_48;
      MR_Word Var_49;

      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[59])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
      }
      Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[61])));
    }
    else
    {
      MR_String ToTypeDesc_12 = ((MR_String) ((MR_hl_field(1, ToMaybeDuType_10, 0))));
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_26;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;

      {
        Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_21, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[59])));
      }
      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
      }
      Var_17 = parse_tree__error_spec__color_as_subject_1_f_0(Var_18);
      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (ToTypeDesc_12));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[59])));
      }
      Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
      Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[61])));
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])), Var_31);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_26);
    }
  }
  return Pieces_8;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_quote_1_f_0(
  MR_String Str_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Str_3));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_string_set_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_string_set_2_p_0(
  MR_Word TypeAssign_3,
  MR_Word * UnprovenConstraintStrSet_4)
{
  MR_Word ConstraintDb_5;
  MR_Word UnprovenHldsConstraints_6;

  check_hlds__type_assign__type_assign_get_constraint_db_2_p_0(TypeAssign_3, &ConstraintDb_5);
  UnprovenHldsConstraints_6 = ((MR_Word) ((MR_hl_field(0, ConstraintDb_5, 0))));
  if ((UnprovenHldsConstraints_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenConstraintStrSet_4);
  else
  {
    MR_Word UnprovenConstraints0_9;
    MR_Word TVarSet_10;
    MR_Word Bindings_11;
    MR_Word UnprovenConstraints1_12;
    MR_Word UnprovenConstraints_13;
    MR_Word UnprovenConstraintStrs_14;
    MR_Word Var_15;

    hlds__hlds_class__retrieve_prog_constraint_list_2_p_0(UnprovenHldsConstraints_6, &UnprovenConstraints0_9);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_3, &TVarSet_10);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_3, &Bindings_11);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(Bindings_11, UnprovenConstraints0_9, &UnprovenConstraints1_12);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints1_12, &UnprovenConstraints_13);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__typecheck_errors__unproven_constraints_to_string_set_2_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (TVarSet_10));
      MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    UnprovenConstraintStrs_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_15, UnprovenConstraints_13);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenConstraintStrs_14, UnprovenConstraintStrSet_4);
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_redundant_coerce_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word FromVar_9,
  MR_Word TVarSet_10,
  MR_Word FromType_11)
{
  MR_Word Spec_12;
  MR_Word InClauseForPieces_13;
  MR_Word VarSet_14;
  MR_String FromVarStr_15;
  MR_String FromTypeStr_16;
  MR_Word ErrorPieces_17;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_51;

  InClauseForPieces_13 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_7);
  VarSet_14 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, 5))));
  FromVarStr_15 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_14, FromVar_9);
  FromTypeStr_16 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_10, (MR_Integer) 2, FromType_11);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (FromVarStr_15));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (FromTypeStr_16));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[49])));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[34])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_39);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
  ErrorPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[47])), Var_24);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, ErrorPieces_17);
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_redundant_coerce\'/5"));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_2[0])));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Var_51));
  }
  return Spec_12;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_unresolved_coerce_from_to_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word TVarSet_11,
  MR_Word FromType_12,
  MR_Word ToType_13)
{
  MR_Word Spec_14;
  MR_Word InClauseForPieces_15;
  MR_Word VarSet_16;
  MR_String FromVarStr_17;
  MR_String FromTypeStr_18;
  MR_String ToTypeStr_19;
  MR_Word ErrorPieces_20;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_62;

  InClauseForPieces_15 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_8);
  VarSet_16 = ((MR_Word) ((MR_hl_field(0, ClauseContext_8, 5))));
  FromVarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_16, FromVar_10);
  FromTypeStr_18 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_11, (MR_Integer) 2, FromType_12);
  ToTypeStr_19 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_11, (MR_Integer) 2, ToType_13);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (FromVarStr_17));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_28 = parse_tree__error_spec__color_as_subject_1_f_0(Var_29);
  Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[43])));
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (FromTypeStr_18));
  }
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (ToTypeStr_19));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[45])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[36])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[44])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_43);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[6])), Var_37);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_32);
  ErrorPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])), Var_27);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_15, ErrorPieces_20);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unresolved_coerce_from_to\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Var_62));
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_invalid_coerce_from_to_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_6;

  conv0_Pieces_6 = check_hlds__typecheck_errors__describe_coerce_fail_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_6));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_invalid_coerce_from_to_7_f_0(
  MR_Word ClauseContext_9,
  MR_Word Context_10,
  MR_Word FromVar_11,
  MR_Word TVarSet_12,
  MR_Word FromType0_13,
  MR_Word ToType0_14,
  MR_Word Fails0_15)
{
  MR_bool succeeded;
  MR_Word Spec_16;
  MR_Word InClauseForPieces_17;
  MR_Word VarSet_18;
  MR_String FromVarStr_19;
  MR_Word FromType_20;
  MR_Word ToType_21;
  MR_String FromTypeStr_22;
  MR_String ToTypeStr_23;
  MR_Word Fails_24;
  MR_Word CausePieceLists_25;
  MR_Word CausePieces_26;
  MR_Word RedundantPieces_27;
  MR_Word ErrorPieces_28;
  MR_Word Var_31;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_70;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_82;
  MR_Word Var_32;
  MR_Word Var_94;

  InClauseForPieces_17 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_9);
  VarSet_18 = ((MR_Word) ((MR_hl_field(0, ClauseContext_9, 5))));
  FromVarStr_19 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, FromVar_11);
  check_hlds__typecheck_error_util__delete_identical_qualifications_4_p_0(FromType0_13, ToType0_14, &FromType_20, &ToType_21);
  FromTypeStr_22 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_12, (MR_Integer) 2, FromType_20);
  ToTypeStr_23 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_12, (MR_Integer) 2, ToType_21);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), Fails0_15, &Fails_24);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_invalid_coerce_from_to_7_f_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TVarSet_12));
  }
  CausePieceLists_25 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), Var_31, Fails_24);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CausePieceLists_25, &CausePieces_26);
  Var_32 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(FromType_20);
  Var_94 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(ToType_21);
  succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_32, Var_94);
  if (succeeded)
    RedundantPieces_27 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[31]));
  else
    RedundantPieces_27 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (FromVarStr_19));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
  {
    Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_55, 1) = ((MR_Box) (FromTypeStr_22));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_53 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_54);
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (ToTypeStr_23));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])));
  }
  Var_63 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_64);
  Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), RedundantPieces_27, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CausePieces_26, Var_75);
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])), Var_74);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_70);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[37])), Var_62);
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_57);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])), Var_52);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
  ErrorPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[33])), Var_42);
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_17, ErrorPieces_28);
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_invalid_coerce_from_to\'/7"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Var_82));
  }
  return Spec_16;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = check_hlds__typecheck_errors__wrap_quote_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = check_hlds__typecheck_errors__wrap_quote_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_UnprovenConstraintStrSet_4;

  check_hlds__typecheck_errors__unproven_constraints_to_string_set_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_UnprovenConstraintStrSet_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_UnprovenConstraintStrSet_4));
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word TypeAssignSet_7)
{
  MR_Word Spec_8;
  MR_Word InClauseForPieces_9;
  MR_Word UnprovenStrSets_10;
  MR_Word AlwaysUnprovenStrSet_11;
  MR_Word SometimesUnprovenStrSet0_12;
  MR_Word SometimesUnprovenStrSet_13;
  MR_Word AlwaysUnprovenStrs_14;
  MR_Word SometimesUnprovenStrs_15;
  MR_Word AlwaysUnprovenPieceLists_16;
  MR_Word SometimesUnprovenPieceLists_17;
  MR_String ACS_18;
  MR_String SCS_19;
  MR_String AIsAre_20;
  MR_Word ErrorPieces_25;
  MR_Word Var_176;
  MR_Box conv3_ACS_18;
  MR_Box conv4_SCS_19;
  MR_Box conv5_AIsAre_20;

  InClauseForPieces_9 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_5);
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_4[0]), TypeAssignSet_7, &UnprovenStrSets_10);
  AlwaysUnprovenStrSet_11 = mercury__set__intersect_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenStrSets_10);
  SometimesUnprovenStrSet0_12 = mercury__set__union_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenStrSets_10);
  mercury__set__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SometimesUnprovenStrSet0_12, AlwaysUnprovenStrSet_11, &SometimesUnprovenStrSet_13);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AlwaysUnprovenStrSet_11, &AlwaysUnprovenStrs_14);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SometimesUnprovenStrSet_13, &SometimesUnprovenStrs_15);
  AlwaysUnprovenPieceLists_16 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_4[1]), AlwaysUnprovenStrs_14);
  SometimesUnprovenPieceLists_17 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_4[2]), SometimesUnprovenStrs_15);
  conv3_ACS_18 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AlwaysUnprovenStrs_14, ((MR_Box) ((MR_String) "constraint")), ((MR_Box) ((MR_String) "constraints")));
  ACS_18 = ((MR_String) (conv3_ACS_18));
  conv4_SCS_19 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SometimesUnprovenStrs_15, ((MR_Box) ((MR_String) "constraint")), ((MR_Box) ((MR_String) "constraints")));
  SCS_19 = ((MR_String) (conv4_SCS_19));
  conv5_AIsAre_20 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AlwaysUnprovenStrs_14, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
  AIsAre_20 = ((MR_String) (conv5_AIsAre_20));
  if ((AlwaysUnprovenPieceLists_16 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((SometimesUnprovenPieceLists_17 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_unsatisfiable_constraints\'/3", (MR_String) "no constraints seem to be unproven");
    else
    {
      MR_Word Var_135;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_148;
      MR_Word Var_156;
      MR_Word Var_157;

      {
        Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_139, 1) = ((MR_Box) (SCS_19));
      }
      {
        Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
        MR_hl_field(1, Var_138, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[4])));
      }
      {
        Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[2])));
        MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
      }
      Var_145 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), SometimesUnprovenPieceLists_17);
      Var_157 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[10])));
      Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_157, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
      Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])), Var_156);
      Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_145, Var_148);
      ErrorPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, Var_144);
    }
  else
  if ((SometimesUnprovenPieceLists_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_106;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word Var_127;

    {
      Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_110, 1) = ((MR_Box) (ACS_18));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(1, Var_109, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[4])));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[16])));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
    }
    Var_116 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), AlwaysUnprovenPieceLists_16);
    {
      Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_124, 1) = ((MR_Box) (AIsAre_20));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[7])));
      MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_123));
    }
    Var_127 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[18])));
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_127, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_120, Var_126);
    Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, Var_119);
    ErrorPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_115);
  }
  else
  {
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Box conv6_Var_73;

    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (ACS_18));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[4])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[16])));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
    }
    Var_49 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), AlwaysUnprovenPieceLists_16);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (AIsAre_20));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[7])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[10])));
    conv6_Var_73 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SometimesUnprovenStrs_15, ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[21]))), ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))));
    Var_73 = ((MR_Word) (conv6_Var_73));
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[4])));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[19])));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
    }
    Var_83 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), SometimesUnprovenPieceLists_17);
    Var_95 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[27])));
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[29])));
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_94);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_86);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_82);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_65);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_59);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_52);
    ErrorPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_48);
  }
  Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_9, ErrorPieces_25);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unsatisfiable_constraints\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Var_176));
  }
  return Spec_8;
}

void mercury__check_hlds__typecheck_errors__init(void)
{
}

void mercury__check_hlds__typecheck_errors__init_type_tables(void)
{
}

void mercury__check_hlds__typecheck_errors__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_errors__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_errors.
