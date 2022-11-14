/*
** Automatically generated from `typecheck_error_util.m'
** by the Mercury compiler,
** version rotd-2022-11-14
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


// :- module check_hlds.typecheck_error_util.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_util__init
ENDINIT
*/

#include "check_hlds.typecheck_error_util.mih"


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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
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
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_1;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_2[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_2;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_3[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_3;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_4[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_4;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_5[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_5;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_3[3];

static const MR_DuPtagLayout check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_arg_vector_kind_0[4];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_arg_vector_kind_0[6];

static const MR_Integer check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_arg_vector_kind_0[6];

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_type_error_goal_context_0_0[2];

static const MR_ConstString check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_names_type_error_goal_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_type_error_goal_context_0_1[1];

static const MR_ConstString check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_names_type_error_goal_context_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_2;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_2[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_type_error_goal_context_0[3];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_type_error_goal_context_0[3];

static const MR_Integer check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_type_error_goal_context_0[3];

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_var_vector_kind_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_2;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_3;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_4;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_5;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_6;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_7;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_8;

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_9;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_var_vector_kind_0_0[9];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_var_vector_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_var_vector_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_var_vector_kind_0[10];

static const MR_Integer check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_var_vector_kind_0[10];

static MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____arg_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_util____Compare____arg_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____type_error_goal_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_util____Compare____type_error_goal_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____var_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_util____Compare____var_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_util_scalar_common_1[60][2];

static /* final */ const MR_Box check_hlds__typecheck_error_util_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__typecheck_error_util_scalar_common_1[60][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the builtin operator constructor"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the builtin type constructor"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the type constructor"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type constructor"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "access function for the"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "field of the"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function symbol of the type constructor"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the functor"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the type constructor"))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in inner variable of atomic goal:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the clause head:"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of atomic goal:"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the first outer variable"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the second outer variable"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[24])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "output variable of atomic goal:"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "quantified variable in if-then-else condition:"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable of quantification scope:"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable of loop control scope:"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable of promise_solutions scope:"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable of require_switch_arm_detism scope:"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable of require_switch_complete scope:"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in initial I/O state variable of try goal:"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in final I/O state variable of try goal:"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in arguments of the clause head:"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[13])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in arguments of event"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_error_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_0 = {
  (MR_String) "arg_vector_clause_head",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_1 = {
  (MR_String) "arg_vector_plain_call_pred_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_pred_form_arity_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_2 = {
  (MR_String) "arg_vector_plain_pred_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_3[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_generic_call_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_3 = {
  (MR_String) "arg_vector_generic_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_4[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_4 = {
  (MR_String) "arg_vector_foreign_proc_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_5 = {
  (MR_String) "arg_vector_event",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_arg_vector_kind_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_0[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_1[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_1
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_2[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_3[3] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_3,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_4,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_5
};

static const MR_DuPtagLayout check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_arg_vector_kind_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_arg_vector_kind_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_arg_vector_kind_0[6] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_0,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_5,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_4,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_3,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_1,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_arg_vector_kind_0_2
};

static const MR_Integer check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_arg_vector_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_arg_vector_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_util____Unify____arg_vector_kind_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_util____Compare____arg_vector_kind_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_util",
  (MR_String) "arg_vector_kind",
  { check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_arg_vector_kind_0 },
  { check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_arg_vector_kind_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_arg_vector_kind_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_type_error_goal_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_var_vector_kind_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_names_type_error_goal_context_0_0[2] = {
  (MR_String) "teiav_kind",
  (MR_String) "teiav_arg_num"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_0 = {
  (MR_String) "type_error_in_var_vector",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_type_error_goal_context_0_0,
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_names_type_error_goal_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_type_error_goal_context_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0)
};

static const MR_ConstString check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_names_type_error_goal_context_0_1[1] = {
  (MR_String) "teiu_unify_context"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_1 = {
  (MR_String) "type_error_in_unify",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_type_error_goal_context_0_1,
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_names_type_error_goal_context_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_2 = {
  (MR_String) "type_error_in_atomic_inner",
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_0[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_1[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_2[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_1
};

static const MR_DuPtagLayout check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_type_error_goal_context_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_type_error_goal_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_type_error_goal_context_0[3] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_2,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_1,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_type_error_goal_context_0_0
};

static const MR_Integer check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_type_error_goal_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_type_error_goal_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_util____Unify____type_error_goal_context_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_util____Compare____type_error_goal_context_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_util",
  (MR_String) "type_error_goal_context",
  { check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_type_error_goal_context_0 },
  { check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_type_error_goal_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_type_error_goal_context_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_var_vector_kind_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_arg_vector_kind_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_0 = {
  (MR_String) "var_vector_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__field_types_var_vector_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_1 = {
  (MR_String) "var_vector_cond_quant",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_2 = {
  (MR_String) "var_vector_exist_quant",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_3 = {
  (MR_String) "var_vector_promise_solutions",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_4 = {
  (MR_String) "var_vector_switch_complete",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_5 = {
  (MR_String) "var_vector_switch_arm_detism",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_6 = {
  (MR_String) "var_vector_loop_control",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_7 = {
  (MR_String) "var_vector_try_io",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_8 = {
  (MR_String) "var_vector_atomic_output",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_9 = {
  (MR_String) "var_vector_atomic_outer",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_var_vector_kind_0_0[9] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_1,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_2,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_3,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_4,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_5,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_6,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_7,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_8,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_9
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_var_vector_kind_0_1[1] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_var_vector_kind_0[2] = {
  {
    UINT32_C(9),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_var_vector_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_stag_ordered_var_vector_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_var_vector_kind_0[10] = {
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_0,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_9,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_8,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_1,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_2,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_6,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_3,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_5,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_4,
  &check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_functor_desc_var_vector_kind_0_7
};

static const MR_Integer check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_var_vector_kind_0[10] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_var_vector_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_util____Unify____var_vector_kind_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_util____Compare____var_vector_kind_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_util",
  (MR_String) "var_vector_kind",
  { check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_name_ordered_var_vector_kind_0 },
  { check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__du_ptag_ordered_var_vector_kind_0 },
  (MR_Integer) 10,
  UINT16_C(12),
  check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__functor_number_map_var_vector_kind_0,

};

void MR_CALL 
check_hlds__typecheck_error_util____Compare____type_error_goal_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                check_hlds__typecheck_error_util____Compare____var_vector_kind_0_0(&SubResult1_6, Var_30, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  succeeded = (Var_29 < ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_29 > ArgY2_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, Var_28, ArgY1_18);
              }
              break;
          }
        }
        break;
    }
}

void MR_CALL 
check_hlds__typecheck_error_util____Compare____var_vector_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 8:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                check_hlds__typecheck_error_util____Compare____arg_vector_kind_0_0(HeadVar__1_1, Var_27, ArgY1_5);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____type_error_goal_context_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = check_hlds__typecheck_error_util____Unify____var_vector_kind_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____var_vector_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_22 == CastX_21);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = check_hlds__typecheck_error_util____Unify____arg_vector_kind_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_util____Compare____arg_vector_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_74, ArgY1_11);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__prog_data____Compare____sym_name_pred_form_arity_0_0(HeadVar__1_1, Var_75, ArgY1_24);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        hlds__hlds_pred____Compare____generic_call_id_0_0(HeadVar__1_1, Var_73, ArgY1_37);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_72, ArgY1_50);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_71 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String ArgY1_63 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_71, ArgY1_63);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____arg_vector_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____sym_name_pred_form_arity_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_pred____Unify____generic_call_id_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__typecheck_error_util__identical_types_2_p_0(
  MR_Word Type1_3,
  MR_Word Type2_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_10_10;
  MR_Word TypeSubst0_5;
  MR_Word TypeSubst_6;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__typecheck_error_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_5);
  succeeded = parse_tree__prog_type__type_unify_5_p_0(Type1_3, Type2_4, (MR_Word) ((MR_Unsigned) 0U), TypeSubst0_5, &TypeSubst_6);
  if (succeeded)
  {
    TypeInfo_10_10 = (MR_Word) (&check_hlds__typecheck_error_util_scalar_common_2[0]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (TypeSubst_6)), ((MR_Box) (TypeSubst0_5)));
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_util__get_inst_varset_2_p_0(
  MR_Word ClauseContext_3,
  MR_Word * InstVarSet_4)
{
  MR_Word ProgVarSet_5 = ((MR_Word) ((MR_hl_field(0, ClauseContext_3, (MR_Integer) 5))));

  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), ProgVarSet_5, InstVarSet_4);
}

MR_Word MR_CALL 
check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(
  MR_Word ClauseContext_3)
{
  MR_Word Pieces_4;
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, ClauseContext_3, (MR_Integer) 0))));
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, ClauseContext_3, (MR_Integer) 1))));
  MR_Word PredIdPieces_7;
  MR_Word Var_9;

  PredIdPieces_7 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[59])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (PredIdPieces_7));
  }
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
  return Pieces_4;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_util__arg_vector_kind_to_pieces_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word ArgVectorKind_5)
{
  MR_Word Pieces_6;

  switch (MR_tag((MR_Word) ArgVectorKind_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[57]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(1, ArgVectorKind_5, (MR_Integer) 0))));
        MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 0))));
        MR_Word PredInfo_14;
        MR_Word PFSymNameArity_49;
        MR_Word CallId_65;
        MR_Word PredMarkers_66;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_String Var_71;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_12, &PredInfo_14);
        hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo_14, &PFSymNameArity_49);
        {
          CallId_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallId_65, 0) = ((MR_Box) (PFSymNameArity_49));
        }
        PredMarkers_66 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 2))));
        Var_71 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_65, (MR_Integer) -1, PredMarkers_66);
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[22])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_69));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SymNamePredFormArity_7 = ((MR_Word) ((MR_hl_field(2, ArgVectorKind_5, (MR_Integer) 0))));
        MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_7, (MR_Integer) 0))));
        MR_Word PredFormArity_9 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_7, (MR_Integer) 1))));
        MR_Word PFSymNameArity_10;
        MR_Word CallId_84;
        MR_Word PredMarkers_85;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_String Var_90;

        {
          PFSymNameArity_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_10, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, PFSymNameArity_10, 1) = ((MR_Box) (SymName_8));
          MR_hl_field(0, PFSymNameArity_10, 2) = ((MR_Box) (PredFormArity_9));
        }
        {
          CallId_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallId_84, 0) = ((MR_Box) (PFSymNameArity_10));
        }
        PredMarkers_85 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 2))));
        Var_90 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_84, (MR_Integer) -1, PredMarkers_85);
        {
          Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[22])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_88));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgVectorKind_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CallId_11;
            MR_Word GenericId_15 = ((MR_Word) ((MR_hl_field(3, ArgVectorKind_5, (MR_Integer) 1))));
            MR_Word PredMarkers_16;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_String Var_29;

            {
              CallId_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CallId_11, 0) = ((MR_Box) (GenericId_15));
            }
            PredMarkers_16 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 2))));
            Var_29 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_11, (MR_Integer) -1, PredMarkers_16);
            {
              Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
            }
            {
              Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
              MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
            }
            {
              Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[22])));
              MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_27));
            }
          }
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_util.arg_vector_kind_to_pieces\'/2", (MR_String) "arg_vector_foreign_proc_call");
          break;
        case (MR_Integer) 2:
          {
            MR_String EventName_18 = ((MR_String) ((MR_hl_field(3, ArgVectorKind_5, (MR_Integer) 1))));
            MR_Word Var_41;
            MR_Word Var_42;

            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (EventName_18));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
            }
            {
              Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[58])));
              MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_41));
            }
          }
          break;
      }
      break;
  }
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word GoalContext_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;

  switch (MR_tag((MR_Word) GoalContext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[15]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarVectorKind_7 = ((MR_Word) ((MR_hl_field(1, GoalContext_5, (MR_Integer) 0))));
        MR_Integer ArgNum_8 = ((MR_Integer) ((MR_hl_field(1, GoalContext_5, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) VarVectorKind_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(VarVectorKind_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;

                  {
                    Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_67, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_69, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[37])));
                  }
                  {
                    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
                    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_66));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_81;

                  {
                    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_79, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_81, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
                    MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[39])));
                  }
                  {
                    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
                    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_78));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;

                  {
                    Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_91, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_93, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                    MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[43])));
                  }
                  {
                    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
                    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_90));
                  }
                }
                break;
              case (MR_Integer) 3:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[49]));
                break;
              case (MR_Integer) 4:
                Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[46]));
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Var_118;
                  MR_Word Var_119;
                  MR_Word Var_120;
                  MR_Word Var_121;

                  {
                    Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_119, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_121, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
                    MR_hl_field(1, Var_120, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[41])));
                  }
                  {
                    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
                    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_120));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_118));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  succeeded = (ArgNum_8 == (MR_Integer) 1);
                  if (succeeded)
                    Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[52]));
                  else
                  {
                    succeeded = (ArgNum_8 == (MR_Integer) 2);
                    if (succeeded)
                      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[55]));
                    else
                      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_util.goal_context_to_pieces\'/2", (MR_String) "try io variable not arg 1 or 2");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word Var_148;
                  MR_Word Var_149;
                  MR_Word Var_150;
                  MR_Word Var_151;

                  {
                    Var_149 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_149, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_149, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_151, 1) = ((MR_Box) (ArgNum_8));
                  }
                  {
                    Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
                    MR_hl_field(1, Var_150, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[35])));
                  }
                  {
                    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
                    MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_150));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[33])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_148));
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  succeeded = (ArgNum_8 == (MR_Integer) 1);
                  if (succeeded)
                    Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[28]));
                  else
                  {
                    succeeded = (ArgNum_8 == (MR_Integer) 2);
                    if (succeeded)
                      Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[32]));
                    else
                      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_util.goal_context_to_pieces\'/2", (MR_String) "outer variable not arg 1 or 2");
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVectorKind_9 = ((MR_Word) ((MR_hl_field(1, VarVectorKind_7, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) ArgVectorKind_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_25;
                    MR_Word Var_26;
                    MR_Word Var_27;
                    MR_Word Var_28;

                    {
                      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                      MR_hl_field(3, Var_26, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_28, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
                      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[18])));
                    }
                    {
                      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
                      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[16])));
                      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_25));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(1, ArgVectorKind_9, (MR_Integer) 0))));
                    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 0))));
                    MR_Word PredInfo_17;
                    MR_Word PFSymNameArity_188;
                    MR_Word CallId_204;
                    MR_Word PredMarkers_205;
                    MR_Word Var_208;
                    MR_Word Var_209;
                    MR_String Var_210;

                    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_15, &PredInfo_17);
                    hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo_17, &PFSymNameArity_188);
                    {
                      CallId_204 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, CallId_204, 0) = ((MR_Box) (PFSymNameArity_188));
                    }
                    PredMarkers_205 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 2))));
                    Var_210 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_204, ArgNum_8, PredMarkers_205);
                    {
                      Var_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_209, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_209, 1) = ((MR_Box) (Var_210));
                    }
                    {
                      Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
                      MR_hl_field(1, Var_208, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[22])));
                      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_208));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SymNamePredFormArity_10 = ((MR_Word) ((MR_hl_field(2, ArgVectorKind_9, (MR_Integer) 0))));
                    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_10, (MR_Integer) 0))));
                    MR_Word PredFormArity_12 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_10, (MR_Integer) 1))));
                    MR_Word PFSymNameArity_13;
                    MR_Word CallId_222;
                    MR_Word PredMarkers_223;
                    MR_Word Var_226;
                    MR_Word Var_227;
                    MR_String Var_228;

                    {
                      PFSymNameArity_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFSymNameArity_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(0, PFSymNameArity_13, 1) = ((MR_Box) (SymName_11));
                      MR_hl_field(0, PFSymNameArity_13, 2) = ((MR_Box) (PredFormArity_12));
                    }
                    {
                      CallId_222 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, CallId_222, 0) = ((MR_Box) (PFSymNameArity_13));
                    }
                    PredMarkers_223 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 2))));
                    Var_228 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_222, ArgNum_8, PredMarkers_223);
                    {
                      Var_227 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_227, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_227, 1) = ((MR_Box) (Var_228));
                    }
                    {
                      Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_226, 0) = ((MR_Box) (Var_227));
                      MR_hl_field(1, Var_226, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[22])));
                      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_226));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, ArgVectorKind_9, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word CallId_14;
                        MR_Word GenericId_18 = ((MR_Word) ((MR_hl_field(3, ArgVectorKind_9, (MR_Integer) 1))));
                        MR_Word PredMarkers_19;
                        MR_Word Var_38;
                        MR_Word Var_39;
                        MR_String Var_40;

                        {
                          CallId_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, CallId_14, 0) = ((MR_Box) (GenericId_18));
                        }
                        PredMarkers_19 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 2))));
                        Var_40 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_14, ArgNum_8, PredMarkers_19);
                        {
                          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
                        }
                        {
                          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
                          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
                        }
                        {
                          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[22])));
                          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_38));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String EventName_21 = ((MR_String) ((MR_hl_field(3, ArgVectorKind_9, (MR_Integer) 1))));
                        MR_Word Var_49;
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_56;
                        MR_Word Var_57;

                        {
                          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                          MR_hl_field(3, Var_50, 1) = ((MR_Box) (ArgNum_8));
                        }
                        {
                          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_52, 1) = ((MR_Box) (ArgNum_8));
                        }
                        {
                          Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_57, 0) = ((MR_Box) (EventName_21));
                        }
                        {
                          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                          MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_util_scalar_common_1[21])));
                        }
                        {
                          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[19])));
                          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
                        }
                        {
                          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
                          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
                        }
                        {
                          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
                          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
                        }
                        {
                          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[16])));
                          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_49));
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UnifyContext_22 = ((MR_Word) ((MR_hl_field(2, GoalContext_5, (MR_Integer) 0))));

        hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_22, (MR_Word) ((MR_Unsigned) 0U), &Pieces_6);
      }
      break;
  }
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Source_5)
{
  MR_Word Pieces_6;

  switch (MR_tag((MR_Word) Source_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(1, Source_5, (MR_Integer) 0))));

        Pieces_6 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_7);
      }
      break;
    case (MR_Integer) 2:
      Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConsSource_8 = ((MR_Word) ((MR_hl_field(3, Source_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) ConsSource_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(0, ConsSource_8, (MR_Integer) 0))));
              MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(0, ConsSource_8, (MR_Integer) 1))));
              MR_Word Var_20;
              MR_Word Var_21;
              MR_Word Var_22;
              MR_Word Var_25;
              MR_Word Var_26;

              {
                Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 26U));
                MR_hl_field(3, Var_21, 1) = ((MR_Box) (ConsId_10));
              }
              {
                Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                MR_hl_field(3, Var_26, 1) = ((MR_Box) (TypeCtor_9));
              }
              {
                Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
                MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[12])));
                MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
              }
              {
                Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
                MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[11])));
                MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_20));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TypeCtorName_11 = ((MR_String) ((MR_hl_field(1, ConsSource_8, (MR_Integer) 0))));
              MR_Word Var_30;
              MR_Word Var_31;

              {
                Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_31, 1) = ((MR_Box) (TypeCtorName_11));
              }
              {
                Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
                MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[2])));
                MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_30));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word GetOrSet_12 = ((MR_Unsigned) ((MR_hl_field(2, ConsSource_8, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_String FieldName_13 = ((MR_String) ((MR_hl_field(2, ConsSource_8, (MR_Integer) 3))));
              MR_String GetOrSetStr_14;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word Var_42;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word TypeCtor_59 = ((MR_Word) ((MR_hl_field(2, ConsSource_8, (MR_Integer) 1))));
              MR_Word ConsId_60 = ((MR_Word) ((MR_hl_field(2, ConsSource_8, (MR_Integer) 2))));

              switch (GetOrSet_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  GetOrSetStr_14 = (MR_String) "get";
                  break;
                case (MR_Integer) 1:
                  GetOrSetStr_14 = (MR_String) "set";
                  break;
              }
              {
                Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_36, 1) = ((MR_Box) (GetOrSetStr_14));
              }
              {
                Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_41, 0) = ((MR_Box) (FieldName_13));
              }
              {
                Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 26U));
                MR_hl_field(3, Var_46, 1) = ((MR_Box) (ConsId_60));
              }
              {
                Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                MR_hl_field(3, Var_51, 1) = ((MR_Box) (TypeCtor_59));
              }
              {
                Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[10])));
                MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
              }
              {
                Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
              }
              {
                Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[9])));
                MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
              }
              {
                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
                MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
              }
              {
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[8])));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
              }
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[7])));
                MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_35));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ConsSource_8, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ApplyOp_15 = ((MR_String) ((MR_hl_field(3, ConsSource_8, (MR_Integer) 1))));
                  MR_Word Var_56;
                  MR_Word Var_57;

                  {
                    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_57, 1) = ((MR_Box) (ApplyOp_15));
                  }
                  {
                    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[1])));
                    MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_56));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredId_61 = ((MR_Word) ((MR_hl_field(3, ConsSource_8, (MR_Integer) 1))));

                  Pieces_6 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_61);
                }
                break;
            }
            break;
        }
      }
      break;
  }
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_util__describe_cons_type_info_source_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Source_5)
{
  MR_Word Pieces_6;

  switch (MR_tag((MR_Word) Source_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(0, Source_5, (MR_Integer) 0))));
        MR_Word Var_17;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_18, 1) = ((MR_Box) (TypeCtor_7));
        }
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[6])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String TypeCtorName_9 = ((MR_String) ((MR_hl_field(1, Source_5, (MR_Integer) 0))));
        MR_Word Var_22;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (TypeCtorName_9));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[2])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_22));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GetOrSet_10 = ((MR_Unsigned) ((MR_hl_field(2, Source_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String GetOrSetStr_12;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word TypeCtor_45 = ((MR_Word) ((MR_hl_field(2, Source_5, (MR_Integer) 1))));

        switch (GetOrSet_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            GetOrSetStr_12 = (MR_String) "get";
            break;
          case (MR_Integer) 1:
            GetOrSetStr_12 = (MR_String) "set";
            break;
        }
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (GetOrSetStr_12));
        }
        {
          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_36, 1) = ((MR_Box) (TypeCtor_45));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[5])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[4])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[3])));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_27));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Source_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ApplyOp_14 = ((MR_String) ((MR_hl_field(3, Source_5, (MR_Integer) 1))));
            MR_Word Var_41;
            MR_Word Var_42;

            {
              Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_42, 1) = ((MR_Box) (ApplyOp_14));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_util_scalar_common_1[1])));
              MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_41));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(3, Source_5, (MR_Integer) 1))));

            Pieces_6 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_13);
          }
          break;
      }
      break;
  }
  return Pieces_6;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____arg_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_util____Unify____arg_vector_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_util____Compare____arg_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_util____Compare____arg_vector_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____type_error_goal_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_util____Unify____type_error_goal_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_util____Compare____type_error_goal_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_util____Compare____type_error_goal_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_util____Unify____var_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_util____Unify____var_vector_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_util____Compare____var_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_util____Compare____var_vector_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_util__init(void)
{
}

void mercury__check_hlds__typecheck_error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_arg_vector_kind_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_type_error_goal_context_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_error_util__check_hlds__typecheck_error_util__type_ctor_info_var_vector_kind_0);
}

void mercury__check_hlds__typecheck_error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_util.
