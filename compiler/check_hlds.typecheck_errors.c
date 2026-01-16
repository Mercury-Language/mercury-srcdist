/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2026-01-16
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

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

static void MR_CALL 
check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(
  MR_Word Type_3,
  MR_Word * DescPieces_4);

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


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[80][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[2][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[2][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[3][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[1][7];




static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[80][2] = {
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
    ((MR_Box) ((MR_String) "Error: the foreign language code for"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should define the variable"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from one discriminated union type to another, and"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You can only coerce"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "s."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Also, the type conversion would be redundant anyway."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: cannot coerce"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the type of"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unresolved;"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot coerce from"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: type conversion of"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to the same type is"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "redundant."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function type"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "builtin type"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate type"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "tuple type"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type variable"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 227U) },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[2][5] = {
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
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[3][3] = {
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
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[1][7] = {
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
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0]));
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
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[67])));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[54])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[69])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_39);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
  ErrorPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[65])), Var_24);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, ErrorPieces_17);
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_redundant_coerce\'/5"));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_2[1])));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 52U));
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
  Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[61])));
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
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[56])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[62])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_43);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[6])), Var_37);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_32);
  ErrorPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[59])), Var_27);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_15, ErrorPieces_20);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unresolved_coerce_from_to\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Var_62));
  }
  return Spec_14;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_invalid_coerce_from_to_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word TVarSet_11,
  MR_Word FromType_12,
  MR_Word ToType_13)
{
  MR_bool succeeded;
  MR_Word Spec_14;
  MR_Word InClauseForPieces_15;
  MR_Word VarSet_16;
  MR_String FromVarStr_17;
  MR_String FromTypeStr_18;
  MR_String ToTypeStr_19;
  MR_Word OnlyDuPieces_20;
  MR_Word CausePieces_22;
  MR_Word RedundantPieces_32;
  MR_Word ErrorPieces_33;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_142;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_152;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word Var_165;
  MR_Word Var_169;
  MR_Word Var_170;
  MR_Word Var_177;
  MR_Word Var_129;
  MR_Word Var_191;

  InClauseForPieces_15 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_8);
  VarSet_16 = ((MR_Word) ((MR_hl_field(0, ClauseContext_8, 5))));
  FromVarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_16, FromVar_10);
  FromTypeStr_18 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_11, (MR_Integer) 2, FromType_12);
  ToTypeStr_19 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_11, (MR_Integer) 2, ToType_13);
  OnlyDuPieces_20 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39]));
  succeeded = (strcmp(FromTypeStr_18, ToTypeStr_19) == 0);
  if (succeeded)
  {
    MR_Word FromTypeNonDuPieces_21;

    check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(FromType_12, &FromTypeNonDuPieces_21);
    if ((FromTypeNonDuPieces_21 == (MR_Word) ((MR_Unsigned) 0U)))
      CausePieces_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_49;
      MR_Word Var_50;

      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (FromTypeStr_18));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])));
      }
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_21, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])));
      Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_50);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_49);
      CausePieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_20, Var_42);
    }
  }
  else
  {
    MR_Word ToTypeNonDuPieces_25;
    MR_Word FromTypeNonDuPieces_178;

    check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(FromType_12, &FromTypeNonDuPieces_178);
    check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(ToType_13, &ToTypeNonDuPieces_25);
    if ((ToTypeNonDuPieces_25 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((FromTypeNonDuPieces_178 == (MR_Word) ((MR_Unsigned) 0U)))
        CausePieces_22 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_75;
        MR_Word Var_76;

        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (FromTypeStr_18));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])));
        }
        Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_178, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])));
        Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_76);
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_75);
        CausePieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_20, Var_68);
      }
    else
    if ((FromTypeNonDuPieces_178 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word Var_63;

      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (ToTypeStr_19));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])));
      }
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ToTypeNonDuPieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])));
      Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_63);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_62);
      CausePieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_20, Var_55);
    }
    else
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ((MR_Box) (FromTypeNonDuPieces_178)), ((MR_Box) (ToTypeNonDuPieces_25)));
      if (succeeded)
      {
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_93;
        MR_Word Var_94;

        {
          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_83, 1) = ((MR_Box) (FromTypeStr_18));
        }
        {
          Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_88, 1) = ((MR_Box) (ToTypeStr_19));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[44])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[42])));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_84));
        }
        Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_178, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[46])));
        Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_94);
        Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_93);
        CausePieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_20, Var_81);
      }
      else
      {
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_123;
        MR_Word Var_124;

        {
          Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_101, 1) = ((MR_Box) (FromTypeStr_18));
        }
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])));
        }
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromTypeNonDuPieces_178, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])));
        Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_108);
        {
          Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_118, 1) = ((MR_Box) (ToTypeStr_19));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[49])));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
        }
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ToTypeNonDuPieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])));
        Var_123 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_124);
        Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_123);
        Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, Var_113);
        Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_106);
        CausePieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnlyDuPieces_20, Var_99);
      }
    }
  }
  Var_129 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(FromType_12);
  Var_191 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(ToType_13);
  succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(Var_129, Var_191);
  if (succeeded)
    RedundantPieces_32 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51]));
  else
    RedundantPieces_32 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_140, 1) = ((MR_Box) (FromVarStr_17));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_138 = parse_tree__error_spec__color_as_subject_1_f_0(Var_139);
  {
    Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_150, 1) = ((MR_Box) (FromTypeStr_18));
  }
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
    MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_148 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_149);
  {
    Var_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_160, 1) = ((MR_Box) (ToTypeStr_19));
  }
  {
    Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
    MR_hl_field(1, Var_159, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])));
  }
  Var_158 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_159);
  Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), RedundantPieces_32, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CausePieces_22, Var_170);
  Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])), Var_169);
  Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_158, Var_165);
  Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[57])), Var_157);
  Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_148, Var_152);
  Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[55])), Var_147);
  Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_142);
  ErrorPieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])), Var_137);
  Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_15, ErrorPieces_33);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_invalid_coerce_from_to\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Var_177));
  }
  return Spec_14;
}

static void MR_CALL 
check_hlds__typecheck_errors__describe_if_non_du_type_2_p_0(
  MR_Word Type_3,
  MR_Word * DescPieces_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *DescPieces_4 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[79]));
        break;
      case (MR_Integer) 1:
        *DescPieces_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        *DescPieces_4 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[73]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *DescPieces_4 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[77]));
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, 1))) & (MR_Integer) 1);

              switch (PorF_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *DescPieces_4 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[71]));
                  break;
                case (MR_Integer) 0:
                  *DescPieces_4 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *DescPieces_4 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[71]));
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_20 = ((MR_Word) ((MR_hl_field(3, Type_3, 1))));
              MR_Word next_value_of_Type_3 = SubType_20;

              // direct tailcall eliminated
              ;
              Type_3 = next_value_of_Type_3;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_String VarName_7)
{
  MR_Word Spec_8;
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, 0))));
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, 1))));
  MR_Word Pieces_11;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;

  Var_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_9, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_10);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (VarName_7));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[35])));
  }
  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_29);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[33])), Var_27);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_22);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[31])), Var_16);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_missing_tvar_in_foreign_code\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_8;
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
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
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
